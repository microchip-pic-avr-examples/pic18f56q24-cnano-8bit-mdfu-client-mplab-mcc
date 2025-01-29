/**
 * © 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip 
 * software and any derivatives exclusively with Microchip products. 
 * It is your responsibility to comply with third party license terms 
 * applicable to your use of third party software (including open 
 * source software) that may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, 
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, 
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, 
 * MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, 
 * PUNITIVE, INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE 
 * OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, 
 * EVEN IF MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE 
 * DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, 
 * MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO 
 * THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU 
 * HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 * 
 * @file        bl_interrupt.c
 * @ingroup     mdfu_client_8bit
 *
 * @brief       This file includes assembly code to implement interrupt support for the MDFU Client application.
 */
#include "bl_config.h"
#include "bl_interrupt.h"
#ifdef __XC8__
#include <xc.h>
#endif

volatile __persistent BL_INTERRUPT_FLAG_QUAL __bit bootloaderIsRunning __at(BL_INTERRUPT_FLAG_BIT_ADDRESS);

#if defined(IVTBASE)
/**
 * Newer PIC18F devices have vectored interrupts with the base address specified
 * by the SFR IVTBASE. Thus there is no need for the bootloader to redirect the
 * interrupt vectors. The end application should specify IVTBASE as needed.
 */
#elif defined(_PIC18)
__asm("psect	intcode,class=CODE,delta=1,reloc=2");
__asm("org 0x0");     //this is relative to the intcode psect address
__asm("asmopt push");
__asm("asmopt off");    //don't permit assembler optimizations to touch the following
__asm("btfss " ___mkstr(BANKMASK(_bootloaderIsRunning/8))",_bootloaderIsRunning&7,a");
__asm("goto " ___mkstr(BL_APPLICATION_INTERRUPT_VECTOR_HIGH));
__asm("asmopt pop");
//bootloader interrupt code will automatically be linked here

__asm("psect	intcodelo,class=CODE,delta=1,reloc=2");
__asm("org 0x0");     //this is a relative to the intcodelo psect address
__asm("asmopt push");
__asm("asmopt off");    //don't permit assembler optimizations to touch the following
__asm("btfss " ___mkstr(BANKMASK(_bootloaderIsRunning/8))",_bootloaderIsRunning&7,a");
__asm("goto " ___mkstr(BL_APPLICATION_INTERRUPT_VECTOR_LOW));
__asm("asmopt pop");
//bootloader interrupt code will automatically be linked here
/**
 * @brief This function is intended to be a placeholder for low priority interrupt
 * service routines. The reason behind this is included within the Getting Started Guide (Section 7. AoU-2)
 */
void __interrupt(low_priority) BL_LowPriorityInterrupt_Placeholder(void)
{
    NOP();
}
#endif

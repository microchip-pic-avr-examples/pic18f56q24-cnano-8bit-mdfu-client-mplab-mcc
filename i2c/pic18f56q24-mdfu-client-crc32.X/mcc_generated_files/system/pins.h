/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB1 aliases
#define IO_RB1_TRIS                 TRISBbits.TRISB1
#define IO_RB1_LAT                  LATBbits.LATB1
#define IO_RB1_PORT                 PORTBbits.RB1
#define IO_RB1_WPU                  WPUBbits.WPUB1
#define IO_RB1_OD                   ODCONBbits.ODCB1
#define IO_RB1_ANS                  ANSELBbits.ANSELB1
#define IO_RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_RB1_GetValue()           PORTBbits.RB1
#define IO_RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_RB1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_RB1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_RB1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define IO_RB1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define IO_RB1_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define IO_RB1_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 aliases
#define IO_RB2_TRIS                 TRISBbits.TRISB2
#define IO_RB2_LAT                  LATBbits.LATB2
#define IO_RB2_PORT                 PORTBbits.RB2
#define IO_RB2_WPU                  WPUBbits.WPUB2
#define IO_RB2_OD                   ODCONBbits.ODCB2
#define IO_RB2_ANS                  ANSELBbits.ANSELB2
#define IO_RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_RB2_GetValue()           PORTBbits.RB2
#define IO_RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_RB2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_RB2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_RB2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define IO_RB2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define IO_RB2_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define IO_RB2_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RF2 aliases
#define BL_INDICATOR_TRIS                 TRISFbits.TRISF2
#define BL_INDICATOR_LAT                  LATFbits.LATF2
#define BL_INDICATOR_PORT                 PORTFbits.RF2
#define BL_INDICATOR_WPU                  WPUFbits.WPUF2
#define BL_INDICATOR_OD                   ODCONFbits.ODCF2
#define BL_INDICATOR_ANS                  ANSELFbits.ANSELF2
#define BL_INDICATOR_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define BL_INDICATOR_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define BL_INDICATOR_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define BL_INDICATOR_GetValue()           PORTFbits.RF2
#define BL_INDICATOR_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define BL_INDICATOR_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define BL_INDICATOR_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define BL_INDICATOR_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define BL_INDICATOR_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define BL_INDICATOR_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define BL_INDICATOR_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define BL_INDICATOR_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set RF3 aliases
#define BL_ENTRY_TRIS                 TRISFbits.TRISF3
#define BL_ENTRY_LAT                  LATFbits.LATF3
#define BL_ENTRY_PORT                 PORTFbits.RF3
#define BL_ENTRY_WPU                  WPUFbits.WPUF3
#define BL_ENTRY_OD                   ODCONFbits.ODCF3
#define BL_ENTRY_ANS                  ANSELFbits.ANSELF3
#define BL_ENTRY_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define BL_ENTRY_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define BL_ENTRY_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define BL_ENTRY_GetValue()           PORTFbits.RF3
#define BL_ENTRY_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define BL_ENTRY_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define BL_ENTRY_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define BL_ENTRY_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define BL_ENTRY_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define BL_ENTRY_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define BL_ENTRY_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define BL_ENTRY_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/
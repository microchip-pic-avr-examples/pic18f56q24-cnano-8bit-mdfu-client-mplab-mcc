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
 * @version Driver Version  3.1.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

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

// get/set RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSELB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSELB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

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
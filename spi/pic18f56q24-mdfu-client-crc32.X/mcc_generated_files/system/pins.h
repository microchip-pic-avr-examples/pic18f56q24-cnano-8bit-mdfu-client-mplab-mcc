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

// get/set RA5 aliases
#define CHIP_SELECT_TRIS                 TRISAbits.TRISA5
#define CHIP_SELECT_LAT                  LATAbits.LATA5
#define CHIP_SELECT_PORT                 PORTAbits.RA5
#define CHIP_SELECT_WPU                  WPUAbits.WPUA5
#define CHIP_SELECT_OD                   ODCONAbits.ODCA5
#define CHIP_SELECT_ANS                  ANSELAbits.ANSELA5
#define CHIP_SELECT_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define CHIP_SELECT_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define CHIP_SELECT_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define CHIP_SELECT_GetValue()           PORTAbits.RA5
#define CHIP_SELECT_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define CHIP_SELECT_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define CHIP_SELECT_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define CHIP_SELECT_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define CHIP_SELECT_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define CHIP_SELECT_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define CHIP_SELECT_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define CHIP_SELECT_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.ODCB3
#define IO_RB3_ANS                  ANSELBbits.ANSELB3
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RC0 aliases
#define IO_RC0_TRIS                 TRISCbits.TRISC0
#define IO_RC0_LAT                  LATCbits.LATC0
#define IO_RC0_PORT                 PORTCbits.RC0
#define IO_RC0_WPU                  WPUCbits.WPUC0
#define IO_RC0_OD                   ODCONCbits.ODCC0
#define IO_RC0_ANS                  ANSELCbits.ANSELC0
#define IO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_RC0_GetValue()           PORTCbits.RC0
#define IO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_RC0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_RC0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_RC0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IO_RC0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IO_RC0_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define IO_RC0_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 aliases
#define IO_RC1_TRIS                 TRISCbits.TRISC1
#define IO_RC1_LAT                  LATCbits.LATC1
#define IO_RC1_PORT                 PORTCbits.RC1
#define IO_RC1_WPU                  WPUCbits.WPUC1
#define IO_RC1_OD                   ODCONCbits.ODCC1
#define IO_RC1_ANS                  ANSELCbits.ANSELC1
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_RC1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_RC1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_RC1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IO_RC1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IO_RC1_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define IO_RC1_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

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
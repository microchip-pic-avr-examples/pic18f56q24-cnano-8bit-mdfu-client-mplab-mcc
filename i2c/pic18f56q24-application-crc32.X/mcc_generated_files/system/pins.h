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

// get/set RF2 aliases
#define LED_TRIS                 TRISFbits.TRISF2
#define LED_LAT                  LATFbits.LATF2
#define LED_PORT                 PORTFbits.RF2
#define LED_WPU                  WPUFbits.WPUF2
#define LED_OD                   ODCONFbits.ODCF2
#define LED_ANS                  ANSELFbits.ANSELF2
#define LED_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define LED_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define LED_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define LED_GetValue()           PORTFbits.RF2
#define LED_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define LED_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define LED_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set RF3 aliases
#define BTN_TRIS                 TRISFbits.TRISF3
#define BTN_LAT                  LATFbits.LATF3
#define BTN_PORT                 PORTFbits.RF3
#define BTN_WPU                  WPUFbits.WPUF3
#define BTN_OD                   ODCONFbits.ODCF3
#define BTN_ANS                  ANSELFbits.ANSELF3
#define BTN_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define BTN_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define BTN_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define BTN_GetValue()           PORTFbits.RF3
#define BTN_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define BTN_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define BTN_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define BTN_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define BTN_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define BTN_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define BTN_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define BTN_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

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
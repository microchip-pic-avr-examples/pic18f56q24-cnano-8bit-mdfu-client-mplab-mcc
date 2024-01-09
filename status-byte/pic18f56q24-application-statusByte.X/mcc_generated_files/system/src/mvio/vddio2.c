/**
 * MVIO Generated Driver File
 * 
 * @file vddio2.c
 * 
 * @ingroup mvio
 * 
 * @brief This file contains the API implementations for the Multi-Voltage Input/Output (MVIO) driver.
 *
 * @version MVIO Source Code Driver Version 1.0.0
*/
/*
© [2023] Microchip Technology Inc. and its subsidiaries.

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

/**
  Section: Included Files
*/

#include <xc.h>
#include "../../mvio/vddio2.h"

void VDDIO2_Initialize(void)
{
    //MODE enabled; HYSDIS enabled; LVD disabled; 
    VDDIO2CON = 0x0;
}

void VDDIO2_LVDSet(LVD_TRIP_POINTS trip_point)
{
    VDDIO2CONbits.SEL = trip_point;
}

inline void VDDIO2_HysteresisEnable(void)
{
    VDDIO2CONbits.NOT_HYS = 0;
}

inline void VDDIO2_HysteresisDisable(void)
{
    VDDIO2CONbits.NOT_HYS = 1;
}

bool VDDIO2_LVDStatusGet(void)
{
    return (VDDIO2CONbits.LVDSTAT);
}

bool VDDIO2_IsReady(void)
{
    return (VDDIO2CONbits.RDY);
}

/**
 End of File
*/
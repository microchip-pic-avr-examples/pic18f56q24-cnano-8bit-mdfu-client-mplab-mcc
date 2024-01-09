/**
 * MVIO Generated Driver API Header File
 * 
 * @file vddio2.h
 * 
 * @defgroup  mvio
 * 
 * @brief This file contains the API prototypes for the Multi-Voltage Input/Output (MVIO) driver.
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

#ifndef VDDIO2_H
#define VDDIO2_H

/**
  Section: Included Files
*/

#include <stdbool.h>

/**
 * @ingroup mvio
 * @enum LVD_TRIP_POINTS
 * @brief Contains the Trip Point voltage values for the MVIO driver.
 */
typedef enum
{
  LVD_TRIP_POINT_undefined =  0,   //0x0
  LVD_TRIP_POINT_1p70 =  1,   //0x1
  LVD_TRIP_POINT_2p20 =  2,   //0x2
  LVD_TRIP_POINT_2p40 =  3,   //0x3
  LVD_TRIP_POINT_2p45 =  4,   //0x4
  LVD_TRIP_POINT_2p65 =  5,   //0x5
  LVD_TRIP_POINT_2p70 =  6,   //0x6
  LVD_TRIP_POINT_2p85 =  7,   //0x7
  LVD_TRIP_POINT_2p90 =  8,   //0x8
  LVD_TRIP_POINT_3p15 =  9,   //0x9
  LVD_TRIP_POINT_3p20 =  10,   //0xa
  LVD_TRIP_POINT_3p70 =  11,   //0xb
  LVD_TRIP_POINT_3p93 =  12,   //0xc
  LVD_TRIP_POINT_4p40 =  13,   //0xd
  LVD_TRIP_POINT_4p76 =  14,   //0xe
  LVD_TRIP_POINT_4p80 =  15 //0xf
}LVD_TRIP_POINTS;

/**
 * @ingroup mvio
 * @brief Initializes the VDDIO2 module. 
 * @param None.
 * @return None.
 */
void VDDIO2_Initialize(void);

/**
 * @ingroup mvio
 * @brief Sets the Low Voltage Detection(LVD) Trip Point value.
 * @param trip_point - Trip point value
 * @return None.
 */
void VDDIO2_LVDSet(LVD_TRIP_POINTS trip_point);

/**
 * @ingroup mvio
 * @brief Enables the Hysteresis for Resistor Ladder.
 * @param None.
 * @return None.
 */
void VDDIO2_HysteresisEnable(void);

/**
 * @ingroup mvio
 * @brief Disables the Hysteresis for Resistor Ladder.
 * @param None.
 * @return None.
 */
void VDDIO2_HysteresisDisable(void);

/**
 * @ingroup mvio
 * @brief Checks if VDDIO2 Voltage is within the range.
 * @param None.
 * @retval True - The VDDIO2 supply voltage is within the acceptable range for operation.
 * @retval False - The VDDIO2 supply voltage is below the acceptable range for operation.
 */
bool VDDIO2_IsReady(void);

/**
 * @ingroup mvio
 * @brief Checks VDDIO2 Voltage with respect to the selected LVD Voltage.
 * @param None.
 * @retval True - VDDIO2 Voltage is less than the selected LVD Voltage.
 * @retval False - VDDIO2 Voltage is greater than the selected LVD Voltage.
 */
bool VDDIO2_LVDStatusGet(void);

#endif // VDDIO2_H
/**
 End of File
*/

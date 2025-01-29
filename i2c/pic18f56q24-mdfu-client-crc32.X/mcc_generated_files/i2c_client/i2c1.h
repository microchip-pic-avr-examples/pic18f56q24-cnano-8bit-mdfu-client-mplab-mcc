/**
 * I2C1 Generated Driver API Header File
 *
 * @file i2c1.h
 *
 * @defgroup i2c_client I2C1_CLIENT
 *
 * @brief This header file contains API prototypes and other data types for the I2C1 driver.
 *
 * @version I2C1 Driver Version 2.1.2
 * 
 * @version I2C1 Package Version 6.1.4
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

#ifndef I2C1_H
#define I2C1_H

/**
 * @misradeviation {@advisory,2.5} For false positives, which include 
 * macros that are used as arguments but are not getting recognized by the tool.
 * This rule ID is disabled at project level due to its multiple occurrences in several 
 * files.Therefore, in the application project, this rule ID must be disabled in the 
 * MPLAB-X IDE from Tools -> Options -> Embedded -> MISRA Check.
*/

#include <stdbool.h>
#include <stdint.h>
#include "i2c_client_interface.h"


#define sercom_interface SERCOM

#define  SERCOM_Initialize I2C1_Initialize
#define SERCOM_Deinitialize I2C1_Deinitialize
#define SERCOM_WriteByte I2C1_WriteByte
#define SERCOM_ReadByte I2C1_ReadByte
#define SERCOM_ReadAddr I2C1_ReadAddr
#define SERCOM_ErrorGet I2C1_ErrorGet
#define SERCOM_TransferDirGet I2C1_TransferDirGet
#define SERCOM_LastByteAckStatusGet I2C1_LastByteAckStatusGet
#define SERCOM_CallbackRegister I2C1_CallbackRegister
#define SERCOM_Tasks I2C1_Tasks

/**
 * @ingroup I2C1_client
 * @brief External object for SERCOM
 */
extern const i2c_client_interface_t SERCOM;

/**
 * @ingroup i2c_client
 * @brief Initializes the I2C1 module.
 *        This routine is called only once during system initialization, before calling other APIs.
 * @param None.
 * @return None.
 */
void I2C1_Initialize(void);

/**
 * @ingroup i2c_client
 * @brief Deinitializes and disables the I2C1 module.
 * @param None.
 * @return None.
 */
void I2C1_Deinitialize(void);

/**
 * @ingroup i2c_client
 * @brief Writes data to a host on the bus. Call
 *        I2C1_Initialize() before calling this API.
 * @param [in] wrByte - I2C1 client write byte
 * @return None.
 */
void I2C1_WriteByte(uint8_t wrByte);

/**
 * @ingroup i2c_client
 * @brief Reads data to a host on the bus. Call
 *        I2C1_Initialize() before calling this API.
 * @param None.
 * @return data byte - I2C1 client read byte
 */
uint8_t I2C1_ReadByte(void);

/**
 * @ingroup i2c_client
 * @brief Reads the requested address from a host on the bus. Call
 *        I2C1_Initialize() before calling this API.
 * @param None.
 * @return address byte - I2C1 client read byte
 */
uint16_t I2C1_ReadAddr(void);

/**
 * @ingroup i2c_client
 * @brief Retrieves errors occurring during I2C transmit and receive. Call
 *        I2C1_Initialize() before calling this API.
 * @param None.
 *@retval I2C_CLIENT_ERROR_BUS_COLLISION    - I2C bus collision error
 *@retval I2C_CLIENT_ERROR_WRITE_COLLISION  - I2C write collision error
 *@retval I2C_CLIENT_ERROR_RECEIVE_OVERFLOW - I2C receive overflow
 *@retval I2C_CLIENT_ERROR_NONE             - No error
 */
i2c_client_error_t I2C1_ErrorGet(void);

/**
 * @ingroup i2c_client
 * @brief Gets the I2C transfer direction. Call
 *        I2C1_Initialize() before calling this API.
 * @param None.
 * @return
 *        I2C_CLIENT_TRANSFER_DIR_WRITE  - I2C host is writing to client
 *        I2C_CLIENT_TRANSFER_DIR_READ   - I2C host is reading from client
 */
i2c_client_transfer_dir_t I2C1_TransferDirGet(void);

/**
 * @ingroup i2c_client
 * @brief Gets the I2C host ACK status. Call
 *        I2C1_Initialize() before calling this API.
 * @param None.
 * @return
 *        I2C_CLIENT_ACK_STATUS_RECEIVED_ACK   - I2C host sends an ACK to client
 *        I2C_CLIENT_ACK_STATUS_RECEIVED_NACK  - I2C host sends a NACK to client
 */
i2c_client_ack_status_t I2C1_LastByteAckStatusGet(void);

/**
 * @ingroup i2c_client
 * @brief Sets the pointer to be called "back" when the given
 *        I2C transfer events, bus and write collisions occur.
 * @param handler - Pointer to a function
 * @return None.
 */
void I2C1_CallbackRegister(bool (*callback)(i2c_client_transfer_event_t clientEvent));

#endif //I2C1_H

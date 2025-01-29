/**
 * I2C Generated Driver Types Header File
 *
 * @file i2c_client_types.h
 *
 * @ingroup i2c_client_interface
 *
 * @brief This header file contains helper structures for the I2C driver.
 *
 * @version I2C1 Driver Version 2.1.2
 * 
 * @version I2C1 Package Version 6.1.4
 */

/*
� [2025] Microchip Technology Inc. and its subsidiaries.

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

#ifndef I2C_CLIENT_TYPES_H
#define	I2C_CLIENT_TYPES_H

/**
 * @ingroup i2c_client_interface
 * @enum i2c_client_transfer_dir_t
 * @brief
 *       I2C_CLIENT_TRANSFER_DIR enumeration
 */
typedef enum
{
    I2C_CLIENT_TRANSFER_DIR_WRITE = 0,       /**< I2C host is writing to client */
    I2C_CLIENT_TRANSFER_DIR_READ  = 1,       /**< I2C host is reading from client */
} i2c_client_transfer_dir_t;

/**
 * @ingroup i2c_client_interface
 * @enum i2c_client_ack_status_t
 * @brief I2C ACK/NACK status enumeration
 */
typedef enum
{
    I2C_CLIENT_ACK_STATUS_RECEIVED_ACK = 0,  /**< I2C host sends an ACK to client */
    I2C_CLIENT_ACK_STATUS_RECEIVED_NACK = 1, /**< I2C host sends a NACK to client */
} i2c_client_ack_status_t;

/**
 * @ingroup i2c_client_interface
 * @enum i2c_client_transfer_event_t
 * @brief I2C notification event type
 */
typedef enum
{
    I2C_CLIENT_TRANSFER_EVENT_NONE = 0,          /**< I2C Bus Idle state */
    I2C_CLIENT_TRANSFER_EVENT_ADDR_MATCH,        /**< Address match event */
    I2C_CLIENT_TRANSFER_EVENT_RX_READY ,         /**< Data sent by I2C host is available */
    I2C_CLIENT_TRANSFER_EVENT_TX_READY,          /**< I2C client can respond to data read request from I2C host */
    I2C_CLIENT_TRANSFER_EVENT_STOP_BIT_RECEIVED, /**< I2C Stop bit received */
    I2C_CLIENT_TRANSFER_EVENT_ERROR,             /**< I2C bus error occurred */
} i2c_client_transfer_event_t;

/**
 * @ingroup i2c_client_interface
 * @enum i2c_client_error_t
 * @brief I2C client error type indicator
 */
typedef enum
{
    I2C_CLIENT_ERROR_NONE = 0,           /**< No error */
    I2C_CLIENT_ERROR_BUS_COLLISION,      /**< I2C bus collision occurred */
    I2C_CLIENT_ERROR_WRITE_COLLISION,    /**< I2C write collision occurred */
    I2C_CLIENT_ERROR_RECEIVE_OVERFLOW,   /**< I2C receive overflow occurred */
    I2C_CLIENT_ERROR_TRANSMIT_UNDERFLOW, /**< I2C transmit underflow occurred */
    I2C_CLIENT_ERROR_READ_UNDERFLOW,     /**< I2C receive underflow occurred */
} i2c_client_error_t;

#endif //I2C_TYPES_H


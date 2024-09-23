/**
 * UART2 Generated Driver API Header File
 * 
 * @file uart2.h
 * 
 * @defgroup uart2 UART2
 * 
 * @brief This file contains API prototypes and other data types for the the Universal Asynchronous Receiver and Transmitter (UART) module.
 *
 * @version UART2 Driver Version 3.0.6
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

#ifndef UART2_H
#define UART2_H


#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "../system/system.h"
#include "uart_drv_interface.h"

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

#define SERCOM_interface SERCOM


#define SERCOM_Initialize     UART2_Initialize
#define SERCOM_Deinitialize   UART2_Deinitialize
#define SERCOM_Write          UART2_Write
#define SERCOM_Read           UART2_Read
#define SERCOM__IsRxReady     UART2_IsRxReady
#define SERCOM_IsTxReady      UART2_IsTxReady
#define SERCOM_IsTxDone       UART2_IsTxDone

#define SERCOM_TransmitEnable       UART2_TransmitEnable
#define SERCOM_TransmitDisable      UART2_TransmitDisable
#define SERCOM_AutoBaudSet          UART2_AutoBaudSet
#define SERCOM_AutoBaudQuery        UART2_AutoBaudQuery
#define SERCOM_AutoBaudDetectCompleteReset  UART2_AutoBaudDetectCompleteReset
#define SERCOM_IsAutoBaudDetectOverflow     UART2_IsAutoBaudDetectOverflow
#define SERCOM_AutoBaudDetectOverflowReset  UART2_AutoBaudDetectOverflowReset
#define SERCOM_BRGCountSet               (NULL)
#define SERCOM_BRGCountGet               (NULL)
#define SERCOM_BaudRateSet               (NULL)
#define SERCOM_BaudRateGet               (NULL)
#define SERCOM__AutoBaudEventEnableGet   (NULL)
#define SERCOM_ErrorGet             UART2_ErrorGet

#define SERCOM_TxCompleteCallbackRegister     (NULL)
#define SERCOM_RxCompleteCallbackRegister      (NULL)
#define SERCOM_TxCollisionCallbackRegister  (NULL)
#define SERCOM_FramingErrorCallbackRegister UART2_FramingErrorCallbackRegister
#define SERCOM_OverrunErrorCallbackRegister UART2_OverrunErrorCallbackRegister
#define SERCOM_ParityErrorCallbackRegister  UART2_ParityErrorCallbackRegister
#define SERCOM_EventCallbackRegister        (NULL)

/**
 @ingroup uart2
 @struct uart2_status_t
 @brief This is an instance of UART2_STATUS for UART2 module
 */
typedef union {
    struct {
        uint8_t perr : 1;     /**<This is a bit field for Parity Error status*/
        uint8_t ferr : 1;     /**<This is a bit field for Framing Error status*/
        uint8_t oerr : 1;     /**<This is a bit field for Overfrun Error status*/
        uint8_t reserved : 5; /**<Reserved*/
    };
    size_t status;            /**<Group byte for status errors*/
}uart2_status_t;


/**
 * @ingroup uart2
 * @brief External object for uart_drv_interface.
 */
extern const uart_drv_interface_t SERCOM;

/**
 * @ingroup uart2
 * @brief Initializes the UART2 module. This routine is called
 *        only once during system initialization, before calling other APIs.
 * @param None.
 * @return None.
 */
void UART2_Initialize(void);

/**
 * @ingroup uart2
 * @brief Deinitializes and disables the UART2 module.

 * @param None.
 * @return None.
 */
void UART2_Deinitialize(void);

/**
 * @ingroup uart2
 * @brief Enables the UART2 module.     
 * @param None.
 * @return None.
 */
inline void UART2_Enable(void);

/**
 * @ingroup uart2
 * @brief Disables the UART2 module.
 * @param None.
 * @return None.
 */
inline void UART2_Disable(void);

/**
 * @ingroup uart2
 * @brief Enables the UART2 transmitter. This routine also enables
 *        UART2 to send bytes over the TX pin.
 * @param None.
 * @return None.
 */
inline void UART2_TransmitEnable(void);

/**
 * @ingroup uart2
 * @brief Disables the UART2 transmitter.
 * @param None.
 * @return None.
 */
inline void UART2_TransmitDisable(void);

/**
 * @ingroup uart2
 * @brief Enables the UART2 receiver. This routine also enables
 *        UART2 to send bytes over the RX pin.
 * @param None.
 * @return None.
 */
inline void UART2_ReceiveEnable(void);

/**
 * @ingroup uart2
 * @brief Disables the UART2 receiver.
 * @param None.
 * @return None.
 */
inline void UART2_ReceiveDisable(void);

/**
 * @ingroup uart2
 * @brief Enables the UART2 Send Break Control bit.
 * @param None.
 * @return None.
 */
inline void UART2_SendBreakControlEnable(void);

/**
 * @ingroup uart2
 * @brief Disables the UART2 Send Break Control bit.
 * @param None.
 * @return None.
 */
inline void UART2_SendBreakControlDisable(void);

/**
 * @ingroup uart2
 * @brief Enables the UART2 Auto-Baud Detection bit.
 * @param bool enable
 * @return None.
 */
inline void UART2_AutoBaudSet(bool enable);


/**
 * @ingroup uart2
 * @brief Reads the UART2 Auto-Baud Detection Complete bit.
 * @param None.
 * @return None.
 */
inline bool UART2_AutoBaudQuery(void);

/**
 * @ingroup uart2
 * @brief Resets the UART2 Auto-Baud Detection Complete bit.
 * @param None.
 * @return None.
 */
inline void UART2_AutoBaudDetectCompleteReset(void);

/**
 * @ingroup uart2
 * @brief Reads the UART2 Auto-Baud Detection Overflow bit.
 * @param None.
 * @return None.
 */
inline bool UART2_IsAutoBaudDetectOverflow(void);

/**
 * @ingroup uart2
 * @brief Resets the UART2 Auto-Baud Detection Overflow bit.
 * @param None.
 * @return None.
 */
inline void UART2_AutoBaudDetectOverflowReset(void);

/**
 * @ingroup uart2
 * @brief Checks if the UART2 receiver has received data and is ready to be read.
 * @param None.
 * @retval True - UART2 receiver FIFO has data
 * @retval False - UART2 receiver FIFO is empty
 */
bool UART2_IsRxReady(void);

/**
 * @ingroup uart2
 * @brief Checks if the UART2 transmitter is ready to accept a data byte.
 * @param None.
 * @retval True -  The UART2 transmitter FIFO has at least a one byte space
 * @retval False - The UART2 transmitter FIFO is full
 */
bool UART2_IsTxReady(void);

/**
 * @ingroup uart2
 * @brief Returns the status of the Transmit Shift Register (TSR).
 * @param None.
 * @retval True - Data completely shifted out from the TSR
 * @retval False - Data is present in Transmit FIFO and/or in TSR
 */
bool UART2_IsTxDone(void);

/**
 * @ingroup uart2
 * @brief Gets the error status of the last read byte. Call 
 *        this function before calling UART2_Read().
 * @pre Call UART2_RxEnable() to enable RX before calling this API.
 * @param None.
 * @return Status of the last read byte. See the uart2_status_t struct for more details.
 */
size_t UART2_ErrorGet(void);

/**
 * @ingroup uart2
 * @brief Reads the eight bits from the Receiver FIFO register.
 * @pre Check the transfer status to see if the receiver is not empty before calling this function. Check 
 *      UART2_IsRxReady() in if () before calling this API.
 * @param None.
 * @return 8-bit data from the RX FIFO register
 */
uint8_t UART2_Read(void);

/**
 * @ingroup uart2
 * @brief Writes a byte of data to the Transmitter FIFO register.
 * @pre Check the transfer status to see if the transmitter is not empty before calling this function. Check
 *      UART2_IsTxReady() in if () before calling this API.
 * @param txData  - Data byte to write to the TX FIFO
 * @return None.
 */
void UART2_Write(uint8_t txData);

/**
 * @ingroup uart2
 * @brief Calls the function upon UART2 framing error.
 * @param callbackHandler - Function pointer called when the framing error condition occurs
 * @return None.
 */
void UART2_FramingErrorCallbackRegister(void (* callbackHandler)(void));

/**
 * @ingroup uart2
 * @brief Calls the function upon UART2 overrun error.
 * @param callbackHandler - Function pointer called when the overrun error condition occurs
 * @return None.
 */
void UART2_OverrunErrorCallbackRegister(void (* callbackHandler)(void));

/**
 * @ingroup uart2
 * @brief Calls the function upon UART2 parity error.
 * @param callbackHandler - Function pointer called when the parity error condition occurs
 * @return None.
 */
void UART2_ParityErrorCallbackRegister(void (* callbackHandler)(void));

#ifdef __cplusplus  // Provide C++ Compatibility


    }

#endif

#endif  // UART2_H

<!-- Please do not change this logo with link -->

[![MCHP](images/microchip.png)](https://www.microchip.com)

# Getting Started with the 8-Bit MDFU Client for PIC18F56Q24 (MPLAB X)

This repository provides the MPLAB® X projects needed to configure some basic MDFU bootloader solutions for the PIC18F56Q24 Curiosity Nano Evaluation Board using code generated from the MPLAB® Code Configurator (MCC).

The Microchip Device Firmware Update (MDFU) is a device firmware update ecosystem that uses a device agnostic host application to update the application firmware. The application image that is loaded into the host follows a custom file format that includes the device and application-specific parameters needed to perform the update. This repository provides the basic starting point to configure and customize the MCC Melody 8-Bit MDFU Client library on the PIC18F56Q24 Curiosity Nano development board and also provides instructions for running the examples.

---
## Related Documentation

- [PIC18F56Q24 Family Product Page](https://www.microchip.com/en-us/product/PIC18F56Q24)
- [8-Bit MDFU Client Getting Started](https://onlinedocs.microchip.com/oxy/GUID-67539092-2179-43C1-8600-118A85E49693-en-US-2/index.html)
- [8-Bit MDFU Client v1.0.0-beta.1 Release Note](https://onlinedocs.microchip.com/oxy/GUID-9CE46BA1-9CDF-4B9C-9C73-4793B27ED320-en-US-2/index.html)
- [8-Bit MDFU Client v1.0.0-beta.1 API Documentation](https://onlinedocs.microchip.com/oxy/GUID-01EC9542-92FF-436D-91FB-7CBEEE66D701-en-US-2/index.html)

---
## Software Used

- MPLAB® X IDE 6.15.0 [(MPLAB® X IDE 6.15)](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-x-ide?utm_source=GitHub&utm_medium=TextLink&utm_campaign=MCU8_MMTCha_MPAE_Examples&utm_content=pic16f18446-cnano-8bit-mdfu-client-mplab-mcc-github)
- MPLAB® XC8 2.45.0 [(MPLAB® XC8 2.45)](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-xc-compilers?utm_source=GitHub&utm_medium=TextLink&utm_campaign=MCU8_MMTCha_MPAE_Examples&utm_content=pic16f18446-cnano-8bit-mdfu-client-mplab-mcc-github)
- MPLAB® Code Configurator (MCC) 5.4.1 [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- MPLAB® Code Configurator (MCC) Device Libraries PIC10 / PIC12 / PIC16 / PIC18 MCUs [(microchip.com/mplab/mplab-code-configurator)](https://www.microchip.com/mplab/mplab-code-configurator)
- Python 3.8 or later [(Python)](https://www.python.org/downloads/)
- pyfwimagebuilder v1.0.1.14 [(pyfwimagebuilder)](https://pypi.org/project/pyfwimagebuilder/)
- pymdfu v1.0.1.5 [(pymdfu)](https://pypi.org/project/pymdfu/)

---
## Hardware Used

- PIC18F56Q24 Curiosity Nano [(EV01E86A)](https://www.microchip.com/en-us/development-tool/ev01e86a)

[![PIC16F18446_CNano](images\230928-mcu8-photo-ev01e86a-front-transparent.png)](images\230928-mcu8-photo-ev01e86a-front-transparent.png)

---
## Setup
The following project setup steps have been followed for each example project pair. If something goes wrong in running these examples, validate that the settings in your project are consistent with the options seen in this section.

### Client Setup
[![mdfu-builder](images\ProjectConfigurationOverview.PNG)](images\ProjectConfigurationOverview.PNG)

**Configuration Bits**
- External Oscillator Selection bits: **Oscillator not enabled**
- Reset Oscillator Selection bits: **HFINTOSC with HFFRQ = 64MHz and CDIV = 1:1 **

[![CFG](images\ConfigBitsSetup.PNG)](images\ConfigBitsSetup.PNG)

**Clock Control**
- Clock Source: **HFINTOSC**
- HF Internal Clock: **8_MHz**
- Clock Divider: **1**

[![CLK](images\ClockSetup.PNG)](images\ClockSetup.PNG)

**NVM**
- Generate Flash APIs: **Enabled**
- Generate EEPROM APIs: **Enabled**
- Generate Device ID APIs: **Enabled**

[![NVM](images\NVMSetup.PNG)](images\NVMSetup.PNG)

**UART**
- Custom Name: **UART2**
- Requested Baudrate: **9600**
- Calculated Baudrate: **9615**
- Baud Rate Error (%): **0.16**
- Parity: **None**
- Data Size: **8**
- Stop Bits: **1**
- Flow Control Mode: **None**
- Redirect Printf to UART: **Disabled**
- Interrupt Driven: **Disabled**

[![UART](images\UARTDriverSetup.PNG)](images\UARTDriverSetup.PNG)

**UART PLIB**
- Actual Baud Rate: **9615.385**
- Enable Receive: **Enabled**
- Receive/Transmit Polarity: **Non-Inverted**
- Enable UART: **Enabled**
- Enable Transmit: **Enabled**

[![UART_PLIB](images\UARTPLIBSetup.PNG)](images\UARTPLIBSetup.PNG)

**UART Pins**
- UART TX: **RB5**
- UART RX: **RB4**

[![UART_Pins](images\UARTPortsSetup.PNG)](images\UARTPortsSetup.PNG)

**8-Bit MDFU Client**
- Communication Protocol: **UART**
- Application Start Address: **Different for each project based on the verification selected**
- Device ID: **0x7920**
- I/O Pin Indicator: **Enabled**
- I/O Pin Entry: **Enabled**
- Memory Verification: **Assigned Based on Example Project Naming Convention**

*Example for CRC32 Verification*

[![MDFU](images\MDFUClientSetup.PNG)](images\MDFUClientSetup.PNG)

**8-Bit MDFU Client I/O**
- BOOT INDICATE: **RF2**
- BOOT ENTRY: **RF3**

[![IO-Pins](images\IOPortSetup.PNG)](images\IOPortSetup.PNG)
- BOOT INDICATE: **Start High**
- BOOT ENTRY: **Weak Pullup**

[![IO-Settings](images\IOPinsSetup.PNG)](images\IOPinsSetup.PNG)

**8-Bit MDFU Client Project Properties**
- ROM Ranges: **This option is configured based on the start address of the application.**
- For example, if the application starts at 0x2000 then this value will reflect as `0-1FFF`.

[![IO-Settings](images\MemoryModelSettings.PNG)](images\MemoryModelSettings.PNG)

---
### Application Setup
[![app-builder](images\AppConfigurationOverview.PNG)](images\AppConfigurationOverview.PNG)

**IO Pins**
- GPIO Output: **RF2**

[![app_io](images\AppPortSetup.PNG)](images\AppPortSetup.PNG)
- Custom Name: **LED**

[![app_io_settings](images\LEDSetup.PNG)](images\LEDSetup.PNG)

**Project Properties**

Linker Additional Options
- Codeoffset: **0x<APP_START> = 0x2000**
- Checksum: **Dependant on the verification scheme**
*Check the table below to understand how the CRC32 option must be configured in the application projects*

[![app_offset](images\AppOffset.PNG)](images\AppOffset.PNG)

|Verification Scheme | Checksum Setting |
|---- |---- |
|Reset Vector | N/A |
|Status Byte | N/A |
|Checksum | C00-3FFD@3FFE,width=-2,algorithm=2,code=3F |
|CRC-16 | C00-3FFD@3FFE,width=-2,algorithm=5,offset=FFFF,polynomial=1021,code=3F |
|CRC-32 | C00-3FFB@3FFC,width=-4,algorithm=-5,offset=FFFFFFFF,polynomial=04C11DB7,code=3F |

Fill Flash Memory
- Which area to fill: **Provide Range to fill**
- How to fill it: **Constant or incremental value**
- Sequence: **0xFFFF**
- Increment/Decrement: **No Incrementing**
- Memory address range: **0x<APP_START>:0x<FLASH_END> = 0x2000:0xFFFF**

[![app_fill](images\AppFill.PNG)](images\AppFill.PNG)

## Operation
In this section, we will walkthrough how to run the examples that are housed in this repository. For this example walkthrough we will execute the CRC32 verification example and update the device flash memory with the crc32 application image to demonstrate a successful device firmware update (DFU).

**8-Bit MDFU Client Operation**

1. Open the MDFU Client Project.

[![OpenMDFU](images\openBtnMDFU.png)](images\openBtnMDFU.png)

[![OpenMDFUProject](images\openProjectMDFU.png)](images\openProjectMDFU.png)

2. Set MDFU Client Project as Main Project.

[![OpenMDFUProject](images\setAsMainProject.png)](images\setAsMainProject.png)

3. Right click, then select Clean and Build.

[![CleanBuild](images\CleanAndBuildMDFU.png)](images\CleanAndBuildMDFU.png)

4. Program the MDFU Client Project

[![ProgramMDFU](images\ProgramMDFU.png)](images\ProgramMDFU.png)

**Bootloader Operation after initial programming**

After initial programming, the LED should be held on.
[![MDFU_BootMode](images\PIC18F56Q24_BootMode.png)](images\PIC18F56Q24_BootMode.png)

**Application Operation**
1. Open the Application Project that is configured for your selected verification scheme.

[![OpenApp](images\openBtnApp.png)](images\openBtnApp.png)

[![OpenAppProject](images\openProjectApp.png)](images\openProjectApp.png)

2. Set the application project as the Main Project.

[![MainAppProject](images\setAppAsMainProject.png)](images\setAppAsMainProject.png)

3. Build the required Application project.

Right click, then select Clean and Build

[![CleanBuild_App](images\CleanAndBuildApp.png)](images\CleanAndBuildApp.png)

4. Build the Application Image File using **pyfwimagebuilder**

*Hint: The configuration TOML file is generated by the MDFU Client project*

**Example Command:**

`pyfwimagebuilder build -i "application_hex_file.hex"  -c "mdfu_config_file.toml" -o output.img`

[![build_img](images\BuildTheImage.PNG)](images\BuildTheImage.PNG)

5. Use the **pymdfu** host tool to transfer the application image file to the bootloader.

*Hint: You can find the COM port of the MCU using the MPLAB Data Visualizer.*

**Example Command:**

`pymdfu update serial ./crc32.img --baudrate 9600 --port COM##`

[![transfer_img](images\SendTheImage.PNG)](images\SendTheImage.PNG)

**Application Has Been Updated Successfully**

[![MDFU_AppMode](images\PIC18F56Q24_AppMode.gif)](images\PIC18F56Q24_AppMode.gif)

## Summary

This repository demonstrates how to configure the 8-Bit MDFU Client library in MCC to enable device firmware updates over UART on a PIC18F56Q24 Curiosity Nano.
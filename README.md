CANopenSTM32-HAL
===========

CANopenSTM32 includes demo program with CANopenNode on STM32.

It is based on [CANopenNode](https://github.com/CANopenNode/CANopenNode), which is free and open source CANopen Stack and is included as a git submodule.

CANopen is the internationally standardized (EN 50325-4) ([CiA301](http://can-cia.org/standardization/technical-documents)) CAN-based higher-layer protocol for embedded control system. For more information on CANopen see http://www.can-cia.org/


## STM32 Project
This project created by STM32CubeIDE, `Lib/CANopenNode/example` and `Lib/CANopenNode/storage` folder should be ignored by STM32CubeIDE, and all modified driver and storage source are in `Lib/driver` floder.

### Schema
Electronic schema is in `Assets` floder.


### Object dictionary 
Object dictionary project file and EDS file are in `Assets` folder, you should use latest [libedssharp](https://github.com/robincornelius/libedssharp) to open them.

### TPDO
Project use a onboard button as digital input for TPDO;
TPDO transmission type is 0x01, which means transmiting is synchronous after every SYNC object.

### RPDO
Project use four onboard LEDs as digital output for RPDO;
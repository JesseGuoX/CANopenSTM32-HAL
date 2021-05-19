/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated with
    libedssharp Object Dictionary Editor v0.8-126-g869ed49

    https://github.com/CANopenNode/CANopenNode
    https://github.com/robincornelius/libedssharp

    DON'T EDIT THIS FILE MANUALLY !!!!
********************************************************************************

    File info:
        File Names:   OD.h; OD.c
        Project File: _project.xml
        File Version: -

        Created:      2021/5/19 16:31:58
        Created By:   JP
        Modified:     2021/5/19 16:31:58
        Modified By:  

    Device Info:
        Vendor Name:  CANopenNode
        Vendor ID:    
        Product Name: CANopenNode
        Product ID:   

        Description:  CANopenNode is an open source software stack used for serial communication of multiple devices over the CAN/CANopen Network.
*******************************************************************************/

#ifndef OD_H
#define OD_H
/*******************************************************************************
    Counters of OD objects
*******************************************************************************/
#define OD_CNT_NMT 1
#define OD_CNT_EM 1
#define OD_CNT_SYNC 1
#define OD_CNT_SYNC_PROD 1
#define OD_CNT_STORAGE 1
#define OD_CNT_TIME 1
#define OD_CNT_EM_PROD 1
#define OD_CNT_HB_CONS 1
#define OD_CNT_HB_PROD 1
#define OD_CNT_SDO_SRV 1
#define OD_CNT_SDO_CLI 1
#define OD_CNT_RPDO 1
#define OD_CNT_TPDO 1

/*******************************************************************************
    OD data declaration of all groups
*******************************************************************************/
typedef struct {
    uint32_t x1000_deviceType;
    uint32_t x1005_COB_ID_SYNCMessage;
    uint32_t x1006_communicationCyclePeriod;
    uint32_t x1007_synchronousWindowLength;
    char x1008_manufacturerDeviceName[12];
    char x1009_manufacturerHardwareVersion[5];
    char x100A_manufacturerSoftwareVersion[5];
    uint32_t x1012_COB_ID_TIME;
    uint32_t x1014_COB_ID_EMCY;
    uint16_t x1015_inhibitTimeEMCY;
    uint8_t x1016_consumerHeartbeatTime_sub0;
    uint32_t x1016_consumerHeartbeatTime[4];
    uint16_t x1017_producerHeartbeatTime;
    struct {
        uint8_t maxSub_index;
        uint32_t vendor_ID;
        uint32_t productCode;
        uint32_t revisionNumber;
        uint32_t serialNumber;
    } x1018_identity;
    uint8_t x1019_synchronousCounterOverflowValue;
    uint8_t x1029_errorBehavior_sub0;
    uint8_t x1029_errorBehavior[6];
    struct {
        uint8_t maxSub_index;
        uint32_t COB_IDClientToServer;
        uint32_t COB_IDServerToClient;
    } x1200_SDOServerParameter;
    struct {
        uint8_t maxSub_index;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
    } x1400_RPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedObjects;
        uint32_t mappedObject_1;
        uint32_t mappedObject_2;
        uint32_t mappedObject_3;
        uint32_t mappedObject_4;
        uint32_t mappedObject_5;
        uint32_t mappedObject_6;
        uint32_t mappedObject_7;
        uint32_t mappedObject_8;
    } x1600_RPDOMappingParameter;
    struct {
        uint8_t maxSub_index;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1800_TPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedObjects;
        uint32_t mappedObject_1;
        uint32_t mappedObject_2;
        uint32_t mappedObject_3;
        uint32_t mappedObject_4;
        uint32_t mappedObject_5;
        uint32_t mappedObject_6;
        uint32_t mappedObject_7;
        uint32_t mappedObject_8;
    } x1A00_TPDOMappingParameter;
    uint32_t x1F80_NMTStartup;
    uint8_t x2101_CANNodeID;
    uint16_t x2102_CANBitRate;
    uint8_t x2111_variableROM_Int32_sub0;
    int32_t x2111_variableROM_Int32[16];
} OD_ROM_t;

typedef struct {
    uint8_t x1001_errorRegister;
    uint32_t x1002_manufacturerStatusRegister;
    uint8_t x1003_pre_definedErrorField_sub0;
    uint32_t x1003_pre_definedErrorField[8];
    uint8_t x1010_storeParameters_sub0;
    uint32_t x1010_storeParameters[1];
    uint8_t x1011_restoreDefaultParameters_sub0;
    uint32_t x1011_restoreDefaultParameters[1];
    struct {
        uint8_t maxSub_index;
        uint32_t COB_IDClientToServer;
        uint32_t COB_IDServerToClient;
        uint8_t node_IDOfTheSDOServer;
    } x1280_SDOClientParameter;
    uint8_t x2100_errorStatusBits[10];
    uint16_t x2103_SYNCCounter;
    uint16_t x2104_SYNCTime;
    uint8_t x2107_performance_sub0;
    uint16_t x2107_performance[5];
    uint8_t x2108_temperature_sub0;
    int16_t x2108_temperature[1];
    uint8_t x2109_voltage_sub0;
    int16_t x2109_voltage[1];
    uint8_t x2110_variableInt32_sub0;
    int32_t x2110_variableInt32[16];
    struct {
        uint8_t maxSub_index;
        int64_t I64;
        uint64_t U64;
        float32_t R32;
        float64_t R64;
    } x2120_testVar;
    struct {
        uint8_t maxSub_index;
        char string[31];
        uint64_t epochTimeBaseMs;
        uint32_t epochTimeOffsetMs;
    } x2130_time;
    uint8_t x6000_BUTTON_sub0;
    uint8_t x6000_BUTTON[1];
    uint8_t x6200_LED_sub0;
    uint8_t x6200_LED[4];
} OD_RAM_t;

typedef struct {
    uint32_t x2106_power_onCounter;
    uint8_t x2112_variableNV_Int32_sub0;
    int32_t x2112_variableNV_Int32[16];
} OD_EEPROM_t;

extern OD_ROM_t OD_ROM;
extern OD_RAM_t OD_RAM;
extern OD_EEPROM_t OD_EEPROM;
extern OD_t *OD;


/*******************************************************************************
    Object dictionary entries - shortcuts
*******************************************************************************/
#define OD_ENTRY_H1000 &OD->list[0]
#define OD_ENTRY_H1001 &OD->list[1]
#define OD_ENTRY_H1002 &OD->list[2]
#define OD_ENTRY_H1003 &OD->list[3]
#define OD_ENTRY_H1005 &OD->list[4]
#define OD_ENTRY_H1006 &OD->list[5]
#define OD_ENTRY_H1007 &OD->list[6]
#define OD_ENTRY_H1008 &OD->list[7]
#define OD_ENTRY_H1009 &OD->list[8]
#define OD_ENTRY_H100A &OD->list[9]
#define OD_ENTRY_H1010 &OD->list[10]
#define OD_ENTRY_H1011 &OD->list[11]
#define OD_ENTRY_H1012 &OD->list[12]
#define OD_ENTRY_H1014 &OD->list[13]
#define OD_ENTRY_H1015 &OD->list[14]
#define OD_ENTRY_H1016 &OD->list[15]
#define OD_ENTRY_H1017 &OD->list[16]
#define OD_ENTRY_H1018 &OD->list[17]
#define OD_ENTRY_H1019 &OD->list[18]
#define OD_ENTRY_H1029 &OD->list[19]
#define OD_ENTRY_H1200 &OD->list[20]
#define OD_ENTRY_H1280 &OD->list[21]
#define OD_ENTRY_H1400 &OD->list[22]
#define OD_ENTRY_H1600 &OD->list[23]
#define OD_ENTRY_H1800 &OD->list[24]
#define OD_ENTRY_H1A00 &OD->list[25]
#define OD_ENTRY_H1F80 &OD->list[26]
#define OD_ENTRY_H2100 &OD->list[27]
#define OD_ENTRY_H2101 &OD->list[28]
#define OD_ENTRY_H2102 &OD->list[29]
#define OD_ENTRY_H2103 &OD->list[30]
#define OD_ENTRY_H2104 &OD->list[31]
#define OD_ENTRY_H2106 &OD->list[32]
#define OD_ENTRY_H2107 &OD->list[33]
#define OD_ENTRY_H2108 &OD->list[34]
#define OD_ENTRY_H2109 &OD->list[35]
#define OD_ENTRY_H2110 &OD->list[36]
#define OD_ENTRY_H2111 &OD->list[37]
#define OD_ENTRY_H2112 &OD->list[38]
#define OD_ENTRY_H2120 &OD->list[39]
#define OD_ENTRY_H2130 &OD->list[40]
#define OD_ENTRY_H6000 &OD->list[41]
#define OD_ENTRY_H6200 &OD->list[42]


/*******************************************************************************
    Object dictionary entries - shortcuts with names
*******************************************************************************/
#define OD_ENTRY_H1000_deviceType &OD->list[0]
#define OD_ENTRY_H1001_errorRegister &OD->list[1]
#define OD_ENTRY_H1002_manufacturerStatusRegister &OD->list[2]
#define OD_ENTRY_H1003_pre_definedErrorField &OD->list[3]
#define OD_ENTRY_H1005_COB_ID_SYNCMessage &OD->list[4]
#define OD_ENTRY_H1006_communicationCyclePeriod &OD->list[5]
#define OD_ENTRY_H1007_synchronousWindowLength &OD->list[6]
#define OD_ENTRY_H1008_manufacturerDeviceName &OD->list[7]
#define OD_ENTRY_H1009_manufacturerHardwareVersion &OD->list[8]
#define OD_ENTRY_H100A_manufacturerSoftwareVersion &OD->list[9]
#define OD_ENTRY_H1010_storeParameters &OD->list[10]
#define OD_ENTRY_H1011_restoreDefaultParameters &OD->list[11]
#define OD_ENTRY_H1012_COB_ID_TIME &OD->list[12]
#define OD_ENTRY_H1014_COB_ID_EMCY &OD->list[13]
#define OD_ENTRY_H1015_inhibitTimeEMCY &OD->list[14]
#define OD_ENTRY_H1016_consumerHeartbeatTime &OD->list[15]
#define OD_ENTRY_H1017_producerHeartbeatTime &OD->list[16]
#define OD_ENTRY_H1018_identity &OD->list[17]
#define OD_ENTRY_H1019_synchronousCounterOverflowValue &OD->list[18]
#define OD_ENTRY_H1029_errorBehavior &OD->list[19]
#define OD_ENTRY_H1200_SDOServerParameter &OD->list[20]
#define OD_ENTRY_H1280_SDOClientParameter &OD->list[21]
#define OD_ENTRY_H1400_RPDOCommunicationParameter &OD->list[22]
#define OD_ENTRY_H1600_RPDOMappingParameter &OD->list[23]
#define OD_ENTRY_H1800_TPDOCommunicationParameter &OD->list[24]
#define OD_ENTRY_H1A00_TPDOMappingParameter &OD->list[25]
#define OD_ENTRY_H1F80_NMTStartup &OD->list[26]
#define OD_ENTRY_H2100_errorStatusBits &OD->list[27]
#define OD_ENTRY_H2101_CANNodeID &OD->list[28]
#define OD_ENTRY_H2102_CANBitRate &OD->list[29]
#define OD_ENTRY_H2103_SYNCCounter &OD->list[30]
#define OD_ENTRY_H2104_SYNCTime &OD->list[31]
#define OD_ENTRY_H2106_power_onCounter &OD->list[32]
#define OD_ENTRY_H2107_performance &OD->list[33]
#define OD_ENTRY_H2108_temperature &OD->list[34]
#define OD_ENTRY_H2109_voltage &OD->list[35]
#define OD_ENTRY_H2110_variableInt32 &OD->list[36]
#define OD_ENTRY_H2111_variableROM_Int32 &OD->list[37]
#define OD_ENTRY_H2112_variableNV_Int32 &OD->list[38]
#define OD_ENTRY_H2120_testVar &OD->list[39]
#define OD_ENTRY_H2130_time &OD->list[40]
#define OD_ENTRY_H6000_BUTTON &OD->list[41]
#define OD_ENTRY_H6200_LED &OD->list[42]

#endif /* OD_H */

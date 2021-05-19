/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated with
    libedssharp Object Dictionary Editor v0.8-126-g869ed49

    https://github.com/CANopenNode/CANopenNode
    https://github.com/robincornelius/libedssharp

    DON'T EDIT THIS FILE MANUALLY, UNLESS YOU KNOW WHAT YOU ARE DOING !!!!
*******************************************************************************/

#define OD_DEFINITION
#include "301/CO_ODinterface.h"
#include "OD.h"

#if CO_VERSION_MAJOR < 4
#error This Object dictionary is compatible with CANopenNode V4.0 and above!
#endif

/*******************************************************************************
    OD data initialization of all groups
*******************************************************************************/
OD_ROM_t OD_ROM = {
    .x1000_deviceType = 0x00000000,
    .x1005_COB_ID_SYNCMessage = 0x00000080,
    .x1006_communicationCyclePeriod = 0x00000000,
    .x1007_synchronousWindowLength = 0x00000000,
    .x1008_manufacturerDeviceName = {'C', 'A', 'N', 'o', 'p', 'e', 'n', 'N', 'o', 'd', 'e', 0},
    .x1009_manufacturerHardwareVersion = {'3', '.', '0', '0', 0},
    .x100A_manufacturerSoftwareVersion = {'3', '.', '0', '0', 0},
    .x1012_COB_ID_TIME = 0x80000100,
    .x1014_COB_ID_EMCY = 0x00000080,
    .x1015_inhibitTimeEMCY = 0x0064,
    .x1016_consumerHeartbeatTime_sub0 = 0x04,
    .x1016_consumerHeartbeatTime = {0x00000000, 0x00000000, 0x00000000, 0x00000000},
    .x1017_producerHeartbeatTime = 0x03E8,
    .x1018_identity = {
        .maxSub_index = 0x04,
        .vendor_ID = 0x00000000,
        .productCode = 0x00000000,
        .revisionNumber = 0x00000000,
        .serialNumber = 0x00000000
    },
    .x1019_synchronousCounterOverflowValue = 0x00,
    .x1029_errorBehavior_sub0 = 0x06,
    .x1029_errorBehavior = {0x00, 0x00, 0x01, 0x00, 0x00, 0x00},
    .x1200_SDOServerParameter = {
        .maxSub_index = 0x02,
        .COB_IDClientToServer = 0x00000600,
        .COB_IDServerToClient = 0x00000580
    },
    .x1400_RPDOCommunicationParameter = {
        .maxSub_index = 0x02,
        .COB_IDUsedByRPDO = 0x00000200,
        .transmissionType = 0xFF
    },
    .x1401_RPDOCommunicationParameter = {
        .maxSub_index = 0x02,
        .COB_IDUsedByRPDO = 0x00000300,
        .transmissionType = 0xFE
    },
    .x1402_RPDOCommunicationParameter = {
        .maxSub_index = 0x02,
        .COB_IDUsedByRPDO = 0x00000400,
        .transmissionType = 0xFE
    },
    .x1403_RPDOCommunicationParameter = {
        .maxSub_index = 0x02,
        .COB_IDUsedByRPDO = 0x00000500,
        .transmissionType = 0xFE
    },
    .x1600_RPDOMappingParameter = {
        .numberOfMappedObjects = 0x02,
        .mappedObject_1 = 0x62000108,
        .mappedObject_2 = 0x62000208,
        .mappedObject_3 = 0x00000000,
        .mappedObject_4 = 0x00000000,
        .mappedObject_5 = 0x00000000,
        .mappedObject_6 = 0x00000000,
        .mappedObject_7 = 0x00000000,
        .mappedObject_8 = 0x00000000
    },
    .x1601_RPDOMappingParameter = {
        .numberOfMappedObjects = 0x00,
        .mappedObject_1 = 0x00000000,
        .mappedObject_2 = 0x00000000,
        .mappedObject_3 = 0x00000000,
        .mappedObject_4 = 0x00000000,
        .mappedObject_5 = 0x00000000,
        .mappedObject_6 = 0x00000000,
        .mappedObject_7 = 0x00000000,
        .mappedObject_8 = 0x00000000
    },
    .x1602_RPDOMappingParameter = {
        .numberOfMappedObjects = 0x00,
        .mappedObject_1 = 0x00000000,
        .mappedObject_2 = 0x00000000,
        .mappedObject_3 = 0x00000000,
        .mappedObject_4 = 0x00000000,
        .mappedObject_5 = 0x00000000,
        .mappedObject_6 = 0x00000000,
        .mappedObject_7 = 0x00000000,
        .mappedObject_8 = 0x00000000
    },
    .x1603_RPDOMappingParameter = {
        .numberOfMappedObjects = 0x00,
        .mappedObject_1 = 0x00000000,
        .mappedObject_2 = 0x00000000,
        .mappedObject_3 = 0x00000000,
        .mappedObject_4 = 0x00000000,
        .mappedObject_5 = 0x00000000,
        .mappedObject_6 = 0x00000000,
        .mappedObject_7 = 0x00000000,
        .mappedObject_8 = 0x00000000
    },
    .x1800_TPDOCommunicationParameter = {
        .maxSub_index = 0x06,
        .COB_IDUsedByTPDO = 0x00000180,
        .transmissionType = 0x01,
        .inhibitTime = 0x0064,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000,
        .SYNCStartValue = 0x03
    },
    .x1801_TPDOCommunicationParameter = {
        .maxSub_index = 0x06,
        .COB_IDUsedByTPDO = 0x00000280,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000,
        .SYNCStartValue = 0x00
    },
    .x1802_TPDOCommunicationParameter = {
        .maxSub_index = 0x06,
        .COB_IDUsedByTPDO = 0x00000380,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000,
        .SYNCStartValue = 0x00
    },
    .x1803_TPDOCommunicationParameter = {
        .maxSub_index = 0x06,
        .COB_IDUsedByTPDO = 0x00000480,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000,
        .SYNCStartValue = 0x00
    },
    .x1A00_TPDOMappingParameter = {
        .numberOfMappedObjects = 0x02,
        .mappedObject_1 = 0x60000108,
        .mappedObject_2 = 0x60000208,
        .mappedObject_3 = 0x00000000,
        .mappedObject_4 = 0x00000000,
        .mappedObject_5 = 0x00000000,
        .mappedObject_6 = 0x00000000,
        .mappedObject_7 = 0x00000000,
        .mappedObject_8 = 0x00000000
    },
    .x1A01_TPDOMappingParameter = {
        .numberOfMappedObjects = 0x00,
        .mappedObject_1 = 0x00000000,
        .mappedObject_2 = 0x00000000,
        .mappedObject_3 = 0x00000000,
        .mappedObject_4 = 0x00000000,
        .mappedObject_5 = 0x00000000,
        .mappedObject_6 = 0x00000000,
        .mappedObject_7 = 0x00000000,
        .mappedObject_8 = 0x00000000
    },
    .x1A02_TPDOMappingParameter = {
        .numberOfMappedObjects = 0x00,
        .mappedObject_1 = 0x00000000,
        .mappedObject_2 = 0x00000000,
        .mappedObject_3 = 0x00000000,
        .mappedObject_4 = 0x00000000,
        .mappedObject_5 = 0x00000000,
        .mappedObject_6 = 0x00000000,
        .mappedObject_7 = 0x00000000,
        .mappedObject_8 = 0x00000000
    },
    .x1A03_TPDOMappingParameter = {
        .numberOfMappedObjects = 0x00,
        .mappedObject_1 = 0x00000000,
        .mappedObject_2 = 0x00000000,
        .mappedObject_3 = 0x00000000,
        .mappedObject_4 = 0x00000000,
        .mappedObject_5 = 0x00000000,
        .mappedObject_6 = 0x00000000,
        .mappedObject_7 = 0x00000000,
        .mappedObject_8 = 0x00000000
    },
    .x1F80_NMTStartup = 0x00000008,
    .x2101_CANNodeID = 0x30,
    .x2102_CANBitRate = 0x00FA,
    .x2111_variableROM_Int32_sub0 = 0x10,
    .x2111_variableROM_Int32 = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

OD_RAM_t OD_RAM = {
    .x1001_errorRegister = 0x00,
    .x1002_manufacturerStatusRegister = 0x00000000,
    .x1003_pre_definedErrorField_sub0 = 0x00,
    .x1003_pre_definedErrorField = {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    .x1010_storeParameters_sub0 = 0x01,
    .x1010_storeParameters = {0x00000003},
    .x1011_restoreDefaultParameters_sub0 = 0x01,
    .x1011_restoreDefaultParameters = {0x00000001},
    .x1280_SDOClientParameter = {
        .maxSub_index = 0x03,
        .COB_IDClientToServer = 0x00000000,
        .COB_IDServerToClient = 0x00000000,
        .node_IDOfTheSDOServer = 0x00
    },
    .x2100_errorStatusBits = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    .x2103_SYNCCounter = 0x0000,
    .x2104_SYNCTime = 0x0000,
    .x2107_performance_sub0 = 0x05,
    .x2107_performance = {0x03E8, 0x0000, 0x0000, 0x0000, 0x0000},
    .x2108_temperature_sub0 = 0x01,
    .x2108_temperature = {0},
    .x2109_voltage_sub0 = 0x01,
    .x2109_voltage = {0},
    .x2110_variableInt32_sub0 = 0x10,
    .x2110_variableInt32 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    .x2120_testVar = {
        .maxSub_index = 0x05,
        .I64 = 1311768467294899695,
        .U64 = 0x234567890ABCDEF1,
        .R32 = 12.345,
        .R64 = 456.789
    },
    .x2130_time = {
        .maxSub_index = 0x03,
        .string = {'-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0},
        .epochTimeBaseMs = 0x0000000000000000,
        .epochTimeOffsetMs = 0x00000000
    },
    .x6000_readInput_8_bit_sub0 = 0x08,
    .x6000_readInput_8_bit = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    .x6200_writeOutput_8_bit_sub0 = 0x08,
    .x6200_writeOutput_8_bit = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    .x6401_readAnalogueInput_16_bit_sub0 = 0x0C,
    .x6401_readAnalogueInput_16_bit = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    .x6411_writeAnalogueOutput_16_bit_sub0 = 0x08,
    .x6411_writeAnalogueOutput_16_bit = {0, 0, 0, 0, 0, 0, 0, 0}
};

OD_EEPROM_t OD_EEPROM = {
    .x2106_power_onCounter = 0x00000000,
    .x2112_variableNV_Int32_sub0 = 0x10,
    .x2112_variableNV_Int32 = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};



/*******************************************************************************
    All OD objects (constant definitions)
*******************************************************************************/
typedef struct {
    OD_obj_var_t o_1000_deviceType;
    OD_obj_var_t o_1001_errorRegister;
    OD_obj_var_t o_1002_manufacturerStatusRegister;
    OD_obj_array_t o_1003_pre_definedErrorField;
    OD_obj_var_t o_1005_COB_ID_SYNCMessage;
    OD_obj_var_t o_1006_communicationCyclePeriod;
    OD_obj_var_t o_1007_synchronousWindowLength;
    OD_obj_var_t o_1008_manufacturerDeviceName;
    OD_obj_var_t o_1009_manufacturerHardwareVersion;
    OD_obj_var_t o_100A_manufacturerSoftwareVersion;
    OD_obj_array_t o_1010_storeParameters;
    OD_obj_array_t o_1011_restoreDefaultParameters;
    OD_obj_var_t o_1012_COB_ID_TIME;
    OD_obj_var_t o_1014_COB_ID_EMCY;
    OD_obj_var_t o_1015_inhibitTimeEMCY;
    OD_obj_array_t o_1016_consumerHeartbeatTime;
    OD_obj_var_t o_1017_producerHeartbeatTime;
    OD_obj_record_t o_1018_identity[5];
    OD_obj_var_t o_1019_synchronousCounterOverflowValue;
    OD_obj_array_t o_1029_errorBehavior;
    OD_obj_record_t o_1200_SDOServerParameter[3];
    OD_obj_record_t o_1280_SDOClientParameter[4];
    OD_obj_record_t o_1400_RPDOCommunicationParameter[3];
    OD_obj_record_t o_1401_RPDOCommunicationParameter[3];
    OD_obj_record_t o_1402_RPDOCommunicationParameter[3];
    OD_obj_record_t o_1403_RPDOCommunicationParameter[3];
    OD_obj_record_t o_1600_RPDOMappingParameter[9];
    OD_obj_record_t o_1601_RPDOMappingParameter[9];
    OD_obj_record_t o_1602_RPDOMappingParameter[9];
    OD_obj_record_t o_1603_RPDOMappingParameter[9];
    OD_obj_record_t o_1800_TPDOCommunicationParameter[7];
    OD_obj_record_t o_1801_TPDOCommunicationParameter[7];
    OD_obj_record_t o_1802_TPDOCommunicationParameter[7];
    OD_obj_record_t o_1803_TPDOCommunicationParameter[7];
    OD_obj_record_t o_1A00_TPDOMappingParameter[9];
    OD_obj_record_t o_1A01_TPDOMappingParameter[9];
    OD_obj_record_t o_1A02_TPDOMappingParameter[9];
    OD_obj_record_t o_1A03_TPDOMappingParameter[9];
    OD_obj_var_t o_1F80_NMTStartup;
    OD_obj_var_t o_2100_errorStatusBits;
    OD_obj_var_t o_2101_CANNodeID;
    OD_obj_var_t o_2102_CANBitRate;
    OD_obj_var_t o_2103_SYNCCounter;
    OD_obj_var_t o_2104_SYNCTime;
    OD_obj_var_t o_2106_power_onCounter;
    OD_obj_array_t o_2107_performance;
    OD_obj_array_t o_2108_temperature;
    OD_obj_array_t o_2109_voltage;
    OD_obj_array_t o_2110_variableInt32;
    OD_obj_array_t o_2111_variableROM_Int32;
    OD_obj_array_t o_2112_variableNV_Int32;
    OD_obj_record_t o_2120_testVar[6];
    OD_obj_record_t o_2130_time[4];
    OD_obj_array_t o_6000_readInput_8_bit;
    OD_obj_array_t o_6200_writeOutput_8_bit;
    OD_obj_array_t o_6401_readAnalogueInput_16_bit;
    OD_obj_array_t o_6411_writeAnalogueOutput_16_bit;
} ODObjs_t;

static CO_PROGMEM ODObjs_t ODObjs = {
    .o_1000_deviceType = {
        .dataOrig = &OD_ROM.x1000_deviceType,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_1001_errorRegister = {
        .dataOrig = &OD_RAM.x1001_errorRegister,
        .attribute = ODA_SDO_R | ODA_TRPDO,
        .dataLength = 1
    },
    .o_1002_manufacturerStatusRegister = {
        .dataOrig = &OD_RAM.x1002_manufacturerStatusRegister,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_1003_pre_definedErrorField = {
        .dataOrig0 = &OD_RAM.x1003_pre_definedErrorField_sub0,
        .dataOrig = &OD_RAM.x1003_pre_definedErrorField[0],
        .attribute0 = ODA_SDO_RW,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1005_COB_ID_SYNCMessage = {
        .dataOrig = &OD_ROM.x1005_COB_ID_SYNCMessage,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1006_communicationCyclePeriod = {
        .dataOrig = &OD_ROM.x1006_communicationCyclePeriod,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1007_synchronousWindowLength = {
        .dataOrig = &OD_ROM.x1007_synchronousWindowLength,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1008_manufacturerDeviceName = {
        .dataOrig = &OD_ROM.x1008_manufacturerDeviceName[0],
        .attribute = ODA_SDO_R | ODA_STR,
        .dataLength = 11
    },
    .o_1009_manufacturerHardwareVersion = {
        .dataOrig = &OD_ROM.x1009_manufacturerHardwareVersion[0],
        .attribute = ODA_SDO_R | ODA_STR,
        .dataLength = 4
    },
    .o_100A_manufacturerSoftwareVersion = {
        .dataOrig = &OD_ROM.x100A_manufacturerSoftwareVersion[0],
        .attribute = ODA_SDO_R | ODA_STR,
        .dataLength = 4
    },
    .o_1010_storeParameters = {
        .dataOrig0 = &OD_RAM.x1010_storeParameters_sub0,
        .dataOrig = &OD_RAM.x1010_storeParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1011_restoreDefaultParameters = {
        .dataOrig0 = &OD_RAM.x1011_restoreDefaultParameters_sub0,
        .dataOrig = &OD_RAM.x1011_restoreDefaultParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1012_COB_ID_TIME = {
        .dataOrig = &OD_ROM.x1012_COB_ID_TIME,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1014_COB_ID_EMCY = {
        .dataOrig = &OD_ROM.x1014_COB_ID_EMCY,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_1015_inhibitTimeEMCY = {
        .dataOrig = &OD_ROM.x1015_inhibitTimeEMCY,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_1016_consumerHeartbeatTime = {
        .dataOrig0 = &OD_ROM.x1016_consumerHeartbeatTime_sub0,
        .dataOrig = &OD_ROM.x1016_consumerHeartbeatTime[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1017_producerHeartbeatTime = {
        .dataOrig = &OD_ROM.x1017_producerHeartbeatTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_1018_identity = {
        {
            .dataOrig = &OD_ROM.x1018_identity.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1018_identity.vendor_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1018_identity.productCode,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1018_identity.revisionNumber,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1018_identity.serialNumber,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1019_synchronousCounterOverflowValue = {
        .dataOrig = &OD_ROM.x1019_synchronousCounterOverflowValue,
        .attribute = ODA_SDO_RW,
        .dataLength = 1
    },
    .o_1029_errorBehavior = {
        .dataOrig0 = &OD_ROM.x1029_errorBehavior_sub0,
        .dataOrig = &OD_ROM.x1029_errorBehavior[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW,
        .dataElementLength = 1,
        .dataElementSizeof = sizeof(uint8_t)
    },
    .o_1200_SDOServerParameter = {
        {
            .dataOrig = &OD_ROM.x1200_SDOServerParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1200_SDOServerParameter.COB_IDClientToServer,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1200_SDOServerParameter.COB_IDServerToClient,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1280_SDOClientParameter = {
        {
            .dataOrig = &OD_RAM.x1280_SDOClientParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1280_SDOClientParameter.COB_IDClientToServer,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1280_SDOClientParameter.COB_IDServerToClient,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1280_SDOClientParameter.node_IDOfTheSDOServer,
            .subIndex = 3,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1400_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_ROM.x1400_RPDOCommunicationParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1400_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1400_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1401_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_ROM.x1401_RPDOCommunicationParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1401_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1401_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1402_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_ROM.x1402_RPDOCommunicationParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1402_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1402_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1403_RPDOCommunicationParameter = {
        {
            .dataOrig = &OD_ROM.x1403_RPDOCommunicationParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1403_RPDOCommunicationParameter.COB_IDUsedByRPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1403_RPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1600_RPDOMappingParameter = {
        {
            .dataOrig = &OD_ROM.x1600_RPDOMappingParameter.numberOfMappedObjects,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1600_RPDOMappingParameter.mappedObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1600_RPDOMappingParameter.mappedObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1600_RPDOMappingParameter.mappedObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1600_RPDOMappingParameter.mappedObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1600_RPDOMappingParameter.mappedObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1600_RPDOMappingParameter.mappedObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1600_RPDOMappingParameter.mappedObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1600_RPDOMappingParameter.mappedObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1601_RPDOMappingParameter = {
        {
            .dataOrig = &OD_ROM.x1601_RPDOMappingParameter.numberOfMappedObjects,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1601_RPDOMappingParameter.mappedObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1601_RPDOMappingParameter.mappedObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1601_RPDOMappingParameter.mappedObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1601_RPDOMappingParameter.mappedObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1601_RPDOMappingParameter.mappedObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1601_RPDOMappingParameter.mappedObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1601_RPDOMappingParameter.mappedObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1601_RPDOMappingParameter.mappedObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1602_RPDOMappingParameter = {
        {
            .dataOrig = &OD_ROM.x1602_RPDOMappingParameter.numberOfMappedObjects,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1602_RPDOMappingParameter.mappedObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1602_RPDOMappingParameter.mappedObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1602_RPDOMappingParameter.mappedObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1602_RPDOMappingParameter.mappedObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1602_RPDOMappingParameter.mappedObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1602_RPDOMappingParameter.mappedObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1602_RPDOMappingParameter.mappedObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1602_RPDOMappingParameter.mappedObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1603_RPDOMappingParameter = {
        {
            .dataOrig = &OD_ROM.x1603_RPDOMappingParameter.numberOfMappedObjects,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1603_RPDOMappingParameter.mappedObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1603_RPDOMappingParameter.mappedObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1603_RPDOMappingParameter.mappedObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1603_RPDOMappingParameter.mappedObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1603_RPDOMappingParameter.mappedObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1603_RPDOMappingParameter.mappedObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1603_RPDOMappingParameter.mappedObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1603_RPDOMappingParameter.mappedObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1800_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1800_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1801_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_ROM.x1801_TPDOCommunicationParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1801_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1801_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1801_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1801_TPDOCommunicationParameter.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1801_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1801_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1802_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_ROM.x1802_TPDOCommunicationParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1802_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1802_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1802_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1802_TPDOCommunicationParameter.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1802_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1802_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1803_TPDOCommunicationParameter = {
        {
            .dataOrig = &OD_ROM.x1803_TPDOCommunicationParameter.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1803_TPDOCommunicationParameter.COB_IDUsedByTPDO,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1803_TPDOCommunicationParameter.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1803_TPDOCommunicationParameter.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1803_TPDOCommunicationParameter.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1803_TPDOCommunicationParameter.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_ROM.x1803_TPDOCommunicationParameter.SYNCStartValue,
            .subIndex = 6,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1A00_TPDOMappingParameter = {
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.numberOfMappedObjects,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.mappedObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.mappedObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.mappedObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.mappedObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.mappedObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.mappedObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.mappedObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A00_TPDOMappingParameter.mappedObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A01_TPDOMappingParameter = {
        {
            .dataOrig = &OD_ROM.x1A01_TPDOMappingParameter.numberOfMappedObjects,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1A01_TPDOMappingParameter.mappedObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A01_TPDOMappingParameter.mappedObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A01_TPDOMappingParameter.mappedObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A01_TPDOMappingParameter.mappedObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A01_TPDOMappingParameter.mappedObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A01_TPDOMappingParameter.mappedObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A01_TPDOMappingParameter.mappedObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A01_TPDOMappingParameter.mappedObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A02_TPDOMappingParameter = {
        {
            .dataOrig = &OD_ROM.x1A02_TPDOMappingParameter.numberOfMappedObjects,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1A02_TPDOMappingParameter.mappedObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A02_TPDOMappingParameter.mappedObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A02_TPDOMappingParameter.mappedObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A02_TPDOMappingParameter.mappedObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A02_TPDOMappingParameter.mappedObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A02_TPDOMappingParameter.mappedObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A02_TPDOMappingParameter.mappedObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A02_TPDOMappingParameter.mappedObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A03_TPDOMappingParameter = {
        {
            .dataOrig = &OD_ROM.x1A03_TPDOMappingParameter.numberOfMappedObjects,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_ROM.x1A03_TPDOMappingParameter.mappedObject_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A03_TPDOMappingParameter.mappedObject_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A03_TPDOMappingParameter.mappedObject_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A03_TPDOMappingParameter.mappedObject_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A03_TPDOMappingParameter.mappedObject_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A03_TPDOMappingParameter.mappedObject_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A03_TPDOMappingParameter.mappedObject_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_ROM.x1A03_TPDOMappingParameter.mappedObject_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1F80_NMTStartup = {
        .dataOrig = &OD_ROM.x1F80_NMTStartup,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_2100_errorStatusBits = {
        .dataOrig = &OD_RAM.x2100_errorStatusBits[0],
        .attribute = ODA_SDO_R | ODA_TRPDO,
        .dataLength = 10
    },
    .o_2101_CANNodeID = {
        .dataOrig = &OD_ROM.x2101_CANNodeID,
        .attribute = ODA_SDO_RW,
        .dataLength = 1
    },
    .o_2102_CANBitRate = {
        .dataOrig = &OD_ROM.x2102_CANBitRate,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_2103_SYNCCounter = {
        .dataOrig = &OD_RAM.x2103_SYNCCounter,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_2104_SYNCTime = {
        .dataOrig = &OD_RAM.x2104_SYNCTime,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 2
    },
    .o_2106_power_onCounter = {
        .dataOrig = &OD_EEPROM.x2106_power_onCounter,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_2107_performance = {
        .dataOrig0 = &OD_RAM.x2107_performance_sub0,
        .dataOrig = &OD_RAM.x2107_performance[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(uint16_t)
    },
    .o_2108_temperature = {
        .dataOrig0 = &OD_RAM.x2108_temperature_sub0,
        .dataOrig = &OD_RAM.x2108_temperature[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_2109_voltage = {
        .dataOrig0 = &OD_RAM.x2109_voltage_sub0,
        .dataOrig = &OD_RAM.x2109_voltage[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_2110_variableInt32 = {
        .dataOrig0 = &OD_RAM.x2110_variableInt32_sub0,
        .dataOrig = &OD_RAM.x2110_variableInt32[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(int32_t)
    },
    .o_2111_variableROM_Int32 = {
        .dataOrig0 = &OD_ROM.x2111_variableROM_Int32_sub0,
        .dataOrig = &OD_ROM.x2111_variableROM_Int32[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(int32_t)
    },
    .o_2112_variableNV_Int32 = {
        .dataOrig0 = &OD_EEPROM.x2112_variableNV_Int32_sub0,
        .dataOrig = &OD_EEPROM.x2112_variableNV_Int32[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(int32_t)
    },
    .o_2120_testVar = {
        {
            .dataOrig = &OD_RAM.x2120_testVar.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x2120_testVar.I64,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 8
        },
        {
            .dataOrig = &OD_RAM.x2120_testVar.U64,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 8
        },
        {
            .dataOrig = &OD_RAM.x2120_testVar.R32,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x2120_testVar.R64,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 8
        },
        {
            .dataOrig = NULL,
            .subIndex = 5,
            .attribute = ODA_SDO_RW,
            .dataLength = 0
        }
    },
    .o_2130_time = {
        {
            .dataOrig = &OD_RAM.x2130_time.maxSub_index,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x2130_time.string[0],
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 30
        },
        {
            .dataOrig = &OD_RAM.x2130_time.epochTimeBaseMs,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 8
        },
        {
            .dataOrig = &OD_RAM.x2130_time.epochTimeOffsetMs,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
            .dataLength = 4
        }
    },
    .o_6000_readInput_8_bit = {
        .dataOrig0 = &OD_RAM.x6000_readInput_8_bit_sub0,
        .dataOrig = &OD_RAM.x6000_readInput_8_bit[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_R | ODA_TRPDO,
        .dataElementLength = 1,
        .dataElementSizeof = sizeof(uint8_t)
    },
    .o_6200_writeOutput_8_bit = {
        .dataOrig0 = &OD_RAM.x6200_writeOutput_8_bit_sub0,
        .dataOrig = &OD_RAM.x6200_writeOutput_8_bit[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_RW | ODA_TRPDO,
        .dataElementLength = 1,
        .dataElementSizeof = sizeof(uint8_t)
    },
    .o_6401_readAnalogueInput_16_bit = {
        .dataOrig0 = &OD_RAM.x6401_readAnalogueInput_16_bit_sub0,
        .dataOrig = &OD_RAM.x6401_readAnalogueInput_16_bit[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_6411_writeAnalogueOutput_16_bit = {
        .dataOrig0 = &OD_RAM.x6411_writeAnalogueOutput_16_bit_sub0,
        .dataOrig = &OD_RAM.x6411_writeAnalogueOutput_16_bit[0],
        .attribute0 = ODA_SDO_R | ODA_TRPDO,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    }
};


/*******************************************************************************
    Object dictionary
*******************************************************************************/
static OD_entry_t ODList[] = {
    {0x1000, 0x01, ODT_VAR, &ODObjs.o_1000_deviceType, NULL},
    {0x1001, 0x01, ODT_VAR, &ODObjs.o_1001_errorRegister, NULL},
    {0x1002, 0x01, ODT_VAR, &ODObjs.o_1002_manufacturerStatusRegister, NULL},
    {0x1003, 0x09, ODT_ARR, &ODObjs.o_1003_pre_definedErrorField, NULL},
    {0x1005, 0x01, ODT_VAR, &ODObjs.o_1005_COB_ID_SYNCMessage, NULL},
    {0x1006, 0x01, ODT_VAR, &ODObjs.o_1006_communicationCyclePeriod, NULL},
    {0x1007, 0x01, ODT_VAR, &ODObjs.o_1007_synchronousWindowLength, NULL},
    {0x1008, 0x01, ODT_VAR, &ODObjs.o_1008_manufacturerDeviceName, NULL},
    {0x1009, 0x01, ODT_VAR, &ODObjs.o_1009_manufacturerHardwareVersion, NULL},
    {0x100A, 0x01, ODT_VAR, &ODObjs.o_100A_manufacturerSoftwareVersion, NULL},
    {0x1010, 0x02, ODT_ARR, &ODObjs.o_1010_storeParameters, NULL},
    {0x1011, 0x02, ODT_ARR, &ODObjs.o_1011_restoreDefaultParameters, NULL},
    {0x1012, 0x01, ODT_VAR, &ODObjs.o_1012_COB_ID_TIME, NULL},
    {0x1014, 0x01, ODT_VAR, &ODObjs.o_1014_COB_ID_EMCY, NULL},
    {0x1015, 0x01, ODT_VAR, &ODObjs.o_1015_inhibitTimeEMCY, NULL},
    {0x1016, 0x05, ODT_ARR, &ODObjs.o_1016_consumerHeartbeatTime, NULL},
    {0x1017, 0x01, ODT_VAR, &ODObjs.o_1017_producerHeartbeatTime, NULL},
    {0x1018, 0x05, ODT_REC, &ODObjs.o_1018_identity, NULL},
    {0x1019, 0x01, ODT_VAR, &ODObjs.o_1019_synchronousCounterOverflowValue, NULL},
    {0x1029, 0x07, ODT_ARR, &ODObjs.o_1029_errorBehavior, NULL},
    {0x1200, 0x03, ODT_REC, &ODObjs.o_1200_SDOServerParameter, NULL},
    {0x1280, 0x04, ODT_REC, &ODObjs.o_1280_SDOClientParameter, NULL},
    {0x1400, 0x03, ODT_REC, &ODObjs.o_1400_RPDOCommunicationParameter, NULL},
    {0x1401, 0x03, ODT_REC, &ODObjs.o_1401_RPDOCommunicationParameter, NULL},
    {0x1402, 0x03, ODT_REC, &ODObjs.o_1402_RPDOCommunicationParameter, NULL},
    {0x1403, 0x03, ODT_REC, &ODObjs.o_1403_RPDOCommunicationParameter, NULL},
    {0x1600, 0x09, ODT_REC, &ODObjs.o_1600_RPDOMappingParameter, NULL},
    {0x1601, 0x09, ODT_REC, &ODObjs.o_1601_RPDOMappingParameter, NULL},
    {0x1602, 0x09, ODT_REC, &ODObjs.o_1602_RPDOMappingParameter, NULL},
    {0x1603, 0x09, ODT_REC, &ODObjs.o_1603_RPDOMappingParameter, NULL},
    {0x1800, 0x07, ODT_REC, &ODObjs.o_1800_TPDOCommunicationParameter, NULL},
    {0x1801, 0x07, ODT_REC, &ODObjs.o_1801_TPDOCommunicationParameter, NULL},
    {0x1802, 0x07, ODT_REC, &ODObjs.o_1802_TPDOCommunicationParameter, NULL},
    {0x1803, 0x07, ODT_REC, &ODObjs.o_1803_TPDOCommunicationParameter, NULL},
    {0x1A00, 0x09, ODT_REC, &ODObjs.o_1A00_TPDOMappingParameter, NULL},
    {0x1A01, 0x09, ODT_REC, &ODObjs.o_1A01_TPDOMappingParameter, NULL},
    {0x1A02, 0x09, ODT_REC, &ODObjs.o_1A02_TPDOMappingParameter, NULL},
    {0x1A03, 0x09, ODT_REC, &ODObjs.o_1A03_TPDOMappingParameter, NULL},
    {0x1F80, 0x01, ODT_VAR, &ODObjs.o_1F80_NMTStartup, NULL},
    {0x2100, 0x01, ODT_VAR, &ODObjs.o_2100_errorStatusBits, NULL},
    {0x2101, 0x01, ODT_VAR, &ODObjs.o_2101_CANNodeID, NULL},
    {0x2102, 0x01, ODT_VAR, &ODObjs.o_2102_CANBitRate, NULL},
    {0x2103, 0x01, ODT_VAR, &ODObjs.o_2103_SYNCCounter, NULL},
    {0x2104, 0x01, ODT_VAR, &ODObjs.o_2104_SYNCTime, NULL},
    {0x2106, 0x01, ODT_VAR, &ODObjs.o_2106_power_onCounter, NULL},
    {0x2107, 0x06, ODT_ARR, &ODObjs.o_2107_performance, NULL},
    {0x2108, 0x02, ODT_ARR, &ODObjs.o_2108_temperature, NULL},
    {0x2109, 0x02, ODT_ARR, &ODObjs.o_2109_voltage, NULL},
    {0x2110, 0x11, ODT_ARR, &ODObjs.o_2110_variableInt32, NULL},
    {0x2111, 0x11, ODT_ARR, &ODObjs.o_2111_variableROM_Int32, NULL},
    {0x2112, 0x11, ODT_ARR, &ODObjs.o_2112_variableNV_Int32, NULL},
    {0x2120, 0x06, ODT_REC, &ODObjs.o_2120_testVar, NULL},
    {0x2130, 0x04, ODT_REC, &ODObjs.o_2130_time, NULL},
    {0x6000, 0x09, ODT_ARR, &ODObjs.o_6000_readInput_8_bit, NULL},
    {0x6200, 0x09, ODT_ARR, &ODObjs.o_6200_writeOutput_8_bit, NULL},
    {0x6401, 0x0D, ODT_ARR, &ODObjs.o_6401_readAnalogueInput_16_bit, NULL},
    {0x6411, 0x09, ODT_ARR, &ODObjs.o_6411_writeAnalogueOutput_16_bit, NULL},
    {0x0000, 0x00, 0, NULL, NULL}
};

static OD_t _OD = {
    (sizeof(ODList) / sizeof(ODList[0])) - 1,
    &ODList[0]
};

OD_t *OD = &_OD;

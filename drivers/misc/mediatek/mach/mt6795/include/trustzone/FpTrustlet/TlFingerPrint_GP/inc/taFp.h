#ifndef __TA_FP_H__
#define __TA_FP_H__

#include <fnFpError.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Service-specific Command identifiers **/
#define CMD_BASE                        1000
#define CMD_INIT                        (CMD_BASE + 1)
#define CMD_RESET                       (CMD_INIT + 1)
#define CMD_SET_MODE                    (CMD_RESET + 1)
#define CMD_GET_MODE                    (CMD_SET_MODE + 1)
#define CMD_REGISTER                    (CMD_GET_MODE + 1)
#define CMD_CANCEL_REGISTER             (CMD_REGISTER + 1)
#define CMD_SAVE_REGISTER               (CMD_CANCEL_REGISTER + 1)
#define CMD_RECOGNIZE                   (CMD_SAVE_REGISTER + 1)
#define CMD_DEL_FP_TEMPLATE             (CMD_RECOGNIZE + 1)
#define CMD_GET_FP_TEMPLATE_ID_LIST     (CMD_DEL_FP_TEMPLATE + 1)
#define CMD_VERIFY_FP_PSW               (CMD_GET_FP_TEMPLATE_ID_LIST + 1)
#define CMD_CHANGE_FP_PSW               (CMD_VERIFY_FP_PSW + 1)
#define CMD_LOAD_FP_ALGO_PARAMS         (CMD_CHANGE_FP_PSW + 1)
#define CMD_CANCEL_RECOGNIZE            (CMD_LOAD_FP_ALGO_PARAMS + 1)
#define CMD_GET_FP_NAME_BY_ID           (CMD_CANCEL_RECOGNIZE + 1)
#define CMD_CHANGE_FP_NAME_BY_ID        (CMD_GET_FP_NAME_BY_ID + 1)
#define CMD_DRIVER_TEST                 (CMD_CHANGE_FP_NAME_BY_ID + 1)
#define CMD_REINIT                      (CMD_DRIVER_TEST + 1)

#define CMD_INIT_TEE_PARAM_TYPES                        TEE_PARAM_TYPES(TEE_PARAM_TYPE_VALUE_INPUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_RESET_TEE_PARAM_TYPES                       TEE_PARAM_TYPES(TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_GET_MODE_TEE_PARAM_TYPES                    TEE_PARAM_TYPES(TEE_PARAM_TYPE_VALUE_OUTPUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_SET_MODE_TEE_PARAM_TYPES                    TEE_PARAM_TYPES(TEE_PARAM_TYPE_VALUE_INPUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_REGISTER_TEE_PARAM_TYPES                    TEE_PARAM_TYPES(TEE_PARAM_TYPE_VALUE_INOUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_CANCEL_REGISTER_TEE_PARAM_TYPES             TEE_PARAM_TYPES(TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_SAVE_REGISTER_TEE_PARAM_TYPES               TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INPUT, TEE_PARAM_TYPE_VALUE_INOUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_RECOGNIZE_TEE_PARAM_TYPES                   TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INPUT, TEE_PARAM_TYPE_VALUE_INOUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_DEL_FP_TEMPLATE_TEE_PARAM_TYPES             TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INPUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_GET_FP_TEMPLATE_ID_LIST_TEE_PARAM_TYPES     TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INOUT, TEE_PARAM_TYPE_VALUE_INOUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_ALGODATA_INIT_TEE_PARAM_TYPES               TEE_PARAM_TYPES(TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_VERIFY_FP_PSW_TEE_PARAM_TYPES               TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INOUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_CHANGE_FP_PSW_TEE_PARAM_TYPES               TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INOUT, TEE_PARAM_TYPE_MEMREF_INOUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_LOAD_FP_ALGO_PARAMS_TEE_PARAM_TYPES         TEE_PARAM_TYPES(TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_CANCEL_RECOGNIZE_TEE_PARAM_TYPES            TEE_PARAM_TYPES(TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_GET_FP_NAME_BY_ID_TEE_PARAM_TYPES           TEE_PARAM_TYPES(TEE_PARAM_TYPE_VALUE_INOUT, TEE_PARAM_TYPE_MEMREF_INOUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_CHANGE_FP_NAME_BY_ID_TEE_PARAM_TYPES        TEE_PARAM_TYPES(TEE_PARAM_TYPE_VALUE_INPUT, TEE_PARAM_TYPE_MEMREF_INPUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_DRIVER_TEST_TEE_PARAM_TYPES                 TEE_PARAM_TYPES(TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)
#define CMD_REINIT_TEE_PARAM_TYPES                      TEE_PARAM_TYPES(TEE_PARAM_TYPE_VALUE_INPUT, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE, TEE_PARAM_TYPE_NONE)

#ifdef __cplusplus
}
#endif

#endif // __TA_FP_H__

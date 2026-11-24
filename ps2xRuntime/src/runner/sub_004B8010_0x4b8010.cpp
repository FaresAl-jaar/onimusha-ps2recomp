#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8010
// Address: 0x4b8010 - 0x4b8020
void sub_004B8010_0x4b8010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8010_0x4b8010");
#endif

    ctx->pc = 0x4b8010u;

    // 0x4b8010: 0x1ff0000  .word       0x01FF0000                   # sll         $zero, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8010u;
    
    // 0x4b8014: 0xdf0000  .word       0x00DF0000                   # sll         $zero, $ra, 0 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8014u;
    
    // 0x4b8018: 0x1ff0000  .word       0x01FF0000                   # sll         $zero, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b8018u;
    
    // 0x4b801c: 0xdf0000  .word       0x00DF0000                   # sll         $zero, $ra, 0 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4b801cu;
    
    ctx->pc = 0x4b8020u;
}

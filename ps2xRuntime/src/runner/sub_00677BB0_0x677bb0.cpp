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

// Function: sub_00677BB0
// Address: 0x677bb0 - 0x677bbc
void sub_00677BB0_0x677bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00677BB0_0x677bb0");
#endif

    ctx->pc = 0x677bb0u;

    // 0x677bb0: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x677bb0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x677bb4: 0x0  nop
    ctx->pc = 0x677bb4u;
    // NOP
    // 0x677bb8: 0x3e257325  .word       0x3E257325                   # lui         $a1, 0x7325 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x677bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29477 << 16));
    ctx->pc = 0x677bbcu;
}

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

// Function: sub_004E5A20
// Address: 0x4e5a20 - 0x4e5a30
void sub_004E5A20_0x4e5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5A20_0x4e5a20");
#endif

    ctx->pc = 0x4e5a20u;

    // 0x4e5a20: 0x3fa00000  .word       0x3FA00000                   # lui         $zero, 0x0 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a20u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e5a24: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a24u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e5a28: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a28u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e5a2c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x4e5a2cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    ctx->pc = 0x4e5a30u;
}

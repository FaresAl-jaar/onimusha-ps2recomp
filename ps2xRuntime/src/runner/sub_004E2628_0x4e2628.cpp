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

// Function: sub_004E2628
// Address: 0x4e2628 - 0x4e2638
void sub_004E2628_0x4e2628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2628_0x4e2628");
#endif

    ctx->pc = 0x4e2628u;

    // 0x4e2628: 0x0  nop
    ctx->pc = 0x4e2628u;
    // NOP
    // 0x4e262c: 0xa80000  .word       0x00A80000                   # sll         $zero, $t0, 0 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e262cu;
    
    // 0x4e2630: 0x1e00fa  dsrl        $zero, $fp, 3
    ctx->pc = 0x4e2630u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> 3);
    // 0x4e2634: 0x0  nop
    ctx->pc = 0x4e2634u;
    // NOP
    ctx->pc = 0x4e2638u;
}

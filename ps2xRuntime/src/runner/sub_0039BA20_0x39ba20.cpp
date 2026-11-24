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

// Function: sub_0039BA20
// Address: 0x39ba20 - 0x39ba40
void sub_0039BA20_0x39ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BA20_0x39ba20");
#endif

    ctx->pc = 0x39ba20u;

    // 0x39ba20: 0x90822b4a  lbu         $v0, 0x2B4A($a0)
    ctx->pc = 0x39ba20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11082)));
    // 0x39ba24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BA24u;
    {
        const bool branch_taken_0x39ba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ba24) {
            ctx->pc = 0x39BA38u;
            goto label_39ba38;
        }
    }
    ctx->pc = 0x39BA2Cu;
    // 0x39ba2c: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x39ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39ba30: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x39ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x39ba34: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x39ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_39ba38:
    // 0x39ba38: 0x80a4e30  j           func_2938C0
    ctx->pc = 0x39BA38u;
    ctx->pc = 0x2938C0u;
    sub_002938C0_0x2938c0(rdram, ctx, runtime); return;
    ctx->pc = 0x39BA40u;
}

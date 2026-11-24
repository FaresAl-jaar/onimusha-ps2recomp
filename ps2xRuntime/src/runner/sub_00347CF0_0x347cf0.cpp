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

// Function: sub_00347CF0
// Address: 0x347cf0 - 0x347d38
void sub_00347CF0_0x347cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347CF0_0x347cf0");
#endif

    ctx->pc = 0x347cf0u;

    // 0x347cf0: 0x94832ad0  lhu         $v1, 0x2AD0($a0)
    ctx->pc = 0x347cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10960)));
    // 0x347cf4: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x347cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x347cf8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347CF8u;
    {
        const bool branch_taken_0x347cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CF8u;
        // 0x347cfc: 0x2462ff9c  addiu       $v0, $v1, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347cf8) {
            ctx->pc = 0x347D10u;
            goto label_347d10;
        }
    }
    ctx->pc = 0x347D00u;
    // 0x347d00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347d04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x347d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x347d08: 0xa0822ac1  sb          $v0, 0x2AC1($a0)
    ctx->pc = 0x347d08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10945), (uint8_t)GPR_U32(ctx, 2));
    // 0x347d0c: 0x0  nop
    ctx->pc = 0x347d0cu;
    // NOP
label_347d10:
    // 0x347d10: 0x94832ad2  lhu         $v1, 0x2AD2($a0)
    ctx->pc = 0x347d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10962)));
    // 0x347d14: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x347d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x347d18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347D18u;
    {
        const bool branch_taken_0x347d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347D18u;
        // 0x347d1c: 0x2462ff9c  addiu       $v0, $v1, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347d18) {
            ctx->pc = 0x347D30u;
            goto label_347d30;
        }
    }
    ctx->pc = 0x347D20u;
    // 0x347d20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347d24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x347d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x347d28: 0xa0822ac0  sb          $v0, 0x2AC0($a0)
    ctx->pc = 0x347d28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10944), (uint8_t)GPR_U32(ctx, 2));
    // 0x347d2c: 0x0  nop
    ctx->pc = 0x347d2cu;
    // NOP
label_347d30:
    // 0x347d30: 0x80a6998  j           func_29A660
    ctx->pc = 0x347D30u;
    ctx->pc = 0x29A660u;
    sub_0029A660_0x29a660(rdram, ctx, runtime); return;
    ctx->pc = 0x347D38u;
}

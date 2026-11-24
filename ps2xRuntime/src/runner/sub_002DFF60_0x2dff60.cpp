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

// Function: sub_002DFF60
// Address: 0x2dff60 - 0x2dffc0
void sub_002DFF60_0x2dff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFF60_0x2dff60");
#endif

    ctx->pc = 0x2dff60u;

    // 0x2dff60: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dff64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2dff64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2dff68: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2dff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2dff6c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dff6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dff70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dff74: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2dff74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2dff78: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2dff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dff7c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2dff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2dff80: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFF80u;
    {
        const bool branch_taken_0x2dff80 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF80u;
        // 0x2dff84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff80) {
            ctx->pc = 0x2DFF94u;
            goto label_2dff94;
        }
    }
    ctx->pc = 0x2DFF88u;
    // 0x2dff88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dff88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dff8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFF8Cu;
    {
        const bool branch_taken_0x2dff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF8Cu;
        // 0x2dff90: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff8c) {
            ctx->pc = 0x2DFFACu;
            goto label_2dffac;
        }
    }
    ctx->pc = 0x2DFF94u;
label_2dff94:
    // 0x2dff94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dff94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dff98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2dff98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dff9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dff9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dffa0: 0x0  nop
    ctx->pc = 0x2dffa0u;
    // NOP
    // 0x2dffa4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2dffa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dffa8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2dffa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2dffac:
    // 0x2dffac: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x2dffacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x2dffb0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2dffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2dffb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dffb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dffb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFB8u;
        // 0x2dffbc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFFC0u;
}

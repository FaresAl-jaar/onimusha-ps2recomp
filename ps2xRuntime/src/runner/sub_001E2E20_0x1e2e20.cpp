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

// Function: sub_001E2E20
// Address: 0x1e2e20 - 0x1e2e94
void sub_001E2E20_0x1e2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2E20_0x1e2e20");
#endif

    ctx->pc = 0x1e2e20u;

    // 0x1e2e20: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1e2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e2e24: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e2e28: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1e2e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x1e2e2c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1e2e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e2e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2e34: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1e2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x1e2e38: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1e2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e2e3c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1e2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x1e2e40: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2E40u;
    {
        const bool branch_taken_0x1e2e40 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1E2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E40u;
        // 0x1e2e44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e40) {
            ctx->pc = 0x1E2E54u;
            goto label_1e2e54;
        }
    }
    ctx->pc = 0x1E2E48u;
    // 0x1e2e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2e4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2E4Cu;
    {
        const bool branch_taken_0x1e2e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E4Cu;
        // 0x1e2e50: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e4c) {
            ctx->pc = 0x1E2E6Cu;
            goto label_1e2e6c;
        }
    }
    ctx->pc = 0x1E2E54u;
label_1e2e54:
    // 0x1e2e54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e2e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e2e58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e2e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e2e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2e60: 0x0  nop
    ctx->pc = 0x1e2e60u;
    // NOP
    // 0x1e2e64: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e2e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e2e68: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1e2e68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1e2e6c:
    // 0x1e2e6c: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x1e2e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x1e2e70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2e74: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1e2e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1e2e78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e2e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2e80: 0x0  nop
    ctx->pc = 0x1e2e80u;
    // NOP
    // 0x1e2e84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e2e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e2e88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e2e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e2e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E8Cu;
        // 0x1e2e90: 0x46006002  mul.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2E94u;
}

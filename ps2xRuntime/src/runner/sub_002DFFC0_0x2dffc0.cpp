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

// Function: sub_002DFFC0
// Address: 0x2dffc0 - 0x2e0030
void sub_002DFFC0_0x2dffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFFC0_0x2dffc0");
#endif

    ctx->pc = 0x2dffc0u;

    // 0x2dffc0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dffc4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2dffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2dffc8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2dffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2dffcc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dffccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dffd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dffd4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2dffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2dffd8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2dffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dffdc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2dffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2dffe0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFFE0u;
    {
        const bool branch_taken_0x2dffe0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFE0u;
        // 0x2dffe4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dffe0) {
            ctx->pc = 0x2DFFF4u;
            goto label_2dfff4;
        }
    }
    ctx->pc = 0x2DFFE8u;
    // 0x2dffe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dffe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dffec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFFECu;
    {
        const bool branch_taken_0x2dffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFECu;
        // 0x2dfff0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dffec) {
            ctx->pc = 0x2E000Cu;
            goto label_2e000c;
        }
    }
    ctx->pc = 0x2DFFF4u;
label_2dfff4:
    // 0x2dfff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dfff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dfff8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2dfff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dfffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dfffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0000: 0x0  nop
    ctx->pc = 0x2e0000u;
    // NOP
    // 0x2e0004: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2e0004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e0008: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e0008u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2e000c:
    // 0x2e000c: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x2e000cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x2e0010: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e0010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0014: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2e0014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2e0018: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e0018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e001c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e001cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0020: 0x0  nop
    ctx->pc = 0x2e0020u;
    // NOP
    // 0x2e0024: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e0024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e0028: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0028u;
        // 0x2e002c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0030u;
}

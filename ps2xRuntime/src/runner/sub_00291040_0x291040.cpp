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

// Function: sub_00291040
// Address: 0x291040 - 0x291098
void sub_00291040_0x291040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291040_0x291040");
#endif

    switch (ctx->pc) {
        case 0x291060u: goto label_291060;
        default: break;
    }

    ctx->pc = 0x291040u;

    // 0x291040: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x291040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291044: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291048: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x291048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29104c: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x29104cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x291050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291058: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x291058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x29105c: 0x0  nop
    ctx->pc = 0x29105cu;
    // NOP
label_291060:
    // 0x291060: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x291060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x291064: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291064u;
    {
        const bool branch_taken_0x291064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291064u;
        // 0x291068: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291064) {
            ctx->pc = 0x291078u;
            goto label_291078;
        }
    }
    ctx->pc = 0x29106Cu;
    // 0x29106c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x291070: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x291070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291074: 0x0  nop
    ctx->pc = 0x291074u;
    // NOP
label_291078:
    // 0x291078: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x291078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29107c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x29107cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x291080: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x291080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x291084: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x291084u;
    {
        const bool branch_taken_0x291084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291084u;
        // 0x291088: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291084) {
            ctx->pc = 0x291060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291060;
        }
    }
    ctx->pc = 0x29108Cu;
    // 0x29108c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29108cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291090: 0x3e00008  jr          $ra
    ctx->pc = 0x291090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291090u;
        // 0x291094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291098u;
}

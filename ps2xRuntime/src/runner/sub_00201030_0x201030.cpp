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

// Function: sub_00201030
// Address: 0x201030 - 0x201098
void sub_00201030_0x201030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201030_0x201030");
#endif

    switch (ctx->pc) {
        case 0x201044u: goto label_201044;
        case 0x201070u: goto label_201070;
        case 0x20107cu: goto label_20107c;
        default: break;
    }

    ctx->pc = 0x201030u;

    // 0x201030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x201038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20103c: 0xc080496  jal         func_201258
    ctx->pc = 0x20103Cu;
    SET_GPR_U32(ctx, 31, 0x201044u);
    ctx->pc = 0x201040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20103Cu;
    // 0x201040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x20103Cu, 0x201044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201044u;
label_201044:
    // 0x201044: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x201044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x201048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20104c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20104Cu;
    {
        const bool branch_taken_0x20104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20104Cu;
        // 0x201050: 0x34a50201  ori         $a1, $a1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20104c) {
            ctx->pc = 0x201068u;
            goto label_201068;
        }
    }
    ctx->pc = 0x201054u;
    // 0x201054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x201058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20105c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20105cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201060: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x201060u;
    ctx->pc = 0x201064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201060u;
    // 0x201064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x201068u;
label_201068:
    // 0x201068: 0xc0804be  jal         func_2012F8
    ctx->pc = 0x201068u;
    SET_GPR_U32(ctx, 31, 0x201070u);
    ctx->pc = 0x2012F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2012F8u, 0x201068u, 0x201070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201070u;
label_201070:
    // 0x201070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201074: 0xc080428  jal         func_2010A0
    ctx->pc = 0x201074u;
    SET_GPR_U32(ctx, 31, 0x20107Cu);
    ctx->pc = 0x201078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201074u;
    // 0x201078: 0x2405040c  addiu       $a1, $zero, 0x40C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010A0u, 0x201074u, 0x20107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20107Cu;
label_20107c:
    // 0x20107c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201080: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x201080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x201084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20108c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20108cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201090: 0x3e00008  jr          $ra
    ctx->pc = 0x201090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201090u;
        // 0x201094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201098u;
}

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

// Function: sub_0024FB68
// Address: 0x24fb68 - 0x24fbac
void sub_0024FB68_0x24fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FB68_0x24fb68");
#endif

    switch (ctx->pc) {
        case 0x24fb9cu: goto label_24fb9c;
        default: break;
    }

    ctx->pc = 0x24fb68u;

    // 0x24fb68: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24fb6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fb6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fb70: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24fb74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24fb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fb78: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FB78u;
    {
        const bool branch_taken_0x24fb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB78u;
        // 0x24fb7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb78) {
            ctx->pc = 0x24FB90u;
            goto label_24fb90;
        }
    }
    ctx->pc = 0x24FB80u;
    // 0x24fb80: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24fb84: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24fb88: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FB88u;
    {
        const bool branch_taken_0x24fb88 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB88u;
        // 0x24fb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb88) {
            ctx->pc = 0x24FBA0u;
            goto label_24fba0;
        }
    }
    ctx->pc = 0x24FB90u;
label_24fb90:
    // 0x24fb90: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24fb94: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24FB94u;
    SET_GPR_U32(ctx, 31, 0x24FB9Cu);
    ctx->pc = 0x24FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FB94u;
    // 0x24fb98: 0x2484e970  addiu       $a0, $a0, -0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24FB94u, 0x24FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB9Cu;
label_24fb9c:
    // 0x24fb9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24fb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fba0:
    // 0x24fba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fba4: 0x3e00008  jr          $ra
    ctx->pc = 0x24FBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBA4u;
        // 0x24fba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FBACu;
}

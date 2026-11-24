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

// Function: sub_00349FA0
// Address: 0x349fa0 - 0x34a000
void sub_00349FA0_0x349fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349FA0_0x349fa0");
#endif

    switch (ctx->pc) {
        case 0x349fb4u: goto label_349fb4;
        case 0x349fc0u: goto label_349fc0;
        case 0x349fdcu: goto label_349fdc;
        default: break;
    }

    ctx->pc = 0x349fa0u;

    // 0x349fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349fa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349fac: 0xc0e0940  jal         func_382500
    ctx->pc = 0x349FACu;
    SET_GPR_U32(ctx, 31, 0x349FB4u);
    ctx->pc = 0x349FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349FACu;
    // 0x349fb0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382500u, 0x349FACu, 0x349FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349FB4u;
label_349fb4:
    // 0x349fb4: 0x8f918ba8  lw          $s1, -0x7458($gp)
    ctx->pc = 0x349fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x349fb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x349fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349fbc: 0x0  nop
    ctx->pc = 0x349fbcu;
    // NOP
label_349fc0:
    // 0x349fc0: 0x9223005f  lbu         $v1, 0x5F($s1)
    ctx->pc = 0x349fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 95)));
    // 0x349fc4: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x349fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x349fc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x349fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349fcc: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x349fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x349fd0: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x349fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x349fd4: 0xc0e098c  jal         func_382630
    ctx->pc = 0x349FD4u;
    SET_GPR_U32(ctx, 31, 0x349FDCu);
    ctx->pc = 0x349FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349FD4u;
    // 0x349fd8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382630u, 0x349FD4u, 0x349FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349FDCu;
label_349fdc:
    // 0x349fdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x349fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x349fe0: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x349fe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x349fe4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x349FE4u;
    {
        const bool branch_taken_0x349fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x349FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FE4u;
        // 0x349fe8: 0x26310064  addiu       $s1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349fe4) {
            ctx->pc = 0x349FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349fc0;
        }
    }
    ctx->pc = 0x349FECu;
    // 0x349fec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x349fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x349FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FF8u;
        // 0x349ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A000u;
}

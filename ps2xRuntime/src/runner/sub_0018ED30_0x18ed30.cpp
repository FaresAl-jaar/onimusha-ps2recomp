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

// Function: sub_0018ED30
// Address: 0x18ed30 - 0x18ed98
void sub_0018ED30_0x18ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018ED30_0x18ed30");
#endif

    switch (ctx->pc) {
        case 0x18ed54u: goto label_18ed54;
        case 0x18ed58u: goto label_18ed58;
        case 0x18ed68u: goto label_18ed68;
        case 0x18ed70u: goto label_18ed70;
        case 0x18ed8cu: goto label_18ed8c;
        default: break;
    }

    ctx->pc = 0x18ed30u;

    // 0x18ed30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ed34: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18ed34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18ed38: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x18ed38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x18ed3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ed40: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x18ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x18ed44: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x18ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x18ed48: 0x24c6eb50  addiu       $a2, $a2, -0x14B0
    ctx->pc = 0x18ed48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962000));
    // 0x18ed4c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x18ED4Cu;
    SET_GPR_U32(ctx, 31, 0x18ED54u);
    ctx->pc = 0x18ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED4Cu;
    // 0x18ed50: 0x24e7eb90  addiu       $a3, $a3, -0x1470 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x18ED4Cu, 0x18ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED54u;
label_18ed54:
    // 0x18ed54: 0x0  nop
    ctx->pc = 0x18ed54u;
    // NOP
label_18ed58:
    // 0x18ed58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18ed5c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x18ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x18ed60: 0xc04c918  jal         func_132460
    ctx->pc = 0x18ED60u;
    SET_GPR_U32(ctx, 31, 0x18ED68u);
    ctx->pc = 0x18ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED60u;
    // 0x18ed64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x18ED60u, 0x18ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED68u;
label_18ed68:
    // 0x18ed68: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x18ED68u;
    SET_GPR_U32(ctx, 31, 0x18ED70u);
    ctx->pc = 0x18ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED68u;
    // 0x18ed6c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x18ED68u, 0x18ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED70u;
label_18ed70:
    // 0x18ed70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18ed70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18ed74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18ed78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18ED78u;
    {
        const bool branch_taken_0x18ed78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED78u;
        // 0x18ed7c: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed78) {
            ctx->pc = 0x18ED58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ed58;
        }
    }
    ctx->pc = 0x18ED80u;
    // 0x18ed80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ed84: 0xc04c918  jal         func_132460
    ctx->pc = 0x18ED84u;
    SET_GPR_U32(ctx, 31, 0x18ED8Cu);
    ctx->pc = 0x18ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED84u;
    // 0x18ed88: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x18ED84u, 0x18ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED8Cu;
label_18ed8c:
    // 0x18ed8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ed8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ed90: 0x3e00008  jr          $ra
    ctx->pc = 0x18ED90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED90u;
        // 0x18ed94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ED90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ED98u;
}

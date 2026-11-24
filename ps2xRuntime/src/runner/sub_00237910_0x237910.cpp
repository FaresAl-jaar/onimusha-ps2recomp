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

// Function: sub_00237910
// Address: 0x237910 - 0x237960
void sub_00237910_0x237910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237910_0x237910");
#endif

    switch (ctx->pc) {
        case 0x23792cu: goto label_23792c;
        case 0x237930u: goto label_237930;
        case 0x237938u: goto label_237938;
        default: break;
    }

    ctx->pc = 0x237910u;

    // 0x237910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23791c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23791cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237924: 0xc08de12  jal         func_237848
    ctx->pc = 0x237924u;
    SET_GPR_U32(ctx, 31, 0x23792Cu);
    ctx->pc = 0x237928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237924u;
    // 0x237928: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237848u, 0x237924u, 0x23792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23792Cu;
label_23792c:
    // 0x23792c: 0x0  nop
    ctx->pc = 0x23792cu;
    // NOP
label_237930:
    // 0x237930: 0xc08c73e  jal         func_231CF8
    ctx->pc = 0x237930u;
    SET_GPR_U32(ctx, 31, 0x237938u);
    ctx->pc = 0x231CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CF8u, 0x237930u, 0x237938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237938u;
label_237938:
    // 0x237938: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x237938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x23793c: 0x1451fffc  bne         $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23793Cu;
    {
        const bool branch_taken_0x23793c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x23793c) {
            ctx->pc = 0x237930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237930;
        }
    }
    ctx->pc = 0x237944u;
    // 0x237944: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x237944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x237948: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x237948u;
    {
        const bool branch_taken_0x237948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237948u;
        // 0x23794c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237948) {
            ctx->pc = 0x237930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237930;
        }
    }
    ctx->pc = 0x237950u;
    // 0x237950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237954: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237958: 0x3e00008  jr          $ra
    ctx->pc = 0x237958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237958u;
        // 0x23795c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237960u;
}

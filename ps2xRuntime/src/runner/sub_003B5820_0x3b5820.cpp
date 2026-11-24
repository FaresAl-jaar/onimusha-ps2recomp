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

// Function: sub_003B5820
// Address: 0x3b5820 - 0x3b5894
void sub_003B5820_0x3b5820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5820_0x3b5820");
#endif

    switch (ctx->pc) {
        case 0x3b5860u: goto label_3b5860;
        case 0x3b5874u: goto label_3b5874;
        case 0x3b5880u: goto label_3b5880;
        case 0x3b5888u: goto label_3b5888;
        default: break;
    }

    ctx->pc = 0x3b5820u;

    // 0x3b5820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b5820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b5824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b5828: 0x90850011  lbu         $a1, 0x11($a0)
    ctx->pc = 0x3b5828u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3b582c: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3b582cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3b5830: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B5830u;
    {
        const bool branch_taken_0x3b5830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5830u;
        // 0x3b5834: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5830) {
            ctx->pc = 0x3B5888u;
            goto label_3b5888;
        }
    }
    ctx->pc = 0x3B5838u;
    // 0x3b5838: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3b5838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3b583c: 0xa0830009  sb          $v1, 0x9($a0)
    ctx->pc = 0x3b583cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b5840: 0x90840011  lbu         $a0, 0x11($a0)
    ctx->pc = 0x3b5840u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3b5844: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5844u;
    {
        const bool branch_taken_0x3b5844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b5844) {
            ctx->pc = 0x3B5858u;
            goto label_3b5858;
        }
    }
    ctx->pc = 0x3B584Cu;
    // 0x3b584c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B584Cu;
    {
        const bool branch_taken_0x3b584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B584Cu;
        // 0x3b5850: 0xa3808a55  sb          $zero, -0x75AB($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b584c) {
            ctx->pc = 0x3B5868u;
            goto label_3b5868;
        }
    }
    ctx->pc = 0x3B5854u;
    // 0x3b5854: 0x0  nop
    ctx->pc = 0x3b5854u;
    // NOP
label_3b5858:
    // 0x3b5858: 0xc0d8f34  jal         func_363CD0
    ctx->pc = 0x3B5858u;
    SET_GPR_U32(ctx, 31, 0x3B5860u);
    ctx->pc = 0x363CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363CD0u, 0x3B5858u, 0x3B5860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5860u;
label_3b5860:
    // 0x3b5860: 0xa3828a55  sb          $v0, -0x75AB($gp)
    ctx->pc = 0x3b5860u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b5864: 0x0  nop
    ctx->pc = 0x3b5864u;
    // NOP
label_3b5868:
    // 0x3b5868: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b5868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b586c: 0xc0b3a54  jal         func_2CE950
    ctx->pc = 0x3B586Cu;
    SET_GPR_U32(ctx, 31, 0x3B5874u);
    ctx->pc = 0x3B5870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B586Cu;
    // 0x3b5870: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE950u, 0x3B586Cu, 0x3B5874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5874u;
label_3b5874:
    // 0x3b5874: 0x93858a55  lbu         $a1, -0x75AB($gp)
    ctx->pc = 0x3b5874u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937173)));
    // 0x3b5878: 0xc0e0f10  jal         func_383C40
    ctx->pc = 0x3B5878u;
    SET_GPR_U32(ctx, 31, 0x3B5880u);
    ctx->pc = 0x3B587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5878u;
    // 0x3b587c: 0x93848a54  lbu         $a0, -0x75AC($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C40u, 0x3B5878u, 0x3B5880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5880u;
label_3b5880:
    // 0x3b5880: 0xc0d27e8  jal         func_349FA0
    ctx->pc = 0x3B5880u;
    SET_GPR_U32(ctx, 31, 0x3B5888u);
    ctx->pc = 0x349FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FA0u, 0x3B5880u, 0x3B5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5888u;
label_3b5888:
    // 0x3b5888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b588c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B588Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B588Cu;
        // 0x3b5890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B588Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5894u;
}

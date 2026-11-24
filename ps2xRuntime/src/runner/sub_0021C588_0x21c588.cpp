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

// Function: sub_0021C588
// Address: 0x21c588 - 0x21c638
void sub_0021C588_0x21c588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C588_0x21c588");
#endif

    switch (ctx->pc) {
        case 0x21c5acu: goto label_21c5ac;
        case 0x21c5c0u: goto label_21c5c0;
        case 0x21c5d0u: goto label_21c5d0;
        case 0x21c5e0u: goto label_21c5e0;
        case 0x21c5f8u: goto label_21c5f8;
        case 0x21c608u: goto label_21c608;
        default: break;
    }

    ctx->pc = 0x21c588u;

    // 0x21c588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c58c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21c590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c59c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c5a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c5a4: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21C5A4u;
    SET_GPR_U32(ctx, 31, 0x21C5ACu);
    ctx->pc = 0x21C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C5A4u;
    // 0x21c5a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21C5A4u, 0x21C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5ACu;
label_21c5ac:
    // 0x21c5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C5B0u;
    {
        const bool branch_taken_0x21c5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5B0u;
        // 0x21c5b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5b0) {
            ctx->pc = 0x21C5D8u;
            goto label_21c5d8;
        }
    }
    ctx->pc = 0x21C5B8u;
    // 0x21c5b8: 0xc0888f0  jal         func_2223C0
    ctx->pc = 0x21C5B8u;
    SET_GPR_U32(ctx, 31, 0x21C5C0u);
    ctx->pc = 0x2223C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223C0u, 0x21C5B8u, 0x21C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5C0u;
label_21c5c0:
    // 0x21c5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c5c8: 0xc0888fc  jal         func_2223F0
    ctx->pc = 0x21C5C8u;
    SET_GPR_U32(ctx, 31, 0x21C5D0u);
    ctx->pc = 0x21C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C5C8u;
    // 0x21c5cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223F0u, 0x21C5C8u, 0x21C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5D0u;
label_21c5d0:
    // 0x21c5d0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x21c5d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x21c5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c5d8:
    // 0x21c5d8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21C5D8u;
    SET_GPR_U32(ctx, 31, 0x21C5E0u);
    ctx->pc = 0x21C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C5D8u;
    // 0x21c5dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21C5D8u, 0x21C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5E0u;
label_21c5e0:
    // 0x21c5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21c5e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C5E8u;
    {
        const bool branch_taken_0x21c5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5E8u;
        // 0x21c5ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5e8) {
            ctx->pc = 0x21C60Cu;
            goto label_21c60c;
        }
    }
    ctx->pc = 0x21C5F0u;
    // 0x21c5f0: 0xc0888f0  jal         func_2223C0
    ctx->pc = 0x21C5F0u;
    SET_GPR_U32(ctx, 31, 0x21C5F8u);
    ctx->pc = 0x2223C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223C0u, 0x21C5F0u, 0x21C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5F8u;
label_21c5f8:
    // 0x21c5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21c600: 0xc0888fc  jal         func_2223F0
    ctx->pc = 0x21C600u;
    SET_GPR_U32(ctx, 31, 0x21C608u);
    ctx->pc = 0x21C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C600u;
    // 0x21c604: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223F0u, 0x21C600u, 0x21C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C608u;
label_21c608:
    // 0x21c608: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x21c608u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_21c60c:
    // 0x21c60c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C60Cu;
    {
        const bool branch_taken_0x21c60c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C60Cu;
        // 0x21c610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c60c) {
            ctx->pc = 0x21C620u;
            goto label_21c620;
        }
    }
    ctx->pc = 0x21C614u;
    // 0x21c614: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21C614u;
    {
        const bool branch_taken_0x21c614 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C614u;
        // 0x21c618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c614) {
            ctx->pc = 0x21C620u;
            goto label_21c620;
        }
    }
    ctx->pc = 0x21C61Cu;
    // 0x21c61c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c620:
    // 0x21c620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c62c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c630: 0x3e00008  jr          $ra
    ctx->pc = 0x21C630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C630u;
        // 0x21c634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C638u;
}

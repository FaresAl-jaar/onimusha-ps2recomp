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

// Function: sub_0021B598
// Address: 0x21b598 - 0x21b63c
void sub_0021B598_0x21b598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B598_0x21b598");
#endif

    switch (ctx->pc) {
        case 0x21b5d0u: goto label_21b5d0;
        case 0x21b5e0u: goto label_21b5e0;
        case 0x21b610u: goto label_21b610;
        case 0x21b620u: goto label_21b620;
        default: break;
    }

    ctx->pc = 0x21b598u;

    // 0x21b598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21b59c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b5a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b5a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b5a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21b5a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b5ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21b5b0: 0x8cc21fc0  lw          $v0, 0x1FC0($a2)
    ctx->pc = 0x21b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8128)));
    // 0x21b5b4: 0x24511128  addiu       $s1, $v0, 0x1128
    ctx->pc = 0x21b5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
    // 0x21b5b8: 0x24441150  addiu       $a0, $v0, 0x1150
    ctx->pc = 0x21b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
    // 0x21b5bc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x21b5c0: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B5C0u;
    {
        const bool branch_taken_0x21b5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x21B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5C0u;
        // 0x21b5c4: 0x24501198  addiu       $s0, $v0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5c0) {
            ctx->pc = 0x21B5D8u;
            goto label_21b5d8;
        }
    }
    ctx->pc = 0x21B5C8u;
    // 0x21b5c8: 0xc042e86  jal         func_10BA18
    ctx->pc = 0x21B5C8u;
    SET_GPR_U32(ctx, 31, 0x21B5D0u);
    ctx->pc = 0x10BA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BA18u, 0x21B5C8u, 0x21B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B5D0u;
label_21b5d0:
    // 0x21b5d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21B5D0u;
    {
        const bool branch_taken_0x21b5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5D0u;
        // 0x21b5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5d0) {
            ctx->pc = 0x21B624u;
            goto label_21b624;
        }
    }
    ctx->pc = 0x21B5D8u;
label_21b5d8:
    // 0x21b5d8: 0xc086ab6  jal         func_21AAD8
    ctx->pc = 0x21B5D8u;
    SET_GPR_U32(ctx, 31, 0x21B5E0u);
    ctx->pc = 0x21B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5D8u;
    // 0x21b5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AAD8u, 0x21B5D8u, 0x21B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B5E0u;
label_21b5e0:
    // 0x21b5e0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x21b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x21b5e4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21B5E4u;
    {
        const bool branch_taken_0x21b5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5E4u;
        // 0x21b5e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5e4) {
            ctx->pc = 0x21B624u;
            goto label_21b624;
        }
    }
    ctx->pc = 0x21B5ECu;
    // 0x21b5ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21b5f0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21B5F0u;
    {
        const bool branch_taken_0x21b5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5F0u;
        // 0x21b5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5f0) {
            ctx->pc = 0x21B624u;
            goto label_21b624;
        }
    }
    ctx->pc = 0x21B5F8u;
    // 0x21b5f8: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x21b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x21b5fc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x21b5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x21b600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b604: 0x24a58a98  addiu       $a1, $a1, -0x7568
    ctx->pc = 0x21b604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937240));
    // 0x21b608: 0xc086d3e  jal         func_21B4F8
    ctx->pc = 0x21B608u;
    SET_GPR_U32(ctx, 31, 0x21B610u);
    ctx->pc = 0x21B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B608u;
    // 0x21b60c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B4F8u, 0x21B608u, 0x21B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B610u;
label_21b610:
    // 0x21b610: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x21b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21b614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b618: 0xc086ab6  jal         func_21AAD8
    ctx->pc = 0x21B618u;
    SET_GPR_U32(ctx, 31, 0x21B620u);
    ctx->pc = 0x21B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B618u;
    // 0x21b61c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AAD8u, 0x21B618u, 0x21B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B620u;
label_21b620:
    // 0x21b620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b624:
    // 0x21b624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b62c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b62cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b630: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21b630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b634: 0x3e00008  jr          $ra
    ctx->pc = 0x21B634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B634u;
        // 0x21b638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B63Cu;
}

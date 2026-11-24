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

// Function: sub_0030A7F0
// Address: 0x30a7f0 - 0x30a8a0
void sub_0030A7F0_0x30a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A7F0_0x30a7f0");
#endif

    switch (ctx->pc) {
        case 0x30a80cu: goto label_30a80c;
        case 0x30a81cu: goto label_30a81c;
        case 0x30a830u: goto label_30a830;
        case 0x30a844u: goto label_30a844;
        case 0x30a854u: goto label_30a854;
        case 0x30a860u: goto label_30a860;
        case 0x30a86cu: goto label_30a86c;
        case 0x30a878u: goto label_30a878;
        default: break;
    }

    ctx->pc = 0x30a7f0u;

    // 0x30a7f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30a7f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30a7f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30a7fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a800: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30a800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a804: 0xc0c0858  jal         func_302160
    ctx->pc = 0x30A804u;
    SET_GPR_U32(ctx, 31, 0x30A80Cu);
    ctx->pc = 0x30A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A804u;
    // 0x30a808: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x30A804u, 0x30A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A80Cu;
label_30a80c:
    // 0x30a80c: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x30a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x30a810: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x30a810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x30a814: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x30A814u;
    SET_GPR_U32(ctx, 31, 0x30A81Cu);
    ctx->pc = 0x30A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A814u;
    // 0x30a818: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x30A814u, 0x30A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A81Cu;
label_30a81c:
    // 0x30a81c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a820: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A820u;
    {
        const bool branch_taken_0x30a820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A820u;
        // 0x30a824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a820) {
            ctx->pc = 0x30A848u;
            goto label_30a848;
        }
    }
    ctx->pc = 0x30A828u;
    // 0x30a828: 0xc0c085c  jal         func_302170
    ctx->pc = 0x30A828u;
    SET_GPR_U32(ctx, 31, 0x30A830u);
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x30A828u, 0x30A830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A830u;
label_30a830:
    // 0x30a830: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x30a830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a834: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a838: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x30a838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30a83c: 0xc097674  jal         func_25D9D0
    ctx->pc = 0x30A83Cu;
    SET_GPR_U32(ctx, 31, 0x30A844u);
    ctx->pc = 0x30A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A83Cu;
    // 0x30a840: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D9D0u, 0x30A83Cu, 0x30A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A844u;
label_30a844:
    // 0x30a844: 0x0  nop
    ctx->pc = 0x30a844u;
    // NOP
label_30a848:
    // 0x30a848: 0x8e450598  lw          $a1, 0x598($s2)
    ctx->pc = 0x30a848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1432)));
    // 0x30a84c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x30A84Cu;
    SET_GPR_U32(ctx, 31, 0x30A854u);
    ctx->pc = 0x30A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A84Cu;
    // 0x30a850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x30A84Cu, 0x30A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A854u;
label_30a854:
    // 0x30a854: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30a854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a858: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x30a858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a85c: 0x0  nop
    ctx->pc = 0x30a85cu;
    // NOP
label_30a860:
    // 0x30a860: 0x8e050570  lw          $a1, 0x570($s0)
    ctx->pc = 0x30a860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
    // 0x30a864: 0xc0c0844  jal         func_302110
    ctx->pc = 0x30A864u;
    SET_GPR_U32(ctx, 31, 0x30A86Cu);
    ctx->pc = 0x30A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A864u;
    // 0x30a868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x30A864u, 0x30A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A86Cu;
label_30a86c:
    // 0x30a86c: 0x8e050584  lw          $a1, 0x584($s0)
    ctx->pc = 0x30a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x30a870: 0xc0c0844  jal         func_302110
    ctx->pc = 0x30A870u;
    SET_GPR_U32(ctx, 31, 0x30A878u);
    ctx->pc = 0x30A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A870u;
    // 0x30a874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x30A870u, 0x30A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A878u;
label_30a878:
    // 0x30a878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30a878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30a87c: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x30a87cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30a880: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30A880u;
    {
        const bool branch_taken_0x30a880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A880u;
        // 0x30a884: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a880) {
            ctx->pc = 0x30A860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a860;
        }
    }
    ctx->pc = 0x30A888u;
    // 0x30a888: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30a888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a898: 0x3e00008  jr          $ra
    ctx->pc = 0x30A898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A898u;
        // 0x30a89c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A8A0u;
}

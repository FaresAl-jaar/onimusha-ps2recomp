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

// Function: sub_0020E808
// Address: 0x20e808 - 0x20e874
void sub_0020E808_0x20e808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E808_0x20e808");
#endif

    switch (ctx->pc) {
        case 0x20e808u: goto label_20e808;
        case 0x20e80cu: goto label_20e80c;
        case 0x20e810u: goto label_20e810;
        case 0x20e814u: goto label_20e814;
        case 0x20e818u: goto label_20e818;
        case 0x20e81cu: goto label_20e81c;
        case 0x20e820u: goto label_20e820;
        case 0x20e824u: goto label_20e824;
        case 0x20e828u: goto label_20e828;
        case 0x20e82cu: goto label_20e82c;
        case 0x20e830u: goto label_20e830;
        case 0x20e834u: goto label_20e834;
        case 0x20e838u: goto label_20e838;
        case 0x20e83cu: goto label_20e83c;
        case 0x20e840u: goto label_20e840;
        case 0x20e844u: goto label_20e844;
        case 0x20e848u: goto label_20e848;
        case 0x20e84cu: goto label_20e84c;
        case 0x20e850u: goto label_20e850;
        case 0x20e854u: goto label_20e854;
        case 0x20e858u: goto label_20e858;
        case 0x20e85cu: goto label_20e85c;
        case 0x20e860u: goto label_20e860;
        case 0x20e864u: goto label_20e864;
        case 0x20e868u: goto label_20e868;
        case 0x20e86cu: goto label_20e86c;
        case 0x20e870u: goto label_20e870;
        default: break;
    }

    ctx->pc = 0x20e808u;

label_20e808:
    // 0x20e808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20e80c:
    // 0x20e80c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20e810:
    // 0x20e810: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20e810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20e814:
    // 0x20e814: 0xc084968  jal         func_2125A0
label_20e818:
    if (ctx->pc == 0x20E818u) {
        ctx->pc = 0x20E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E814u;
        // 0x20e818: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E81Cu;
        goto label_20e81c;
    }
    ctx->pc = 0x20E814u;
    SET_GPR_U32(ctx, 31, 0x20E81Cu);
    ctx->pc = 0x20E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E814u;
    // 0x20e818: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x20E814u, 0x20E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E81Cu;
label_20e81c:
    // 0x20e81c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_20e820:
    // 0x20e820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20e820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e824:
    // 0x20e824: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20e828:
    if (ctx->pc == 0x20E828u) {
        ctx->pc = 0x20E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E824u;
        // 0x20e828: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E82Cu;
        goto label_20e82c;
    }
    ctx->pc = 0x20E824u;
    {
        const bool branch_taken_0x20e824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E824u;
        // 0x20e828: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e824) {
            ctx->pc = 0x20E840u;
            goto label_20e840;
        }
    }
    ctx->pc = 0x20E82Cu;
label_20e82c:
    // 0x20e82c: 0xc0848e0  jal         func_212380
label_20e830:
    if (ctx->pc == 0x20E830u) {
        ctx->pc = 0x20E834u;
        goto label_20e834;
    }
    ctx->pc = 0x20E82Cu;
    SET_GPR_U32(ctx, 31, 0x20E834u);
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x20E82Cu, 0x20E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E834u;
label_20e834:
    // 0x20e834: 0x1000000b  b           . + 4 + (0xB << 2)
label_20e838:
    if (ctx->pc == 0x20E838u) {
        ctx->pc = 0x20E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E834u;
        // 0x20e838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E83Cu;
        goto label_20e83c;
    }
    ctx->pc = 0x20E834u;
    {
        const bool branch_taken_0x20e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E834u;
        // 0x20e838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e834) {
            ctx->pc = 0x20E864u;
            goto label_20e864;
        }
    }
    ctx->pc = 0x20E83Cu;
label_20e83c:
    // 0x20e83c: 0x0  nop
    ctx->pc = 0x20e83cu;
    // NOP
label_20e840:
    // 0x20e840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e844:
    // 0x20e844: 0xc087ed0  jal         func_21FB40
label_20e848:
    if (ctx->pc == 0x20E848u) {
        ctx->pc = 0x20E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E844u;
        // 0x20e848: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E84Cu;
        goto label_20e84c;
    }
    ctx->pc = 0x20E844u;
    SET_GPR_U32(ctx, 31, 0x20E84Cu);
    ctx->pc = 0x20E848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E844u;
    // 0x20e848: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20E844u, 0x20E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E84Cu;
label_20e84c:
    // 0x20e84c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20e850:
    if (ctx->pc == 0x20E850u) {
        ctx->pc = 0x20E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E84Cu;
        // 0x20e850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E854u;
        goto label_20e854;
    }
    ctx->pc = 0x20E84Cu;
    {
        const bool branch_taken_0x20e84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E84Cu;
        // 0x20e850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e84c) {
            ctx->pc = 0x20E864u;
            goto label_20e864;
        }
    }
    ctx->pc = 0x20E854u;
label_20e854:
    // 0x20e854: 0x8e032114  lw          $v1, 0x2114($s0)
    ctx->pc = 0x20e854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8468)));
label_20e858:
    // 0x20e858: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x20e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_20e85c:
    // 0x20e85c: 0x40f809  jalr        $v0
label_20e860:
    if (ctx->pc == 0x20E860u) {
        ctx->pc = 0x20E864u;
        goto label_20e864;
    }
    ctx->pc = 0x20E85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E864u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E85Cu, 0x20E864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E864u;
label_20e864:
    // 0x20e864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e868:
    // 0x20e868: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e86c:
    // 0x20e86c: 0x3e00008  jr          $ra
label_20e870:
    if (ctx->pc == 0x20E870u) {
        ctx->pc = 0x20E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E86Cu;
        // 0x20e870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E874u;
        goto label_fallthrough_0x20e86c;
    }
    ctx->pc = 0x20E86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E86Cu;
        // 0x20e870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e86c:
    ctx->pc = 0x20E874u;
}

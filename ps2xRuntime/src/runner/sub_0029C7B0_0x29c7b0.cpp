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

// Function: sub_0029C7B0
// Address: 0x29c7b0 - 0x29c870
void sub_0029C7B0_0x29c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C7B0_0x29c7b0");
#endif

    switch (ctx->pc) {
        case 0x29c7b0u: goto label_29c7b0;
        case 0x29c7b4u: goto label_29c7b4;
        case 0x29c7b8u: goto label_29c7b8;
        case 0x29c7bcu: goto label_29c7bc;
        case 0x29c7c0u: goto label_29c7c0;
        case 0x29c7c4u: goto label_29c7c4;
        case 0x29c7c8u: goto label_29c7c8;
        case 0x29c7ccu: goto label_29c7cc;
        case 0x29c7d0u: goto label_29c7d0;
        case 0x29c7d4u: goto label_29c7d4;
        case 0x29c7d8u: goto label_29c7d8;
        case 0x29c7dcu: goto label_29c7dc;
        case 0x29c7e0u: goto label_29c7e0;
        case 0x29c7e4u: goto label_29c7e4;
        case 0x29c7e8u: goto label_29c7e8;
        case 0x29c7ecu: goto label_29c7ec;
        case 0x29c7f0u: goto label_29c7f0;
        case 0x29c7f4u: goto label_29c7f4;
        case 0x29c7f8u: goto label_29c7f8;
        case 0x29c7fcu: goto label_29c7fc;
        case 0x29c800u: goto label_29c800;
        case 0x29c804u: goto label_29c804;
        case 0x29c808u: goto label_29c808;
        case 0x29c80cu: goto label_29c80c;
        case 0x29c810u: goto label_29c810;
        case 0x29c814u: goto label_29c814;
        case 0x29c818u: goto label_29c818;
        case 0x29c81cu: goto label_29c81c;
        case 0x29c820u: goto label_29c820;
        case 0x29c824u: goto label_29c824;
        case 0x29c828u: goto label_29c828;
        case 0x29c82cu: goto label_29c82c;
        case 0x29c830u: goto label_29c830;
        case 0x29c834u: goto label_29c834;
        case 0x29c838u: goto label_29c838;
        case 0x29c83cu: goto label_29c83c;
        case 0x29c840u: goto label_29c840;
        case 0x29c844u: goto label_29c844;
        case 0x29c848u: goto label_29c848;
        case 0x29c84cu: goto label_29c84c;
        case 0x29c850u: goto label_29c850;
        case 0x29c854u: goto label_29c854;
        case 0x29c858u: goto label_29c858;
        case 0x29c85cu: goto label_29c85c;
        case 0x29c860u: goto label_29c860;
        case 0x29c864u: goto label_29c864;
        case 0x29c868u: goto label_29c868;
        case 0x29c86cu: goto label_29c86c;
        default: break;
    }

    ctx->pc = 0x29c7b0u;

label_29c7b0:
    // 0x29c7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c7b4:
    // 0x29c7b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29c7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_29c7b8:
    // 0x29c7b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29c7bc:
    // 0x29c7bc: 0x3c038ff8  lui         $v1, 0x8FF8
    ctx->pc = 0x29c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36856 << 16));
label_29c7c0:
    // 0x29c7c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c7c4:
    // 0x29c7c4: 0x8c22ced4  lw          $v0, -0x312C($at)
    ctx->pc = 0x29c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954708)));
label_29c7c8:
    // 0x29c7c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29c7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29c7cc:
    // 0x29c7cc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_29c7d0:
    if (ctx->pc == 0x29C7D0u) {
        ctx->pc = 0x29C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7CCu;
        // 0x29c7d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C7D4u;
        goto label_29c7d4;
    }
    ctx->pc = 0x29C7CCu;
    {
        const bool branch_taken_0x29c7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7CCu;
        // 0x29c7d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c7cc) {
            ctx->pc = 0x29C7E8u;
            goto label_29c7e8;
        }
    }
    ctx->pc = 0x29C7D4u;
label_29c7d4:
    // 0x29c7d4: 0xc0a6d88  jal         func_29B620
label_29c7d8:
    if (ctx->pc == 0x29C7D8u) {
        ctx->pc = 0x29C7DCu;
        goto label_29c7dc;
    }
    ctx->pc = 0x29C7D4u;
    SET_GPR_U32(ctx, 31, 0x29C7DCu);
    ctx->pc = 0x29B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B620u, 0x29C7D4u, 0x29C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C7DCu;
label_29c7dc:
    // 0x29c7dc: 0x10000020  b           . + 4 + (0x20 << 2)
label_29c7e0:
    if (ctx->pc == 0x29C7E0u) {
        ctx->pc = 0x29C7E4u;
        goto label_29c7e4;
    }
    ctx->pc = 0x29C7DCu;
    {
        const bool branch_taken_0x29c7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c7dc) {
            ctx->pc = 0x29C860u;
            goto label_29c860;
        }
    }
    ctx->pc = 0x29C7E4u;
label_29c7e4:
    // 0x29c7e4: 0x0  nop
    ctx->pc = 0x29c7e4u;
    // NOP
label_29c7e8:
    // 0x29c7e8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29c7ec:
    // 0x29c7ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29c7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29c7f0:
    // 0x29c7f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29c7f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29c7f4:
    // 0x29c7f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_29c7f8:
    // 0x29c7f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c7fc:
    // 0x29c7fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_29c800:
    if (ctx->pc == 0x29C800u) {
        ctx->pc = 0x29C804u;
        goto label_29c804;
    }
    ctx->pc = 0x29C7FCu;
    {
        const bool branch_taken_0x29c7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c7fc) {
            ctx->pc = 0x29C808u;
            goto label_29c808;
        }
    }
    ctx->pc = 0x29C804u;
label_29c804:
    // 0x29c804: 0xa600050c  sh          $zero, 0x50C($s0)
    ctx->pc = 0x29c804u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1292), (uint16_t)GPR_U32(ctx, 0));
label_29c808:
    // 0x29c808: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29c80c:
    // 0x29c80c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29c80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29c810:
    // 0x29c810: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29c810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29c814:
    // 0x29c814: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_29c818:
    // 0x29c818: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c81c:
    // 0x29c81c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_29c820:
    if (ctx->pc == 0x29C820u) {
        ctx->pc = 0x29C824u;
        goto label_29c824;
    }
    ctx->pc = 0x29C81Cu;
    {
        const bool branch_taken_0x29c81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c81c) {
            ctx->pc = 0x29C838u;
            goto label_29c838;
        }
    }
    ctx->pc = 0x29C824u;
label_29c824:
    // 0x29c824: 0xc0b2cd0  jal         func_2CB340
label_29c828:
    if (ctx->pc == 0x29C828u) {
        ctx->pc = 0x29C82Cu;
        goto label_29c82c;
    }
    ctx->pc = 0x29C824u;
    SET_GPR_U32(ctx, 31, 0x29C82Cu);
    ctx->pc = 0x2CB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB340u, 0x29C824u, 0x29C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C82Cu;
label_29c82c:
    // 0x29c82c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29c830:
    if (ctx->pc == 0x29C830u) {
        ctx->pc = 0x29C834u;
        goto label_29c834;
    }
    ctx->pc = 0x29C82Cu;
    {
        const bool branch_taken_0x29c82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c82c) {
            ctx->pc = 0x29C858u;
            goto label_29c858;
        }
    }
    ctx->pc = 0x29C834u;
label_29c834:
    // 0x29c834: 0x0  nop
    ctx->pc = 0x29c834u;
    // NOP
label_29c838:
    // 0x29c838: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x29c838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
label_29c83c:
    // 0x29c83c: 0xc09f330  jal         func_27CCC0
label_29c840:
    if (ctx->pc == 0x29C840u) {
        ctx->pc = 0x29C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C83Cu;
        // 0x29c840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C844u;
        goto label_29c844;
    }
    ctx->pc = 0x29C83Cu;
    SET_GPR_U32(ctx, 31, 0x29C844u);
    ctx->pc = 0x29C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C83Cu;
    // 0x29c840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CCC0u, 0x29C83Cu, 0x29C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C844u;
label_29c844:
    // 0x29c844: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x29c844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_29c848:
    // 0x29c848: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x29c848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_29c84c:
    // 0x29c84c: 0x320f809  jalr        $t9
label_29c850:
    if (ctx->pc == 0x29C850u) {
        ctx->pc = 0x29C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C84Cu;
        // 0x29c850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C854u;
        goto label_29c854;
    }
    ctx->pc = 0x29C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C854u);
        ctx->pc = 0x29C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C84Cu;
        // 0x29c850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C84Cu, 0x29C854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C854u;
label_29c854:
    // 0x29c854: 0x0  nop
    ctx->pc = 0x29c854u;
    // NOP
label_29c858:
    // 0x29c858: 0xc0a6d88  jal         func_29B620
label_29c85c:
    if (ctx->pc == 0x29C85Cu) {
        ctx->pc = 0x29C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C858u;
        // 0x29c85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C860u;
        goto label_29c860;
    }
    ctx->pc = 0x29C858u;
    SET_GPR_U32(ctx, 31, 0x29C860u);
    ctx->pc = 0x29C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C858u;
    // 0x29c85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B620u, 0x29C858u, 0x29C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C860u;
label_29c860:
    // 0x29c860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c864:
    // 0x29c864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c868:
    // 0x29c868: 0x3e00008  jr          $ra
label_29c86c:
    if (ctx->pc == 0x29C86Cu) {
        ctx->pc = 0x29C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C868u;
        // 0x29c86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C870u;
        goto label_fallthrough_0x29c868;
    }
    ctx->pc = 0x29C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C868u;
        // 0x29c86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c868:
    ctx->pc = 0x29C870u;
}

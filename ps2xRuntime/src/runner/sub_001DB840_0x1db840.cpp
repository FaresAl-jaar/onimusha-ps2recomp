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

// Function: sub_001DB840
// Address: 0x1db840 - 0x1db8e8
void sub_001DB840_0x1db840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB840_0x1db840");
#endif

    switch (ctx->pc) {
        case 0x1db840u: goto label_1db840;
        case 0x1db844u: goto label_1db844;
        case 0x1db848u: goto label_1db848;
        case 0x1db84cu: goto label_1db84c;
        case 0x1db850u: goto label_1db850;
        case 0x1db854u: goto label_1db854;
        case 0x1db858u: goto label_1db858;
        case 0x1db85cu: goto label_1db85c;
        case 0x1db860u: goto label_1db860;
        case 0x1db864u: goto label_1db864;
        case 0x1db868u: goto label_1db868;
        case 0x1db86cu: goto label_1db86c;
        case 0x1db870u: goto label_1db870;
        case 0x1db874u: goto label_1db874;
        case 0x1db878u: goto label_1db878;
        case 0x1db87cu: goto label_1db87c;
        case 0x1db880u: goto label_1db880;
        case 0x1db884u: goto label_1db884;
        case 0x1db888u: goto label_1db888;
        case 0x1db88cu: goto label_1db88c;
        case 0x1db890u: goto label_1db890;
        case 0x1db894u: goto label_1db894;
        case 0x1db898u: goto label_1db898;
        case 0x1db89cu: goto label_1db89c;
        case 0x1db8a0u: goto label_1db8a0;
        case 0x1db8a4u: goto label_1db8a4;
        case 0x1db8a8u: goto label_1db8a8;
        case 0x1db8acu: goto label_1db8ac;
        case 0x1db8b0u: goto label_1db8b0;
        case 0x1db8b4u: goto label_1db8b4;
        case 0x1db8b8u: goto label_1db8b8;
        case 0x1db8bcu: goto label_1db8bc;
        case 0x1db8c0u: goto label_1db8c0;
        case 0x1db8c4u: goto label_1db8c4;
        case 0x1db8c8u: goto label_1db8c8;
        case 0x1db8ccu: goto label_1db8cc;
        case 0x1db8d0u: goto label_1db8d0;
        case 0x1db8d4u: goto label_1db8d4;
        case 0x1db8d8u: goto label_1db8d8;
        case 0x1db8dcu: goto label_1db8dc;
        case 0x1db8e0u: goto label_1db8e0;
        case 0x1db8e4u: goto label_1db8e4;
        default: break;
    }

    ctx->pc = 0x1db840u;

label_1db840:
    // 0x1db840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1db844:
    // 0x1db844: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1db844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1db848:
    // 0x1db848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1db84c:
    // 0x1db84c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1db850:
    // 0x1db850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db854:
    // 0x1db854: 0xc076ed0  jal         func_1DBB40
label_1db858:
    if (ctx->pc == 0x1DB858u) {
        ctx->pc = 0x1DB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB854u;
        // 0x1db858: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB85Cu;
        goto label_1db85c;
    }
    ctx->pc = 0x1DB854u;
    SET_GPR_U32(ctx, 31, 0x1DB85Cu);
    ctx->pc = 0x1DB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB854u;
    // 0x1db858: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB40u, 0x1DB854u, 0x1DB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB85Cu;
label_1db85c:
    // 0x1db85c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1db860:
    if (ctx->pc == 0x1DB860u) {
        ctx->pc = 0x1DB864u;
        goto label_1db864;
    }
    ctx->pc = 0x1DB85Cu;
    {
        const bool branch_taken_0x1db85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db85c) {
            ctx->pc = 0x1DB8D0u;
            goto label_1db8d0;
        }
    }
    ctx->pc = 0x1DB864u;
label_1db864:
    // 0x1db864: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1db864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1db868:
    // 0x1db868: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1db868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1db86c:
    // 0x1db86c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1db86cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1db870:
    // 0x1db870: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1db874:
    if (ctx->pc == 0x1DB874u) {
        ctx->pc = 0x1DB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB870u;
        // 0x1db874: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB878u;
        goto label_1db878;
    }
    ctx->pc = 0x1DB870u;
    {
        const bool branch_taken_0x1db870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB870u;
        // 0x1db874: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db870) {
            ctx->pc = 0x1DB8C8u;
            goto label_1db8c8;
        }
    }
    ctx->pc = 0x1DB878u;
label_1db878:
    // 0x1db878: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1db878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db87c:
    // 0x1db87c: 0x0  nop
    ctx->pc = 0x1db87cu;
    // NOP
label_1db880:
    // 0x1db880: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1db880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1db884:
    // 0x1db884: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1db888:
    if (ctx->pc == 0x1DB888u) {
        ctx->pc = 0x1DB88Cu;
        goto label_1db88c;
    }
    ctx->pc = 0x1DB884u;
    {
        const bool branch_taken_0x1db884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db884) {
            ctx->pc = 0x1DB8B0u;
            goto label_1db8b0;
        }
    }
    ctx->pc = 0x1DB88Cu;
label_1db88c:
    // 0x1db88c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1db890:
    if (ctx->pc == 0x1DB890u) {
        ctx->pc = 0x1DB894u;
        goto label_1db894;
    }
    ctx->pc = 0x1DB88Cu;
    {
        const bool branch_taken_0x1db88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db88c) {
            ctx->pc = 0x1DB8A8u;
            goto label_1db8a8;
        }
    }
    ctx->pc = 0x1DB894u;
label_1db894:
    // 0x1db894: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db898:
    // 0x1db898: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1db898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1db89c:
    // 0x1db89c: 0x320f809  jalr        $t9
label_1db8a0:
    if (ctx->pc == 0x1DB8A0u) {
        ctx->pc = 0x1DB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB89Cu;
        // 0x1db8a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8A4u;
        goto label_1db8a4;
    }
    ctx->pc = 0x1DB89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB8A4u);
        ctx->pc = 0x1DB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB89Cu;
        // 0x1db8a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB89Cu, 0x1DB8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB8A4u;
label_1db8a4:
    // 0x1db8a4: 0x0  nop
    ctx->pc = 0x1db8a4u;
    // NOP
label_1db8a8:
    // 0x1db8a8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1db8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1db8ac:
    // 0x1db8ac: 0x0  nop
    ctx->pc = 0x1db8acu;
    // NOP
label_1db8b0:
    // 0x1db8b0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1db8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1db8b4:
    // 0x1db8b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1db8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1db8b8:
    // 0x1db8b8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1db8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1db8bc:
    // 0x1db8bc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1db8bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1db8c0:
    // 0x1db8c0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1db8c4:
    if (ctx->pc == 0x1DB8C4u) {
        ctx->pc = 0x1DB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8C0u;
        // 0x1db8c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8C8u;
        goto label_1db8c8;
    }
    ctx->pc = 0x1DB8C0u;
    {
        const bool branch_taken_0x1db8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8C0u;
        // 0x1db8c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8c0) {
            ctx->pc = 0x1DB880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db880;
        }
    }
    ctx->pc = 0x1DB8C8u;
label_1db8c8:
    // 0x1db8c8: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1db8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1db8cc:
    // 0x1db8cc: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x1db8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
label_1db8d0:
    // 0x1db8d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1db8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1db8d4:
    // 0x1db8d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db8d8:
    // 0x1db8d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db8dc:
    // 0x1db8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1db8e0:
    // 0x1db8e0: 0x3e00008  jr          $ra
label_1db8e4:
    if (ctx->pc == 0x1DB8E4u) {
        ctx->pc = 0x1DB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8E0u;
        // 0x1db8e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8E8u;
        goto label_fallthrough_0x1db8e0;
    }
    ctx->pc = 0x1DB8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8E0u;
        // 0x1db8e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db8e0:
    ctx->pc = 0x1DB8E8u;
}

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

// Function: sub_003B7810
// Address: 0x3b7810 - 0x3b795c
void sub_003B7810_0x3b7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7810_0x3b7810");
#endif

    switch (ctx->pc) {
        case 0x3b7810u: goto label_3b7810;
        case 0x3b7814u: goto label_3b7814;
        case 0x3b7818u: goto label_3b7818;
        case 0x3b781cu: goto label_3b781c;
        case 0x3b7820u: goto label_3b7820;
        case 0x3b7824u: goto label_3b7824;
        case 0x3b7828u: goto label_3b7828;
        case 0x3b782cu: goto label_3b782c;
        case 0x3b7830u: goto label_3b7830;
        case 0x3b7834u: goto label_3b7834;
        case 0x3b7838u: goto label_3b7838;
        case 0x3b783cu: goto label_3b783c;
        case 0x3b7840u: goto label_3b7840;
        case 0x3b7844u: goto label_3b7844;
        case 0x3b7848u: goto label_3b7848;
        case 0x3b784cu: goto label_3b784c;
        case 0x3b7850u: goto label_3b7850;
        case 0x3b7854u: goto label_3b7854;
        case 0x3b7858u: goto label_3b7858;
        case 0x3b785cu: goto label_3b785c;
        case 0x3b7860u: goto label_3b7860;
        case 0x3b7864u: goto label_3b7864;
        case 0x3b7868u: goto label_3b7868;
        case 0x3b786cu: goto label_3b786c;
        case 0x3b7870u: goto label_3b7870;
        case 0x3b7874u: goto label_3b7874;
        case 0x3b7878u: goto label_3b7878;
        case 0x3b787cu: goto label_3b787c;
        case 0x3b7880u: goto label_3b7880;
        case 0x3b7884u: goto label_3b7884;
        case 0x3b7888u: goto label_3b7888;
        case 0x3b788cu: goto label_3b788c;
        case 0x3b7890u: goto label_3b7890;
        case 0x3b7894u: goto label_3b7894;
        case 0x3b7898u: goto label_3b7898;
        case 0x3b789cu: goto label_3b789c;
        case 0x3b78a0u: goto label_3b78a0;
        case 0x3b78a4u: goto label_3b78a4;
        case 0x3b78a8u: goto label_3b78a8;
        case 0x3b78acu: goto label_3b78ac;
        case 0x3b78b0u: goto label_3b78b0;
        case 0x3b78b4u: goto label_3b78b4;
        case 0x3b78b8u: goto label_3b78b8;
        case 0x3b78bcu: goto label_3b78bc;
        case 0x3b78c0u: goto label_3b78c0;
        case 0x3b78c4u: goto label_3b78c4;
        case 0x3b78c8u: goto label_3b78c8;
        case 0x3b78ccu: goto label_3b78cc;
        case 0x3b78d0u: goto label_3b78d0;
        case 0x3b78d4u: goto label_3b78d4;
        case 0x3b78d8u: goto label_3b78d8;
        case 0x3b78dcu: goto label_3b78dc;
        case 0x3b78e0u: goto label_3b78e0;
        case 0x3b78e4u: goto label_3b78e4;
        case 0x3b78e8u: goto label_3b78e8;
        case 0x3b78ecu: goto label_3b78ec;
        case 0x3b78f0u: goto label_3b78f0;
        case 0x3b78f4u: goto label_3b78f4;
        case 0x3b78f8u: goto label_3b78f8;
        case 0x3b78fcu: goto label_3b78fc;
        case 0x3b7900u: goto label_3b7900;
        case 0x3b7904u: goto label_3b7904;
        case 0x3b7908u: goto label_3b7908;
        case 0x3b790cu: goto label_3b790c;
        case 0x3b7910u: goto label_3b7910;
        case 0x3b7914u: goto label_3b7914;
        case 0x3b7918u: goto label_3b7918;
        case 0x3b791cu: goto label_3b791c;
        case 0x3b7920u: goto label_3b7920;
        case 0x3b7924u: goto label_3b7924;
        case 0x3b7928u: goto label_3b7928;
        case 0x3b792cu: goto label_3b792c;
        case 0x3b7930u: goto label_3b7930;
        case 0x3b7934u: goto label_3b7934;
        case 0x3b7938u: goto label_3b7938;
        case 0x3b793cu: goto label_3b793c;
        case 0x3b7940u: goto label_3b7940;
        case 0x3b7944u: goto label_3b7944;
        case 0x3b7948u: goto label_3b7948;
        case 0x3b794cu: goto label_3b794c;
        case 0x3b7950u: goto label_3b7950;
        case 0x3b7954u: goto label_3b7954;
        case 0x3b7958u: goto label_3b7958;
        default: break;
    }

    ctx->pc = 0x3b7810u;

label_3b7810:
    // 0x3b7810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b7814:
    // 0x3b7814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b7814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3b7818:
    // 0x3b7818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b7818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b781c:
    // 0x3b781c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b7820:
    // 0x3b7820: 0xc0a4a1c  jal         func_292870
label_3b7824:
    if (ctx->pc == 0x3B7824u) {
        ctx->pc = 0x3B7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7820u;
        // 0x3b7824: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7828u;
        goto label_3b7828;
    }
    ctx->pc = 0x3B7820u;
    SET_GPR_U32(ctx, 31, 0x3B7828u);
    ctx->pc = 0x3B7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7820u;
    // 0x3b7824: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3B7820u, 0x3B7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7828u;
label_3b7828:
    // 0x3b7828: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3b7828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_3b782c:
    // 0x3b782c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3b782cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3b7830:
    // 0x3b7830: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x3b7830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_3b7834:
    // 0x3b7834: 0x2484dfd0  addiu       $a0, $a0, -0x2030
    ctx->pc = 0x3b7834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959056));
label_3b7838:
    // 0x3b7838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b7838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b783c:
    // 0x3b783c: 0xae042b50  sw          $a0, 0x2B50($s0)
    ctx->pc = 0x3b783cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11088), GPR_U32(ctx, 4));
label_3b7840:
    // 0x3b7840: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3b7840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3b7844:
    // 0x3b7844: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_3b7848:
    if (ctx->pc == 0x3B7848u) {
        ctx->pc = 0x3B784Cu;
        goto label_3b784c;
    }
    ctx->pc = 0x3B7844u;
    {
        const bool branch_taken_0x3b7844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b7844) {
            ctx->pc = 0x3B7850u;
            goto label_3b7850;
        }
    }
    ctx->pc = 0x3B784Cu;
label_3b784c:
    // 0x3b784c: 0xae042b50  sw          $a0, 0x2B50($s0)
    ctx->pc = 0x3b784cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11088), GPR_U32(ctx, 4));
label_3b7850:
    // 0x3b7850: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3b7850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3b7854:
    // 0x3b7854: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x3b7854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3b7858:
    // 0x3b7858: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3b785c:
    if (ctx->pc == 0x3B785Cu) {
        ctx->pc = 0x3B785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7858u;
        // 0x3b785c: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7860u;
        goto label_3b7860;
    }
    ctx->pc = 0x3B7858u;
    {
        const bool branch_taken_0x3b7858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7858u;
        // 0x3b785c: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7858) {
            ctx->pc = 0x3B7840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7840;
        }
    }
    ctx->pc = 0x3B7860u;
label_3b7860:
    // 0x3b7860: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3b7860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_3b7864:
    // 0x3b7864: 0x24020c52  addiu       $v0, $zero, 0xC52
    ctx->pc = 0x3b7864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3154));
label_3b7868:
    // 0x3b7868: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x3b7868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_3b786c:
    // 0x3b786c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3b7870:
    if (ctx->pc == 0x3B7870u) {
        ctx->pc = 0x3B7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B786Cu;
        // 0x3b7870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7874u;
        goto label_3b7874;
    }
    ctx->pc = 0x3B786Cu;
    {
        const bool branch_taken_0x3b786c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B786Cu;
        // 0x3b7870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b786c) {
            ctx->pc = 0x3B7880u;
            goto label_3b7880;
        }
    }
    ctx->pc = 0x3B7874u;
label_3b7874:
    // 0x3b7874: 0xc097904  jal         func_25E410
label_3b7878:
    if (ctx->pc == 0x3B7878u) {
        ctx->pc = 0x3B7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7874u;
        // 0x3b7878: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B787Cu;
        goto label_3b787c;
    }
    ctx->pc = 0x3B7874u;
    SET_GPR_U32(ctx, 31, 0x3B787Cu);
    ctx->pc = 0x3B7878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7874u;
    // 0x3b7878: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E410u, 0x3B7874u, 0x3B787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B787Cu;
label_3b787c:
    // 0x3b787c: 0x0  nop
    ctx->pc = 0x3b787cu;
    // NOP
label_3b7880:
    // 0x3b7880: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3b7880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3b7884:
    // 0x3b7884: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x3b7884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_3b7888:
    // 0x3b7888: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x3b7888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_3b788c:
    // 0x3b788c: 0xae0206c0  sw          $v0, 0x6C0($s0)
    ctx->pc = 0x3b788cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
label_3b7890:
    // 0x3b7890: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b7890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b7894:
    // 0x3b7894: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3b7894u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3b7898:
    // 0x3b7898: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3b7898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b789c:
    // 0x3b789c: 0xc050ed4  jal         func_143B50
label_3b78a0:
    if (ctx->pc == 0x3B78A0u) {
        ctx->pc = 0x3B78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B789Cu;
        // 0x3b78a0: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B78A4u;
        goto label_3b78a4;
    }
    ctx->pc = 0x3B789Cu;
    SET_GPR_U32(ctx, 31, 0x3B78A4u);
    ctx->pc = 0x3B78A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B789Cu;
    // 0x3b78a0: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x3B789Cu, 0x3B78A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B78A4u;
label_3b78a4:
    // 0x3b78a4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3b78a8:
    if (ctx->pc == 0x3B78A8u) {
        ctx->pc = 0x3B78ACu;
        goto label_3b78ac;
    }
    ctx->pc = 0x3B78A4u;
    {
        const bool branch_taken_0x3b78a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b78a4) {
            ctx->pc = 0x3B7918u;
            goto label_3b7918;
        }
    }
    ctx->pc = 0x3B78ACu;
label_3b78ac:
    // 0x3b78ac: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3b78acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3b78b0:
    // 0x3b78b0: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x3b78b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
label_3b78b4:
    // 0x3b78b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b78b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b78b8:
    // 0x3b78b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3b78b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b78bc:
    // 0x3b78bc: 0x24e77980  addiu       $a3, $a3, 0x7980
    ctx->pc = 0x3b78bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31104));
label_3b78c0:
    // 0x3b78c0: 0xc0b2fa4  jal         func_2CBE90
label_3b78c4:
    if (ctx->pc == 0x3B78C4u) {
        ctx->pc = 0x3B78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78C0u;
        // 0x3b78c4: 0x240805c0  addiu       $t0, $zero, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B78C8u;
        goto label_3b78c8;
    }
    ctx->pc = 0x3B78C0u;
    SET_GPR_U32(ctx, 31, 0x3B78C8u);
    ctx->pc = 0x3B78C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B78C0u;
    // 0x3b78c4: 0x240805c0  addiu       $t0, $zero, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE90u, 0x3B78C0u, 0x3B78C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B78C8u;
label_3b78c8:
    // 0x3b78c8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3b78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3b78cc:
    // 0x3b78cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b78ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b78d0:
    // 0x3b78d0: 0xa0430504  sb          $v1, 0x504($v0)
    ctx->pc = 0x3b78d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1284), (uint8_t)GPR_U32(ctx, 3));
label_3b78d4:
    // 0x3b78d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b78d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b78d8:
    // 0x3b78d8: 0x8c5904d4  lw          $t9, 0x4D4($v0)
    ctx->pc = 0x3b78d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1236)));
label_3b78dc:
    // 0x3b78dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b78dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b78e0:
    // 0x3b78e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3b78e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3b78e4:
    // 0x3b78e4: 0x320f809  jalr        $t9
label_3b78e8:
    if (ctx->pc == 0x3B78E8u) {
        ctx->pc = 0x3B78E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78E4u;
        // 0x3b78e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B78ECu;
        goto label_3b78ec;
    }
    ctx->pc = 0x3B78E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B78ECu);
        ctx->pc = 0x3B78E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78E4u;
        // 0x3b78e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B78E4u, 0x3B78ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B78ECu;
label_3b78ec:
    // 0x3b78ec: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x3b78ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_3b78f0:
    // 0x3b78f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b78f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b78f4:
    // 0x3b78f4: 0xc09ae58  jal         func_26B960
label_3b78f8:
    if (ctx->pc == 0x3B78F8u) {
        ctx->pc = 0x3B78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78F4u;
        // 0x3b78f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B78FCu;
        goto label_3b78fc;
    }
    ctx->pc = 0x3B78F4u;
    SET_GPR_U32(ctx, 31, 0x3B78FCu);
    ctx->pc = 0x3B78F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B78F4u;
    // 0x3b78f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B960u, 0x3B78F4u, 0x3B78FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B78FCu;
label_3b78fc:
    // 0x3b78fc: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x3b78fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_3b7900:
    // 0x3b7900: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x3b7900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_3b7904:
    // 0x3b7904: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x3b7904u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3b7908:
    // 0x3b7908: 0x92280003  lbu         $t0, 0x3($s1)
    ctx->pc = 0x3b7908u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_3b790c:
    // 0x3b790c: 0xc09ae2c  jal         func_26B8B0
label_3b7910:
    if (ctx->pc == 0x3B7910u) {
        ctx->pc = 0x3B7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B790Cu;
        // 0x3b7910: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7914u;
        goto label_3b7914;
    }
    ctx->pc = 0x3B790Cu;
    SET_GPR_U32(ctx, 31, 0x3B7914u);
    ctx->pc = 0x3B7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B790Cu;
    // 0x3b7910: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B8B0u, 0x3B790Cu, 0x3B7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7914u;
label_3b7914:
    // 0x3b7914: 0xae110860  sw          $s1, 0x860($s0)
    ctx->pc = 0x3b7914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 17));
label_3b7918:
    // 0x3b7918: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3b7918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3b791c:
    // 0x3b791c: 0xa2022901  sb          $v0, 0x2901($s0)
    ctx->pc = 0x3b791cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10497), (uint8_t)GPR_U32(ctx, 2));
label_3b7920:
    // 0x3b7920: 0xc0ee020  jal         func_3B8080
label_3b7924:
    if (ctx->pc == 0x3B7924u) {
        ctx->pc = 0x3B7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7920u;
        // 0x3b7924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7928u;
        goto label_3b7928;
    }
    ctx->pc = 0x3B7920u;
    SET_GPR_U32(ctx, 31, 0x3B7928u);
    ctx->pc = 0x3B7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7920u;
    // 0x3b7924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8080u, 0x3B7920u, 0x3B7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7928u;
label_3b7928:
    // 0x3b7928: 0xae002b8c  sw          $zero, 0x2B8C($s0)
    ctx->pc = 0x3b7928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11148), GPR_U32(ctx, 0));
label_3b792c:
    // 0x3b792c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b7930:
    // 0x3b7930: 0xa2002b90  sb          $zero, 0x2B90($s0)
    ctx->pc = 0x3b7930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11152), (uint8_t)GPR_U32(ctx, 0));
label_3b7934:
    // 0x3b7934: 0xa2002b91  sb          $zero, 0x2B91($s0)
    ctx->pc = 0x3b7934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11153), (uint8_t)GPR_U32(ctx, 0));
label_3b7938:
    // 0x3b7938: 0xa2002b5a  sb          $zero, 0x2B5A($s0)
    ctx->pc = 0x3b7938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11098), (uint8_t)GPR_U32(ctx, 0));
label_3b793c:
    // 0x3b793c: 0xa2002b5b  sb          $zero, 0x2B5B($s0)
    ctx->pc = 0x3b793cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11099), (uint8_t)GPR_U32(ctx, 0));
label_3b7940:
    // 0x3b7940: 0xa2002b5c  sb          $zero, 0x2B5C($s0)
    ctx->pc = 0x3b7940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11100), (uint8_t)GPR_U32(ctx, 0));
label_3b7944:
    // 0x3b7944: 0xa2032b83  sb          $v1, 0x2B83($s0)
    ctx->pc = 0x3b7944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11139), (uint8_t)GPR_U32(ctx, 3));
label_3b7948:
    // 0x3b7948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b7948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b794c:
    // 0x3b794c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b794cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7950:
    // 0x3b7950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b7950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b7954:
    // 0x3b7954: 0x3e00008  jr          $ra
label_3b7958:
    if (ctx->pc == 0x3B7958u) {
        ctx->pc = 0x3B7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7954u;
        // 0x3b7958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B795Cu;
        goto label_fallthrough_0x3b7954;
    }
    ctx->pc = 0x3B7954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7954u;
        // 0x3b7958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b7954:
    ctx->pc = 0x3B795Cu;
}

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

// Function: sub_001E77E0
// Address: 0x1e77e0 - 0x1e79b4
void sub_001E77E0_0x1e77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E77E0_0x1e77e0");
#endif

    switch (ctx->pc) {
        case 0x1e77e0u: goto label_1e77e0;
        case 0x1e77e4u: goto label_1e77e4;
        case 0x1e77e8u: goto label_1e77e8;
        case 0x1e77ecu: goto label_1e77ec;
        case 0x1e77f0u: goto label_1e77f0;
        case 0x1e77f4u: goto label_1e77f4;
        case 0x1e77f8u: goto label_1e77f8;
        case 0x1e77fcu: goto label_1e77fc;
        case 0x1e7800u: goto label_1e7800;
        case 0x1e7804u: goto label_1e7804;
        case 0x1e7808u: goto label_1e7808;
        case 0x1e780cu: goto label_1e780c;
        case 0x1e7810u: goto label_1e7810;
        case 0x1e7814u: goto label_1e7814;
        case 0x1e7818u: goto label_1e7818;
        case 0x1e781cu: goto label_1e781c;
        case 0x1e7820u: goto label_1e7820;
        case 0x1e7824u: goto label_1e7824;
        case 0x1e7828u: goto label_1e7828;
        case 0x1e782cu: goto label_1e782c;
        case 0x1e7830u: goto label_1e7830;
        case 0x1e7834u: goto label_1e7834;
        case 0x1e7838u: goto label_1e7838;
        case 0x1e783cu: goto label_1e783c;
        case 0x1e7840u: goto label_1e7840;
        case 0x1e7844u: goto label_1e7844;
        case 0x1e7848u: goto label_1e7848;
        case 0x1e784cu: goto label_1e784c;
        case 0x1e7850u: goto label_1e7850;
        case 0x1e7854u: goto label_1e7854;
        case 0x1e7858u: goto label_1e7858;
        case 0x1e785cu: goto label_1e785c;
        case 0x1e7860u: goto label_1e7860;
        case 0x1e7864u: goto label_1e7864;
        case 0x1e7868u: goto label_1e7868;
        case 0x1e786cu: goto label_1e786c;
        case 0x1e7870u: goto label_1e7870;
        case 0x1e7874u: goto label_1e7874;
        case 0x1e7878u: goto label_1e7878;
        case 0x1e787cu: goto label_1e787c;
        case 0x1e7880u: goto label_1e7880;
        case 0x1e7884u: goto label_1e7884;
        case 0x1e7888u: goto label_1e7888;
        case 0x1e788cu: goto label_1e788c;
        case 0x1e7890u: goto label_1e7890;
        case 0x1e7894u: goto label_1e7894;
        case 0x1e7898u: goto label_1e7898;
        case 0x1e789cu: goto label_1e789c;
        case 0x1e78a0u: goto label_1e78a0;
        case 0x1e78a4u: goto label_1e78a4;
        case 0x1e78a8u: goto label_1e78a8;
        case 0x1e78acu: goto label_1e78ac;
        case 0x1e78b0u: goto label_1e78b0;
        case 0x1e78b4u: goto label_1e78b4;
        case 0x1e78b8u: goto label_1e78b8;
        case 0x1e78bcu: goto label_1e78bc;
        case 0x1e78c0u: goto label_1e78c0;
        case 0x1e78c4u: goto label_1e78c4;
        case 0x1e78c8u: goto label_1e78c8;
        case 0x1e78ccu: goto label_1e78cc;
        case 0x1e78d0u: goto label_1e78d0;
        case 0x1e78d4u: goto label_1e78d4;
        case 0x1e78d8u: goto label_1e78d8;
        case 0x1e78dcu: goto label_1e78dc;
        case 0x1e78e0u: goto label_1e78e0;
        case 0x1e78e4u: goto label_1e78e4;
        case 0x1e78e8u: goto label_1e78e8;
        case 0x1e78ecu: goto label_1e78ec;
        case 0x1e78f0u: goto label_1e78f0;
        case 0x1e78f4u: goto label_1e78f4;
        case 0x1e78f8u: goto label_1e78f8;
        case 0x1e78fcu: goto label_1e78fc;
        case 0x1e7900u: goto label_1e7900;
        case 0x1e7904u: goto label_1e7904;
        case 0x1e7908u: goto label_1e7908;
        case 0x1e790cu: goto label_1e790c;
        case 0x1e7910u: goto label_1e7910;
        case 0x1e7914u: goto label_1e7914;
        case 0x1e7918u: goto label_1e7918;
        case 0x1e791cu: goto label_1e791c;
        case 0x1e7920u: goto label_1e7920;
        case 0x1e7924u: goto label_1e7924;
        case 0x1e7928u: goto label_1e7928;
        case 0x1e792cu: goto label_1e792c;
        case 0x1e7930u: goto label_1e7930;
        case 0x1e7934u: goto label_1e7934;
        case 0x1e7938u: goto label_1e7938;
        case 0x1e793cu: goto label_1e793c;
        case 0x1e7940u: goto label_1e7940;
        case 0x1e7944u: goto label_1e7944;
        case 0x1e7948u: goto label_1e7948;
        case 0x1e794cu: goto label_1e794c;
        case 0x1e7950u: goto label_1e7950;
        case 0x1e7954u: goto label_1e7954;
        case 0x1e7958u: goto label_1e7958;
        case 0x1e795cu: goto label_1e795c;
        case 0x1e7960u: goto label_1e7960;
        case 0x1e7964u: goto label_1e7964;
        case 0x1e7968u: goto label_1e7968;
        case 0x1e796cu: goto label_1e796c;
        case 0x1e7970u: goto label_1e7970;
        case 0x1e7974u: goto label_1e7974;
        case 0x1e7978u: goto label_1e7978;
        case 0x1e797cu: goto label_1e797c;
        case 0x1e7980u: goto label_1e7980;
        case 0x1e7984u: goto label_1e7984;
        case 0x1e7988u: goto label_1e7988;
        case 0x1e798cu: goto label_1e798c;
        case 0x1e7990u: goto label_1e7990;
        case 0x1e7994u: goto label_1e7994;
        case 0x1e7998u: goto label_1e7998;
        case 0x1e799cu: goto label_1e799c;
        case 0x1e79a0u: goto label_1e79a0;
        case 0x1e79a4u: goto label_1e79a4;
        case 0x1e79a8u: goto label_1e79a8;
        case 0x1e79acu: goto label_1e79ac;
        case 0x1e79b0u: goto label_1e79b0;
        default: break;
    }

    ctx->pc = 0x1e77e0u;

label_1e77e0:
    // 0x1e77e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e77e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e77e4:
    // 0x1e77e4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e77e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e77e8:
    // 0x1e77e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e77e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e77ec:
    // 0x1e77ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e77ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e77f0:
    // 0x1e77f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e77f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e77f4:
    // 0x1e77f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e77f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e77f8:
    // 0x1e77f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e77f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e77fc:
    // 0x1e77fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e77fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7800:
    // 0x1e7800: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e7800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7804:
    // 0x1e7804: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e7808:
    if (ctx->pc == 0x1E7808u) {
        ctx->pc = 0x1E7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7804u;
        // 0x1e7808: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E780Cu;
        goto label_1e780c;
    }
    ctx->pc = 0x1E7804u;
    {
        const bool branch_taken_0x1e7804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7804u;
        // 0x1e7808: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7804) {
            ctx->pc = 0x1E7818u;
            goto label_1e7818;
        }
    }
    ctx->pc = 0x1E780Cu;
label_1e780c:
    // 0x1e780c: 0x10000062  b           . + 4 + (0x62 << 2)
label_1e7810:
    if (ctx->pc == 0x1E7810u) {
        ctx->pc = 0x1E7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E780Cu;
        // 0x1e7810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7814u;
        goto label_1e7814;
    }
    ctx->pc = 0x1E780Cu;
    {
        const bool branch_taken_0x1e780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E780Cu;
        // 0x1e7810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e780c) {
            ctx->pc = 0x1E7998u;
            goto label_1e7998;
        }
    }
    ctx->pc = 0x1E7814u;
label_1e7814:
    // 0x1e7814: 0x0  nop
    ctx->pc = 0x1e7814u;
    // NOP
label_1e7818:
    // 0x1e7818: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x1e7818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1e781c:
    // 0x1e781c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1e781cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_1e7820:
    // 0x1e7820: 0xc07cce0  jal         func_1F3380
label_1e7824:
    if (ctx->pc == 0x1E7824u) {
        ctx->pc = 0x1E7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7820u;
        // 0x1e7824: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7828u;
        goto label_1e7828;
    }
    ctx->pc = 0x1E7820u;
    SET_GPR_U32(ctx, 31, 0x1E7828u);
    ctx->pc = 0x1E7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7820u;
    // 0x1e7824: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1E7820u, 0x1E7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7828u;
label_1e7828:
    // 0x1e7828: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e7828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e782c:
    // 0x1e782c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_1e7830:
    if (ctx->pc == 0x1E7830u) {
        ctx->pc = 0x1E7834u;
        goto label_1e7834;
    }
    ctx->pc = 0x1E782Cu;
    {
        const bool branch_taken_0x1e782c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e782c) {
            ctx->pc = 0x1E7850u;
            goto label_1e7850;
        }
    }
    ctx->pc = 0x1E7834u;
label_1e7834:
    // 0x1e7834: 0x8e790020  lw          $t9, 0x20($s3)
    ctx->pc = 0x1e7834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e7838:
    // 0x1e7838: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e7838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e783c:
    // 0x1e783c: 0x320f809  jalr        $t9
label_1e7840:
    if (ctx->pc == 0x1E7840u) {
        ctx->pc = 0x1E7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E783Cu;
        // 0x1e7840: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7844u;
        goto label_1e7844;
    }
    ctx->pc = 0x1E783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7844u);
        ctx->pc = 0x1E7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E783Cu;
        // 0x1e7840: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E783Cu, 0x1E7844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7844u;
label_1e7844:
    // 0x1e7844: 0x10000054  b           . + 4 + (0x54 << 2)
label_1e7848:
    if (ctx->pc == 0x1E7848u) {
        ctx->pc = 0x1E7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7844u;
        // 0x1e7848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E784Cu;
        goto label_1e784c;
    }
    ctx->pc = 0x1E7844u;
    {
        const bool branch_taken_0x1e7844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7844u;
        // 0x1e7848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7844) {
            ctx->pc = 0x1E7998u;
            goto label_1e7998;
        }
    }
    ctx->pc = 0x1E784Cu;
label_1e784c:
    // 0x1e784c: 0x0  nop
    ctx->pc = 0x1e784cu;
    // NOP
label_1e7850:
    // 0x1e7850: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x1e7850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1e7854:
    // 0x1e7854: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1e7854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_1e7858:
    // 0x1e7858: 0xc07cce0  jal         func_1F3380
label_1e785c:
    if (ctx->pc == 0x1E785Cu) {
        ctx->pc = 0x1E785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7858u;
        // 0x1e785c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7860u;
        goto label_1e7860;
    }
    ctx->pc = 0x1E7858u;
    SET_GPR_U32(ctx, 31, 0x1E7860u);
    ctx->pc = 0x1E785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7858u;
    // 0x1e785c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1E7858u, 0x1E7860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7860u;
label_1e7860:
    // 0x1e7860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7864:
    // 0x1e7864: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
label_1e7868:
    if (ctx->pc == 0x1E7868u) {
        ctx->pc = 0x1E786Cu;
        goto label_1e786c;
    }
    ctx->pc = 0x1E7864u;
    {
        const bool branch_taken_0x1e7864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7864) {
            ctx->pc = 0x1E7908u;
            goto label_1e7908;
        }
    }
    ctx->pc = 0x1E786Cu;
label_1e786c:
    // 0x1e786c: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x1e786cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1e7870:
    // 0x1e7870: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1e7874:
    // 0x1e7874: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1e7874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1e7878:
    // 0x1e7878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e787c:
    // 0x1e787c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1e787cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1e7880:
    // 0x1e7880: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x1e7880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
label_1e7884:
    // 0x1e7884: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1e7884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1e7888:
    // 0x1e7888: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e7888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e788c:
    // 0x1e788c: 0xc0a6d70  jal         func_29B5C0
label_1e7890:
    if (ctx->pc == 0x1E7890u) {
        ctx->pc = 0x1E7890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E788Cu;
        // 0x1e7890: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7894u;
        goto label_1e7894;
    }
    ctx->pc = 0x1E788Cu;
    SET_GPR_U32(ctx, 31, 0x1E7894u);
    ctx->pc = 0x1E7890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E788Cu;
    // 0x1e7890: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5C0u, 0x1E788Cu, 0x1E7894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7894u;
label_1e7894:
    // 0x1e7894: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1e7894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1e7898:
    // 0x1e7898: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e7898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e789c:
    // 0x1e789c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e789cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e78a0:
    // 0x1e78a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e78a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e78a4:
    // 0x1e78a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e78a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e78a8:
    // 0x1e78a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e78ac:
    if (ctx->pc == 0x1E78ACu) {
        ctx->pc = 0x1E78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78A8u;
        // 0x1e78ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E78B0u;
        goto label_1e78b0;
    }
    ctx->pc = 0x1E78A8u;
    {
        const bool branch_taken_0x1e78a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78A8u;
        // 0x1e78ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78a8) {
            ctx->pc = 0x1E78B8u;
            goto label_1e78b8;
        }
    }
    ctx->pc = 0x1E78B0u;
label_1e78b0:
    // 0x1e78b0: 0xc0a6d4c  jal         func_29B530
label_1e78b4:
    if (ctx->pc == 0x1E78B4u) {
        ctx->pc = 0x1E78B8u;
        goto label_1e78b8;
    }
    ctx->pc = 0x1E78B0u;
    SET_GPR_U32(ctx, 31, 0x1E78B8u);
    ctx->pc = 0x29B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B530u, 0x1E78B0u, 0x1E78B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78B8u;
label_1e78b8:
    // 0x1e78b8: 0xc0a6da0  jal         func_29B680
label_1e78bc:
    if (ctx->pc == 0x1E78BCu) {
        ctx->pc = 0x1E78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78B8u;
        // 0x1e78bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E78C0u;
        goto label_1e78c0;
    }
    ctx->pc = 0x1E78B8u;
    SET_GPR_U32(ctx, 31, 0x1E78C0u);
    ctx->pc = 0x1E78BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78B8u;
    // 0x1e78bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B680u, 0x1E78B8u, 0x1E78C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78C0u;
label_1e78c0:
    // 0x1e78c0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1e78c4:
    // 0x1e78c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e78c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1e78c8:
    // 0x1e78c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e78c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e78cc:
    // 0x1e78cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e78ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e78d0:
    // 0x1e78d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e78d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e78d4:
    // 0x1e78d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e78d8:
    if (ctx->pc == 0x1E78D8u) {
        ctx->pc = 0x1E78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78D4u;
        // 0x1e78d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E78DCu;
        goto label_1e78dc;
    }
    ctx->pc = 0x1E78D4u;
    {
        const bool branch_taken_0x1e78d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78D4u;
        // 0x1e78d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78d4) {
            ctx->pc = 0x1E78E8u;
            goto label_1e78e8;
        }
    }
    ctx->pc = 0x1E78DCu;
label_1e78dc:
    // 0x1e78dc: 0xc0a6e60  jal         func_29B980
label_1e78e0:
    if (ctx->pc == 0x1E78E0u) {
        ctx->pc = 0x1E78E4u;
        goto label_1e78e4;
    }
    ctx->pc = 0x1E78DCu;
    SET_GPR_U32(ctx, 31, 0x1E78E4u);
    ctx->pc = 0x29B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B980u, 0x1E78DCu, 0x1E78E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78E4u;
label_1e78e4:
    // 0x1e78e4: 0x0  nop
    ctx->pc = 0x1e78e4u;
    // NOP
label_1e78e8:
    // 0x1e78e8: 0xc0a6d88  jal         func_29B620
label_1e78ec:
    if (ctx->pc == 0x1E78ECu) {
        ctx->pc = 0x1E78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78E8u;
        // 0x1e78ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E78F0u;
        goto label_1e78f0;
    }
    ctx->pc = 0x1E78E8u;
    SET_GPR_U32(ctx, 31, 0x1E78F0u);
    ctx->pc = 0x1E78ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78E8u;
    // 0x1e78ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B620u, 0x1E78E8u, 0x1E78F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78F0u;
label_1e78f0:
    // 0x1e78f0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1e78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1e78f4:
    // 0x1e78f4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e78f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1e78f8:
    // 0x1e78f8: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x1e78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_1e78fc:
    // 0x1e78fc: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1e78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1e7900:
    // 0x1e7900: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e7900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1e7904:
    // 0x1e7904: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x1e7904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_1e7908:
    // 0x1e7908: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e7908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e790c:
    // 0x1e790c: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x1e790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7910:
    // 0x1e7910: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x1e7910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
label_1e7914:
    // 0x1e7914: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e7914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e7918:
    // 0x1e7918: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1e7918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1e791c:
    // 0x1e791c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1e791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1e7920:
    // 0x1e7920: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e7920u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e7924:
    // 0x1e7924: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x1e7924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
label_1e7928:
    // 0x1e7928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e792c:
    // 0x1e792c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e7930:
    // 0x1e7930: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e7930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e7934:
    // 0x1e7934: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x1e7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1e7938:
    // 0x1e7938: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1e7938u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1e793c:
    // 0x1e793c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1e793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7940:
    // 0x1e7940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e7944:
    // 0x1e7944: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1e7944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_1e7948:
    // 0x1e7948: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x1e7948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e794c:
    // 0x1e794c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1e794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7950:
    // 0x1e7950: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e7950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e7954:
    // 0x1e7954: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1e7954u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_1e7958:
    // 0x1e7958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e795c:
    // 0x1e795c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1e795cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_1e7960:
    // 0x1e7960: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x1e7960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7964:
    // 0x1e7964: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1e7964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7968:
    // 0x1e7968: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e7968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e796c:
    // 0x1e796c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1e796cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_1e7970:
    // 0x1e7970: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e7974:
    // 0x1e7974: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1e7974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1e7978:
    // 0x1e7978: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x1e7978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_1e797c:
    // 0x1e797c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1e797cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1e7980:
    // 0x1e7980: 0x92650032  lbu         $a1, 0x32($s3)
    ctx->pc = 0x1e7980u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 50)));
label_1e7984:
    // 0x1e7984: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e7984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e7988:
    // 0x1e7988: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e7988u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1e798c:
    // 0x1e798c: 0xc0973ec  jal         func_25CFB0
label_1e7990:
    if (ctx->pc == 0x1E7990u) {
        ctx->pc = 0x1E7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E798Cu;
        // 0x1e7990: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7994u;
        goto label_1e7994;
    }
    ctx->pc = 0x1E798Cu;
    SET_GPR_U32(ctx, 31, 0x1E7994u);
    ctx->pc = 0x1E7990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E798Cu;
    // 0x1e7990: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CFB0u, 0x1E798Cu, 0x1E7994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7994u;
label_1e7994:
    // 0x1e7994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7998:
    // 0x1e7998: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e7998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e799c:
    // 0x1e799c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e799cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e79a0:
    // 0x1e79a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e79a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e79a4:
    // 0x1e79a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e79a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e79a8:
    // 0x1e79a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e79a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e79ac:
    // 0x1e79ac: 0x3e00008  jr          $ra
label_1e79b0:
    if (ctx->pc == 0x1E79B0u) {
        ctx->pc = 0x1E79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79ACu;
        // 0x1e79b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E79B4u;
        goto label_fallthrough_0x1e79ac;
    }
    ctx->pc = 0x1E79ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79ACu;
        // 0x1e79b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E79ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e79ac:
    ctx->pc = 0x1E79B4u;
}

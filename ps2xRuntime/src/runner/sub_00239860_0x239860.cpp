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

// Function: sub_00239860
// Address: 0x239860 - 0x239968
void sub_00239860_0x239860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239860_0x239860");
#endif

    switch (ctx->pc) {
        case 0x239860u: goto label_239860;
        case 0x239864u: goto label_239864;
        case 0x239868u: goto label_239868;
        case 0x23986cu: goto label_23986c;
        case 0x239870u: goto label_239870;
        case 0x239874u: goto label_239874;
        case 0x239878u: goto label_239878;
        case 0x23987cu: goto label_23987c;
        case 0x239880u: goto label_239880;
        case 0x239884u: goto label_239884;
        case 0x239888u: goto label_239888;
        case 0x23988cu: goto label_23988c;
        case 0x239890u: goto label_239890;
        case 0x239894u: goto label_239894;
        case 0x239898u: goto label_239898;
        case 0x23989cu: goto label_23989c;
        case 0x2398a0u: goto label_2398a0;
        case 0x2398a4u: goto label_2398a4;
        case 0x2398a8u: goto label_2398a8;
        case 0x2398acu: goto label_2398ac;
        case 0x2398b0u: goto label_2398b0;
        case 0x2398b4u: goto label_2398b4;
        case 0x2398b8u: goto label_2398b8;
        case 0x2398bcu: goto label_2398bc;
        case 0x2398c0u: goto label_2398c0;
        case 0x2398c4u: goto label_2398c4;
        case 0x2398c8u: goto label_2398c8;
        case 0x2398ccu: goto label_2398cc;
        case 0x2398d0u: goto label_2398d0;
        case 0x2398d4u: goto label_2398d4;
        case 0x2398d8u: goto label_2398d8;
        case 0x2398dcu: goto label_2398dc;
        case 0x2398e0u: goto label_2398e0;
        case 0x2398e4u: goto label_2398e4;
        case 0x2398e8u: goto label_2398e8;
        case 0x2398ecu: goto label_2398ec;
        case 0x2398f0u: goto label_2398f0;
        case 0x2398f4u: goto label_2398f4;
        case 0x2398f8u: goto label_2398f8;
        case 0x2398fcu: goto label_2398fc;
        case 0x239900u: goto label_239900;
        case 0x239904u: goto label_239904;
        case 0x239908u: goto label_239908;
        case 0x23990cu: goto label_23990c;
        case 0x239910u: goto label_239910;
        case 0x239914u: goto label_239914;
        case 0x239918u: goto label_239918;
        case 0x23991cu: goto label_23991c;
        case 0x239920u: goto label_239920;
        case 0x239924u: goto label_239924;
        case 0x239928u: goto label_239928;
        case 0x23992cu: goto label_23992c;
        case 0x239930u: goto label_239930;
        case 0x239934u: goto label_239934;
        case 0x239938u: goto label_239938;
        case 0x23993cu: goto label_23993c;
        case 0x239940u: goto label_239940;
        case 0x239944u: goto label_239944;
        case 0x239948u: goto label_239948;
        case 0x23994cu: goto label_23994c;
        case 0x239950u: goto label_239950;
        case 0x239954u: goto label_239954;
        case 0x239958u: goto label_239958;
        case 0x23995cu: goto label_23995c;
        case 0x239960u: goto label_239960;
        case 0x239964u: goto label_239964;
        default: break;
    }

    ctx->pc = 0x239860u;

label_239860:
    // 0x239860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_239864:
    // 0x239864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_239868:
    // 0x239868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23986c:
    // 0x23986c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_239870:
    // 0x239870: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x239870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239874:
    // 0x239874: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_239878:
    // 0x239878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23987c:
    // 0x23987c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23987cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_239880:
    // 0x239880: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x239880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_239884:
    // 0x239884: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_239888:
    if (ctx->pc == 0x239888u) {
        ctx->pc = 0x239888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239884u;
        // 0x239888: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23988Cu;
        goto label_23988c;
    }
    ctx->pc = 0x239884u;
    {
        const bool branch_taken_0x239884 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x239888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239884u;
        // 0x239888: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239884) {
            ctx->pc = 0x2398BCu;
            goto label_2398bc;
        }
    }
    ctx->pc = 0x23988Cu;
label_23988c:
    // 0x23988c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x23988cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_239890:
    // 0x239890: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x239890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239894:
    // 0x239894: 0x0  nop
    ctx->pc = 0x239894u;
    // NOP
label_239898:
    // 0x239898: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x239898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_23989c:
    // 0x23989c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2398a0:
    // 0x2398a0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2398a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2398a4:
    // 0x2398a4: 0x60f809  jalr        $v1
label_2398a8:
    if (ctx->pc == 0x2398A8u) {
        ctx->pc = 0x2398A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398A4u;
        // 0x2398a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398ACu;
        goto label_2398ac;
    }
    ctx->pc = 0x2398A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2398ACu);
        ctx->pc = 0x2398A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398A4u;
        // 0x2398a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2398A4u, 0x2398ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2398ACu;
label_2398ac:
    // 0x2398ac: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x2398acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_2398b0:
    // 0x2398b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2398b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2398b4:
    // 0x2398b4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_2398b8:
    if (ctx->pc == 0x2398B8u) {
        ctx->pc = 0x2398B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398B4u;
        // 0x2398b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398BCu;
        goto label_2398bc;
    }
    ctx->pc = 0x2398B4u;
    {
        const bool branch_taken_0x2398b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2398b4) {
            ctx->pc = 0x2398B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2398B4u;
            // 0x2398b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239898;
        }
    }
    ctx->pc = 0x2398BCu;
label_2398bc:
    // 0x2398bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2398bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2398c0:
    // 0x2398c0: 0xc08d6b4  jal         func_235AD0
label_2398c4:
    if (ctx->pc == 0x2398C4u) {
        ctx->pc = 0x2398C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398C0u;
        // 0x2398c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398C8u;
        goto label_2398c8;
    }
    ctx->pc = 0x2398C0u;
    SET_GPR_U32(ctx, 31, 0x2398C8u);
    ctx->pc = 0x2398C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398C0u;
    // 0x2398c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AD0u, 0x2398C0u, 0x2398C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398C8u;
label_2398c8:
    // 0x2398c8: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x2398c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_2398cc:
    // 0x2398cc: 0xc08d6e4  jal         func_235B90
label_2398d0:
    if (ctx->pc == 0x2398D0u) {
        ctx->pc = 0x2398D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398CCu;
        // 0x2398d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398D4u;
        goto label_2398d4;
    }
    ctx->pc = 0x2398CCu;
    SET_GPR_U32(ctx, 31, 0x2398D4u);
    ctx->pc = 0x2398D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398CCu;
    // 0x2398d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B90u, 0x2398CCu, 0x2398D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398D4u;
label_2398d4:
    // 0x2398d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2398d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2398d8:
    // 0x2398d8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2398d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_2398dc:
    // 0x2398dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2398dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2398e0:
    // 0x2398e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2398e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2398e4:
    // 0x2398e4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2398e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_2398e8:
    // 0x2398e8: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2398e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_2398ec:
    // 0x2398ec: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2398ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_2398f0:
    // 0x2398f0: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x2398f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_2398f4:
    // 0x2398f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2398f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2398f8:
    // 0x2398f8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2398f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_2398fc:
    // 0x2398fc: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x2398fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_239900:
    // 0x239900: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x239900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_239904:
    // 0x239904: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x239904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_239908:
    // 0x239908: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x239908u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_23990c:
    // 0x23990c: 0x8ca2ef80  lw          $v0, -0x1080($a1)
    ctx->pc = 0x23990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963072)));
label_239910:
    // 0x239910: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x239910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_239914:
    // 0x239914: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
label_239918:
    if (ctx->pc == 0x239918u) {
        ctx->pc = 0x239918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239914u;
        // 0x239918: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23991Cu;
        goto label_23991c;
    }
    ctx->pc = 0x239914u;
    {
        const bool branch_taken_0x239914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x239918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239914u;
        // 0x239918: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239914) {
            ctx->pc = 0x239928u;
            goto label_239928;
        }
    }
    ctx->pc = 0x23991Cu;
label_23991c:
    // 0x23991c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239920:
    // 0x239920: 0xc08eda4  jal         func_23B690
label_239924:
    if (ctx->pc == 0x239924u) {
        ctx->pc = 0x239924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239920u;
        // 0x239924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239928u;
        goto label_239928;
    }
    ctx->pc = 0x239920u;
    SET_GPR_U32(ctx, 31, 0x239928u);
    ctx->pc = 0x239924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239920u;
    // 0x239924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B690u, 0x239920u, 0x239928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239928u;
label_239928:
    // 0x239928: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x239928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_23992c:
    // 0x23992c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_239930:
    if (ctx->pc == 0x239930u) {
        ctx->pc = 0x239930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23992Cu;
        // 0x239930: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239934u;
        goto label_239934;
    }
    ctx->pc = 0x23992Cu;
    {
        const bool branch_taken_0x23992c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x239930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23992Cu;
        // 0x239930: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23992c) {
            ctx->pc = 0x239950u;
            goto label_239950;
        }
    }
    ctx->pc = 0x239934u;
label_239934:
    // 0x239934: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239938:
    // 0x239938: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23993c:
    // 0x23993c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23993cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_239940:
    // 0x239940: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x239940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239944:
    // 0x239944: 0x808a54a  j           func_229528
label_239948:
    if (ctx->pc == 0x239948u) {
        ctx->pc = 0x239948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239944u;
        // 0x239948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23994Cu;
        goto label_23994c;
    }
    ctx->pc = 0x239944u;
    ctx->pc = 0x239948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239944u;
    // 0x239948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229528u;
    sub_00229528_0x229528(rdram, ctx, runtime); return;
    ctx->pc = 0x23994Cu;
label_23994c:
    // 0x23994c: 0x0  nop
    ctx->pc = 0x23994cu;
    // NOP
label_239950:
    // 0x239950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239954:
    // 0x239954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239958:
    // 0x239958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23995c:
    // 0x23995c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23995cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239960:
    // 0x239960: 0x3e00008  jr          $ra
label_239964:
    if (ctx->pc == 0x239964u) {
        ctx->pc = 0x239964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239960u;
        // 0x239964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239968u;
        goto label_fallthrough_0x239960;
    }
    ctx->pc = 0x239960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239960u;
        // 0x239964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x239960:
    ctx->pc = 0x239968u;
}

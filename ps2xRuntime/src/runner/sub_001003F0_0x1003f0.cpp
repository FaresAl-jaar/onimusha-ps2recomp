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

// Function: sub_001003F0
// Address: 0x1003f0 - 0x10051c
void sub_001003F0_0x1003f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001003F0_0x1003f0");
#endif

    switch (ctx->pc) {
        case 0x1003f0u: goto label_1003f0;
        case 0x1003f4u: goto label_1003f4;
        case 0x1003f8u: goto label_1003f8;
        case 0x1003fcu: goto label_1003fc;
        case 0x100400u: goto label_100400;
        case 0x100404u: goto label_100404;
        case 0x100408u: goto label_100408;
        case 0x10040cu: goto label_10040c;
        case 0x100410u: goto label_100410;
        case 0x100414u: goto label_100414;
        case 0x100418u: goto label_100418;
        case 0x10041cu: goto label_10041c;
        case 0x100420u: goto label_100420;
        case 0x100424u: goto label_100424;
        case 0x100428u: goto label_100428;
        case 0x10042cu: goto label_10042c;
        case 0x100430u: goto label_100430;
        case 0x100434u: goto label_100434;
        case 0x100438u: goto label_100438;
        case 0x10043cu: goto label_10043c;
        case 0x100440u: goto label_100440;
        case 0x100444u: goto label_100444;
        case 0x100448u: goto label_100448;
        case 0x10044cu: goto label_10044c;
        case 0x100450u: goto label_100450;
        case 0x100454u: goto label_100454;
        case 0x100458u: goto label_100458;
        case 0x10045cu: goto label_10045c;
        case 0x100460u: goto label_100460;
        case 0x100464u: goto label_100464;
        case 0x100468u: goto label_100468;
        case 0x10046cu: goto label_10046c;
        case 0x100470u: goto label_100470;
        case 0x100474u: goto label_100474;
        case 0x100478u: goto label_100478;
        case 0x10047cu: goto label_10047c;
        case 0x100480u: goto label_100480;
        case 0x100484u: goto label_100484;
        case 0x100488u: goto label_100488;
        case 0x10048cu: goto label_10048c;
        case 0x100490u: goto label_100490;
        case 0x100494u: goto label_100494;
        case 0x100498u: goto label_100498;
        case 0x10049cu: goto label_10049c;
        case 0x1004a0u: goto label_1004a0;
        case 0x1004a4u: goto label_1004a4;
        case 0x1004a8u: goto label_1004a8;
        case 0x1004acu: goto label_1004ac;
        case 0x1004b0u: goto label_1004b0;
        case 0x1004b4u: goto label_1004b4;
        case 0x1004b8u: goto label_1004b8;
        case 0x1004bcu: goto label_1004bc;
        case 0x1004c0u: goto label_1004c0;
        case 0x1004c4u: goto label_1004c4;
        case 0x1004c8u: goto label_1004c8;
        case 0x1004ccu: goto label_1004cc;
        case 0x1004d0u: goto label_1004d0;
        case 0x1004d4u: goto label_1004d4;
        case 0x1004d8u: goto label_1004d8;
        case 0x1004dcu: goto label_1004dc;
        case 0x1004e0u: goto label_1004e0;
        case 0x1004e4u: goto label_1004e4;
        case 0x1004e8u: goto label_1004e8;
        case 0x1004ecu: goto label_1004ec;
        case 0x1004f0u: goto label_1004f0;
        case 0x1004f4u: goto label_1004f4;
        case 0x1004f8u: goto label_1004f8;
        case 0x1004fcu: goto label_1004fc;
        case 0x100500u: goto label_100500;
        case 0x100504u: goto label_100504;
        case 0x100508u: goto label_100508;
        case 0x10050cu: goto label_10050c;
        case 0x100510u: goto label_100510;
        case 0x100514u: goto label_100514;
        case 0x100518u: goto label_100518;
        default: break;
    }

    ctx->pc = 0x1003f0u;

label_1003f0:
    // 0x1003f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1003f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1003f4:
    // 0x1003f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1003f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1003f8:
    // 0x1003f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1003f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1003fc:
    // 0x1003fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1003fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_100400:
    // 0x100400: 0x27b7009c  addiu       $s7, $sp, 0x9C
    ctx->pc = 0x100400u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_100404:
    // 0x100404: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x100404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_100408:
    // 0x100408: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x100408u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_10040c:
    // 0x10040c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_100410:
    // 0x100410: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x100410u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_100414:
    // 0x100414: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_100418:
    // 0x100418: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x100418u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10041c:
    // 0x10041c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10041cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_100420:
    // 0x100420: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x100420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_100424:
    // 0x100424: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_100428:
    // 0x100428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10042c:
    // 0x10042c: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x10042cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_100430:
    // 0x100430: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x100430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_100434:
    // 0x100434: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x100434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_100438:
    // 0x100438: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x100438u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_10043c:
    // 0x10043c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x10043cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_100440:
    // 0x100440: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x100440u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
label_100444:
    // 0x100444: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x100444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100448:
    // 0x100448: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x100448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_10044c:
    // 0x10044c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10044cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_100450:
    // 0x100450: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x100450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_100454:
    // 0x100454: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x100454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_100458:
    // 0x100458: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_10045c:
    if (ctx->pc == 0x10045Cu) {
        ctx->pc = 0x10045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100458u;
        // 0x10045c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100460u;
        goto label_100460;
    }
    ctx->pc = 0x100458u;
    {
        const bool branch_taken_0x100458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100458u;
        // 0x10045c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100458) {
            ctx->pc = 0x100488u;
            goto label_100488;
        }
    }
    ctx->pc = 0x100460u;
label_100460:
    // 0x100460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_100464:
    // 0x100464: 0x2a0f809  jalr        $s5
label_100468:
    if (ctx->pc == 0x100468u) {
        ctx->pc = 0x100468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100464u;
        // 0x100468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10046Cu;
        goto label_10046c;
    }
    ctx->pc = 0x100464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x10046Cu);
        ctx->pc = 0x100468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100464u;
        // 0x100468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100464u, 0x10046Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10046Cu;
label_10046c:
    // 0x10046c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10046cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_100470:
    // 0x100470: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x100470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_100474:
    // 0x100474: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x100474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_100478:
    // 0x100478: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x100478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10047c:
    // 0x10047c: 0x73182b  sltu        $v1, $v1, $s3
    ctx->pc = 0x10047cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_100480:
    // 0x100480: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_100484:
    if (ctx->pc == 0x100484u) {
        ctx->pc = 0x100484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100480u;
        // 0x100484: 0x2549021  addu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100488u;
        goto label_100488;
    }
    ctx->pc = 0x100480u;
    {
        const bool branch_taken_0x100480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x100484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100480u;
        // 0x100484: 0x2549021  addu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100480) {
            ctx->pc = 0x100460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100460;
        }
    }
    ctx->pc = 0x100488u;
label_100488:
    // 0x100488: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x100488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10048c:
    // 0x10048c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x10048cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_100490:
    // 0x100490: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x100490u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_100494:
    // 0x100494: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_100498:
    if (ctx->pc == 0x100498u) {
        ctx->pc = 0x10049Cu;
        goto label_10049c;
    }
    ctx->pc = 0x100494u;
    {
        const bool branch_taken_0x100494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x100494) {
            ctx->pc = 0x1004F0u;
            goto label_1004f0;
        }
    }
    ctx->pc = 0x10049Cu;
label_10049c:
    // 0x10049c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x10049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1004a0:
    // 0x1004a0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1004a4:
    if (ctx->pc == 0x1004A4u) {
        ctx->pc = 0x1004A8u;
        goto label_1004a8;
    }
    ctx->pc = 0x1004A0u;
    {
        const bool branch_taken_0x1004a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1004a0) {
            ctx->pc = 0x1004F0u;
            goto label_1004f0;
        }
    }
    ctx->pc = 0x1004A8u;
label_1004a8:
    // 0x1004a8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1004a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1004ac:
    // 0x1004ac: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1004acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1004b0:
    // 0x1004b0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1004b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1004b4:
    // 0x1004b4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_1004b8:
    if (ctx->pc == 0x1004B8u) {
        ctx->pc = 0x1004B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004B4u;
        // 0x1004b8: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1004BCu;
        goto label_1004bc;
    }
    ctx->pc = 0x1004B4u;
    {
        const bool branch_taken_0x1004b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1004B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004B4u;
        // 0x1004b8: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004b4) {
            ctx->pc = 0x1004F0u;
            goto label_1004f0;
        }
    }
    ctx->pc = 0x1004BCu;
label_1004bc:
    // 0x1004bc: 0x0  nop
    ctx->pc = 0x1004bcu;
    // NOP
label_1004c0:
    // 0x1004c0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1004c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1004c4:
    // 0x1004c4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1004c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1004c8:
    // 0x1004c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1004c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1004cc:
    // 0x1004cc: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1004ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1004d0:
    // 0x1004d0: 0x40f809  jalr        $v0
label_1004d4:
    if (ctx->pc == 0x1004D4u) {
        ctx->pc = 0x1004D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004D0u;
        // 0x1004d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1004D8u;
        goto label_1004d8;
    }
    ctx->pc = 0x1004D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1004D8u);
        ctx->pc = 0x1004D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004D0u;
        // 0x1004d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1004D0u, 0x1004D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1004D8u;
label_1004d8:
    // 0x1004d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1004d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1004dc:
    // 0x1004dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1004dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1004e0:
    // 0x1004e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1004e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1004e4:
    // 0x1004e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1004e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1004e8:
    // 0x1004e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1004ec:
    if (ctx->pc == 0x1004ECu) {
        ctx->pc = 0x1004F0u;
        goto label_1004f0;
    }
    ctx->pc = 0x1004E8u;
    {
        const bool branch_taken_0x1004e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1004e8) {
            ctx->pc = 0x1004C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1004c0;
        }
    }
    ctx->pc = 0x1004F0u;
label_1004f0:
    // 0x1004f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1004f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1004f4:
    // 0x1004f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1004f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1004f8:
    // 0x1004f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1004f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1004fc:
    // 0x1004fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1004fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_100500:
    // 0x100500: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x100500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_100504:
    // 0x100504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x100504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_100508:
    // 0x100508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10050c:
    // 0x10050c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10050cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_100510:
    // 0x100510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100514:
    // 0x100514: 0x3e00008  jr          $ra
label_100518:
    if (ctx->pc == 0x100518u) {
        ctx->pc = 0x100518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100514u;
        // 0x100518: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10051Cu;
        goto label_fallthrough_0x100514;
    }
    ctx->pc = 0x100514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100514u;
        // 0x100518: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x100514:
    ctx->pc = 0x10051Cu;
}

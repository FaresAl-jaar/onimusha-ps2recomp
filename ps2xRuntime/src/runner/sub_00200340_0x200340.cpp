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

// Function: sub_00200340
// Address: 0x200340 - 0x200508
void sub_00200340_0x200340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200340_0x200340");
#endif

    switch (ctx->pc) {
        case 0x200340u: goto label_200340;
        case 0x200344u: goto label_200344;
        case 0x200348u: goto label_200348;
        case 0x20034cu: goto label_20034c;
        case 0x200350u: goto label_200350;
        case 0x200354u: goto label_200354;
        case 0x200358u: goto label_200358;
        case 0x20035cu: goto label_20035c;
        case 0x200360u: goto label_200360;
        case 0x200364u: goto label_200364;
        case 0x200368u: goto label_200368;
        case 0x20036cu: goto label_20036c;
        case 0x200370u: goto label_200370;
        case 0x200374u: goto label_200374;
        case 0x200378u: goto label_200378;
        case 0x20037cu: goto label_20037c;
        case 0x200380u: goto label_200380;
        case 0x200384u: goto label_200384;
        case 0x200388u: goto label_200388;
        case 0x20038cu: goto label_20038c;
        case 0x200390u: goto label_200390;
        case 0x200394u: goto label_200394;
        case 0x200398u: goto label_200398;
        case 0x20039cu: goto label_20039c;
        case 0x2003a0u: goto label_2003a0;
        case 0x2003a4u: goto label_2003a4;
        case 0x2003a8u: goto label_2003a8;
        case 0x2003acu: goto label_2003ac;
        case 0x2003b0u: goto label_2003b0;
        case 0x2003b4u: goto label_2003b4;
        case 0x2003b8u: goto label_2003b8;
        case 0x2003bcu: goto label_2003bc;
        case 0x2003c0u: goto label_2003c0;
        case 0x2003c4u: goto label_2003c4;
        case 0x2003c8u: goto label_2003c8;
        case 0x2003ccu: goto label_2003cc;
        case 0x2003d0u: goto label_2003d0;
        case 0x2003d4u: goto label_2003d4;
        case 0x2003d8u: goto label_2003d8;
        case 0x2003dcu: goto label_2003dc;
        case 0x2003e0u: goto label_2003e0;
        case 0x2003e4u: goto label_2003e4;
        case 0x2003e8u: goto label_2003e8;
        case 0x2003ecu: goto label_2003ec;
        case 0x2003f0u: goto label_2003f0;
        case 0x2003f4u: goto label_2003f4;
        case 0x2003f8u: goto label_2003f8;
        case 0x2003fcu: goto label_2003fc;
        case 0x200400u: goto label_200400;
        case 0x200404u: goto label_200404;
        case 0x200408u: goto label_200408;
        case 0x20040cu: goto label_20040c;
        case 0x200410u: goto label_200410;
        case 0x200414u: goto label_200414;
        case 0x200418u: goto label_200418;
        case 0x20041cu: goto label_20041c;
        case 0x200420u: goto label_200420;
        case 0x200424u: goto label_200424;
        case 0x200428u: goto label_200428;
        case 0x20042cu: goto label_20042c;
        case 0x200430u: goto label_200430;
        case 0x200434u: goto label_200434;
        case 0x200438u: goto label_200438;
        case 0x20043cu: goto label_20043c;
        case 0x200440u: goto label_200440;
        case 0x200444u: goto label_200444;
        case 0x200448u: goto label_200448;
        case 0x20044cu: goto label_20044c;
        case 0x200450u: goto label_200450;
        case 0x200454u: goto label_200454;
        case 0x200458u: goto label_200458;
        case 0x20045cu: goto label_20045c;
        case 0x200460u: goto label_200460;
        case 0x200464u: goto label_200464;
        case 0x200468u: goto label_200468;
        case 0x20046cu: goto label_20046c;
        case 0x200470u: goto label_200470;
        case 0x200474u: goto label_200474;
        case 0x200478u: goto label_200478;
        case 0x20047cu: goto label_20047c;
        case 0x200480u: goto label_200480;
        case 0x200484u: goto label_200484;
        case 0x200488u: goto label_200488;
        case 0x20048cu: goto label_20048c;
        case 0x200490u: goto label_200490;
        case 0x200494u: goto label_200494;
        case 0x200498u: goto label_200498;
        case 0x20049cu: goto label_20049c;
        case 0x2004a0u: goto label_2004a0;
        case 0x2004a4u: goto label_2004a4;
        case 0x2004a8u: goto label_2004a8;
        case 0x2004acu: goto label_2004ac;
        case 0x2004b0u: goto label_2004b0;
        case 0x2004b4u: goto label_2004b4;
        case 0x2004b8u: goto label_2004b8;
        case 0x2004bcu: goto label_2004bc;
        case 0x2004c0u: goto label_2004c0;
        case 0x2004c4u: goto label_2004c4;
        case 0x2004c8u: goto label_2004c8;
        case 0x2004ccu: goto label_2004cc;
        case 0x2004d0u: goto label_2004d0;
        case 0x2004d4u: goto label_2004d4;
        case 0x2004d8u: goto label_2004d8;
        case 0x2004dcu: goto label_2004dc;
        case 0x2004e0u: goto label_2004e0;
        case 0x2004e4u: goto label_2004e4;
        case 0x2004e8u: goto label_2004e8;
        case 0x2004ecu: goto label_2004ec;
        case 0x2004f0u: goto label_2004f0;
        case 0x2004f4u: goto label_2004f4;
        case 0x2004f8u: goto label_2004f8;
        case 0x2004fcu: goto label_2004fc;
        case 0x200500u: goto label_200500;
        case 0x200504u: goto label_200504;
        default: break;
    }

    ctx->pc = 0x200340u;

label_200340:
    // 0x200340: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x200340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_200344:
    // 0x200344: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x200344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_200348:
    // 0x200348: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x200348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20034c:
    // 0x20034c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x20034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_200350:
    // 0x200350: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x200350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200354:
    // 0x200354: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x200354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_200358:
    // 0x200358: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x200358u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20035c:
    // 0x20035c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x20035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_200360:
    // 0x200360: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x200360u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200364:
    // 0x200364: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x200364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_200368:
    // 0x200368: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x200368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_20036c:
    // 0x20036c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x20036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_200370:
    // 0x200370: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x200370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_200374:
    // 0x200374: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x200374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_200378:
    // 0x200378: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x200378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_20037c:
    // 0x20037c: 0x8e7603b8  lw          $s6, 0x3B8($s3)
    ctx->pc = 0x20037cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 952)));
label_200380:
    // 0x200380: 0x10000002  b           . + 4 + (0x2 << 2)
label_200384:
    if (ctx->pc == 0x200384u) {
        ctx->pc = 0x200384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200380u;
        // 0x200384: 0x24d0fffd  addiu       $s0, $a2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200388u;
        goto label_200388;
    }
    ctx->pc = 0x200380u;
    {
        const bool branch_taken_0x200380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200380u;
        // 0x200384: 0x24d0fffd  addiu       $s0, $a2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200380) {
            ctx->pc = 0x20038Cu;
            goto label_20038c;
        }
    }
    ctx->pc = 0x200388u;
label_200388:
    // 0x200388: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20038c:
    // 0x20038c: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x20038cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_200390:
    // 0x200390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_200394:
    if (ctx->pc == 0x200394u) {
        ctx->pc = 0x200394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200390u;
        // 0x200394: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200398u;
        goto label_200398;
    }
    ctx->pc = 0x200390u;
    {
        const bool branch_taken_0x200390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200390u;
        // 0x200394: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200390) {
            ctx->pc = 0x2003A8u;
            goto label_2003a8;
        }
    }
    ctx->pc = 0x200398u;
label_200398:
    // 0x200398: 0xc07f656  jal         func_1FD958
label_20039c:
    if (ctx->pc == 0x20039Cu) {
        ctx->pc = 0x20039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200398u;
        // 0x20039c: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003A0u;
        goto label_2003a0;
    }
    ctx->pc = 0x200398u;
    SET_GPR_U32(ctx, 31, 0x2003A0u);
    ctx->pc = 0x20039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200398u;
    // 0x20039c: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x200398u, 0x2003A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003A0u;
label_2003a0:
    // 0x2003a0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_2003a4:
    if (ctx->pc == 0x2003A4u) {
        ctx->pc = 0x2003A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003A0u;
        // 0x2003a4: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003A8u;
        goto label_2003a8;
    }
    ctx->pc = 0x2003A0u;
    {
        const bool branch_taken_0x2003a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003A0u;
        // 0x2003a4: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003a0) {
            ctx->pc = 0x200388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200388;
        }
    }
    ctx->pc = 0x2003A8u;
label_2003a8:
    // 0x2003a8: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x2003a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2003ac:
    // 0x2003ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2003acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2003b0:
    // 0x2003b0: 0x16c20006  bne         $s6, $v0, . + 4 + (0x6 << 2)
label_2003b4:
    if (ctx->pc == 0x2003B4u) {
        ctx->pc = 0x2003B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003B0u;
        // 0x2003b4: 0x3b80b  movn        $s7, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003B8u;
        goto label_2003b8;
    }
    ctx->pc = 0x2003B0u;
    {
        const bool branch_taken_0x2003b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2003B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003B0u;
        // 0x2003b4: 0x3b80b  movn        $s7, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003b0) {
            ctx->pc = 0x2003CCu;
            goto label_2003cc;
        }
    }
    ctx->pc = 0x2003B8u;
label_2003b8:
    // 0x2003b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2003b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2003bc:
    // 0x2003bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2003bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2003c0:
    // 0x2003c0: 0xc080142  jal         func_200508
label_2003c4:
    if (ctx->pc == 0x2003C4u) {
        ctx->pc = 0x2003C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003C0u;
        // 0x2003c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003C8u;
        goto label_2003c8;
    }
    ctx->pc = 0x2003C0u;
    SET_GPR_U32(ctx, 31, 0x2003C8u);
    ctx->pc = 0x2003C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003C0u;
    // 0x2003c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200508u, 0x2003C0u, 0x2003C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003C8u;
label_2003c8:
    // 0x2003c8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2003c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2003cc:
    // 0x2003cc: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x2003ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_2003d0:
    // 0x2003d0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2003d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2003d4:
    // 0x2003d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2003d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2003d8:
    // 0x2003d8: 0x245403b0  addiu       $s4, $v0, 0x3B0
    ctx->pc = 0x2003d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
label_2003dc:
    // 0x2003dc: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x2003dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_2003e0:
    // 0x2003e0: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x2003e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2003e4:
    // 0x2003e4: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_2003e8:
    if (ctx->pc == 0x2003E8u) {
        ctx->pc = 0x2003E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003E4u;
        // 0x2003e8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003ECu;
        goto label_2003ec;
    }
    ctx->pc = 0x2003E4u;
    {
        const bool branch_taken_0x2003e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003E4u;
        // 0x2003e8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003e4) {
            ctx->pc = 0x2004A4u;
            goto label_2004a4;
        }
    }
    ctx->pc = 0x2003ECu;
label_2003ec:
    // 0x2003ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2003ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2003f0:
    // 0x2003f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2003f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2003f4:
    // 0x2003f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2003f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2003f8:
    // 0x2003f8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2003f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2003fc:
    // 0x2003fc: 0x40f809  jalr        $v0
label_200400:
    if (ctx->pc == 0x200400u) {
        ctx->pc = 0x200400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003FCu;
        // 0x200400: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200404u;
        goto label_200404;
    }
    ctx->pc = 0x2003FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200404u);
        ctx->pc = 0x200400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003FCu;
        // 0x200400: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2003FCu, 0x200404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200404u;
label_200404:
    // 0x200404: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x200404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200408:
    // 0x200408: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x200408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20040c:
    // 0x20040c: 0xc049522  jal         func_125488
label_200410:
    if (ctx->pc == 0x200410u) {
        ctx->pc = 0x200410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20040Cu;
        // 0x200410: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200414u;
        goto label_200414;
    }
    ctx->pc = 0x20040Cu;
    SET_GPR_U32(ctx, 31, 0x200414u);
    ctx->pc = 0x200410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20040Cu;
    // 0x200410: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x20040Cu, 0x200414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200414u;
label_200414:
    // 0x200414: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x200414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_200418:
    // 0x200418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20041c:
    // 0x20041c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200420:
    // 0x200420: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_200424:
    // 0x200424: 0x40f809  jalr        $v0
label_200428:
    if (ctx->pc == 0x200428u) {
        ctx->pc = 0x200428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200424u;
        // 0x200428: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20042Cu;
        goto label_20042c;
    }
    ctx->pc = 0x200424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20042Cu);
        ctx->pc = 0x200428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200424u;
        // 0x200428: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200424u, 0x20042Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20042Cu;
label_20042c:
    // 0x20042c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20042cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_200430:
    // 0x200430: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x200430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_200434:
    // 0x200434: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_200438:
    if (ctx->pc == 0x200438u) {
        ctx->pc = 0x200438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200434u;
        // 0x200438: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20043Cu;
        goto label_20043c;
    }
    ctx->pc = 0x200434u;
    {
        const bool branch_taken_0x200434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200434u;
        // 0x200438: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200434) {
            ctx->pc = 0x20048Cu;
            goto label_20048c;
        }
    }
    ctx->pc = 0x20043Cu;
label_20043c:
    // 0x20043c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_200440:
    // 0x200440: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x200440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_200444:
    // 0x200444: 0x2443023  subu        $a2, $s2, $a0
    ctx->pc = 0x200444u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_200448:
    // 0x200448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20044c:
    // 0x20044c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_200450:
    // 0x200450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200454:
    // 0x200454: 0x40f809  jalr        $v0
label_200458:
    if (ctx->pc == 0x200458u) {
        ctx->pc = 0x200458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200454u;
        // 0x200458: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20045Cu;
        goto label_20045c;
    }
    ctx->pc = 0x200454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20045Cu);
        ctx->pc = 0x200458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200454u;
        // 0x200458: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200454u, 0x20045Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20045Cu;
label_20045c:
    // 0x20045c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x20045cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_200460:
    // 0x200460: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x200460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_200464:
    // 0x200464: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x200464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_200468:
    // 0x200468: 0xc049522  jal         func_125488
label_20046c:
    if (ctx->pc == 0x20046Cu) {
        ctx->pc = 0x20046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200468u;
        // 0x20046c: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200470u;
        goto label_200470;
    }
    ctx->pc = 0x200468u;
    SET_GPR_U32(ctx, 31, 0x200470u);
    ctx->pc = 0x20046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200468u;
    // 0x20046c: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x200468u, 0x200470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200470u;
label_200470:
    // 0x200470: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x200470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_200474:
    // 0x200474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200478:
    // 0x200478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x200478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20047c:
    // 0x20047c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_200480:
    // 0x200480: 0x40f809  jalr        $v0
label_200484:
    if (ctx->pc == 0x200484u) {
        ctx->pc = 0x200484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200480u;
        // 0x200484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200488u;
        goto label_200488;
    }
    ctx->pc = 0x200480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200488u);
        ctx->pc = 0x200484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200480u;
        // 0x200484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200480u, 0x200488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200488u;
label_200488:
    // 0x200488: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x200488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_20048c:
    // 0x20048c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x20048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_200490:
    // 0x200490: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_200494:
    if (ctx->pc == 0x200494u) {
        ctx->pc = 0x200494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200490u;
        // 0x200494: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200498u;
        goto label_200498;
    }
    ctx->pc = 0x200490u;
    {
        const bool branch_taken_0x200490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x200490) {
            ctx->pc = 0x200494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200490u;
            // 0x200494: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2004A8u;
            goto label_2004a8;
        }
    }
    ctx->pc = 0x200498u;
label_200498:
    // 0x200498: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x200498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_20049c:
    // 0x20049c: 0x60f809  jalr        $v1
label_2004a0:
    if (ctx->pc == 0x2004A0u) {
        ctx->pc = 0x2004A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20049Cu;
        // 0x2004a0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004A4u;
        goto label_2004a4;
    }
    ctx->pc = 0x20049Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2004A4u);
        ctx->pc = 0x2004A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20049Cu;
        // 0x2004a0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20049Cu, 0x2004A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2004A4u;
label_2004a4:
    // 0x2004a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2004a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2004a8:
    // 0x2004a8: 0x16c2000a  bne         $s6, $v0, . + 4 + (0xA << 2)
label_2004ac:
    if (ctx->pc == 0x2004ACu) {
        ctx->pc = 0x2004ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004A8u;
        // 0x2004ac: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004B0u;
        goto label_2004b0;
    }
    ctx->pc = 0x2004A8u;
    {
        const bool branch_taken_0x2004a8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2004ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004A8u;
        // 0x2004ac: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004a8) {
            ctx->pc = 0x2004D4u;
            goto label_2004d4;
        }
    }
    ctx->pc = 0x2004B0u;
label_2004b0:
    // 0x2004b0: 0x8e6403ec  lw          $a0, 0x3EC($s3)
    ctx->pc = 0x2004b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1004)));
label_2004b4:
    // 0x2004b4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2004b8:
    if (ctx->pc == 0x2004B8u) {
        ctx->pc = 0x2004B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004B4u;
        // 0x2004b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004BCu;
        goto label_2004bc;
    }
    ctx->pc = 0x2004B4u;
    {
        const bool branch_taken_0x2004b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004B4u;
        // 0x2004b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004b4) {
            ctx->pc = 0x2004D4u;
            goto label_2004d4;
        }
    }
    ctx->pc = 0x2004BCu;
label_2004bc:
    // 0x2004bc: 0x8e6603f0  lw          $a2, 0x3F0($s3)
    ctx->pc = 0x2004bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1008)));
label_2004c0:
    // 0x2004c0: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x2004c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2004c4:
    // 0x2004c4: 0x242300b  movn        $a2, $s2, $v0
    ctx->pc = 0x2004c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_2004c8:
    // 0x2004c8: 0xc049522  jal         func_125488
label_2004cc:
    if (ctx->pc == 0x2004CCu) {
        ctx->pc = 0x2004CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004C8u;
        // 0x2004cc: 0xae6603f4  sw          $a2, 0x3F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1012), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004D0u;
        goto label_2004d0;
    }
    ctx->pc = 0x2004C8u;
    SET_GPR_U32(ctx, 31, 0x2004D0u);
    ctx->pc = 0x2004CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004C8u;
    // 0x2004cc: 0xae6603f4  sw          $a2, 0x3F4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1012), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2004C8u, 0x2004D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004D0u;
label_2004d0:
    // 0x2004d0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2004d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2004d4:
    // 0x2004d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2004d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2004d8:
    // 0x2004d8: 0x2fe100a  movz        $v0, $s7, $fp
    ctx->pc = 0x2004d8u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
label_2004dc:
    // 0x2004dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2004dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2004e0:
    // 0x2004e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2004e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2004e4:
    // 0x2004e4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2004e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2004e8:
    // 0x2004e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2004e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2004ec:
    // 0x2004ec: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2004ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2004f0:
    // 0x2004f0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2004f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2004f4:
    // 0x2004f4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2004f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2004f8:
    // 0x2004f8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2004f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2004fc:
    // 0x2004fc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2004fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_200500:
    // 0x200500: 0x3e00008  jr          $ra
label_200504:
    if (ctx->pc == 0x200504u) {
        ctx->pc = 0x200504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200500u;
        // 0x200504: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200508u;
        goto label_fallthrough_0x200500;
    }
    ctx->pc = 0x200500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200500u;
        // 0x200504: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200500:
    ctx->pc = 0x200508u;
}

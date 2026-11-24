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

// Function: sub_00307560
// Address: 0x307560 - 0x307994
void sub_00307560_0x307560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307560_0x307560");
#endif

    switch (ctx->pc) {
        case 0x3075d0u: goto label_3075d0;
        case 0x3075e0u: goto label_3075e0;
        case 0x307634u: goto label_307634;
        case 0x307644u: goto label_307644;
        case 0x307654u: goto label_307654;
        case 0x3076b0u: goto label_3076b0;
        case 0x3076c0u: goto label_3076c0;
        case 0x3076e8u: goto label_3076e8;
        case 0x307700u: goto label_307700;
        case 0x3077c0u: goto label_3077c0;
        case 0x3077d4u: goto label_3077d4;
        case 0x3077f0u: goto label_3077f0;
        case 0x307828u: goto label_307828;
        case 0x307858u: goto label_307858;
        case 0x307868u: goto label_307868;
        case 0x3078d4u: goto label_3078d4;
        case 0x307980u: goto label_307980;
        default: break;
    }

    ctx->pc = 0x307560u;

    // 0x307560: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x307560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x307564: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x307564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x307568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x307568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30756c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x307570: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x307570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x307574: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x307574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307578: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x307578u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x30757c: 0x10a300b2  beq         $a1, $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x30757Cu;
    {
        const bool branch_taken_0x30757c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x307580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30757Cu;
        // 0x307580: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30757c) {
            ctx->pc = 0x307848u;
            goto label_307848;
        }
    }
    ctx->pc = 0x307584u;
    // 0x307584: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x307584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307588: 0x10a3008f  beq         $a1, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x307588u;
    {
        const bool branch_taken_0x307588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x307588) {
            ctx->pc = 0x3077C8u;
            goto label_3077c8;
        }
    }
    ctx->pc = 0x307590u;
    // 0x307590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x307590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307594: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x307594u;
    {
        const bool branch_taken_0x307594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x307598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307594u;
        // 0x307598: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307594) {
            ctx->pc = 0x307610u;
            goto label_307610;
        }
    }
    ctx->pc = 0x30759Cu;
    // 0x30759c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30759Cu;
    {
        const bool branch_taken_0x30759c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x30759c) {
            ctx->pc = 0x3075F0u;
            goto label_3075f0;
        }
    }
    ctx->pc = 0x3075A4u;
    // 0x3075a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3075A4u;
    {
        const bool branch_taken_0x3075a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3075a4) {
            ctx->pc = 0x3075B8u;
            goto label_3075b8;
        }
    }
    ctx->pc = 0x3075ACu;
    // 0x3075ac: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x3075ACu;
    {
        const bool branch_taken_0x3075ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3075ac) {
            ctx->pc = 0x307980u;
            goto label_307980;
        }
    }
    ctx->pc = 0x3075B4u;
    // 0x3075b4: 0x0  nop
    ctx->pc = 0x3075b4u;
    // NOP
label_3075b8:
    // 0x3075b8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3075B8u;
    {
        const bool branch_taken_0x3075b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3075b8) {
            ctx->pc = 0x3075D8u;
            goto label_3075d8;
        }
    }
    ctx->pc = 0x3075C0u;
    // 0x3075c0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3075c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3075c4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3075c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3075c8: 0xc0a9c20  jal         func_2A7080
    ctx->pc = 0x3075C8u;
    SET_GPR_U32(ctx, 31, 0x3075D0u);
    ctx->pc = 0x3075CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3075C8u;
    // 0x3075cc: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7080u, 0x3075C8u, 0x3075D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075D0u;
label_3075d0:
    // 0x3075d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3075D0u;
    {
        const bool branch_taken_0x3075d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3075D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3075D0u;
        // 0x3075d4: 0xae220560  sw          $v0, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3075d0) {
            ctx->pc = 0x3075E0u;
            goto label_3075e0;
        }
    }
    ctx->pc = 0x3075D8u;
label_3075d8:
    // 0x3075d8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3075D8u;
    SET_GPR_U32(ctx, 31, 0x3075E0u);
    ctx->pc = 0x3075DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3075D8u;
    // 0x3075dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3075D8u, 0x3075E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075E0u;
label_3075e0:
    // 0x3075e0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3075e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3075e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3075e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3075e8: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x3075E8u;
    {
        const bool branch_taken_0x3075e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3075ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3075E8u;
        // 0x3075ec: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3075e8) {
            ctx->pc = 0x307980u;
            goto label_307980;
        }
    }
    ctx->pc = 0x3075F0u;
label_3075f0:
    // 0x3075f0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3075f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3075f4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3075f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3075f8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3075f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3075fc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3075fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x307600: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x307600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x307604: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x307604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x307608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30760c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x30760cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_307610:
    // 0x307610: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x307610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x307614: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x307614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x307618: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x307618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x30761c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30761cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x307620: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x307620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x307624: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x307624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307628: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x307628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30762c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x30762Cu;
    SET_GPR_U32(ctx, 31, 0x307634u);
    ctx->pc = 0x307630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30762Cu;
    // 0x307630: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x30762Cu, 0x307634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307634u;
label_307634:
    // 0x307634: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x307634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x307638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30763c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x30763Cu;
    SET_GPR_U32(ctx, 31, 0x307644u);
    ctx->pc = 0x307640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30763Cu;
    // 0x307640: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x30763Cu, 0x307644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307644u;
label_307644:
    // 0x307644: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307644u;
    {
        const bool branch_taken_0x307644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307644u;
        // 0x307648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307644) {
            ctx->pc = 0x307658u;
            goto label_307658;
        }
    }
    ctx->pc = 0x30764Cu;
    // 0x30764c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30764Cu;
    SET_GPR_U32(ctx, 31, 0x307654u);
    ctx->pc = 0x307650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30764Cu;
    // 0x307650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30764Cu, 0x307654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307654u;
label_307654:
    // 0x307654: 0x0  nop
    ctx->pc = 0x307654u;
    // NOP
label_307658:
    // 0x307658: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x307658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30765c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x30765cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x307660: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x307660u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x307664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307668: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x307668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30766c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30766cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307670: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x307670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x307674: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x307674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x307678: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x307678u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x30767c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30767cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x307680: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x307680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x307684: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x307684u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x307688: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x307688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30768c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x30768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x307690: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x307690u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x307694: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x307694u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x307698: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x307698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x30769c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x30769cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3076a0: 0x92260568  lbu         $a2, 0x568($s1)
    ctx->pc = 0x3076a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3076a4: 0xc62c0564  lwc1        $f12, 0x564($s1)
    ctx->pc = 0x3076a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3076a8: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3076A8u;
    SET_GPR_U32(ctx, 31, 0x3076B0u);
    ctx->pc = 0x3076ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076A8u;
    // 0x3076ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3076A8u, 0x3076B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076B0u;
label_3076b0:
    // 0x3076b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3076B0u;
    {
        const bool branch_taken_0x3076b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3076B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3076B0u;
        // 0x3076b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3076b0) {
            ctx->pc = 0x3076C0u;
            goto label_3076c0;
        }
    }
    ctx->pc = 0x3076B8u;
    // 0x3076b8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3076B8u;
    SET_GPR_U32(ctx, 31, 0x3076C0u);
    ctx->pc = 0x3076BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076B8u;
    // 0x3076bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3076B8u, 0x3076C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076C0u;
label_3076c0:
    // 0x3076c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3076c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3076c4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3076c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3076c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3076c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076cc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3076ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3076d0: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3076d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3076d4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3076d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3076d8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3076d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3076dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3076dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3076e0: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3076E0u;
    SET_GPR_U32(ctx, 31, 0x3076E8u);
    ctx->pc = 0x3076E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076E0u;
    // 0x3076e4: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3076E0u, 0x3076E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076E8u;
label_3076e8:
    // 0x3076e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3076E8u;
    {
        const bool branch_taken_0x3076e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3076e8) {
            ctx->pc = 0x307718u;
            goto label_307718;
        }
    }
    ctx->pc = 0x3076F0u;
    // 0x3076f0: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3076f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3076f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3076f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076f8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3076F8u;
    SET_GPR_U32(ctx, 31, 0x307700u);
    ctx->pc = 0x3076FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076F8u;
    // 0x3076fc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3076F8u, 0x307700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307700u;
label_307700:
    // 0x307700: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x307700u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x307704: 0x7e230550  sq          $v1, 0x550($s1)
    ctx->pc = 0x307704u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 3));
    // 0x307708: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x307708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x30770c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x307710: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x307710u;
    {
        const bool branch_taken_0x307710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307710u;
        // 0x307714: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307710) {
            ctx->pc = 0x307980u;
            goto label_307980;
        }
    }
    ctx->pc = 0x307718u;
label_307718:
    // 0x307718: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x307718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x30771c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30771Cu;
    {
        const bool branch_taken_0x30771c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x307720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30771Cu;
        // 0x307720: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30771c) {
            ctx->pc = 0x307730u;
            goto label_307730;
        }
    }
    ctx->pc = 0x307724u;
    // 0x307724: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x307724u;
    {
        const bool branch_taken_0x307724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307724) {
            ctx->pc = 0x3077B0u;
            goto label_3077b0;
        }
    }
    ctx->pc = 0x30772Cu;
    // 0x30772c: 0x0  nop
    ctx->pc = 0x30772cu;
    // NOP
label_307730:
    // 0x307730: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x307730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x307734: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x307734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x307738: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x307738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30773c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x30773cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x307740: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x307740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x307744: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x307744u;
    {
        const bool branch_taken_0x307744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x307744) {
            ctx->pc = 0x307780u;
            goto label_307780;
        }
    }
    ctx->pc = 0x30774Cu;
    // 0x30774c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x30774cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x307750: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x307750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x307754: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x307754u;
    {
        const bool branch_taken_0x307754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x307758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307754u;
        // 0x307758: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307754) {
            ctx->pc = 0x3077A8u;
            goto label_3077a8;
        }
    }
    ctx->pc = 0x30775Cu;
    // 0x30775c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307760: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x307760u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x307764: 0x0  nop
    ctx->pc = 0x307764u;
    // NOP
    // 0x307768: 0x0  nop
    ctx->pc = 0x307768u;
    // NOP
    // 0x30776c: 0x2010  mfhi        $a0
    ctx->pc = 0x30776cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x307770: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x307770u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x307774: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x307774u;
    {
        const bool branch_taken_0x307774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307774u;
        // 0x307778: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307774) {
            ctx->pc = 0x3077A8u;
            goto label_3077a8;
        }
    }
    ctx->pc = 0x30777Cu;
    // 0x30777c: 0x0  nop
    ctx->pc = 0x30777cu;
    // NOP
label_307780:
    // 0x307780: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x307780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x307784: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x307784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x307788: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x307788u;
    {
        const bool branch_taken_0x307788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307788) {
            ctx->pc = 0x3077A8u;
            goto label_3077a8;
        }
    }
    ctx->pc = 0x307790u;
    // 0x307790: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x307790u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x307794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307798: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x307798u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x30779c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30779Cu;
    {
        const bool branch_taken_0x30779c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3077A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30779Cu;
        // 0x3077a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30779c) {
            ctx->pc = 0x3077B0u;
            goto label_3077b0;
        }
    }
    ctx->pc = 0x3077A4u;
    // 0x3077a4: 0x0  nop
    ctx->pc = 0x3077a4u;
    // NOP
label_3077a8:
    // 0x3077a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3077a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3077ac: 0x0  nop
    ctx->pc = 0x3077acu;
    // NOP
label_3077b0:
    // 0x3077b0: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x3077B0u;
    {
        const bool branch_taken_0x3077b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3077B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077B0u;
        // 0x3077b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077b0) {
            ctx->pc = 0x307980u;
            goto label_307980;
        }
    }
    ctx->pc = 0x3077B8u;
    // 0x3077b8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3077B8u;
    SET_GPR_U32(ctx, 31, 0x3077C0u);
    ctx->pc = 0x3077BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077B8u;
    // 0x3077bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3077B8u, 0x3077C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077C0u;
label_3077c0:
    // 0x3077c0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3077C0u;
    {
        const bool branch_taken_0x3077c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3077c0) {
            ctx->pc = 0x307980u;
            goto label_307980;
        }
    }
    ctx->pc = 0x3077C8u;
label_3077c8:
    // 0x3077c8: 0xa2230568  sb          $v1, 0x568($s1)
    ctx->pc = 0x3077c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1384), (uint8_t)GPR_U32(ctx, 3));
    // 0x3077cc: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3077CCu;
    SET_GPR_U32(ctx, 31, 0x3077D4u);
    ctx->pc = 0x3077D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077CCu;
    // 0x3077d0: 0x8e240560  lw          $a0, 0x560($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3077CCu, 0x3077D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077D4u;
label_3077d4:
    // 0x3077d4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3077D4u;
    {
        const bool branch_taken_0x3077d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3077D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077D4u;
        // 0x3077d8: 0xae200560  sw          $zero, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077d4) {
            ctx->pc = 0x307828u;
            goto label_307828;
        }
    }
    ctx->pc = 0x3077DCu;
    // 0x3077dc: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3077dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3077e0: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3077e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3077e4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3077e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3077e8: 0xc0a9c30  jal         func_2A70C0
    ctx->pc = 0x3077E8u;
    SET_GPR_U32(ctx, 31, 0x3077F0u);
    ctx->pc = 0x3077ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077E8u;
    // 0x3077ec: 0x26270550  addiu       $a3, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A70C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A70C0u, 0x3077E8u, 0x3077F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077F0u;
label_3077f0:
    // 0x3077f0: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x3077f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
    // 0x3077f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3077f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3077f8: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3077f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3077fc: 0x3c021a00  lui         $v0, 0x1A00
    ctx->pc = 0x3077fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6656 << 16));
    // 0x307800: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x307800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x307804: 0x34456802  ori         $a1, $v0, 0x6802
    ctx->pc = 0x307804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26626);
    // 0x307808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30780c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x30780cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x307810: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x307810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307814: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x307814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307818: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x307818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30781c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30781cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307820: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x307820u;
    SET_GPR_U32(ctx, 31, 0x307828u);
    ctx->pc = 0x307824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307820u;
    // 0x307824: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x307820u, 0x307828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307828u;
label_307828:
    // 0x307828: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x307828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x30782c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x30782cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x307830: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x307830u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x307834: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x307834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x307838: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x307838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x30783c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x30783cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x307840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x307844: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x307844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_307848:
    // 0x307848: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x307848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x30784c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307850: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x307850u;
    SET_GPR_U32(ctx, 31, 0x307858u);
    ctx->pc = 0x307854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307850u;
    // 0x307854: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x307850u, 0x307858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307858u;
label_307858:
    // 0x307858: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307858u;
    {
        const bool branch_taken_0x307858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307858u;
        // 0x30785c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307858) {
            ctx->pc = 0x307868u;
            goto label_307868;
        }
    }
    ctx->pc = 0x307860u;
    // 0x307860: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x307860u;
    SET_GPR_U32(ctx, 31, 0x307868u);
    ctx->pc = 0x307864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307860u;
    // 0x307864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x307860u, 0x307868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307868u;
label_307868:
    // 0x307868: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x307868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30786c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30786Cu;
    {
        const bool branch_taken_0x30786c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x307870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30786Cu;
        // 0x307870: 0x28610018  slti        $at, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30786c) {
            ctx->pc = 0x3078D8u;
            goto label_3078d8;
        }
    }
    ctx->pc = 0x307874u;
    // 0x307874: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x307874u;
    {
        const bool branch_taken_0x307874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x307874) {
            ctx->pc = 0x3078D8u;
            goto label_3078d8;
        }
    }
    ctx->pc = 0x30787Cu;
    // 0x30787c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30787cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x307880: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x307880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x307884: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x307884u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x307888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30788c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x30788cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x307890: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x307890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307894: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x307894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x307898: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x307898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x30789c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x30789cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3078a0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3078a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3078a4: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x3078a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x3078a8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3078a8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3078ac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3078acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3078b0: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3078b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x3078b4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3078b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3078b8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3078b8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3078bc: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3078bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3078c0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3078c0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3078c4: 0x92260568  lbu         $a2, 0x568($s1)
    ctx->pc = 0x3078c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3078c8: 0xc62c0564  lwc1        $f12, 0x564($s1)
    ctx->pc = 0x3078c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3078cc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3078CCu;
    SET_GPR_U32(ctx, 31, 0x3078D4u);
    ctx->pc = 0x3078D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078CCu;
    // 0x3078d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3078CCu, 0x3078D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3078D4u;
label_3078d4:
    // 0x3078d4: 0x0  nop
    ctx->pc = 0x3078d4u;
    // NOP
label_3078d8:
    // 0x3078d8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3078d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3078dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3078DCu;
    {
        const bool branch_taken_0x3078dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3078E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078DCu;
        // 0x3078e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078dc) {
            ctx->pc = 0x3078F0u;
            goto label_3078f0;
        }
    }
    ctx->pc = 0x3078E4u;
    // 0x3078e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3078E4u;
    {
        const bool branch_taken_0x3078e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3078e4) {
            ctx->pc = 0x307970u;
            goto label_307970;
        }
    }
    ctx->pc = 0x3078ECu;
    // 0x3078ec: 0x0  nop
    ctx->pc = 0x3078ecu;
    // NOP
label_3078f0:
    // 0x3078f0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3078f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3078f4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3078f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3078f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3078f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3078fc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3078fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x307900: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x307900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x307904: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x307904u;
    {
        const bool branch_taken_0x307904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x307904) {
            ctx->pc = 0x307940u;
            goto label_307940;
        }
    }
    ctx->pc = 0x30790Cu;
    // 0x30790c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x30790cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x307910: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x307910u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x307914: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x307914u;
    {
        const bool branch_taken_0x307914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x307918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307914u;
        // 0x307918: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307914) {
            ctx->pc = 0x307968u;
            goto label_307968;
        }
    }
    ctx->pc = 0x30791Cu;
    // 0x30791c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307920: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x307920u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x307924: 0x0  nop
    ctx->pc = 0x307924u;
    // NOP
    // 0x307928: 0x0  nop
    ctx->pc = 0x307928u;
    // NOP
    // 0x30792c: 0x2010  mfhi        $a0
    ctx->pc = 0x30792cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x307930: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x307930u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x307934: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x307934u;
    {
        const bool branch_taken_0x307934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307934u;
        // 0x307938: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307934) {
            ctx->pc = 0x307968u;
            goto label_307968;
        }
    }
    ctx->pc = 0x30793Cu;
    // 0x30793c: 0x0  nop
    ctx->pc = 0x30793cu;
    // NOP
label_307940:
    // 0x307940: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x307940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x307944: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x307944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x307948: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x307948u;
    {
        const bool branch_taken_0x307948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307948) {
            ctx->pc = 0x307968u;
            goto label_307968;
        }
    }
    ctx->pc = 0x307950u;
    // 0x307950: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x307950u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x307954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307958: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x307958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x30795c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30795Cu;
    {
        const bool branch_taken_0x30795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30795Cu;
        // 0x307960: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30795c) {
            ctx->pc = 0x307970u;
            goto label_307970;
        }
    }
    ctx->pc = 0x307964u;
    // 0x307964: 0x0  nop
    ctx->pc = 0x307964u;
    // NOP
label_307968:
    // 0x307968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30796c: 0x0  nop
    ctx->pc = 0x30796cu;
    // NOP
label_307970:
    // 0x307970: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307970u;
    {
        const bool branch_taken_0x307970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x307974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307970u;
        // 0x307974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307970) {
            ctx->pc = 0x307980u;
            goto label_307980;
        }
    }
    ctx->pc = 0x307978u;
    // 0x307978: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x307978u;
    SET_GPR_U32(ctx, 31, 0x307980u);
    ctx->pc = 0x30797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307978u;
    // 0x30797c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x307978u, 0x307980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307980u;
label_307980:
    // 0x307980: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x307980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307984: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x307984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307988: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x307988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30798c: 0x3e00008  jr          $ra
    ctx->pc = 0x30798Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30798Cu;
        // 0x307990: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30798Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307994u;
}

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

// Function: sub_001DF2F0
// Address: 0x1df2f0 - 0x1df410
void sub_001DF2F0_0x1df2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF2F0_0x1df2f0");
#endif

    switch (ctx->pc) {
        case 0x1df2f0u: goto label_1df2f0;
        case 0x1df2f4u: goto label_1df2f4;
        case 0x1df2f8u: goto label_1df2f8;
        case 0x1df2fcu: goto label_1df2fc;
        case 0x1df300u: goto label_1df300;
        case 0x1df304u: goto label_1df304;
        case 0x1df308u: goto label_1df308;
        case 0x1df30cu: goto label_1df30c;
        case 0x1df310u: goto label_1df310;
        case 0x1df314u: goto label_1df314;
        case 0x1df318u: goto label_1df318;
        case 0x1df31cu: goto label_1df31c;
        case 0x1df320u: goto label_1df320;
        case 0x1df324u: goto label_1df324;
        case 0x1df328u: goto label_1df328;
        case 0x1df32cu: goto label_1df32c;
        case 0x1df330u: goto label_1df330;
        case 0x1df334u: goto label_1df334;
        case 0x1df338u: goto label_1df338;
        case 0x1df33cu: goto label_1df33c;
        case 0x1df340u: goto label_1df340;
        case 0x1df344u: goto label_1df344;
        case 0x1df348u: goto label_1df348;
        case 0x1df34cu: goto label_1df34c;
        case 0x1df350u: goto label_1df350;
        case 0x1df354u: goto label_1df354;
        case 0x1df358u: goto label_1df358;
        case 0x1df35cu: goto label_1df35c;
        case 0x1df360u: goto label_1df360;
        case 0x1df364u: goto label_1df364;
        case 0x1df368u: goto label_1df368;
        case 0x1df36cu: goto label_1df36c;
        case 0x1df370u: goto label_1df370;
        case 0x1df374u: goto label_1df374;
        case 0x1df378u: goto label_1df378;
        case 0x1df37cu: goto label_1df37c;
        case 0x1df380u: goto label_1df380;
        case 0x1df384u: goto label_1df384;
        case 0x1df388u: goto label_1df388;
        case 0x1df38cu: goto label_1df38c;
        case 0x1df390u: goto label_1df390;
        case 0x1df394u: goto label_1df394;
        case 0x1df398u: goto label_1df398;
        case 0x1df39cu: goto label_1df39c;
        case 0x1df3a0u: goto label_1df3a0;
        case 0x1df3a4u: goto label_1df3a4;
        case 0x1df3a8u: goto label_1df3a8;
        case 0x1df3acu: goto label_1df3ac;
        case 0x1df3b0u: goto label_1df3b0;
        case 0x1df3b4u: goto label_1df3b4;
        case 0x1df3b8u: goto label_1df3b8;
        case 0x1df3bcu: goto label_1df3bc;
        case 0x1df3c0u: goto label_1df3c0;
        case 0x1df3c4u: goto label_1df3c4;
        case 0x1df3c8u: goto label_1df3c8;
        case 0x1df3ccu: goto label_1df3cc;
        case 0x1df3d0u: goto label_1df3d0;
        case 0x1df3d4u: goto label_1df3d4;
        case 0x1df3d8u: goto label_1df3d8;
        case 0x1df3dcu: goto label_1df3dc;
        case 0x1df3e0u: goto label_1df3e0;
        case 0x1df3e4u: goto label_1df3e4;
        case 0x1df3e8u: goto label_1df3e8;
        case 0x1df3ecu: goto label_1df3ec;
        case 0x1df3f0u: goto label_1df3f0;
        case 0x1df3f4u: goto label_1df3f4;
        case 0x1df3f8u: goto label_1df3f8;
        case 0x1df3fcu: goto label_1df3fc;
        case 0x1df400u: goto label_1df400;
        case 0x1df404u: goto label_1df404;
        case 0x1df408u: goto label_1df408;
        case 0x1df40cu: goto label_1df40c;
        default: break;
    }

    ctx->pc = 0x1df2f0u;

label_1df2f0:
    // 0x1df2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1df2f4:
    // 0x1df2f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1df2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1df2f8:
    // 0x1df2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1df2fc:
    // 0x1df2fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1df2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1df300:
    // 0x1df300: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1df304:
    if (ctx->pc == 0x1DF304u) {
        ctx->pc = 0x1DF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF300u;
        // 0x1df304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF308u;
        goto label_1df308;
    }
    ctx->pc = 0x1DF300u;
    {
        const bool branch_taken_0x1df300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF300u;
        // 0x1df304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df300) {
            ctx->pc = 0x1DF310u;
            goto label_1df310;
        }
    }
    ctx->pc = 0x1DF308u;
label_1df308:
    // 0x1df308: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1df30c:
    if (ctx->pc == 0x1DF30Cu) {
        ctx->pc = 0x1DF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF308u;
        // 0x1df30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF310u;
        goto label_1df310;
    }
    ctx->pc = 0x1DF308u;
    {
        const bool branch_taken_0x1df308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF308u;
        // 0x1df30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df308) {
            ctx->pc = 0x1DF400u;
            goto label_1df400;
        }
    }
    ctx->pc = 0x1DF310u;
label_1df310:
    // 0x1df310: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1df310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1df314:
    // 0x1df314: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1df314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1df318:
    // 0x1df318: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1df318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1df31c:
    // 0x1df31c: 0x320f809  jalr        $t9
label_1df320:
    if (ctx->pc == 0x1DF320u) {
        ctx->pc = 0x1DF324u;
        goto label_1df324;
    }
    ctx->pc = 0x1DF31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF324u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF31Cu, 0x1DF324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF324u;
label_1df324:
    // 0x1df324: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1df328:
    if (ctx->pc == 0x1DF328u) {
        ctx->pc = 0x1DF32Cu;
        goto label_1df32c;
    }
    ctx->pc = 0x1DF324u;
    {
        const bool branch_taken_0x1df324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df324) {
            ctx->pc = 0x1DF348u;
            goto label_1df348;
        }
    }
    ctx->pc = 0x1DF32Cu;
label_1df32c:
    // 0x1df32c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1df32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df330:
    // 0x1df330: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1df330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1df334:
    // 0x1df334: 0x320f809  jalr        $t9
label_1df338:
    if (ctx->pc == 0x1DF338u) {
        ctx->pc = 0x1DF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF334u;
        // 0x1df338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF33Cu;
        goto label_1df33c;
    }
    ctx->pc = 0x1DF334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF33Cu);
        ctx->pc = 0x1DF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF334u;
        // 0x1df338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF334u, 0x1DF33Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF33Cu;
label_1df33c:
    // 0x1df33c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1df340:
    if (ctx->pc == 0x1DF340u) {
        ctx->pc = 0x1DF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF33Cu;
        // 0x1df340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF344u;
        goto label_1df344;
    }
    ctx->pc = 0x1DF33Cu;
    {
        const bool branch_taken_0x1df33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF33Cu;
        // 0x1df340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df33c) {
            ctx->pc = 0x1DF400u;
            goto label_1df400;
        }
    }
    ctx->pc = 0x1DF344u;
label_1df344:
    // 0x1df344: 0x0  nop
    ctx->pc = 0x1df344u;
    // NOP
label_1df348:
    // 0x1df348: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1df348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1df34c:
    // 0x1df34c: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x1df34cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1df350:
    // 0x1df350: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1df350u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1df354:
    // 0x1df354: 0x85070006  lh          $a3, 0x6($t0)
    ctx->pc = 0x1df354u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_1df358:
    // 0x1df358: 0x85030004  lh          $v1, 0x4($t0)
    ctx->pc = 0x1df358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_1df35c:
    // 0x1df35c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1df35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1df360:
    // 0x1df360: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1df360u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1df364:
    // 0x1df364: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1df364u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1df368:
    // 0x1df368: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1df368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1df36c:
    // 0x1df36c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1df36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1df370:
    // 0x1df370: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1df370u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1df374:
    // 0x1df374: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1df374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1df378:
    // 0x1df378: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1df378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1df37c:
    // 0x1df37c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1df37cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1df380:
    // 0x1df380: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1df384:
    // 0x1df384: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1df384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1df388:
    // 0x1df388: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1df388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1df38c:
    // 0x1df38c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1df38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1df390:
    // 0x1df390: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1df390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1df394:
    // 0x1df394: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1df398:
    if (ctx->pc == 0x1DF398u) {
        ctx->pc = 0x1DF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF394u;
        // 0x1df398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF39Cu;
        goto label_1df39c;
    }
    ctx->pc = 0x1DF394u;
    {
        const bool branch_taken_0x1df394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF394u;
        // 0x1df398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df394) {
            ctx->pc = 0x1DF3A8u;
            goto label_1df3a8;
        }
    }
    ctx->pc = 0x1DF39Cu;
label_1df39c:
    // 0x1df39c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1df3a0:
    if (ctx->pc == 0x1DF3A0u) {
        ctx->pc = 0x1DF3A4u;
        goto label_1df3a4;
    }
    ctx->pc = 0x1DF39Cu;
    {
        const bool branch_taken_0x1df39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df39c) {
            ctx->pc = 0x1DF400u;
            goto label_1df400;
        }
    }
    ctx->pc = 0x1DF3A4u;
label_1df3a4:
    // 0x1df3a4: 0x0  nop
    ctx->pc = 0x1df3a4u;
    // NOP
label_1df3a8:
    // 0x1df3a8: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x1df3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1df3ac:
    // 0x1df3ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1df3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1df3b0:
    // 0x1df3b0: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1df3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1df3b4:
    // 0x1df3b4: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x1df3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1df3b8:
    // 0x1df3b8: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x1df3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1df3bc:
    // 0x1df3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df3c0:
    // 0x1df3c0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1df3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1df3c4:
    // 0x1df3c4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1df3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1df3c8:
    // 0x1df3c8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1df3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1df3cc:
    // 0x1df3cc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1df3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1df3d0:
    // 0x1df3d0: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x1df3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
label_1df3d4:
    // 0x1df3d4: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x1df3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1df3d8:
    // 0x1df3d8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1df3dc:
    // 0x1df3dc: 0x52b02  srl         $a1, $a1, 12
    ctx->pc = 0x1df3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
label_1df3e0:
    // 0x1df3e0: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x1df3e0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_1df3e4:
    // 0x1df3e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1df3e8:
    // 0x1df3e8: 0x0  nop
    ctx->pc = 0x1df3e8u;
    // NOP
label_1df3ec:
    // 0x1df3ec: 0x2810  mfhi        $a1
    ctx->pc = 0x1df3ecu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1df3f0:
    // 0x1df3f0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1df3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1df3f4:
    // 0x1df3f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1df3f8:
    // 0x1df3f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1df3fc:
    // 0x1df3fc: 0x0  nop
    ctx->pc = 0x1df3fcu;
    // NOP
label_1df400:
    // 0x1df400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1df404:
    // 0x1df404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1df408:
    // 0x1df408: 0x3e00008  jr          $ra
label_1df40c:
    if (ctx->pc == 0x1DF40Cu) {
        ctx->pc = 0x1DF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF408u;
        // 0x1df40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF410u;
        goto label_fallthrough_0x1df408;
    }
    ctx->pc = 0x1DF408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF408u;
        // 0x1df40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1df408:
    ctx->pc = 0x1DF410u;
}

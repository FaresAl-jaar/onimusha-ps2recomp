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

// Function: sub_001DE370
// Address: 0x1de370 - 0x1de510
void sub_001DE370_0x1de370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE370_0x1de370");
#endif

    switch (ctx->pc) {
        case 0x1de370u: goto label_1de370;
        case 0x1de374u: goto label_1de374;
        case 0x1de378u: goto label_1de378;
        case 0x1de37cu: goto label_1de37c;
        case 0x1de380u: goto label_1de380;
        case 0x1de384u: goto label_1de384;
        case 0x1de388u: goto label_1de388;
        case 0x1de38cu: goto label_1de38c;
        case 0x1de390u: goto label_1de390;
        case 0x1de394u: goto label_1de394;
        case 0x1de398u: goto label_1de398;
        case 0x1de39cu: goto label_1de39c;
        case 0x1de3a0u: goto label_1de3a0;
        case 0x1de3a4u: goto label_1de3a4;
        case 0x1de3a8u: goto label_1de3a8;
        case 0x1de3acu: goto label_1de3ac;
        case 0x1de3b0u: goto label_1de3b0;
        case 0x1de3b4u: goto label_1de3b4;
        case 0x1de3b8u: goto label_1de3b8;
        case 0x1de3bcu: goto label_1de3bc;
        case 0x1de3c0u: goto label_1de3c0;
        case 0x1de3c4u: goto label_1de3c4;
        case 0x1de3c8u: goto label_1de3c8;
        case 0x1de3ccu: goto label_1de3cc;
        case 0x1de3d0u: goto label_1de3d0;
        case 0x1de3d4u: goto label_1de3d4;
        case 0x1de3d8u: goto label_1de3d8;
        case 0x1de3dcu: goto label_1de3dc;
        case 0x1de3e0u: goto label_1de3e0;
        case 0x1de3e4u: goto label_1de3e4;
        case 0x1de3e8u: goto label_1de3e8;
        case 0x1de3ecu: goto label_1de3ec;
        case 0x1de3f0u: goto label_1de3f0;
        case 0x1de3f4u: goto label_1de3f4;
        case 0x1de3f8u: goto label_1de3f8;
        case 0x1de3fcu: goto label_1de3fc;
        case 0x1de400u: goto label_1de400;
        case 0x1de404u: goto label_1de404;
        case 0x1de408u: goto label_1de408;
        case 0x1de40cu: goto label_1de40c;
        case 0x1de410u: goto label_1de410;
        case 0x1de414u: goto label_1de414;
        case 0x1de418u: goto label_1de418;
        case 0x1de41cu: goto label_1de41c;
        case 0x1de420u: goto label_1de420;
        case 0x1de424u: goto label_1de424;
        case 0x1de428u: goto label_1de428;
        case 0x1de42cu: goto label_1de42c;
        case 0x1de430u: goto label_1de430;
        case 0x1de434u: goto label_1de434;
        case 0x1de438u: goto label_1de438;
        case 0x1de43cu: goto label_1de43c;
        case 0x1de440u: goto label_1de440;
        case 0x1de444u: goto label_1de444;
        case 0x1de448u: goto label_1de448;
        case 0x1de44cu: goto label_1de44c;
        case 0x1de450u: goto label_1de450;
        case 0x1de454u: goto label_1de454;
        case 0x1de458u: goto label_1de458;
        case 0x1de45cu: goto label_1de45c;
        case 0x1de460u: goto label_1de460;
        case 0x1de464u: goto label_1de464;
        case 0x1de468u: goto label_1de468;
        case 0x1de46cu: goto label_1de46c;
        case 0x1de470u: goto label_1de470;
        case 0x1de474u: goto label_1de474;
        case 0x1de478u: goto label_1de478;
        case 0x1de47cu: goto label_1de47c;
        case 0x1de480u: goto label_1de480;
        case 0x1de484u: goto label_1de484;
        case 0x1de488u: goto label_1de488;
        case 0x1de48cu: goto label_1de48c;
        case 0x1de490u: goto label_1de490;
        case 0x1de494u: goto label_1de494;
        case 0x1de498u: goto label_1de498;
        case 0x1de49cu: goto label_1de49c;
        case 0x1de4a0u: goto label_1de4a0;
        case 0x1de4a4u: goto label_1de4a4;
        case 0x1de4a8u: goto label_1de4a8;
        case 0x1de4acu: goto label_1de4ac;
        case 0x1de4b0u: goto label_1de4b0;
        case 0x1de4b4u: goto label_1de4b4;
        case 0x1de4b8u: goto label_1de4b8;
        case 0x1de4bcu: goto label_1de4bc;
        case 0x1de4c0u: goto label_1de4c0;
        case 0x1de4c4u: goto label_1de4c4;
        case 0x1de4c8u: goto label_1de4c8;
        case 0x1de4ccu: goto label_1de4cc;
        case 0x1de4d0u: goto label_1de4d0;
        case 0x1de4d4u: goto label_1de4d4;
        case 0x1de4d8u: goto label_1de4d8;
        case 0x1de4dcu: goto label_1de4dc;
        case 0x1de4e0u: goto label_1de4e0;
        case 0x1de4e4u: goto label_1de4e4;
        case 0x1de4e8u: goto label_1de4e8;
        case 0x1de4ecu: goto label_1de4ec;
        case 0x1de4f0u: goto label_1de4f0;
        case 0x1de4f4u: goto label_1de4f4;
        case 0x1de4f8u: goto label_1de4f8;
        case 0x1de4fcu: goto label_1de4fc;
        case 0x1de500u: goto label_1de500;
        case 0x1de504u: goto label_1de504;
        case 0x1de508u: goto label_1de508;
        case 0x1de50cu: goto label_1de50c;
        default: break;
    }

    ctx->pc = 0x1de370u;

label_1de370:
    // 0x1de370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1de374:
    // 0x1de374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1de378:
    // 0x1de378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de37c:
    // 0x1de37c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1de37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1de380:
    // 0x1de380: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1de384:
    if (ctx->pc == 0x1DE384u) {
        ctx->pc = 0x1DE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE380u;
        // 0x1de384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE388u;
        goto label_1de388;
    }
    ctx->pc = 0x1DE380u;
    {
        const bool branch_taken_0x1de380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE380u;
        // 0x1de384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de380) {
            ctx->pc = 0x1DE390u;
            goto label_1de390;
        }
    }
    ctx->pc = 0x1DE388u;
label_1de388:
    // 0x1de388: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1de38c:
    if (ctx->pc == 0x1DE38Cu) {
        ctx->pc = 0x1DE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE388u;
        // 0x1de38c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE390u;
        goto label_1de390;
    }
    ctx->pc = 0x1DE388u;
    {
        const bool branch_taken_0x1de388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE388u;
        // 0x1de38c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de388) {
            ctx->pc = 0x1DE500u;
            goto label_1de500;
        }
    }
    ctx->pc = 0x1DE390u;
label_1de390:
    // 0x1de390: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1de390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1de394:
    // 0x1de394: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1de394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1de398:
    // 0x1de398: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1de39c:
    // 0x1de39c: 0x320f809  jalr        $t9
label_1de3a0:
    if (ctx->pc == 0x1DE3A0u) {
        ctx->pc = 0x1DE3A4u;
        goto label_1de3a4;
    }
    ctx->pc = 0x1DE39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE3A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE39Cu, 0x1DE3A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE3A4u;
label_1de3a4:
    // 0x1de3a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1de3a8:
    if (ctx->pc == 0x1DE3A8u) {
        ctx->pc = 0x1DE3ACu;
        goto label_1de3ac;
    }
    ctx->pc = 0x1DE3A4u;
    {
        const bool branch_taken_0x1de3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de3a4) {
            ctx->pc = 0x1DE3C8u;
            goto label_1de3c8;
        }
    }
    ctx->pc = 0x1DE3ACu;
label_1de3ac:
    // 0x1de3ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1de3acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1de3b0:
    // 0x1de3b0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1de3b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1de3b4:
    // 0x1de3b4: 0x320f809  jalr        $t9
label_1de3b8:
    if (ctx->pc == 0x1DE3B8u) {
        ctx->pc = 0x1DE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3B4u;
        // 0x1de3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3BCu;
        goto label_1de3bc;
    }
    ctx->pc = 0x1DE3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE3BCu);
        ctx->pc = 0x1DE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3B4u;
        // 0x1de3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3B4u, 0x1DE3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE3BCu;
label_1de3bc:
    // 0x1de3bc: 0x10000050  b           . + 4 + (0x50 << 2)
label_1de3c0:
    if (ctx->pc == 0x1DE3C0u) {
        ctx->pc = 0x1DE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3BCu;
        // 0x1de3c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE3C4u;
        goto label_1de3c4;
    }
    ctx->pc = 0x1DE3BCu;
    {
        const bool branch_taken_0x1de3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3BCu;
        // 0x1de3c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3bc) {
            ctx->pc = 0x1DE500u;
            goto label_1de500;
        }
    }
    ctx->pc = 0x1DE3C4u;
label_1de3c4:
    // 0x1de3c4: 0x0  nop
    ctx->pc = 0x1de3c4u;
    // NOP
label_1de3c8:
    // 0x1de3c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1de3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1de3cc:
    // 0x1de3cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1de3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1de3d0:
    // 0x1de3d0: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1de3d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1de3d4:
    // 0x1de3d4: 0x84670006  lh          $a3, 0x6($v1)
    ctx->pc = 0x1de3d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_1de3d8:
    // 0x1de3d8: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x1de3d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1de3dc:
    // 0x1de3dc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1de3dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1de3e0:
    // 0x1de3e0: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1de3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1de3e4:
    // 0x1de3e4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1de3e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1de3e8:
    // 0x1de3e8: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x1de3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1de3ec:
    // 0x1de3ec: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1de3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1de3f0:
    // 0x1de3f0: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1de3f0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1de3f4:
    // 0x1de3f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1de3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1de3f8:
    // 0x1de3f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1de3fc:
    // 0x1de3fc: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1de3fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1de400:
    // 0x1de400: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1de400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1de404:
    // 0x1de404: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1de404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1de408:
    // 0x1de408: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1de408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1de40c:
    // 0x1de40c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1de40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1de410:
    // 0x1de410: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1de410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1de414:
    // 0x1de414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1de418:
    if (ctx->pc == 0x1DE418u) {
        ctx->pc = 0x1DE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE414u;
        // 0x1de418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE41Cu;
        goto label_1de41c;
    }
    ctx->pc = 0x1DE414u;
    {
        const bool branch_taken_0x1de414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE414u;
        // 0x1de418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de414) {
            ctx->pc = 0x1DE428u;
            goto label_1de428;
        }
    }
    ctx->pc = 0x1DE41Cu;
label_1de41c:
    // 0x1de41c: 0x10000038  b           . + 4 + (0x38 << 2)
label_1de420:
    if (ctx->pc == 0x1DE420u) {
        ctx->pc = 0x1DE424u;
        goto label_1de424;
    }
    ctx->pc = 0x1DE41Cu;
    {
        const bool branch_taken_0x1de41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de41c) {
            ctx->pc = 0x1DE500u;
            goto label_1de500;
        }
    }
    ctx->pc = 0x1DE424u;
label_1de424:
    // 0x1de424: 0x0  nop
    ctx->pc = 0x1de424u;
    // NOP
label_1de428:
    // 0x1de428: 0xc81026  xor         $v0, $a2, $t0
    ctx->pc = 0x1de428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
label_1de42c:
    // 0x1de42c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1de42cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1de430:
    // 0x1de430: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1de430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1de434:
    // 0x1de434: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1de438:
    if (ctx->pc == 0x1DE438u) {
        ctx->pc = 0x1DE43Cu;
        goto label_1de43c;
    }
    ctx->pc = 0x1DE434u;
    {
        const bool branch_taken_0x1de434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de434) {
            ctx->pc = 0x1DE448u;
            goto label_1de448;
        }
    }
    ctx->pc = 0x1DE43Cu;
label_1de43c:
    // 0x1de43c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1de440:
    // 0x1de440: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1de440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de444:
    // 0x1de444: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1de444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1de448:
    // 0x1de448: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1de448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1de44c:
    // 0x1de44c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1de44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1de450:
    // 0x1de450: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1de450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1de454:
    // 0x1de454: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x1de454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1de458:
    // 0x1de458: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x1de458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1de45c:
    // 0x1de45c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1de45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1de460:
    // 0x1de460: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1de460u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1de464:
    // 0x1de464: 0x0  nop
    ctx->pc = 0x1de464u;
    // NOP
label_1de468:
    // 0x1de468: 0x0  nop
    ctx->pc = 0x1de468u;
    // NOP
label_1de46c:
    // 0x1de46c: 0x1010  mfhi        $v0
    ctx->pc = 0x1de46cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1de470:
    // 0x1de470: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_1de474:
    if (ctx->pc == 0x1DE474u) {
        ctx->pc = 0x1DE478u;
        goto label_1de478;
    }
    ctx->pc = 0x1DE470u;
    {
        const bool branch_taken_0x1de470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de470) {
            ctx->pc = 0x1DE4F8u;
            goto label_1de4f8;
        }
    }
    ctx->pc = 0x1DE478u;
label_1de478:
    // 0x1de478: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1de478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1de47c:
    // 0x1de47c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1de47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1de480:
    // 0x1de480: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1de480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1de484:
    // 0x1de484: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1de484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de488:
    // 0x1de488: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x1de488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1de48c:
    // 0x1de48c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1de48cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1de490:
    // 0x1de490: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1de494:
    // 0x1de494: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1de494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1de498:
    // 0x1de498: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1de498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1de49c:
    // 0x1de49c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1de49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_1de4a0:
    // 0x1de4a0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1de4a4:
    if (ctx->pc == 0x1DE4A4u) {
        ctx->pc = 0x1DE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4A0u;
        // 0x1de4a4: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4A8u;
        goto label_1de4a8;
    }
    ctx->pc = 0x1DE4A0u;
    {
        const bool branch_taken_0x1de4a0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4A0u;
        // 0x1de4a4: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4a0) {
            ctx->pc = 0x1DE4B4u;
            goto label_1de4b4;
        }
    }
    ctx->pc = 0x1DE4A8u;
label_1de4a8:
    // 0x1de4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de4ac:
    // 0x1de4ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_1de4b0:
    if (ctx->pc == 0x1DE4B0u) {
        ctx->pc = 0x1DE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4ACu;
        // 0x1de4b0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4B4u;
        goto label_1de4b4;
    }
    ctx->pc = 0x1DE4ACu;
    {
        const bool branch_taken_0x1de4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4ACu;
        // 0x1de4b0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4ac) {
            ctx->pc = 0x1DE4D0u;
            goto label_1de4d0;
        }
    }
    ctx->pc = 0x1DE4B4u;
label_1de4b4:
    // 0x1de4b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1de4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1de4b8:
    // 0x1de4b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1de4bc:
    // 0x1de4bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1de4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1de4c0:
    // 0x1de4c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de4c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de4c4:
    // 0x1de4c4: 0x0  nop
    ctx->pc = 0x1de4c4u;
    // NOP
label_1de4c8:
    // 0x1de4c8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1de4c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1de4cc:
    // 0x1de4cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1de4ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1de4d0:
    // 0x1de4d0: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x1de4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_1de4d4:
    // 0x1de4d4: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x1de4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1de4d8:
    // 0x1de4d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de4d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1de4dc:
    // 0x1de4dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1de4e0:
    // 0x1de4e0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1de4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de4e4:
    // 0x1de4e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1de4e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1de4e8:
    // 0x1de4e8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1de4e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1de4ec:
    // 0x1de4ec: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x1de4ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_1de4f0:
    // 0x1de4f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1de4f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1de4f4:
    // 0x1de4f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1de4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1de4f8:
    // 0x1de4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de4fc:
    // 0x1de4fc: 0x0  nop
    ctx->pc = 0x1de4fcu;
    // NOP
label_1de500:
    // 0x1de500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1de504:
    // 0x1de504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de508:
    // 0x1de508: 0x3e00008  jr          $ra
label_1de50c:
    if (ctx->pc == 0x1DE50Cu) {
        ctx->pc = 0x1DE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE508u;
        // 0x1de50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE510u;
        goto label_fallthrough_0x1de508;
    }
    ctx->pc = 0x1DE508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE508u;
        // 0x1de50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1de508:
    ctx->pc = 0x1DE510u;
}

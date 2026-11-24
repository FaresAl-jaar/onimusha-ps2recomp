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

// Function: sub_001DC5A0
// Address: 0x1dc5a0 - 0x1dc704
void sub_001DC5A0_0x1dc5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC5A0_0x1dc5a0");
#endif

    switch (ctx->pc) {
        case 0x1dc5a0u: goto label_1dc5a0;
        case 0x1dc5a4u: goto label_1dc5a4;
        case 0x1dc5a8u: goto label_1dc5a8;
        case 0x1dc5acu: goto label_1dc5ac;
        case 0x1dc5b0u: goto label_1dc5b0;
        case 0x1dc5b4u: goto label_1dc5b4;
        case 0x1dc5b8u: goto label_1dc5b8;
        case 0x1dc5bcu: goto label_1dc5bc;
        case 0x1dc5c0u: goto label_1dc5c0;
        case 0x1dc5c4u: goto label_1dc5c4;
        case 0x1dc5c8u: goto label_1dc5c8;
        case 0x1dc5ccu: goto label_1dc5cc;
        case 0x1dc5d0u: goto label_1dc5d0;
        case 0x1dc5d4u: goto label_1dc5d4;
        case 0x1dc5d8u: goto label_1dc5d8;
        case 0x1dc5dcu: goto label_1dc5dc;
        case 0x1dc5e0u: goto label_1dc5e0;
        case 0x1dc5e4u: goto label_1dc5e4;
        case 0x1dc5e8u: goto label_1dc5e8;
        case 0x1dc5ecu: goto label_1dc5ec;
        case 0x1dc5f0u: goto label_1dc5f0;
        case 0x1dc5f4u: goto label_1dc5f4;
        case 0x1dc5f8u: goto label_1dc5f8;
        case 0x1dc5fcu: goto label_1dc5fc;
        case 0x1dc600u: goto label_1dc600;
        case 0x1dc604u: goto label_1dc604;
        case 0x1dc608u: goto label_1dc608;
        case 0x1dc60cu: goto label_1dc60c;
        case 0x1dc610u: goto label_1dc610;
        case 0x1dc614u: goto label_1dc614;
        case 0x1dc618u: goto label_1dc618;
        case 0x1dc61cu: goto label_1dc61c;
        case 0x1dc620u: goto label_1dc620;
        case 0x1dc624u: goto label_1dc624;
        case 0x1dc628u: goto label_1dc628;
        case 0x1dc62cu: goto label_1dc62c;
        case 0x1dc630u: goto label_1dc630;
        case 0x1dc634u: goto label_1dc634;
        case 0x1dc638u: goto label_1dc638;
        case 0x1dc63cu: goto label_1dc63c;
        case 0x1dc640u: goto label_1dc640;
        case 0x1dc644u: goto label_1dc644;
        case 0x1dc648u: goto label_1dc648;
        case 0x1dc64cu: goto label_1dc64c;
        case 0x1dc650u: goto label_1dc650;
        case 0x1dc654u: goto label_1dc654;
        case 0x1dc658u: goto label_1dc658;
        case 0x1dc65cu: goto label_1dc65c;
        case 0x1dc660u: goto label_1dc660;
        case 0x1dc664u: goto label_1dc664;
        case 0x1dc668u: goto label_1dc668;
        case 0x1dc66cu: goto label_1dc66c;
        case 0x1dc670u: goto label_1dc670;
        case 0x1dc674u: goto label_1dc674;
        case 0x1dc678u: goto label_1dc678;
        case 0x1dc67cu: goto label_1dc67c;
        case 0x1dc680u: goto label_1dc680;
        case 0x1dc684u: goto label_1dc684;
        case 0x1dc688u: goto label_1dc688;
        case 0x1dc68cu: goto label_1dc68c;
        case 0x1dc690u: goto label_1dc690;
        case 0x1dc694u: goto label_1dc694;
        case 0x1dc698u: goto label_1dc698;
        case 0x1dc69cu: goto label_1dc69c;
        case 0x1dc6a0u: goto label_1dc6a0;
        case 0x1dc6a4u: goto label_1dc6a4;
        case 0x1dc6a8u: goto label_1dc6a8;
        case 0x1dc6acu: goto label_1dc6ac;
        case 0x1dc6b0u: goto label_1dc6b0;
        case 0x1dc6b4u: goto label_1dc6b4;
        case 0x1dc6b8u: goto label_1dc6b8;
        case 0x1dc6bcu: goto label_1dc6bc;
        case 0x1dc6c0u: goto label_1dc6c0;
        case 0x1dc6c4u: goto label_1dc6c4;
        case 0x1dc6c8u: goto label_1dc6c8;
        case 0x1dc6ccu: goto label_1dc6cc;
        case 0x1dc6d0u: goto label_1dc6d0;
        case 0x1dc6d4u: goto label_1dc6d4;
        case 0x1dc6d8u: goto label_1dc6d8;
        case 0x1dc6dcu: goto label_1dc6dc;
        case 0x1dc6e0u: goto label_1dc6e0;
        case 0x1dc6e4u: goto label_1dc6e4;
        case 0x1dc6e8u: goto label_1dc6e8;
        case 0x1dc6ecu: goto label_1dc6ec;
        case 0x1dc6f0u: goto label_1dc6f0;
        case 0x1dc6f4u: goto label_1dc6f4;
        case 0x1dc6f8u: goto label_1dc6f8;
        case 0x1dc6fcu: goto label_1dc6fc;
        case 0x1dc700u: goto label_1dc700;
        default: break;
    }

    ctx->pc = 0x1dc5a0u;

label_1dc5a0:
    // 0x1dc5a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1dc5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1dc5a4:
    // 0x1dc5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dc5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dc5a8:
    // 0x1dc5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dc5ac:
    // 0x1dc5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dc5b0:
    // 0x1dc5b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1dc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1dc5b4:
    // 0x1dc5b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1dc5b8:
    if (ctx->pc == 0x1DC5B8u) {
        ctx->pc = 0x1DC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5B4u;
        // 0x1dc5b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5BCu;
        goto label_1dc5bc;
    }
    ctx->pc = 0x1DC5B4u;
    {
        const bool branch_taken_0x1dc5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5B4u;
        // 0x1dc5b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5b4) {
            ctx->pc = 0x1DC5C8u;
            goto label_1dc5c8;
        }
    }
    ctx->pc = 0x1DC5BCu;
label_1dc5bc:
    // 0x1dc5bc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1dc5c0:
    if (ctx->pc == 0x1DC5C0u) {
        ctx->pc = 0x1DC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5BCu;
        // 0x1dc5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5C4u;
        goto label_1dc5c4;
    }
    ctx->pc = 0x1DC5BCu;
    {
        const bool branch_taken_0x1dc5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5BCu;
        // 0x1dc5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5bc) {
            ctx->pc = 0x1DC6F0u;
            goto label_1dc6f0;
        }
    }
    ctx->pc = 0x1DC5C4u;
label_1dc5c4:
    // 0x1dc5c4: 0x0  nop
    ctx->pc = 0x1dc5c4u;
    // NOP
label_1dc5c8:
    // 0x1dc5c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dc5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dc5cc:
    // 0x1dc5cc: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dc5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dc5d0:
    // 0x1dc5d0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1dc5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1dc5d4:
    // 0x1dc5d4: 0x320f809  jalr        $t9
label_1dc5d8:
    if (ctx->pc == 0x1DC5D8u) {
        ctx->pc = 0x1DC5DCu;
        goto label_1dc5dc;
    }
    ctx->pc = 0x1DC5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC5DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC5D4u, 0x1DC5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC5DCu;
label_1dc5dc:
    // 0x1dc5dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dc5e0:
    if (ctx->pc == 0x1DC5E0u) {
        ctx->pc = 0x1DC5E4u;
        goto label_1dc5e4;
    }
    ctx->pc = 0x1DC5DCu;
    {
        const bool branch_taken_0x1dc5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc5dc) {
            ctx->pc = 0x1DC600u;
            goto label_1dc600;
        }
    }
    ctx->pc = 0x1DC5E4u;
label_1dc5e4:
    // 0x1dc5e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dc5e8:
    // 0x1dc5e8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dc5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dc5ec:
    // 0x1dc5ec: 0x320f809  jalr        $t9
label_1dc5f0:
    if (ctx->pc == 0x1DC5F0u) {
        ctx->pc = 0x1DC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5ECu;
        // 0x1dc5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5F4u;
        goto label_1dc5f4;
    }
    ctx->pc = 0x1DC5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC5F4u);
        ctx->pc = 0x1DC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5ECu;
        // 0x1dc5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC5ECu, 0x1DC5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC5F4u;
label_1dc5f4:
    // 0x1dc5f4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1dc5f8:
    if (ctx->pc == 0x1DC5F8u) {
        ctx->pc = 0x1DC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5F4u;
        // 0x1dc5f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC5FCu;
        goto label_1dc5fc;
    }
    ctx->pc = 0x1DC5F4u;
    {
        const bool branch_taken_0x1dc5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5F4u;
        // 0x1dc5f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5f4) {
            ctx->pc = 0x1DC6F0u;
            goto label_1dc6f0;
        }
    }
    ctx->pc = 0x1DC5FCu;
label_1dc5fc:
    // 0x1dc5fc: 0x0  nop
    ctx->pc = 0x1dc5fcu;
    // NOP
label_1dc600:
    // 0x1dc600: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dc600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dc604:
    // 0x1dc604: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dc604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dc608:
    // 0x1dc608: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1dc608u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc60c:
    // 0x1dc60c: 0x84670006  lh          $a3, 0x6($v1)
    ctx->pc = 0x1dc60cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_1dc610:
    // 0x1dc610: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dc610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1dc614:
    // 0x1dc614: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1dc614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1dc618:
    // 0x1dc618: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1dc618u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1dc61c:
    // 0x1dc61c: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1dc61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1dc620:
    // 0x1dc620: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1dc620u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dc624:
    // 0x1dc624: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1dc624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1dc628:
    // 0x1dc628: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dc628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dc62c:
    // 0x1dc62c: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1dc62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1dc630:
    // 0x1dc630: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1dc630u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dc634:
    // 0x1dc634: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1dc634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1dc638:
    // 0x1dc638: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1dc638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1dc63c:
    // 0x1dc63c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dc63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dc640:
    // 0x1dc640: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1dc640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1dc644:
    // 0x1dc644: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dc644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dc648:
    // 0x1dc648: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1dc648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1dc64c:
    // 0x1dc64c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dc650:
    if (ctx->pc == 0x1DC650u) {
        ctx->pc = 0x1DC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC64Cu;
        // 0x1dc650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC654u;
        goto label_1dc654;
    }
    ctx->pc = 0x1DC64Cu;
    {
        const bool branch_taken_0x1dc64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC64Cu;
        // 0x1dc650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc64c) {
            ctx->pc = 0x1DC660u;
            goto label_1dc660;
        }
    }
    ctx->pc = 0x1DC654u;
label_1dc654:
    // 0x1dc654: 0x10000026  b           . + 4 + (0x26 << 2)
label_1dc658:
    if (ctx->pc == 0x1DC658u) {
        ctx->pc = 0x1DC65Cu;
        goto label_1dc65c;
    }
    ctx->pc = 0x1DC654u;
    {
        const bool branch_taken_0x1dc654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc654) {
            ctx->pc = 0x1DC6F0u;
            goto label_1dc6f0;
        }
    }
    ctx->pc = 0x1DC65Cu;
label_1dc65c:
    // 0x1dc65c: 0x0  nop
    ctx->pc = 0x1dc65cu;
    // NOP
label_1dc660:
    // 0x1dc660: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1dc660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc664:
    // 0x1dc664: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_1dc668:
    if (ctx->pc == 0x1DC668u) {
        ctx->pc = 0x1DC66Cu;
        goto label_1dc66c;
    }
    ctx->pc = 0x1DC664u;
    {
        const bool branch_taken_0x1dc664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc664) {
            ctx->pc = 0x1DC6E8u;
            goto label_1dc6e8;
        }
    }
    ctx->pc = 0x1DC66Cu;
label_1dc66c:
    // 0x1dc66c: 0xc07bc14  jal         func_1EF050
label_1dc670:
    if (ctx->pc == 0x1DC670u) {
        ctx->pc = 0x1DC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC66Cu;
        // 0x1dc670: 0x86050014  lh          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC674u;
        goto label_1dc674;
    }
    ctx->pc = 0x1DC66Cu;
    SET_GPR_U32(ctx, 31, 0x1DC674u);
    ctx->pc = 0x1DC670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC66Cu;
    // 0x1dc670: 0x86050014  lh          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF050u, 0x1DC66Cu, 0x1DC674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC674u;
label_1dc674:
    // 0x1dc674: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dc674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc678:
    // 0x1dc678: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_1dc67c:
    if (ctx->pc == 0x1DC67Cu) {
        ctx->pc = 0x1DC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC678u;
        // 0x1dc67c: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC680u;
        goto label_1dc680;
    }
    ctx->pc = 0x1DC678u;
    {
        const bool branch_taken_0x1dc678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC678u;
        // 0x1dc67c: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc678) {
            ctx->pc = 0x1DC6E8u;
            goto label_1dc6e8;
        }
    }
    ctx->pc = 0x1DC680u;
label_1dc680:
    // 0x1dc680: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1dc680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1dc684:
    // 0x1dc684: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x1dc684u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23568)));
label_1dc688:
    // 0x1dc688: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dc688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1dc68c:
    // 0x1dc68c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1dc68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1dc690:
    // 0x1dc690: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1dc690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc694:
    // 0x1dc694: 0xc076554  jal         func_1D9550
label_1dc698:
    if (ctx->pc == 0x1DC698u) {
        ctx->pc = 0x1DC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC694u;
        // 0x1dc698: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC69Cu;
        goto label_1dc69c;
    }
    ctx->pc = 0x1DC694u;
    SET_GPR_U32(ctx, 31, 0x1DC69Cu);
    ctx->pc = 0x1DC698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC694u;
    // 0x1dc698: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9550u, 0x1DC694u, 0x1DC69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC69Cu;
label_1dc69c:
    // 0x1dc69c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dc69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dc6a0:
    // 0x1dc6a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1dc6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1dc6a4:
    // 0x1dc6a4: 0xc07679c  jal         func_1D9E70
label_1dc6a8:
    if (ctx->pc == 0x1DC6A8u) {
        ctx->pc = 0x1DC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6A4u;
        // 0x1dc6a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6ACu;
        goto label_1dc6ac;
    }
    ctx->pc = 0x1DC6A4u;
    SET_GPR_U32(ctx, 31, 0x1DC6ACu);
    ctx->pc = 0x1DC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6A4u;
    // 0x1dc6a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1DC6A4u, 0x1DC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6ACu;
label_1dc6ac:
    // 0x1dc6ac: 0xc076ed8  jal         func_1DBB60
label_1dc6b0:
    if (ctx->pc == 0x1DC6B0u) {
        ctx->pc = 0x1DC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6ACu;
        // 0x1dc6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6B4u;
        goto label_1dc6b4;
    }
    ctx->pc = 0x1DC6ACu;
    SET_GPR_U32(ctx, 31, 0x1DC6B4u);
    ctx->pc = 0x1DC6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6ACu;
    // 0x1dc6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB60u, 0x1DC6ACu, 0x1DC6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6B4u;
label_1dc6b4:
    // 0x1dc6b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1dc6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1dc6b8:
    // 0x1dc6b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dc6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6bc:
    // 0x1dc6bc: 0xc0766a8  jal         func_1D9AA0
label_1dc6c0:
    if (ctx->pc == 0x1DC6C0u) {
        ctx->pc = 0x1DC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6BCu;
        // 0x1dc6c0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6C4u;
        goto label_1dc6c4;
    }
    ctx->pc = 0x1DC6BCu;
    SET_GPR_U32(ctx, 31, 0x1DC6C4u);
    ctx->pc = 0x1DC6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6BCu;
    // 0x1dc6c0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1DC6BCu, 0x1DC6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6C4u;
label_1dc6c4:
    // 0x1dc6c4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1dc6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dc6c8:
    // 0x1dc6c8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1dc6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1dc6cc:
    // 0x1dc6cc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1dc6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc6d0:
    // 0x1dc6d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dc6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6d4:
    // 0x1dc6d4: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x1dc6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1dc6d8:
    // 0x1dc6d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1dc6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1dc6dc:
    // 0x1dc6dc: 0xc076680  jal         func_1D9A00
label_1dc6e0:
    if (ctx->pc == 0x1DC6E0u) {
        ctx->pc = 0x1DC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6DCu;
        // 0x1dc6e0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC6E4u;
        goto label_1dc6e4;
    }
    ctx->pc = 0x1DC6DCu;
    SET_GPR_U32(ctx, 31, 0x1DC6E4u);
    ctx->pc = 0x1DC6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6DCu;
    // 0x1dc6e0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A00u, 0x1DC6DCu, 0x1DC6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6E4u;
label_1dc6e4:
    // 0x1dc6e4: 0x0  nop
    ctx->pc = 0x1dc6e4u;
    // NOP
label_1dc6e8:
    // 0x1dc6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc6ec:
    // 0x1dc6ec: 0x0  nop
    ctx->pc = 0x1dc6ecu;
    // NOP
label_1dc6f0:
    // 0x1dc6f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dc6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc6f4:
    // 0x1dc6f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc6f8:
    // 0x1dc6f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc6fc:
    // 0x1dc6fc: 0x3e00008  jr          $ra
label_1dc700:
    if (ctx->pc == 0x1DC700u) {
        ctx->pc = 0x1DC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6FCu;
        // 0x1dc700: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC704u;
        goto label_fallthrough_0x1dc6fc;
    }
    ctx->pc = 0x1DC6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6FCu;
        // 0x1dc700: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dc6fc:
    ctx->pc = 0x1DC704u;
}

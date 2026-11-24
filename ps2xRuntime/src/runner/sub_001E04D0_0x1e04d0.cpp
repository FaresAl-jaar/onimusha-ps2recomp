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

// Function: sub_001E04D0
// Address: 0x1e04d0 - 0x1e0610
void sub_001E04D0_0x1e04d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E04D0_0x1e04d0");
#endif

    switch (ctx->pc) {
        case 0x1e04d0u: goto label_1e04d0;
        case 0x1e04d4u: goto label_1e04d4;
        case 0x1e04d8u: goto label_1e04d8;
        case 0x1e04dcu: goto label_1e04dc;
        case 0x1e04e0u: goto label_1e04e0;
        case 0x1e04e4u: goto label_1e04e4;
        case 0x1e04e8u: goto label_1e04e8;
        case 0x1e04ecu: goto label_1e04ec;
        case 0x1e04f0u: goto label_1e04f0;
        case 0x1e04f4u: goto label_1e04f4;
        case 0x1e04f8u: goto label_1e04f8;
        case 0x1e04fcu: goto label_1e04fc;
        case 0x1e0500u: goto label_1e0500;
        case 0x1e0504u: goto label_1e0504;
        case 0x1e0508u: goto label_1e0508;
        case 0x1e050cu: goto label_1e050c;
        case 0x1e0510u: goto label_1e0510;
        case 0x1e0514u: goto label_1e0514;
        case 0x1e0518u: goto label_1e0518;
        case 0x1e051cu: goto label_1e051c;
        case 0x1e0520u: goto label_1e0520;
        case 0x1e0524u: goto label_1e0524;
        case 0x1e0528u: goto label_1e0528;
        case 0x1e052cu: goto label_1e052c;
        case 0x1e0530u: goto label_1e0530;
        case 0x1e0534u: goto label_1e0534;
        case 0x1e0538u: goto label_1e0538;
        case 0x1e053cu: goto label_1e053c;
        case 0x1e0540u: goto label_1e0540;
        case 0x1e0544u: goto label_1e0544;
        case 0x1e0548u: goto label_1e0548;
        case 0x1e054cu: goto label_1e054c;
        case 0x1e0550u: goto label_1e0550;
        case 0x1e0554u: goto label_1e0554;
        case 0x1e0558u: goto label_1e0558;
        case 0x1e055cu: goto label_1e055c;
        case 0x1e0560u: goto label_1e0560;
        case 0x1e0564u: goto label_1e0564;
        case 0x1e0568u: goto label_1e0568;
        case 0x1e056cu: goto label_1e056c;
        case 0x1e0570u: goto label_1e0570;
        case 0x1e0574u: goto label_1e0574;
        case 0x1e0578u: goto label_1e0578;
        case 0x1e057cu: goto label_1e057c;
        case 0x1e0580u: goto label_1e0580;
        case 0x1e0584u: goto label_1e0584;
        case 0x1e0588u: goto label_1e0588;
        case 0x1e058cu: goto label_1e058c;
        case 0x1e0590u: goto label_1e0590;
        case 0x1e0594u: goto label_1e0594;
        case 0x1e0598u: goto label_1e0598;
        case 0x1e059cu: goto label_1e059c;
        case 0x1e05a0u: goto label_1e05a0;
        case 0x1e05a4u: goto label_1e05a4;
        case 0x1e05a8u: goto label_1e05a8;
        case 0x1e05acu: goto label_1e05ac;
        case 0x1e05b0u: goto label_1e05b0;
        case 0x1e05b4u: goto label_1e05b4;
        case 0x1e05b8u: goto label_1e05b8;
        case 0x1e05bcu: goto label_1e05bc;
        case 0x1e05c0u: goto label_1e05c0;
        case 0x1e05c4u: goto label_1e05c4;
        case 0x1e05c8u: goto label_1e05c8;
        case 0x1e05ccu: goto label_1e05cc;
        case 0x1e05d0u: goto label_1e05d0;
        case 0x1e05d4u: goto label_1e05d4;
        case 0x1e05d8u: goto label_1e05d8;
        case 0x1e05dcu: goto label_1e05dc;
        case 0x1e05e0u: goto label_1e05e0;
        case 0x1e05e4u: goto label_1e05e4;
        case 0x1e05e8u: goto label_1e05e8;
        case 0x1e05ecu: goto label_1e05ec;
        case 0x1e05f0u: goto label_1e05f0;
        case 0x1e05f4u: goto label_1e05f4;
        case 0x1e05f8u: goto label_1e05f8;
        case 0x1e05fcu: goto label_1e05fc;
        case 0x1e0600u: goto label_1e0600;
        case 0x1e0604u: goto label_1e0604;
        case 0x1e0608u: goto label_1e0608;
        case 0x1e060cu: goto label_1e060c;
        default: break;
    }

    ctx->pc = 0x1e04d0u;

label_1e04d0:
    // 0x1e04d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e04d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e04d4:
    // 0x1e04d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e04d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e04d8:
    // 0x1e04d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e04d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e04dc:
    // 0x1e04dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e04e0:
    // 0x1e04e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e04e4:
    if (ctx->pc == 0x1E04E4u) {
        ctx->pc = 0x1E04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E0u;
        // 0x1e04e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E04E8u;
        goto label_1e04e8;
    }
    ctx->pc = 0x1E04E0u;
    {
        const bool branch_taken_0x1e04e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E0u;
        // 0x1e04e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04e0) {
            ctx->pc = 0x1E04F0u;
            goto label_1e04f0;
        }
    }
    ctx->pc = 0x1E04E8u;
label_1e04e8:
    // 0x1e04e8: 0x10000045  b           . + 4 + (0x45 << 2)
label_1e04ec:
    if (ctx->pc == 0x1E04ECu) {
        ctx->pc = 0x1E04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E8u;
        // 0x1e04ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E04F0u;
        goto label_1e04f0;
    }
    ctx->pc = 0x1E04E8u;
    {
        const bool branch_taken_0x1e04e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E8u;
        // 0x1e04ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04e8) {
            ctx->pc = 0x1E0600u;
            goto label_1e0600;
        }
    }
    ctx->pc = 0x1E04F0u;
label_1e04f0:
    // 0x1e04f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e04f4:
    // 0x1e04f4: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e04f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e04f8:
    // 0x1e04f8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1e04fc:
    // 0x1e04fc: 0x320f809  jalr        $t9
label_1e0500:
    if (ctx->pc == 0x1E0500u) {
        ctx->pc = 0x1E0504u;
        goto label_1e0504;
    }
    ctx->pc = 0x1E04FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0504u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E04FCu, 0x1E0504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0504u;
label_1e0504:
    // 0x1e0504: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e0508:
    if (ctx->pc == 0x1E0508u) {
        ctx->pc = 0x1E050Cu;
        goto label_1e050c;
    }
    ctx->pc = 0x1E0504u;
    {
        const bool branch_taken_0x1e0504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0504) {
            ctx->pc = 0x1E0528u;
            goto label_1e0528;
        }
    }
    ctx->pc = 0x1E050Cu;
label_1e050c:
    // 0x1e050c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0510:
    // 0x1e0510: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e0514:
    // 0x1e0514: 0x320f809  jalr        $t9
label_1e0518:
    if (ctx->pc == 0x1E0518u) {
        ctx->pc = 0x1E0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0514u;
        // 0x1e0518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E051Cu;
        goto label_1e051c;
    }
    ctx->pc = 0x1E0514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E051Cu);
        ctx->pc = 0x1E0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0514u;
        // 0x1e0518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0514u, 0x1E051Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E051Cu;
label_1e051c:
    // 0x1e051c: 0x10000038  b           . + 4 + (0x38 << 2)
label_1e0520:
    if (ctx->pc == 0x1E0520u) {
        ctx->pc = 0x1E0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E051Cu;
        // 0x1e0520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0524u;
        goto label_1e0524;
    }
    ctx->pc = 0x1E051Cu;
    {
        const bool branch_taken_0x1e051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E051Cu;
        // 0x1e0520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e051c) {
            ctx->pc = 0x1E0600u;
            goto label_1e0600;
        }
    }
    ctx->pc = 0x1E0524u;
label_1e0524:
    // 0x1e0524: 0x0  nop
    ctx->pc = 0x1e0524u;
    // NOP
label_1e0528:
    // 0x1e0528: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e0528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e052c:
    // 0x1e052c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1e052cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1e0530:
    // 0x1e0530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e0534:
    if (ctx->pc == 0x1E0534u) {
        ctx->pc = 0x1E0538u;
        goto label_1e0538;
    }
    ctx->pc = 0x1E0530u;
    {
        const bool branch_taken_0x1e0530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0530) {
            ctx->pc = 0x1E0540u;
            goto label_1e0540;
        }
    }
    ctx->pc = 0x1E0538u;
label_1e0538:
    // 0x1e0538: 0x10000031  b           . + 4 + (0x31 << 2)
label_1e053c:
    if (ctx->pc == 0x1E053Cu) {
        ctx->pc = 0x1E053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0538u;
        // 0x1e053c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0540u;
        goto label_1e0540;
    }
    ctx->pc = 0x1E0538u;
    {
        const bool branch_taken_0x1e0538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0538u;
        // 0x1e053c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0538) {
            ctx->pc = 0x1E0600u;
            goto label_1e0600;
        }
    }
    ctx->pc = 0x1E0540u;
label_1e0540:
    // 0x1e0540: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e0540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0544:
    // 0x1e0544: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x1e0544u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e0548:
    // 0x1e0548: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e0548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e054c:
    // 0x1e054c: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e054cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e0550:
    // 0x1e0550: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0550u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e0554:
    // 0x1e0554: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e0554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e0558:
    // 0x1e0558: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e055c:
    // 0x1e055c: 0x84a7000c  lh          $a3, 0xC($a1)
    ctx->pc = 0x1e055cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_1e0560:
    // 0x1e0560: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x1e0560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_1e0564:
    // 0x1e0564: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x1e0564u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e0568:
    // 0x1e0568: 0x68282a  slt         $a1, $v1, $t0
    ctx->pc = 0x1e0568u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1e056c:
    // 0x1e056c: 0x38637ffd  xori        $v1, $v1, 0x7FFD
    ctx->pc = 0x1e056cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32765);
label_1e0570:
    // 0x1e0570: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e0570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e0574:
    // 0x1e0574: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0574u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e0578:
    // 0x1e0578: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e057c:
    // 0x1e057c: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1e057cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e0580:
    // 0x1e0580: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e0580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e0584:
    // 0x1e0584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e0588:
    if (ctx->pc == 0x1E0588u) {
        ctx->pc = 0x1E058Cu;
        goto label_1e058c;
    }
    ctx->pc = 0x1E0584u;
    {
        const bool branch_taken_0x1e0584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0584) {
            ctx->pc = 0x1E0598u;
            goto label_1e0598;
        }
    }
    ctx->pc = 0x1E058Cu;
label_1e058c:
    // 0x1e058c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1e0590:
    if (ctx->pc == 0x1E0590u) {
        ctx->pc = 0x1E0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E058Cu;
        // 0x1e0590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0594u;
        goto label_1e0594;
    }
    ctx->pc = 0x1E058Cu;
    {
        const bool branch_taken_0x1e058c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E058Cu;
        // 0x1e0590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e058c) {
            ctx->pc = 0x1E0600u;
            goto label_1e0600;
        }
    }
    ctx->pc = 0x1E0594u;
label_1e0594:
    // 0x1e0594: 0x0  nop
    ctx->pc = 0x1e0594u;
    // NOP
label_1e0598:
    // 0x1e0598: 0xe81026  xor         $v0, $a3, $t0
    ctx->pc = 0x1e0598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
label_1e059c:
    // 0x1e059c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e059cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e05a0:
    // 0x1e05a0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1e05a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1e05a4:
    // 0x1e05a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e05a8:
    if (ctx->pc == 0x1E05A8u) {
        ctx->pc = 0x1E05ACu;
        goto label_1e05ac;
    }
    ctx->pc = 0x1E05A4u;
    {
        const bool branch_taken_0x1e05a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e05a4) {
            ctx->pc = 0x1E05B8u;
            goto label_1e05b8;
        }
    }
    ctx->pc = 0x1E05ACu;
label_1e05ac:
    // 0x1e05ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e05acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e05b0:
    // 0x1e05b0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e05b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e05b4:
    // 0x1e05b4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1e05b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_1e05b8:
    // 0x1e05b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e05bc:
    // 0x1e05bc: 0x8446000e  lh          $a2, 0xE($v0)
    ctx->pc = 0x1e05bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1e05c0:
    // 0x1e05c0: 0x8445000c  lh          $a1, 0xC($v0)
    ctx->pc = 0x1e05c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_1e05c4:
    // 0x1e05c4: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
label_1e05c8:
    if (ctx->pc == 0x1E05C8u) {
        ctx->pc = 0x1E05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05C4u;
        // 0x1e05c8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E05CCu;
        goto label_1e05cc;
    }
    ctx->pc = 0x1E05C4u;
    {
        const bool branch_taken_0x1e05c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05C4u;
        // 0x1e05c8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05c4) {
            ctx->pc = 0x1E05D8u;
            goto label_1e05d8;
        }
    }
    ctx->pc = 0x1E05CCu;
label_1e05cc:
    // 0x1e05cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e05ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e05d0:
    // 0x1e05d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e05d4:
    if (ctx->pc == 0x1E05D4u) {
        ctx->pc = 0x1E05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05D0u;
        // 0x1e05d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E05D8u;
        goto label_1e05d8;
    }
    ctx->pc = 0x1E05D0u;
    {
        const bool branch_taken_0x1e05d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05D0u;
        // 0x1e05d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05d0) {
            ctx->pc = 0x1E05E8u;
            goto label_1e05e8;
        }
    }
    ctx->pc = 0x1E05D8u;
label_1e05d8:
    // 0x1e05d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e05dc:
    // 0x1e05dc: 0xc0767d4  jal         func_1D9F50
label_1e05e0:
    if (ctx->pc == 0x1E05E0u) {
        ctx->pc = 0x1E05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05DCu;
        // 0x1e05e0: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E05E4u;
        goto label_1e05e4;
    }
    ctx->pc = 0x1E05DCu;
    SET_GPR_U32(ctx, 31, 0x1E05E4u);
    ctx->pc = 0x1E05E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E05DCu;
    // 0x1e05e0: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E05DCu, 0x1E05E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E05E4u;
label_1e05e4:
    // 0x1e05e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e05e8:
    // 0x1e05e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e05e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e05ec:
    // 0x1e05ec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1e05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e05f0:
    // 0x1e05f0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1e05f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1e05f4:
    // 0x1e05f4: 0xc0767e8  jal         func_1D9FA0
label_1e05f8:
    if (ctx->pc == 0x1E05F8u) {
        ctx->pc = 0x1E05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05F4u;
        // 0x1e05f8: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E05FCu;
        goto label_1e05fc;
    }
    ctx->pc = 0x1E05F4u;
    SET_GPR_U32(ctx, 31, 0x1E05FCu);
    ctx->pc = 0x1E05F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E05F4u;
    // 0x1e05f8: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x1E05F4u, 0x1E05FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E05FCu;
label_1e05fc:
    // 0x1e05fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0600:
    // 0x1e0600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0604:
    // 0x1e0604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0608:
    // 0x1e0608: 0x3e00008  jr          $ra
label_1e060c:
    if (ctx->pc == 0x1E060Cu) {
        ctx->pc = 0x1E060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0608u;
        // 0x1e060c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0610u;
        goto label_fallthrough_0x1e0608;
    }
    ctx->pc = 0x1E0608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0608u;
        // 0x1e060c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0608:
    ctx->pc = 0x1E0610u;
}

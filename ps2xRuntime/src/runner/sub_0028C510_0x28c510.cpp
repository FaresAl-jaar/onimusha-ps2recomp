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

// Function: sub_0028C510
// Address: 0x28c510 - 0x28c6a0
void sub_0028C510_0x28c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C510_0x28c510");
#endif

    switch (ctx->pc) {
        case 0x28c510u: goto label_28c510;
        case 0x28c514u: goto label_28c514;
        case 0x28c518u: goto label_28c518;
        case 0x28c51cu: goto label_28c51c;
        case 0x28c520u: goto label_28c520;
        case 0x28c524u: goto label_28c524;
        case 0x28c528u: goto label_28c528;
        case 0x28c52cu: goto label_28c52c;
        case 0x28c530u: goto label_28c530;
        case 0x28c534u: goto label_28c534;
        case 0x28c538u: goto label_28c538;
        case 0x28c53cu: goto label_28c53c;
        case 0x28c540u: goto label_28c540;
        case 0x28c544u: goto label_28c544;
        case 0x28c548u: goto label_28c548;
        case 0x28c54cu: goto label_28c54c;
        case 0x28c550u: goto label_28c550;
        case 0x28c554u: goto label_28c554;
        case 0x28c558u: goto label_28c558;
        case 0x28c55cu: goto label_28c55c;
        case 0x28c560u: goto label_28c560;
        case 0x28c564u: goto label_28c564;
        case 0x28c568u: goto label_28c568;
        case 0x28c56cu: goto label_28c56c;
        case 0x28c570u: goto label_28c570;
        case 0x28c574u: goto label_28c574;
        case 0x28c578u: goto label_28c578;
        case 0x28c57cu: goto label_28c57c;
        case 0x28c580u: goto label_28c580;
        case 0x28c584u: goto label_28c584;
        case 0x28c588u: goto label_28c588;
        case 0x28c58cu: goto label_28c58c;
        case 0x28c590u: goto label_28c590;
        case 0x28c594u: goto label_28c594;
        case 0x28c598u: goto label_28c598;
        case 0x28c59cu: goto label_28c59c;
        case 0x28c5a0u: goto label_28c5a0;
        case 0x28c5a4u: goto label_28c5a4;
        case 0x28c5a8u: goto label_28c5a8;
        case 0x28c5acu: goto label_28c5ac;
        case 0x28c5b0u: goto label_28c5b0;
        case 0x28c5b4u: goto label_28c5b4;
        case 0x28c5b8u: goto label_28c5b8;
        case 0x28c5bcu: goto label_28c5bc;
        case 0x28c5c0u: goto label_28c5c0;
        case 0x28c5c4u: goto label_28c5c4;
        case 0x28c5c8u: goto label_28c5c8;
        case 0x28c5ccu: goto label_28c5cc;
        case 0x28c5d0u: goto label_28c5d0;
        case 0x28c5d4u: goto label_28c5d4;
        case 0x28c5d8u: goto label_28c5d8;
        case 0x28c5dcu: goto label_28c5dc;
        case 0x28c5e0u: goto label_28c5e0;
        case 0x28c5e4u: goto label_28c5e4;
        case 0x28c5e8u: goto label_28c5e8;
        case 0x28c5ecu: goto label_28c5ec;
        case 0x28c5f0u: goto label_28c5f0;
        case 0x28c5f4u: goto label_28c5f4;
        case 0x28c5f8u: goto label_28c5f8;
        case 0x28c5fcu: goto label_28c5fc;
        case 0x28c600u: goto label_28c600;
        case 0x28c604u: goto label_28c604;
        case 0x28c608u: goto label_28c608;
        case 0x28c60cu: goto label_28c60c;
        case 0x28c610u: goto label_28c610;
        case 0x28c614u: goto label_28c614;
        case 0x28c618u: goto label_28c618;
        case 0x28c61cu: goto label_28c61c;
        case 0x28c620u: goto label_28c620;
        case 0x28c624u: goto label_28c624;
        case 0x28c628u: goto label_28c628;
        case 0x28c62cu: goto label_28c62c;
        case 0x28c630u: goto label_28c630;
        case 0x28c634u: goto label_28c634;
        case 0x28c638u: goto label_28c638;
        case 0x28c63cu: goto label_28c63c;
        case 0x28c640u: goto label_28c640;
        case 0x28c644u: goto label_28c644;
        case 0x28c648u: goto label_28c648;
        case 0x28c64cu: goto label_28c64c;
        case 0x28c650u: goto label_28c650;
        case 0x28c654u: goto label_28c654;
        case 0x28c658u: goto label_28c658;
        case 0x28c65cu: goto label_28c65c;
        case 0x28c660u: goto label_28c660;
        case 0x28c664u: goto label_28c664;
        case 0x28c668u: goto label_28c668;
        case 0x28c66cu: goto label_28c66c;
        case 0x28c670u: goto label_28c670;
        case 0x28c674u: goto label_28c674;
        case 0x28c678u: goto label_28c678;
        case 0x28c67cu: goto label_28c67c;
        case 0x28c680u: goto label_28c680;
        case 0x28c684u: goto label_28c684;
        case 0x28c688u: goto label_28c688;
        case 0x28c68cu: goto label_28c68c;
        case 0x28c690u: goto label_28c690;
        case 0x28c694u: goto label_28c694;
        case 0x28c698u: goto label_28c698;
        case 0x28c69cu: goto label_28c69c;
        default: break;
    }

    ctx->pc = 0x28c510u;

label_28c510:
    // 0x28c510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28c514:
    // 0x28c514: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28c518:
    // 0x28c518: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28c51c:
    // 0x28c51c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28c520:
    // 0x28c520: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28c520u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c524:
    // 0x28c524: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28c528:
    // 0x28c528: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28c528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c52c:
    // 0x28c52c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28c530:
    // 0x28c530: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28c530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28c534:
    // 0x28c534: 0xc0745d0  jal         func_1D1740
label_28c538:
    if (ctx->pc == 0x28C538u) {
        ctx->pc = 0x28C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C534u;
        // 0x28c538: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C53Cu;
        goto label_28c53c;
    }
    ctx->pc = 0x28C534u;
    SET_GPR_U32(ctx, 31, 0x28C53Cu);
    ctx->pc = 0x28C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C534u;
    // 0x28c538: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x28C534u, 0x28C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C53Cu;
label_28c53c:
    // 0x28c53c: 0x92830051  lbu         $v1, 0x51($s4)
    ctx->pc = 0x28c53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 81)));
label_28c540:
    // 0x28c540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c544:
    // 0x28c544: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28c548:
    // 0x28c548: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_28c54c:
    if (ctx->pc == 0x28C54Cu) {
        ctx->pc = 0x28C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C548u;
        // 0x28c54c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C550u;
        goto label_28c550;
    }
    ctx->pc = 0x28C548u;
    {
        const bool branch_taken_0x28c548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C548u;
        // 0x28c54c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c548) {
            ctx->pc = 0x28C568u;
            goto label_28c568;
        }
    }
    ctx->pc = 0x28C550u;
label_28c550:
    // 0x28c550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28c554:
    // 0x28c554: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
label_28c558:
    if (ctx->pc == 0x28C558u) {
        ctx->pc = 0x28C55Cu;
        goto label_28c55c;
    }
    ctx->pc = 0x28C554u;
    {
        const bool branch_taken_0x28c554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c554) {
            ctx->pc = 0x28C640u;
            goto label_28c640;
        }
    }
    ctx->pc = 0x28C55Cu;
label_28c55c:
    // 0x28c55c: 0x10000038  b           . + 4 + (0x38 << 2)
label_28c560:
    if (ctx->pc == 0x28C560u) {
        ctx->pc = 0x28C564u;
        goto label_28c564;
    }
    ctx->pc = 0x28C55Cu;
    {
        const bool branch_taken_0x28c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c55c) {
            ctx->pc = 0x28C640u;
            goto label_28c640;
        }
    }
    ctx->pc = 0x28C564u;
label_28c564:
    // 0x28c564: 0x0  nop
    ctx->pc = 0x28c564u;
    // NOP
label_28c568:
    // 0x28c568: 0x8683007a  lh          $v1, 0x7A($s4)
    ctx->pc = 0x28c568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 122)));
label_28c56c:
    // 0x28c56c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c570:
    // 0x28c570: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_28c574:
    if (ctx->pc == 0x28C574u) {
        ctx->pc = 0x28C578u;
        goto label_28c578;
    }
    ctx->pc = 0x28C570u;
    {
        const bool branch_taken_0x28c570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c570) {
            ctx->pc = 0x28C598u;
            goto label_28c598;
        }
    }
    ctx->pc = 0x28C578u;
label_28c578:
    // 0x28c578: 0x8e990034  lw          $t9, 0x34($s4)
    ctx->pc = 0x28c578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_28c57c:
    // 0x28c57c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c580:
    // 0x28c580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c584:
    // 0x28c584: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28c584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c588:
    // 0x28c588: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x28c588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_28c58c:
    // 0x28c58c: 0x320f809  jalr        $t9
label_28c590:
    if (ctx->pc == 0x28C590u) {
        ctx->pc = 0x28C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C58Cu;
        // 0x28c590: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C594u;
        goto label_28c594;
    }
    ctx->pc = 0x28C58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C594u);
        ctx->pc = 0x28C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C58Cu;
        // 0x28c590: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C58Cu, 0x28C594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C594u;
label_28c594:
    // 0x28c594: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x28c594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28c598:
    // 0x28c598: 0x8683007c  lh          $v1, 0x7C($s4)
    ctx->pc = 0x28c598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 124)));
label_28c59c:
    // 0x28c59c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c5a0:
    // 0x28c5a0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_28c5a4:
    if (ctx->pc == 0x28C5A4u) {
        ctx->pc = 0x28C5A8u;
        goto label_28c5a8;
    }
    ctx->pc = 0x28C5A0u;
    {
        const bool branch_taken_0x28c5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c5a0) {
            ctx->pc = 0x28C5D0u;
            goto label_28c5d0;
        }
    }
    ctx->pc = 0x28C5A8u;
label_28c5a8:
    // 0x28c5a8: 0x8e990034  lw          $t9, 0x34($s4)
    ctx->pc = 0x28c5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_28c5ac:
    // 0x28c5ac: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x28c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_28c5b0:
    // 0x28c5b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c5b4:
    // 0x28c5b4: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x28c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28c5b8:
    // 0x28c5b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28c5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c5bc:
    // 0x28c5bc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x28c5bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_28c5c0:
    // 0x28c5c0: 0x320f809  jalr        $t9
label_28c5c4:
    if (ctx->pc == 0x28C5C4u) {
        ctx->pc = 0x28C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5C0u;
        // 0x28c5c4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C5C8u;
        goto label_28c5c8;
    }
    ctx->pc = 0x28C5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C5C8u);
        ctx->pc = 0x28C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5C0u;
        // 0x28c5c4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C5C0u, 0x28C5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C5C8u;
label_28c5c8:
    // 0x28c5c8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x28c5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28c5cc:
    // 0x28c5cc: 0x0  nop
    ctx->pc = 0x28c5ccu;
    // NOP
label_28c5d0:
    // 0x28c5d0: 0x8683007e  lh          $v1, 0x7E($s4)
    ctx->pc = 0x28c5d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 126)));
label_28c5d4:
    // 0x28c5d4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c5d8:
    // 0x28c5d8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_28c5dc:
    if (ctx->pc == 0x28C5DCu) {
        ctx->pc = 0x28C5E0u;
        goto label_28c5e0;
    }
    ctx->pc = 0x28C5D8u;
    {
        const bool branch_taken_0x28c5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c5d8) {
            ctx->pc = 0x28C608u;
            goto label_28c608;
        }
    }
    ctx->pc = 0x28C5E0u;
label_28c5e0:
    // 0x28c5e0: 0x8e990034  lw          $t9, 0x34($s4)
    ctx->pc = 0x28c5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_28c5e4:
    // 0x28c5e4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x28c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_28c5e8:
    // 0x28c5e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c5ec:
    // 0x28c5ec: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x28c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28c5f0:
    // 0x28c5f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28c5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c5f4:
    // 0x28c5f4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x28c5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_28c5f8:
    // 0x28c5f8: 0x320f809  jalr        $t9
label_28c5fc:
    if (ctx->pc == 0x28C5FCu) {
        ctx->pc = 0x28C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5F8u;
        // 0x28c5fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C600u;
        goto label_28c600;
    }
    ctx->pc = 0x28C5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C600u);
        ctx->pc = 0x28C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5F8u;
        // 0x28c5fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C5F8u, 0x28C600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C600u;
label_28c600:
    // 0x28c600: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x28c600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28c604:
    // 0x28c604: 0x0  nop
    ctx->pc = 0x28c604u;
    // NOP
label_28c608:
    // 0x28c608: 0x86830080  lh          $v1, 0x80($s4)
    ctx->pc = 0x28c608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 128)));
label_28c60c:
    // 0x28c60c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28c610:
    // 0x28c610: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_28c614:
    if (ctx->pc == 0x28C614u) {
        ctx->pc = 0x28C618u;
        goto label_28c618;
    }
    ctx->pc = 0x28C610u;
    {
        const bool branch_taken_0x28c610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c610) {
            ctx->pc = 0x28C640u;
            goto label_28c640;
        }
    }
    ctx->pc = 0x28C618u;
label_28c618:
    // 0x28c618: 0x8e990034  lw          $t9, 0x34($s4)
    ctx->pc = 0x28c618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_28c61c:
    // 0x28c61c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x28c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_28c620:
    // 0x28c620: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28c620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c624:
    // 0x28c624: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28c624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c628:
    // 0x28c628: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28c628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c62c:
    // 0x28c62c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x28c62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_28c630:
    // 0x28c630: 0x320f809  jalr        $t9
label_28c634:
    if (ctx->pc == 0x28C634u) {
        ctx->pc = 0x28C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C630u;
        // 0x28c634: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C638u;
        goto label_28c638;
    }
    ctx->pc = 0x28C630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C638u);
        ctx->pc = 0x28C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C630u;
        // 0x28c634: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C630u, 0x28C638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C638u;
label_28c638:
    // 0x28c638: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x28c638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28c63c:
    // 0x28c63c: 0x0  nop
    ctx->pc = 0x28c63cu;
    // NOP
label_28c640:
    // 0x28c640: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x28c640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_28c644:
    // 0x28c644: 0x26860040  addiu       $a2, $s4, 0x40
    ctx->pc = 0x28c644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_28c648:
    // 0x28c648: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28c64c:
    // 0x28c64c: 0xc076788  jal         func_1D9E20
label_28c650:
    if (ctx->pc == 0x28C650u) {
        ctx->pc = 0x28C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C64Cu;
        // 0x28c650: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C654u;
        goto label_28c654;
    }
    ctx->pc = 0x28C64Cu;
    SET_GPR_U32(ctx, 31, 0x28C654u);
    ctx->pc = 0x28C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C64Cu;
    // 0x28c650: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x28C64Cu, 0x28C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C654u;
label_28c654:
    // 0x28c654: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x28c654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_28c658:
    // 0x28c658: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_28c65c:
    if (ctx->pc == 0x28C65Cu) {
        ctx->pc = 0x28C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C658u;
        // 0x28c65c: 0x39283  sra         $s2, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C660u;
        goto label_28c660;
    }
    ctx->pc = 0x28C658u;
    {
        const bool branch_taken_0x28c658 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C658u;
        // 0x28c65c: 0x39283  sra         $s2, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c658) {
            ctx->pc = 0x28C680u;
            goto label_28c680;
        }
    }
    ctx->pc = 0x28C660u;
label_28c660:
    // 0x28c660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c664:
    // 0x28c664: 0xc07463c  jal         func_1D18F0
label_28c668:
    if (ctx->pc == 0x28C668u) {
        ctx->pc = 0x28C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C664u;
        // 0x28c668: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C66Cu;
        goto label_28c66c;
    }
    ctx->pc = 0x28C664u;
    SET_GPR_U32(ctx, 31, 0x28C66Cu);
    ctx->pc = 0x28C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C664u;
    // 0x28c668: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x28C664u, 0x28C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C66Cu;
label_28c66c:
    // 0x28c66c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x28c66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28c670:
    // 0x28c670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c674:
    // 0x28c674: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28c674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c678:
    // 0x28c678: 0xc0745fc  jal         func_1D17F0
label_28c67c:
    if (ctx->pc == 0x28C67Cu) {
        ctx->pc = 0x28C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C678u;
        // 0x28c67c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C680u;
        goto label_28c680;
    }
    ctx->pc = 0x28C678u;
    SET_GPR_U32(ctx, 31, 0x28C680u);
    ctx->pc = 0x28C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C678u;
    // 0x28c67c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x28C678u, 0x28C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C680u;
label_28c680:
    // 0x28c680: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28c680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28c684:
    // 0x28c684: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28c684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c688:
    // 0x28c688: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28c68c:
    // 0x28c68c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c690:
    // 0x28c690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c694:
    // 0x28c694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28c698:
    // 0x28c698: 0x3e00008  jr          $ra
label_28c69c:
    if (ctx->pc == 0x28C69Cu) {
        ctx->pc = 0x28C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C698u;
        // 0x28c69c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C6A0u;
        goto label_fallthrough_0x28c698;
    }
    ctx->pc = 0x28C698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C698u;
        // 0x28c69c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28c698:
    ctx->pc = 0x28C6A0u;
}

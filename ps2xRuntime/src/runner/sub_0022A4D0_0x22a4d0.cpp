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

// Function: sub_0022A4D0
// Address: 0x22a4d0 - 0x22a650
void sub_0022A4D0_0x22a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A4D0_0x22a4d0");
#endif

    switch (ctx->pc) {
        case 0x22a4d0u: goto label_22a4d0;
        case 0x22a4d4u: goto label_22a4d4;
        case 0x22a4d8u: goto label_22a4d8;
        case 0x22a4dcu: goto label_22a4dc;
        case 0x22a4e0u: goto label_22a4e0;
        case 0x22a4e4u: goto label_22a4e4;
        case 0x22a4e8u: goto label_22a4e8;
        case 0x22a4ecu: goto label_22a4ec;
        case 0x22a4f0u: goto label_22a4f0;
        case 0x22a4f4u: goto label_22a4f4;
        case 0x22a4f8u: goto label_22a4f8;
        case 0x22a4fcu: goto label_22a4fc;
        case 0x22a500u: goto label_22a500;
        case 0x22a504u: goto label_22a504;
        case 0x22a508u: goto label_22a508;
        case 0x22a50cu: goto label_22a50c;
        case 0x22a510u: goto label_22a510;
        case 0x22a514u: goto label_22a514;
        case 0x22a518u: goto label_22a518;
        case 0x22a51cu: goto label_22a51c;
        case 0x22a520u: goto label_22a520;
        case 0x22a524u: goto label_22a524;
        case 0x22a528u: goto label_22a528;
        case 0x22a52cu: goto label_22a52c;
        case 0x22a530u: goto label_22a530;
        case 0x22a534u: goto label_22a534;
        case 0x22a538u: goto label_22a538;
        case 0x22a53cu: goto label_22a53c;
        case 0x22a540u: goto label_22a540;
        case 0x22a544u: goto label_22a544;
        case 0x22a548u: goto label_22a548;
        case 0x22a54cu: goto label_22a54c;
        case 0x22a550u: goto label_22a550;
        case 0x22a554u: goto label_22a554;
        case 0x22a558u: goto label_22a558;
        case 0x22a55cu: goto label_22a55c;
        case 0x22a560u: goto label_22a560;
        case 0x22a564u: goto label_22a564;
        case 0x22a568u: goto label_22a568;
        case 0x22a56cu: goto label_22a56c;
        case 0x22a570u: goto label_22a570;
        case 0x22a574u: goto label_22a574;
        case 0x22a578u: goto label_22a578;
        case 0x22a57cu: goto label_22a57c;
        case 0x22a580u: goto label_22a580;
        case 0x22a584u: goto label_22a584;
        case 0x22a588u: goto label_22a588;
        case 0x22a58cu: goto label_22a58c;
        case 0x22a590u: goto label_22a590;
        case 0x22a594u: goto label_22a594;
        case 0x22a598u: goto label_22a598;
        case 0x22a59cu: goto label_22a59c;
        case 0x22a5a0u: goto label_22a5a0;
        case 0x22a5a4u: goto label_22a5a4;
        case 0x22a5a8u: goto label_22a5a8;
        case 0x22a5acu: goto label_22a5ac;
        case 0x22a5b0u: goto label_22a5b0;
        case 0x22a5b4u: goto label_22a5b4;
        case 0x22a5b8u: goto label_22a5b8;
        case 0x22a5bcu: goto label_22a5bc;
        case 0x22a5c0u: goto label_22a5c0;
        case 0x22a5c4u: goto label_22a5c4;
        case 0x22a5c8u: goto label_22a5c8;
        case 0x22a5ccu: goto label_22a5cc;
        case 0x22a5d0u: goto label_22a5d0;
        case 0x22a5d4u: goto label_22a5d4;
        case 0x22a5d8u: goto label_22a5d8;
        case 0x22a5dcu: goto label_22a5dc;
        case 0x22a5e0u: goto label_22a5e0;
        case 0x22a5e4u: goto label_22a5e4;
        case 0x22a5e8u: goto label_22a5e8;
        case 0x22a5ecu: goto label_22a5ec;
        case 0x22a5f0u: goto label_22a5f0;
        case 0x22a5f4u: goto label_22a5f4;
        case 0x22a5f8u: goto label_22a5f8;
        case 0x22a5fcu: goto label_22a5fc;
        case 0x22a600u: goto label_22a600;
        case 0x22a604u: goto label_22a604;
        case 0x22a608u: goto label_22a608;
        case 0x22a60cu: goto label_22a60c;
        case 0x22a610u: goto label_22a610;
        case 0x22a614u: goto label_22a614;
        case 0x22a618u: goto label_22a618;
        case 0x22a61cu: goto label_22a61c;
        case 0x22a620u: goto label_22a620;
        case 0x22a624u: goto label_22a624;
        case 0x22a628u: goto label_22a628;
        case 0x22a62cu: goto label_22a62c;
        case 0x22a630u: goto label_22a630;
        case 0x22a634u: goto label_22a634;
        case 0x22a638u: goto label_22a638;
        case 0x22a63cu: goto label_22a63c;
        case 0x22a640u: goto label_22a640;
        case 0x22a644u: goto label_22a644;
        case 0x22a648u: goto label_22a648;
        case 0x22a64cu: goto label_22a64c;
        default: break;
    }

    ctx->pc = 0x22a4d0u;

label_22a4d0:
    // 0x22a4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22a4d4:
    // 0x22a4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a4d8:
    // 0x22a4d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22a4dc:
    // 0x22a4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a4e0:
    // 0x22a4e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22a4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22a4e4:
    // 0x22a4e4: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x22a4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22a4e8:
    // 0x22a4e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22a4ec:
    // 0x22a4ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22a4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_22a4f0:
    // 0x22a4f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22a4f4:
    // 0x22a4f4: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_22a4f8:
    if (ctx->pc == 0x22A4F8u) {
        ctx->pc = 0x22A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4F4u;
        // 0x22a4f8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4FCu;
        goto label_22a4fc;
    }
    ctx->pc = 0x22A4F4u;
    {
        const bool branch_taken_0x22a4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4F4u;
        // 0x22a4f8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4f4) {
            ctx->pc = 0x22A610u;
            goto label_22a610;
        }
    }
    ctx->pc = 0x22A4FCu;
label_22a4fc:
    // 0x22a4fc: 0xc08f924  jal         func_23E490
label_22a500:
    if (ctx->pc == 0x22A500u) {
        ctx->pc = 0x22A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4FCu;
        // 0x22a500: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A504u;
        goto label_22a504;
    }
    ctx->pc = 0x22A4FCu;
    SET_GPR_U32(ctx, 31, 0x22A504u);
    ctx->pc = 0x22A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4FCu;
    // 0x22a500: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22A4FCu, 0x22A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A504u;
label_22a504:
    // 0x22a504: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_22a508:
    if (ctx->pc == 0x22A508u) {
        ctx->pc = 0x22A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A504u;
        // 0x22a508: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A50Cu;
        goto label_22a50c;
    }
    ctx->pc = 0x22A504u;
    {
        const bool branch_taken_0x22a504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a504) {
            ctx->pc = 0x22A508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A504u;
            // 0x22a508: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A610u;
            goto label_22a610;
        }
    }
    ctx->pc = 0x22A50Cu;
label_22a50c:
    // 0x22a50c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22a510:
    // 0x22a510: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22a510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22a514:
    // 0x22a514: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22a518:
    // 0x22a518: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22a518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22a51c:
    // 0x22a51c: 0x40f809  jalr        $v0
label_22a520:
    if (ctx->pc == 0x22A520u) {
        ctx->pc = 0x22A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A51Cu;
        // 0x22a520: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A524u;
        goto label_22a524;
    }
    ctx->pc = 0x22A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A524u);
        ctx->pc = 0x22A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A51Cu;
        // 0x22a520: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A51Cu, 0x22A524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A524u;
label_22a524:
    // 0x22a524: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x22a524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22a528:
    // 0x22a528: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x22a528u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22a52c:
    // 0x22a52c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22a52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a530:
    // 0x22a530: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x22a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22a534:
    // 0x22a534: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x22a534u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_22a538:
    // 0x22a538: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x22a538u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22a53c:
    // 0x22a53c: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x22a53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_22a540:
    // 0x22a540: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x22a540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22a544:
    // 0x22a544: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x22a544u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_22a548:
    // 0x22a548: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x22a548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_22a54c:
    // 0x22a54c: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x22a54cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22a550:
    // 0x22a550: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x22a550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_22a554:
    // 0x22a554: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x22a554u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_22a558:
    // 0x22a558: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x22a558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_22a55c:
    // 0x22a55c: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_22a560:
    if (ctx->pc == 0x22A560u) {
        ctx->pc = 0x22A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A55Cu;
        // 0x22a560: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A564u;
        goto label_22a564;
    }
    ctx->pc = 0x22A55Cu;
    {
        const bool branch_taken_0x22a55c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A55Cu;
        // 0x22a560: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a55c) {
            ctx->pc = 0x22A5C0u;
            goto label_22a5c0;
        }
    }
    ctx->pc = 0x22A564u;
label_22a564:
    // 0x22a564: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22a568:
    // 0x22a568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a56c:
    // 0x22a56c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_22a570:
    // 0x22a570: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22a570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22a574:
    // 0x22a574: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_22a578:
    if (ctx->pc == 0x22A578u) {
        ctx->pc = 0x22A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A574u;
        // 0x22a578: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A57Cu;
        goto label_22a57c;
    }
    ctx->pc = 0x22A574u;
    {
        const bool branch_taken_0x22a574 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x22A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A574u;
        // 0x22a578: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a574) {
            ctx->pc = 0x22A5F4u;
            goto label_22a5f4;
        }
    }
    ctx->pc = 0x22A57Cu;
label_22a57c:
    // 0x22a57c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22a57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a580:
    // 0x22a580: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x22a580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_22a584:
    // 0x22a584: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x22a584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22a588:
    // 0x22a588: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x22a588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_22a58c:
    // 0x22a58c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x22a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_22a590:
    // 0x22a590: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22a590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22a594:
    // 0x22a594: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22a594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22a598:
    // 0x22a598: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x22a598u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_22a59c:
    // 0x22a59c: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x22a59cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_22a5a0:
    // 0x22a5a0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x22a5a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_22a5a4:
    // 0x22a5a4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x22a5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_22a5a8:
    // 0x22a5a8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22a5ac:
    // 0x22a5ac: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_22a5b0:
    if (ctx->pc == 0x22A5B0u) {
        ctx->pc = 0x22A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5ACu;
        // 0x22a5b0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A5B4u;
        goto label_22a5b4;
    }
    ctx->pc = 0x22A5ACu;
    {
        const bool branch_taken_0x22a5ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5ACu;
        // 0x22a5b0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5ac) {
            ctx->pc = 0x22A580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a580;
        }
    }
    ctx->pc = 0x22A5B4u;
label_22a5b4:
    // 0x22a5b4: 0x1000000f  b           . + 4 + (0xF << 2)
label_22a5b8:
    if (ctx->pc == 0x22A5B8u) {
        ctx->pc = 0x22A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5B4u;
        // 0x22a5b8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A5BCu;
        goto label_22a5bc;
    }
    ctx->pc = 0x22A5B4u;
    {
        const bool branch_taken_0x22a5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5B4u;
        // 0x22a5b8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5b4) {
            ctx->pc = 0x22A5F4u;
            goto label_22a5f4;
        }
    }
    ctx->pc = 0x22A5BCu;
label_22a5bc:
    // 0x22a5bc: 0x0  nop
    ctx->pc = 0x22a5bcu;
    // NOP
label_22a5c0:
    // 0x22a5c0: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_22a5c4:
    if (ctx->pc == 0x22A5C4u) {
        ctx->pc = 0x22A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5C0u;
        // 0x22a5c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A5C8u;
        goto label_22a5c8;
    }
    ctx->pc = 0x22A5C0u;
    {
        const bool branch_taken_0x22a5c0 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x22A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5C0u;
        // 0x22a5c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5c0) {
            ctx->pc = 0x22A5F4u;
            goto label_22a5f4;
        }
    }
    ctx->pc = 0x22A5C8u;
label_22a5c8:
    // 0x22a5c8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x22a5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22a5cc:
    // 0x22a5cc: 0x0  nop
    ctx->pc = 0x22a5ccu;
    // NOP
label_22a5d0:
    // 0x22a5d0: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x22a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_22a5d4:
    // 0x22a5d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22a5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22a5d8:
    // 0x22a5d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22a5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22a5dc:
    // 0x22a5dc: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x22a5dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_22a5e0:
    // 0x22a5e0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_22a5e4:
    // 0x22a5e4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x22a5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_22a5e8:
    // 0x22a5e8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_22a5ec:
    if (ctx->pc == 0x22A5ECu) {
        ctx->pc = 0x22A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5E8u;
        // 0x22a5ec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A5F0u;
        goto label_22a5f0;
    }
    ctx->pc = 0x22A5E8u;
    {
        const bool branch_taken_0x22a5e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5E8u;
        // 0x22a5ec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5e8) {
            ctx->pc = 0x22A5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x22A5F0u;
label_22a5f0:
    // 0x22a5f0: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x22a5f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22a5f4:
    // 0x22a5f4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_22a5f8:
    // 0x22a5f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a5fc:
    // 0x22a5fc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22a5fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22a600:
    // 0x22a600: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22a600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_22a604:
    // 0x22a604: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x22a604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22a608:
    // 0x22a608: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x22a608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_22a60c:
    // 0x22a60c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x22a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_22a610:
    // 0x22a610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a614:
    // 0x22a614: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_22a618:
    if (ctx->pc == 0x22A618u) {
        ctx->pc = 0x22A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A614u;
        // 0x22a618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A61Cu;
        goto label_22a61c;
    }
    ctx->pc = 0x22A614u;
    {
        const bool branch_taken_0x22a614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a614) {
            ctx->pc = 0x22A618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A614u;
            // 0x22a618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A63Cu;
            goto label_22a63c;
        }
    }
    ctx->pc = 0x22A61Cu;
label_22a61c:
    // 0x22a61c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22a620:
    // 0x22a620: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22a620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22a624:
    // 0x22a624: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22a624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22a628:
    // 0x22a628: 0x60f809  jalr        $v1
label_22a62c:
    if (ctx->pc == 0x22A62Cu) {
        ctx->pc = 0x22A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A628u;
        // 0x22a62c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A630u;
        goto label_22a630;
    }
    ctx->pc = 0x22A628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22A630u);
        ctx->pc = 0x22A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A628u;
        // 0x22a62c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A628u, 0x22A630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A630u;
label_22a630:
    // 0x22a630: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22a634:
    // 0x22a634: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22a634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22a638:
    // 0x22a638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a63c:
    // 0x22a63c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a63cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22a640:
    // 0x22a640: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22a640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22a644:
    // 0x22a644: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22a644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22a648:
    // 0x22a648: 0x3e00008  jr          $ra
label_22a64c:
    if (ctx->pc == 0x22A64Cu) {
        ctx->pc = 0x22A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A648u;
        // 0x22a64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A650u;
        goto label_fallthrough_0x22a648;
    }
    ctx->pc = 0x22A648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A648u;
        // 0x22a64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22a648:
    ctx->pc = 0x22A650u;
}

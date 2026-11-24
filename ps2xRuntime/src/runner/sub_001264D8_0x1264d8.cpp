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

// Function: sub_001264D8
// Address: 0x1264d8 - 0x12664c
void sub_001264D8_0x1264d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001264D8_0x1264d8");
#endif

    switch (ctx->pc) {
        case 0x12650cu: goto label_12650c;
        case 0x126574u: goto label_126574;
        case 0x12659cu: goto label_12659c;
        case 0x1265b4u: goto label_1265b4;
        case 0x1265d4u: goto label_1265d4;
        case 0x126618u: goto label_126618;
        case 0x126638u: goto label_126638;
        default: break;
    }

    ctx->pc = 0x1264d8u;

    // 0x1264d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1264d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1264dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1264dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1264e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1264e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1264e4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1264e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1264e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1264e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1264ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1264f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1264f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1264f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1264f8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1264f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1264fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x126500: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x126500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x126504: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x126504u;
    SET_GPR_U32(ctx, 31, 0x12650Cu);
    ctx->pc = 0x126508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126504u;
    // 0x126508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x126504u, 0x12650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12650Cu;
label_12650c:
    // 0x12650c: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x12650cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x126510: 0x10683f  dsra32      $t5, $s0, 0
    ctx->pc = 0x126510u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x126514: 0x3c0e000f  lui         $t6, 0xF
    ctx->pc = 0x126514u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)15 << 16));
    // 0x126518: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x126518u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12651c: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x12651cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x126520: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x126520u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x126524: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x126524u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x126528: 0x1ae6824  and         $t5, $t5, $t6
    ctx->pc = 0x126528u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x12652c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12652cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126530: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x126530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x126534: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x126534u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x126538: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x126538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12653c: 0x20f8025  or          $s0, $s0, $t7
    ctx->pc = 0x12653cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 15));
    // 0x126540: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x126540u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x126544: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x126544u;
    {
        const bool branch_taken_0x126544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x126548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126544u;
        // 0x126548: 0x24530014  addiu       $s3, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126544) {
            ctx->pc = 0x126558u;
            goto label_126558;
        }
    }
    ctx->pc = 0x12654Cu;
    // 0x12654c: 0x3c0f0010  lui         $t7, 0x10
    ctx->pc = 0x12654cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16 << 16));
    // 0x126550: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x126550u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x126554: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x126554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
label_126558:
    // 0x126558: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x126558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12655c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12655cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x126560: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x126560u;
    {
        const bool branch_taken_0x126560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126560u;
        // 0x126564: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126560) {
            ctx->pc = 0x126630u;
            goto label_126630;
        }
    }
    ctx->pc = 0x126568u;
    // 0x126568: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x126568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x12656c: 0xc0496d0  jal         func_125B40
    ctx->pc = 0x12656Cu;
    SET_GPR_U32(ctx, 31, 0x126574u);
    ctx->pc = 0x126570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12656Cu;
    // 0x126570: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125B40u, 0x12656Cu, 0x126574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126574u;
label_126574:
    // 0x126574: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x126574u;
    {
        const bool branch_taken_0x126574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126574u;
        // 0x126578: 0x8fae0004  lw          $t6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126574) {
            ctx->pc = 0x126624u;
            goto label_126624;
        }
    }
    ctx->pc = 0x12657Cu;
    // 0x12657c: 0x26823  negu        $t5, $v0
    ctx->pc = 0x12657cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x126580: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x126580u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126584: 0x1ae7004  sllv        $t6, $t6, $t5
    ctx->pc = 0x126584u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x126588: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x126588u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12658c: 0xae2f0014  sw          $t7, 0x14($s1)
    ctx->pc = 0x12658cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 15));
    // 0x126590: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x126590u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x126594: 0x4e7006  srlv        $t6, $t6, $v0
    ctx->pc = 0x126594u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x126598: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x126598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
label_12659c:
    // 0x12659c: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x12659cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1265a0: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x1265a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1265a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1265a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1265a8: 0x1ed700a  movz        $t6, $t7, $t5
    ctx->pc = 0x1265a8u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x1265ac: 0xae6d0004  sw          $t5, 0x4($s3)
    ctx->pc = 0x1265acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 13));
    // 0x1265b0: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x1265b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1265b4:
    // 0x1265b4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1265B4u;
    {
        const bool branch_taken_0x1265b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1265B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265B4u;
        // 0x1265b8: 0xae2e0010  sw          $t6, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265b4) {
            ctx->pc = 0x1265FCu;
            goto label_1265fc;
        }
    }
    ctx->pc = 0x1265BCu;
    // 0x1265bc: 0x2427021  addu        $t6, $s2, $v0
    ctx->pc = 0x1265bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1265c0: 0x240f0035  addiu       $t7, $zero, 0x35
    ctx->pc = 0x1265c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1265c4: 0x25cefbcd  addiu       $t6, $t6, -0x433
    ctx->pc = 0x1265c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966221));
    // 0x1265c8: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x1265c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1265cc: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x1265ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x1265d0: 0xaeaf0000  sw          $t7, 0x0($s5)
    ctx->pc = 0x1265d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 15));
label_1265d4:
    // 0x1265d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1265d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1265d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1265d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1265dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1265dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1265e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1265e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1265e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1265e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1265e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1265e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1265ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1265ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1265f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1265f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1265f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1265F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1265F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265F4u;
        // 0x1265f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1265F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1265FCu;
label_1265fc:
    // 0x1265fc: 0x244efbce  addiu       $t6, $v0, -0x432
    ctx->pc = 0x1265fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966222));
    // 0x126600: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x126600u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x126604: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x126604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x126608: 0x26f7821  addu        $t7, $s3, $t7
    ctx->pc = 0x126608u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x12660c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x12660cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x126610: 0xc0496b0  jal         func_125AC0
    ctx->pc = 0x126610u;
    SET_GPR_U32(ctx, 31, 0x126618u);
    ctx->pc = 0x126614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126610u;
    // 0x126614: 0x8de4fffc  lw          $a0, -0x4($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125AC0u, 0x126610u, 0x126618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126618u;
label_126618:
    // 0x126618: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x126618u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12661c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x12661Cu;
    {
        const bool branch_taken_0x12661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12661Cu;
        // 0x126620: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12661c) {
            ctx->pc = 0x1265D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1265d4;
        }
    }
    ctx->pc = 0x126624u;
label_126624:
    // 0x126624: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x126624u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126628: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x126628u;
    {
        const bool branch_taken_0x126628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126628u;
        // 0x12662c: 0xae2f0014  sw          $t7, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126628) {
            ctx->pc = 0x12659Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12659c;
        }
    }
    ctx->pc = 0x126630u;
label_126630:
    // 0x126630: 0xc0496d0  jal         func_125B40
    ctx->pc = 0x126630u;
    SET_GPR_U32(ctx, 31, 0x126638u);
    ctx->pc = 0x126634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126630u;
    // 0x126634: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125B40u, 0x126630u, 0x126638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126638u;
label_126638:
    // 0x126638: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x126638u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12663c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x12663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x126640: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x126640u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126644: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x126644u;
    {
        const bool branch_taken_0x126644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126644u;
        // 0x126648: 0xae2f0014  sw          $t7, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126644) {
            ctx->pc = 0x1265B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1265b4;
        }
    }
    ctx->pc = 0x12664Cu;
}

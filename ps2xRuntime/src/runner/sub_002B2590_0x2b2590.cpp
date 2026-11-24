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

// Function: sub_002B2590
// Address: 0x2b2590 - 0x2b2c0c
void sub_002B2590_0x2b2590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2590_0x2b2590");
#endif

    switch (ctx->pc) {
        case 0x2b25e4u: goto label_2b25e4;
        case 0x2b260cu: goto label_2b260c;
        case 0x2b2808u: goto label_2b2808;
        case 0x2b2bf4u: goto label_2b2bf4;
        default: break;
    }

    ctx->pc = 0x2b2590u;

    // 0x2b2590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b2594: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b2594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b2598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b2598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b259c: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x2b259cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2b25a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b25a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b25a4: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2b25a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b25a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b25a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b25ac: 0x8c27fc90  lw          $a3, -0x370($at)
    ctx->pc = 0x2b25acu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2b25b0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2b25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b25b4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2b25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2b25b8: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2b25b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2b25bc: 0xe66024  and         $t4, $a3, $a2
    ctx->pc = 0x2b25bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2b25c0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2b25c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b25c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B25C4u;
    {
        const bool branch_taken_0x2b25c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25C4u;
        // 0x2b25c8: 0x180582d  daddu       $t3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25c4) {
            ctx->pc = 0x2B25F0u;
            goto label_2b25f0;
        }
    }
    ctx->pc = 0x2B25CCu;
    // 0x2b25cc: 0x91a20001  lbu         $v0, 0x1($t5)
    ctx->pc = 0x2b25ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x2b25d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b25d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b25d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B25D4u;
    {
        const bool branch_taken_0x2b25d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b25d4) {
            ctx->pc = 0x2B25F8u;
            goto label_2b25f8;
        }
    }
    ctx->pc = 0x2B25DCu;
    // 0x2b25dc: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B25DCu;
    SET_GPR_U32(ctx, 31, 0x2B25E4u);
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B25DCu, 0x2B25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B25E4u;
label_2b25e4:
    // 0x2b25e4: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x2B25E4u;
    {
        const bool branch_taken_0x2b25e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b25e4) {
            ctx->pc = 0x2B2BF8u;
            goto label_2b2bf8;
        }
    }
    ctx->pc = 0x2B25ECu;
    // 0x2b25ec: 0x0  nop
    ctx->pc = 0x2b25ecu;
    // NOP
label_2b25f0:
    // 0x2b25f0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2b25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b25f4: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x2b25f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
label_2b25f8:
    // 0x2b25f8: 0x8da40008  lw          $a0, 0x8($t5)
    ctx->pc = 0x2b25f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2b25fc: 0x25a5001c  addiu       $a1, $t5, 0x1C
    ctx->pc = 0x2b25fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 28));
    // 0x2b2600: 0x25a6000c  addiu       $a2, $t5, 0xC
    ctx->pc = 0x2b2600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x2b2604: 0xc0ac220  jal         func_2B0880
    ctx->pc = 0x2B2604u;
    SET_GPR_U32(ctx, 31, 0x2B260Cu);
    ctx->pc = 0x2B2608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2604u;
    // 0x2b2608: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0880u, 0x2B2604u, 0x2B260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B260Cu;
label_2b260c:
    // 0x2b260c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2b260cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2b2610: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2b2610u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2614: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x2b2614u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x2b2618: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x2b2618u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2b261c: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x2b261cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x2b2620: 0x3c063a00  lui         $a2, 0x3A00
    ctx->pc = 0x2b2620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)14848 << 16));
    // 0x2b2624: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x2b2624u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    // 0x2b2628: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2b2628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b262c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x2b262cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x2b2630: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b2630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2634: 0xaf8c8b28  sw          $t4, -0x74D8($gp)
    ctx->pc = 0x2b2634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 12));
    // 0x2b2638: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x2b2638u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2b263c: 0xad800010  sw          $zero, 0x10($t4)
    ctx->pc = 0x2b263cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 0));
    // 0x2b2640: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2b2640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2644: 0xad800014  sw          $zero, 0x14($t4)
    ctx->pc = 0x2b2644u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 0));
    // 0x2b2648: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x2b2648u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2b264c: 0x25900010  addiu       $s0, $t4, 0x10
    ctx->pc = 0x2b264cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b2650: 0xad800018  sw          $zero, 0x18($t4)
    ctx->pc = 0x2b2650u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 0));
    // 0x2b2654: 0xaf908b2c  sw          $s0, -0x74D4($gp)
    ctx->pc = 0x2b2654u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 16));
    // 0x2b2658: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2658u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b265c: 0xfd890000  sd          $t1, 0x0($t4)
    ctx->pc = 0x2b265cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 9));
    // 0x2b2660: 0x240f000e  addiu       $t7, $zero, 0xE
    ctx->pc = 0x2b2660u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b2664: 0xfd8f0008  sd          $t7, 0x8($t4)
    ctx->pc = 0x2b2664u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 15));
    // 0x2b2668: 0xe383c  dsll32      $a3, $t6, 0
    ctx->pc = 0x2b2668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) << (32 + 0));
    // 0x2b266c: 0x34c600c0  ori         $a2, $a2, 0xC0
    ctx->pc = 0x2b266cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)192);
    // 0x2b2670: 0xaf8c8b30  sw          $t4, -0x74D0($gp)
    ctx->pc = 0x2b2670u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 12));
    // 0x2b2674: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x2b2674u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2b2678: 0x2409004f  addiu       $t1, $zero, 0x4F
    ctx->pc = 0x2b2678u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2b267c: 0xfd880010  sd          $t0, 0x10($t4)
    ctx->pc = 0x2b267cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 8));
    // 0x2b2680: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2b2680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2b2684: 0xfd890018  sd          $t1, 0x18($t4)
    ctx->pc = 0x2b2684u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 9));
    // 0x2b2688: 0x34c70002  ori         $a3, $a2, 0x2
    ctx->pc = 0x2b2688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x2b268c: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b268cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2690: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x2b2690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2b2694: 0xfd870000  sd          $a3, 0x0($t4)
    ctx->pc = 0x2b2694u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 7));
    // 0x2b2698: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b2698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b269c: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x2b269cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x2b26a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b26a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b26a4: 0x91a7002d  lbu         $a3, 0x2D($t5)
    ctx->pc = 0x2b26a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 45)));
    // 0x2b26a8: 0x10e60025  beq         $a3, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B26A8u;
    {
        const bool branch_taken_0x2b26a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26A8u;
        // 0x2b26ac: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26a8) {
            ctx->pc = 0x2B2740u;
            goto label_2b2740;
        }
    }
    ctx->pc = 0x2B26B0u;
    // 0x2b26b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b26b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b26b4: 0x10e60018  beq         $a3, $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B26B4u;
    {
        const bool branch_taken_0x2b26b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x2b26b4) {
            ctx->pc = 0x2B2718u;
            goto label_2b2718;
        }
    }
    ctx->pc = 0x2B26BCu;
    // 0x2b26bc: 0x10ee000c  beq         $a3, $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x2B26BCu;
    {
        const bool branch_taken_0x2b26bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b26bc) {
            ctx->pc = 0x2B26F0u;
            goto label_2b26f0;
        }
    }
    ctx->pc = 0x2B26C4u;
    // 0x2b26c4: 0x0  nop
    ctx->pc = 0x2b26c4u;
    // NOP
    // 0x2b26c8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2b26c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b26cc: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2b26ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2b26d0: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x2b26d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2b26d4: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x2b26d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2b26d8: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x2b26d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2b26dc: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b26dcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b26e0: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b26e0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b26e4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B26E4u;
    {
        const bool branch_taken_0x2b26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26E4u;
        // 0x2b26e8: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26e4) {
            ctx->pc = 0x2B2760u;
            goto label_2b2760;
        }
    }
    ctx->pc = 0x2B26ECu;
    // 0x2b26ec: 0x0  nop
    ctx->pc = 0x2b26ecu;
    // NOP
label_2b26f0:
    // 0x2b26f0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2b26f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b26f4: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2b26f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2b26f8: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x2b26f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2b26fc: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x2b26fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2b2700: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x2b2700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2b2704: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b2704u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b2708: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b2708u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b270c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B270Cu;
    {
        const bool branch_taken_0x2b270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B270Cu;
        // 0x2b2710: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b270c) {
            ctx->pc = 0x2B2760u;
            goto label_2b2760;
        }
    }
    ctx->pc = 0x2B2714u;
    // 0x2b2714: 0x0  nop
    ctx->pc = 0x2b2714u;
    // NOP
label_2b2718:
    // 0x2b2718: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2b2718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b271c: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2b271cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2b2720: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x2b2720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b2724: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x2b2724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2b2728: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x2b2728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2b272c: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b272cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b2730: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b2730u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b2734: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B2734u;
    {
        const bool branch_taken_0x2b2734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2734u;
        // 0x2b2738: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2734) {
            ctx->pc = 0x2B2760u;
            goto label_2b2760;
        }
    }
    ctx->pc = 0x2B273Cu;
    // 0x2b273c: 0x0  nop
    ctx->pc = 0x2b273cu;
    // NOP
label_2b2740:
    // 0x2b2740: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2b2740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b2744: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2b2744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2b2748: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2b2748u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2b274c: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x2b274cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2b2750: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b2750u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b2754: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b2754u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b2758: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2758u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b275c: 0x0  nop
    ctx->pc = 0x2b275cu;
    // NOP
label_2b2760:
    // 0x2b2760: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b2760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2b2764: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2768: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2b2768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b276c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x2b276cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x2b2770: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b2770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2774: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b2774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2b2778: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2b2778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b277c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b277cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b2780: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2b2780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2b2784: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2b2784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2788: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2b2788u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b278c: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x2b278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x2b2790: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x2b2790u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2b2794: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2b2794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b2798: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2b2798u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b279c: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x2b279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x2b27a0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2b27a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b27a4: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x2b27a4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x2b27a8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2b27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b27ac: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x2b27acu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x2b27b0: 0x24040246  addiu       $a0, $zero, 0x246
    ctx->pc = 0x2b27b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
    // 0x2b27b4: 0xfd840010  sd          $a0, 0x10($t4)
    ctx->pc = 0x2b27b4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 4));
    // 0x2b27b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b27bc: 0xfd800018  sd          $zero, 0x18($t4)
    ctx->pc = 0x2b27bcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 0));
    // 0x2b27c0: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b27c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b27c4: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x2b27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x2b27c8: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x2b27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x2b27cc: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2b27ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b27d0: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x2b27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x2b27d4: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x2b27d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2b27d8: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2b27d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b27dc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2b27dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b27e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b27e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b27e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b27e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2b27e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b27ec: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x2b27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x2b27f0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x2b27f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x2b27f4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2b27f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b27f8: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x2b27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x2b27fc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x2b27fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x2b2800: 0x70033b89  pcpyld      $a3, $zero, $v1
    ctx->pc = 0x2b2800u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2b2804: 0x70022b89  pcpyld      $a1, $zero, $v0
    ctx->pc = 0x2b2804u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_2b2808:
    // 0x2b2808: 0xf183c  dsll32      $v1, $t7, 0
    ctx->pc = 0x2b2808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) << (32 + 0));
    // 0x2b280c: 0xe803c  dsll32      $s0, $t6, 0
    ctx->pc = 0x2b280cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) << (32 + 0));
    // 0x2b2810: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2b2810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2b2814: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2b2814u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2b2818: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b2818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2b281c: 0x27020001  addiu       $v0, $t8, 0x1
    ctx->pc = 0x2b281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x2b2820: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x2b2820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2b2824: 0x28940  sll         $s1, $v0, 5
    ctx->pc = 0x2b2824u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b2828: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2b2828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2b282c: 0x2622001f  addiu       $v0, $s1, 0x1F
    ctx->pc = 0x2b282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x2b2830: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x2b2830u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x2b2834: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b2834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b2838: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x2b2838u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x2b283c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2b283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b2840: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b2840u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b2844: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2b2844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2b2848: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b2848u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b284c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2b284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b2850: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2850u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2854: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2b2854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b2858: 0xfd850000  sd          $a1, 0x0($t4)
    ctx->pc = 0x2b2858u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 5));
    // 0x2b285c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2860: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x2b2860u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x2b2864: 0x498025  or          $s0, $v0, $t1
    ctx->pc = 0x2b2864u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2b2868: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2b2868u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b286c: 0x27020002  addiu       $v0, $t8, 0x2
    ctx->pc = 0x2b286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2b2870: 0xfd900000  sd          $s0, 0x0($t4)
    ctx->pc = 0x2b2870u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 16));
    // 0x2b2874: 0x28940  sll         $s1, $v0, 5
    ctx->pc = 0x2b2874u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b2878: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x2b2878u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x2b287c: 0x2622001f  addiu       $v0, $s1, 0x1F
    ctx->pc = 0x2b287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x2b2880: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b2880u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b2884: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2b2884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b2888: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b2888u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b288c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2b288cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2b2890: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2b2890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b2894: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2894u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2898: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2b2898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b289c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2b28a0: 0xfd850000  sd          $a1, 0x0($t4)
    ctx->pc = 0x2b28a0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 5));
    // 0x2b28a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b28a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b28a8: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x2b28a8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x2b28ac: 0x49c825  or          $t9, $v0, $t1
    ctx->pc = 0x2b28acu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2b28b0: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2b28b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b28b4: 0x27020003  addiu       $v0, $t8, 0x3
    ctx->pc = 0x2b28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x2b28b8: 0xfd990000  sd          $t9, 0x0($t4)
    ctx->pc = 0x2b28b8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 25));
    // 0x2b28bc: 0x28140  sll         $s0, $v0, 5
    ctx->pc = 0x2b28bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b28c0: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x2b28c0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x2b28c4: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x2b28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x2b28c8: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b28c8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b28cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2b28ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b28d0: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b28d0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b28d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2b28d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2b28d8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2b28d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2b28dc: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b28dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b28e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2b28e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b28e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b28e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2b28e8: 0xfd850000  sd          $a1, 0x0($t4)
    ctx->pc = 0x2b28e8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 5));
    // 0x2b28ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b28ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b28f0: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x2b28f0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x2b28f4: 0x498025  or          $s0, $v0, $t1
    ctx->pc = 0x2b28f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2b28f8: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2b28f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b28fc: 0x27020004  addiu       $v0, $t8, 0x4
    ctx->pc = 0x2b28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x2b2900: 0xfd900000  sd          $s0, 0x0($t4)
    ctx->pc = 0x2b2900u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 16));
    // 0x2b2904: 0x28940  sll         $s1, $v0, 5
    ctx->pc = 0x2b2904u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b2908: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x2b2908u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x2b290c: 0x2622001f  addiu       $v0, $s1, 0x1F
    ctx->pc = 0x2b290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x2b2910: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b2910u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b2914: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2b2914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b2918: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b2918u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b291c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2b291cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2b2920: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2b2920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b2924: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2924u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2928: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2b2928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b292c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b292cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2b2930: 0xfd850000  sd          $a1, 0x0($t4)
    ctx->pc = 0x2b2930u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 5));
    // 0x2b2934: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b2934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2938: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x2b2938u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x2b293c: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x2b293cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2b2940: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2b2940u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b2944: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x2b2944u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x2b2948: 0x27020005  addiu       $v0, $t8, 0x5
    ctx->pc = 0x2b2948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 5));
    // 0x2b294c: 0x28940  sll         $s1, $v0, 5
    ctx->pc = 0x2b294cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b2950: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x2b2950u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x2b2954: 0x2622001f  addiu       $v0, $s1, 0x1F
    ctx->pc = 0x2b2954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x2b2958: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b2958u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b295c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2b295cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b2960: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b2960u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b2964: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2b2964u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2b2968: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2b2968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b296c: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b296cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2970: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2b2970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b2974: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x2b2974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x2b2978: 0xfd850000  sd          $a1, 0x0($t4)
    ctx->pc = 0x2b2978u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 5));
    // 0x2b297c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x2b297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x2b2980: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x2b2980u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x2b2984: 0x27100006  addiu       $s0, $t8, 0x6
    ctx->pc = 0x2b2984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 24), 6));
    // 0x2b2988: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2b2988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2b298c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2b298cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b2990: 0x108940  sll         $s1, $s0, 5
    ctx->pc = 0x2b2990u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2b2994: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x2b2994u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x2b2998: 0x2630001f  addiu       $s0, $s1, 0x1F
    ctx->pc = 0x2b2998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x2b299c: 0x10c83c  dsll32      $t9, $s0, 0
    ctx->pc = 0x2b299cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2b29a0: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x2b29a0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x2b29a4: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b29a4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b29a8: 0x19c83e  dsrl32      $t9, $t9, 0
    ctx->pc = 0x2b29a8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x2b29ac: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b29acu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b29b0: 0x11803c  dsll32      $s0, $s1, 0
    ctx->pc = 0x2b29b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b29b4: 0x27030007  addiu       $v1, $t8, 0x7
    ctx->pc = 0x2b29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 7));
    // 0x2b29b8: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b29b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b29bc: 0xfd850000  sd          $a1, 0x0($t4)
    ctx->pc = 0x2b29bcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 5));
    // 0x2b29c0: 0x38940  sll         $s1, $v1, 5
    ctx->pc = 0x2b29c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2b29c4: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x2b29c4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x2b29c8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2b29c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2b29cc: 0x19cc38  dsll        $t9, $t9, 16
    ctx->pc = 0x2b29ccu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 16);
    // 0x2b29d0: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2b29d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b29d4: 0x2198025  or          $s0, $s0, $t9
    ctx->pc = 0x2b29d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 25));
    // 0x2b29d8: 0x2623001f  addiu       $v1, $s1, 0x1F
    ctx->pc = 0x2b29d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x2b29dc: 0x3c83c  dsll32      $t9, $v1, 0
    ctx->pc = 0x2b29dcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b29e0: 0x2098025  or          $s0, $s0, $t1
    ctx->pc = 0x2b29e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 9));
    // 0x2b29e4: 0xfd900000  sd          $s0, 0x0($t4)
    ctx->pc = 0x2b29e4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 16));
    // 0x2b29e8: 0x19c83e  dsrl32      $t9, $t9, 0
    ctx->pc = 0x2b29e8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x2b29ec: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x2b29ecu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x2b29f0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2b29f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b29f4: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b29f4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b29f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2b29f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2b29fc: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b29fcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b2a00: 0x19cc38  dsll        $t9, $t9, 16
    ctx->pc = 0x2b2a00u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 16);
    // 0x2b2a04: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2a04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2a08: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x2b2a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x2b2a0c: 0xfd850000  sd          $a1, 0x0($t4)
    ctx->pc = 0x2b2a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 5));
    // 0x2b2a10: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2b2a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2b2a14: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x2b2a14u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x2b2a18: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x2b2a18u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x2b2a1c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2b2a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b2a20: 0x2f020010  sltiu       $v0, $t8, 0x10
    ctx->pc = 0x2b2a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2b2a24: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x2b2a24u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x2b2a28: 0x25ef0100  addiu       $t7, $t7, 0x100
    ctx->pc = 0x2b2a28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
    // 0x2b2a2c: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x2b2a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x2b2a30: 0x25ce0100  addiu       $t6, $t6, 0x100
    ctx->pc = 0x2b2a30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 256));
    // 0x2b2a34: 0xfd870010  sd          $a3, 0x10($t4)
    ctx->pc = 0x2b2a34u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 7));
    // 0x2b2a38: 0xfd860018  sd          $a2, 0x18($t4)
    ctx->pc = 0x2b2a38u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 6));
    // 0x2b2a3c: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2a40: 0xfd850000  sd          $a1, 0x0($t4)
    ctx->pc = 0x2b2a40u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 5));
    // 0x2b2a44: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x2b2a44u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x2b2a48: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x2B2A48u;
    {
        const bool branch_taken_0x2b2a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A48u;
        // 0x2b2a4c: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a48) {
            ctx->pc = 0x2B2808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2808;
        }
    }
    ctx->pc = 0x2B2A50u;
    // 0x2b2a50: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x2b2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x2b2a54: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x2b2a54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x2b2a58: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x2b2a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x2b2a5c: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2b2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2b2a60: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x2b2a60u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x2b2a64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b2a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b2a68: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x2b2a68u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x2b2a6c: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2b2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2b2a70: 0x8c2ff014  lw          $t7, -0xFEC($at)
    ctx->pc = 0x2b2a70u;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x81F014u));
    // 0x2b2a74: 0x692025  or          $a0, $v1, $t1
    ctx->pc = 0x2b2a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2b2a78: 0x240e0019  addiu       $t6, $zero, 0x19
    ctx->pc = 0x2b2a78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b2a7c: 0x34c7020b  ori         $a3, $a2, 0x20B
    ctx->pc = 0x2b2a7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)523);
    // 0x2b2a80: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2b2a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2b2a84: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x2b2a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2b2a88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2a8c: 0xdde90040  ld          $t1, 0x40($t7)
    ctx->pc = 0x2b2a8cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x2b2a90: 0xfd890010  sd          $t1, 0x10($t4)
    ctx->pc = 0x2b2a90u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 9));
    // 0x2b2a94: 0xfd8e0018  sd          $t6, 0x18($t4)
    ctx->pc = 0x2b2a94u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 14));
    // 0x2b2a98: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2a98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2a9c: 0xfd870000  sd          $a3, 0x0($t4)
    ctx->pc = 0x2b2a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 7));
    // 0x2b2aa0: 0xfd850008  sd          $a1, 0x8($t4)
    ctx->pc = 0x2b2aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 5));
    // 0x2b2aa4: 0xfd840010  sd          $a0, 0x10($t4)
    ctx->pc = 0x2b2aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 4));
    // 0x2b2aa8: 0xfd880018  sd          $t0, 0x18($t4)
    ctx->pc = 0x2b2aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 8));
    // 0x2b2aac: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2aacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2ab0: 0xfd860000  sd          $a2, 0x0($t4)
    ctx->pc = 0x2b2ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 6));
    // 0x2b2ab4: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x2b2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x2b2ab8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x2b2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x2b2abc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b2abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b2ac0: 0x42f02  srl         $a1, $a0, 28
    ctx->pc = 0x2b2ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x2b2ac4: 0x42682  srl         $a0, $a0, 26
    ctx->pc = 0x2b2ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 26));
    // 0x2b2ac8: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2b2ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2b2acc: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B2ACCu;
    {
        const bool branch_taken_0x2b2acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2ACCu;
        // 0x2b2ad0: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2acc) {
            ctx->pc = 0x2B2B18u;
            goto label_2b2b18;
        }
    }
    ctx->pc = 0x2B2AD4u;
    // 0x2b2ad4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2ad8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2AD8u;
    {
        const bool branch_taken_0x2b2ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2ad8) {
            ctx->pc = 0x2B2AF0u;
            goto label_2b2af0;
        }
    }
    ctx->pc = 0x2B2AE0u;
    // 0x2b2ae0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2AE0u;
    {
        const bool branch_taken_0x2b2ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2ae0) {
            ctx->pc = 0x2B2AF0u;
            goto label_2b2af0;
        }
    }
    ctx->pc = 0x2B2AE8u;
    // 0x2b2ae8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B2AE8u;
    {
        const bool branch_taken_0x2b2ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2ae8) {
            ctx->pc = 0x2B2B50u;
            goto label_2b2b50;
        }
    }
    ctx->pc = 0x2B2AF0u;
label_2b2af0:
    // 0x2b2af0: 0x25830010  addiu       $v1, $t4, 0x10
    ctx->pc = 0x2b2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b2af4: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2b2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b2af8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2AF8u;
    {
        const bool branch_taken_0x2b2af8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2B2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AF8u;
        // 0x2b2afc: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2af8) {
            ctx->pc = 0x2B2B08u;
            goto label_2b2b08;
        }
    }
    ctx->pc = 0x2B2B00u;
    // 0x2b2b00: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x2b2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2b2b04: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2b2b04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_2b2b08:
    // 0x2b2b08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b2b0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B2B0Cu;
    {
        const bool branch_taken_0x2b2b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B0Cu;
        // 0x2b2b10: 0x306affff  andi        $t2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b0c) {
            ctx->pc = 0x2B2B50u;
            goto label_2b2b50;
        }
    }
    ctx->pc = 0x2B2B14u;
    // 0x2b2b14: 0x0  nop
    ctx->pc = 0x2b2b14u;
    // NOP
label_2b2b18:
    // 0x2b2b18: 0x25830010  addiu       $v1, $t4, 0x10
    ctx->pc = 0x2b2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b2b1c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2b2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b2b20: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2B20u;
    {
        const bool branch_taken_0x2b2b20 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2B2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B20u;
        // 0x2b2b24: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b20) {
            ctx->pc = 0x2B2B30u;
            goto label_2b2b30;
        }
    }
    ctx->pc = 0x2B2B28u;
    // 0x2b2b28: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x2b2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2b2b2c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2b2b2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_2b2b30:
    // 0x2b2b30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b2b34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b2b38: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2b2b38u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2b2b3c: 0x0  nop
    ctx->pc = 0x2b2b3cu;
    // NOP
    // 0x2b2b40: 0x0  nop
    ctx->pc = 0x2b2b40u;
    // NOP
    // 0x2b2b44: 0x1812  mflo        $v1
    ctx->pc = 0x2b2b44u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2b2b48: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x2b2b48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2b4c: 0x0  nop
    ctx->pc = 0x2b2b4cu;
    // NOP
label_2b2b50:
    // 0x2b2b50: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x2b2b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2b2b54: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2b2b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b2b58: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2b2b58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b2b5c: 0x25830010  addiu       $v1, $t4, 0x10
    ctx->pc = 0x2b2b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b2b60: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x2b2b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x2b2b64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b2b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2b68: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2B68u;
    {
        const bool branch_taken_0x2b2b68 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2B2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B68u;
        // 0x2b2b6c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b68) {
            ctx->pc = 0x2B2B78u;
            goto label_2b2b78;
        }
    }
    ctx->pc = 0x2B2B70u;
    // 0x2b2b70: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2b2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2b2b74: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2b2b74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2b2b78:
    // 0x2b2b78: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2b2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b2b7c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2b2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2b2b80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b2b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b2b84: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b2b88: 0x25820010  addiu       $v0, $t4, 0x10
    ctx->pc = 0x2b2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b2b8c: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x2b2b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x2b2b90: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x2b2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b2b94: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2B94u;
    {
        const bool branch_taken_0x2b2b94 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2B2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B94u;
        // 0x2b2b98: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b94) {
            ctx->pc = 0x2B2BA4u;
            goto label_2b2ba4;
        }
    }
    ctx->pc = 0x2B2B9Cu;
    // 0x2b2b9c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2b2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2b2ba0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2b2ba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2b2ba4:
    // 0x2b2ba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b2ba8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2b2ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2b2bac: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2b2bacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b2bb0: 0x25860010  addiu       $a2, $t4, 0x10
    ctx->pc = 0x2b2bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2b2bb4: 0xad830010  sw          $v1, 0x10($t4)
    ctx->pc = 0x2b2bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 3));
    // 0x2b2bb8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2b2bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2b2bbc: 0xad800014  sw          $zero, 0x14($t4)
    ctx->pc = 0x2b2bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 0));
    // 0x2b2bc0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2b2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2b2bc4: 0xad800018  sw          $zero, 0x18($t4)
    ctx->pc = 0x2b2bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 0));
    // 0x2b2bc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b2bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b2bcc: 0xad80001c  sw          $zero, 0x1C($t4)
    ctx->pc = 0x2b2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 0));
    // 0x2b2bd0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2b2bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bd4: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b2bd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x2b2bd8: 0xaf868b28  sw          $a2, -0x74D8($gp)
    ctx->pc = 0x2b2bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 6));
    // 0x2b2bdc: 0x2583000f  addiu       $v1, $t4, 0xF
    ctx->pc = 0x2b2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 15));
    // 0x2b2be0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b2be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b2be4: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x2b2be4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x2b2be8: 0x91a7002c  lbu         $a3, 0x2C($t5)
    ctx->pc = 0x2b2be8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x2b2bec: 0xc061c60  jal         func_187180
    ctx->pc = 0x2B2BECu;
    SET_GPR_U32(ctx, 31, 0x2B2BF4u);
    ctx->pc = 0x2B2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BECu;
    // 0x2b2bf0: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x2B2BECu, 0x2B2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BF4u;
label_2b2bf4:
    // 0x2b2bf4: 0x0  nop
    ctx->pc = 0x2b2bf4u;
    // NOP
label_2b2bf8:
    // 0x2b2bf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b2bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2c04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C04u;
        // 0x2b2c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2C0Cu;
}

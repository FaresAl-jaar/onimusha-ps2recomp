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

// Function: sub_001A2590
// Address: 0x1a2590 - 0x1a2790
void sub_001A2590_0x1a2590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2590_0x1a2590");
#endif

    switch (ctx->pc) {
        case 0x1a25a0u: goto label_1a25a0;
        case 0x1a25e0u: goto label_1a25e0;
        case 0x1a26a0u: goto label_1a26a0;
        case 0x1a26f8u: goto label_1a26f8;
        case 0x1a2728u: goto label_1a2728;
        default: break;
    }

    ctx->pc = 0x1a2590u;

    // 0x1a2590: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a2590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2594: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1a2594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2598: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1a2598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a259c: 0x0  nop
    ctx->pc = 0x1a259cu;
    // NOP
label_1a25a0:
    // 0x1a25a0: 0x8d0f0000  lw          $t7, 0x0($t0)
    ctx->pc = 0x1a25a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a25a4: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x1a25a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a25a8: 0xf5880  sll         $t3, $t7, 2
    ctx->pc = 0x1a25a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1a25ac: 0xab5821  addu        $t3, $a1, $t3
    ctx->pc = 0x1a25acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1a25b0: 0xc56e0000  lwc1        $f14, 0x0($t3)
    ctx->pc = 0x1a25b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a25b4: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x1A25B4u;
    {
        const bool branch_taken_0x1a25b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B4u;
        // 0x1a25b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25b4) {
            ctx->pc = 0x1A26C8u;
            goto label_1a26c8;
        }
    }
    ctx->pc = 0x1A25BCu;
    // 0x1a25bc: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x1a25bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a25c0: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A25C0u;
    {
        const bool branch_taken_0x1a25c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25C0u;
        // 0x1a25c4: 0x254efff8  addiu       $t6, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25c0) {
            ctx->pc = 0x1A2678u;
            goto label_1a2678;
        }
    }
    ctx->pc = 0x1A25C8u;
    // 0x1a25c8: 0xf5840  sll         $t3, $t7, 1
    ctx->pc = 0x1a25c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x1a25cc: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x1a25ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25d0: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x1a25d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1a25d4: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1a25d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1a25d8: 0x8b6821  addu        $t5, $a0, $t3
    ctx->pc = 0x1a25d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1a25dc: 0x0  nop
    ctx->pc = 0x1a25dcu;
    // NOP
label_1a25e0:
    // 0x1a25e0: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1a25e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1a25e4: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x1a25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a25e8: 0x12e582a  slt         $t3, $t1, $t6
    ctx->pc = 0x1a25e8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1a25ec: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x1a25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a25f0: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x1a25f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a25f4: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x1a25f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a25f8: 0xc58b0008  lwc1        $f11, 0x8($t4)
    ctx->pc = 0x1a25f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1a25fc: 0xc5aa0008  lwc1        $f10, 0x8($t5)
    ctx->pc = 0x1a25fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1a2600: 0xc589000c  lwc1        $f9, 0xC($t4)
    ctx->pc = 0x1a2600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a2604: 0x46021b42  mul.s       $f13, $f3, $f2
    ctx->pc = 0x1a2604u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a2608: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1a2608u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a260c: 0x460d7381  sub.s       $f14, $f14, $f13
    ctx->pc = 0x1a260cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x1a2610: 0xc5a8000c  lwc1        $f8, 0xC($t5)
    ctx->pc = 0x1a2610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a2614: 0x460a5a82  mul.s       $f10, $f11, $f10
    ctx->pc = 0x1a2614u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x1a2618: 0x460c7381  sub.s       $f14, $f14, $f12
    ctx->pc = 0x1a2618u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1a261c: 0xc5870010  lwc1        $f7, 0x10($t4)
    ctx->pc = 0x1a261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a2620: 0xc5a60010  lwc1        $f6, 0x10($t5)
    ctx->pc = 0x1a2620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a2624: 0x46084a02  mul.s       $f8, $f9, $f8
    ctx->pc = 0x1a2624u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x1a2628: 0x460a7381  sub.s       $f14, $f14, $f10
    ctx->pc = 0x1a2628u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[10]);
    // 0x1a262c: 0xc5850014  lwc1        $f5, 0x14($t4)
    ctx->pc = 0x1a262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a2630: 0xc5a40014  lwc1        $f4, 0x14($t5)
    ctx->pc = 0x1a2630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2634: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x1a2634u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x1a2638: 0x46087381  sub.s       $f14, $f14, $f8
    ctx->pc = 0x1a2638u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[8]);
    // 0x1a263c: 0xc5830018  lwc1        $f3, 0x18($t4)
    ctx->pc = 0x1a263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2640: 0xc5a20018  lwc1        $f2, 0x18($t5)
    ctx->pc = 0x1a2640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2644: 0xc581001c  lwc1        $f1, 0x1C($t4)
    ctx->pc = 0x1a2644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2648: 0xc5a0001c  lwc1        $f0, 0x1C($t5)
    ctx->pc = 0x1a2648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a264c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1a264cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1a2650: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x1a2650u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x1a2654: 0x46067381  sub.s       $f14, $f14, $f6
    ctx->pc = 0x1a2654u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[6]);
    // 0x1a2658: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1a2658u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1a265c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a265cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a2660: 0x46047381  sub.s       $f14, $f14, $f4
    ctx->pc = 0x1a2660u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[4]);
    // 0x1a2664: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a2664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a2668: 0x46027381  sub.s       $f14, $f14, $f2
    ctx->pc = 0x1a2668u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x1a266c: 0x1560ffdc  bnez        $t3, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1A266Cu;
    {
        const bool branch_taken_0x1a266c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A266Cu;
        // 0x1a2670: 0x46007381  sub.s       $f14, $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a266c) {
            ctx->pc = 0x1A25E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a25e0;
        }
    }
    ctx->pc = 0x1A2674u;
    // 0x1a2674: 0x0  nop
    ctx->pc = 0x1a2674u;
    // NOP
label_1a2678:
    // 0x1a2678: 0x12a082a  slt         $at, $t1, $t2
    ctx->pc = 0x1a2678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a267c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A267Cu;
    {
        const bool branch_taken_0x1a267c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A267Cu;
        // 0x1a2680: 0xf5840  sll         $t3, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a267c) {
            ctx->pc = 0x1A26C8u;
            goto label_1a26c8;
        }
    }
    ctx->pc = 0x1A2684u;
    // 0x1a2684: 0x96080  sll         $t4, $t1, 2
    ctx->pc = 0x1a2684u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a2688: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x1a2688u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1a268c: 0xec6821  addu        $t5, $a3, $t4
    ctx->pc = 0x1a268cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1a2690: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1a2690u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1a2694: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x1a2694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1a2698: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1a2698u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1a269c: 0x0  nop
    ctx->pc = 0x1a269cu;
    // NOP
label_1a26a0:
    // 0x1a26a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1a26a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1a26a4: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x1a26a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a26a8: 0x12a582a  slt         $t3, $t1, $t2
    ctx->pc = 0x1a26a8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a26ac: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x1a26acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a26b0: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1a26b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x1a26b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a26b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a26b8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x1a26b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1a26bc: 0x1560fff8  bnez        $t3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A26BCu;
    {
        const bool branch_taken_0x1a26bc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26BCu;
        // 0x1a26c0: 0x46007381  sub.s       $f14, $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26bc) {
            ctx->pc = 0x1A26A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a26a0;
        }
    }
    ctx->pc = 0x1A26C4u;
    // 0x1a26c4: 0x0  nop
    ctx->pc = 0x1a26c4u;
    // NOP
label_1a26c8:
    // 0x1a26c8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1a26c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a26cc: 0xe46e0000  swc1        $f14, 0x0($v1)
    ctx->pc = 0x1a26ccu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a26d0: 0x29490003  slti        $t1, $t2, 0x3
    ctx->pc = 0x1a26d0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a26d4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1a26d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1a26d8: 0x1520ffb1  bnez        $t1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1A26D8u;
    {
        const bool branch_taken_0x1a26d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26D8u;
        // 0x1a26dc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26d8) {
            ctx->pc = 0x1A25A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a25a0;
        }
    }
    ctx->pc = 0x1A26E0u;
    // 0x1a26e0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a26e4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1a26e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1a26e8: 0x5000027  bltz        $t0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A26E8u;
    {
        const bool branch_taken_0x1a26e8 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1A26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26E8u;
        // 0x1a26ec: 0x85880  sll         $t3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26e8) {
            ctx->pc = 0x1A2788u;
            goto label_1a2788;
        }
    }
    ctx->pc = 0x1A26F0u;
    // 0x1a26f0: 0xcb6021  addu        $t4, $a2, $t3
    ctx->pc = 0x1a26f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1a26f4: 0xeb6821  addu        $t5, $a3, $t3
    ctx->pc = 0x1a26f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_1a26f8:
    // 0x1a26f8: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x1a26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a26fc: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x1a26fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a2700: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x1a2700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a2704: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A2704u;
    {
        const bool branch_taken_0x1a2704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2704u;
        // 0x1a2708: 0x8d860000  lw          $a2, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2704) {
            ctx->pc = 0x1A2750u;
            goto label_1a2750;
        }
    }
    ctx->pc = 0x1A270Cu;
    // 0x1a270c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1a270cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a2710: 0x54880  sll         $t1, $a1, 2
    ctx->pc = 0x1a2710u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a2714: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a2714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a2718: 0xe95021  addu        $t2, $a3, $t1
    ctx->pc = 0x1a2718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1a271c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a271cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2720: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a2720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a2724: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x1a2724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1a2728:
    // 0x1a2728: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a272c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x1a272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2730: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x1a2730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a2734: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1a2734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2738: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1a2738u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1a273c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a273cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a2740: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1a2740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1a2744: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A2744u;
    {
        const bool branch_taken_0x1a2744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2744u;
        // 0x1a2748: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2744) {
            ctx->pc = 0x1A2728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2728;
        }
    }
    ctx->pc = 0x1A274Cu;
    // 0x1a274c: 0x0  nop
    ctx->pc = 0x1a274cu;
    // NOP
label_1a2750:
    // 0x1a2750: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1a2750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a2754: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a2754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a2758: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x1a2758u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x1a275c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a275cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2760: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1a2760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1a2764: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a2764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a2768: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1a2768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1a276c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1a276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2770: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x1a2770u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x1a2774: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1a2774u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a2778: 0x0  nop
    ctx->pc = 0x1a2778u;
    // NOP
    // 0x1a277c: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x1a277cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x1a2780: 0x501ffdd  bgez        $t0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A2780u;
    {
        const bool branch_taken_0x1a2780 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x1A2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2780u;
        // 0x1a2784: 0x25adfffc  addiu       $t5, $t5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2780) {
            ctx->pc = 0x1A26F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a26f8;
        }
    }
    ctx->pc = 0x1A2788u;
label_1a2788:
    // 0x1a2788: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2790u;
}

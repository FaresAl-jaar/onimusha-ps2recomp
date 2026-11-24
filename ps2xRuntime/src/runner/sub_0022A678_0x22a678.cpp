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

// Function: sub_0022A678
// Address: 0x22a678 - 0x22a990
void sub_0022A678_0x22a678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A678_0x22a678");
#endif

    ctx->pc = 0x22a678u;

    // 0x22a678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a67c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x22a67cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a684: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22a684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22a688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22a68c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x22a68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a690: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x22a690u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x22a694: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x22a694u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a698: 0x91cb0003  lbu         $t3, 0x3($t6)
    ctx->pc = 0x22a698u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x22a69c: 0x358c732e  ori         $t4, $t4, 0x732E
    ctx->pc = 0x22a69cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)29486);
    // 0x22a6a0: 0x91c30002  lbu         $v1, 0x2($t6)
    ctx->pc = 0x22a6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x22a6a4: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x22a6a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6a8: 0x91c40001  lbu         $a0, 0x1($t6)
    ctx->pc = 0x22a6a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x22a6ac: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x22a6acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x22a6b0: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x22a6b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x22a6b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22a6b8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x22a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22a6bc: 0x120c02d  daddu       $t8, $t1, $zero
    ctx->pc = 0x22a6bcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6c0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x22a6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x22a6c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22a6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22a6c8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x22a6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22a6cc: 0x108c0005  beq         $a0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A6CCu;
    {
        const bool branch_taken_0x22a6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 12));
        ctx->pc = 0x22A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6CCu;
        // 0x22a6d0: 0x25cb0004  addiu       $t3, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6cc) {
            ctx->pc = 0x22A6E4u;
            goto label_22a6e4;
        }
    }
    ctx->pc = 0x22A6D4u;
    // 0x22a6d4: 0x3c03646e  lui         $v1, 0x646E
    ctx->pc = 0x22a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25710 << 16));
    // 0x22a6d8: 0x3463732e  ori         $v1, $v1, 0x732E
    ctx->pc = 0x22a6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29486);
    // 0x22a6dc: 0x148300a8  bne         $a0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x22A6DCu;
    {
        const bool branch_taken_0x22a6dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6DCu;
        // 0x22a6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6dc) {
            ctx->pc = 0x22A980u;
            goto label_22a980;
        }
    }
    ctx->pc = 0x22A6E4u;
label_22a6e4:
    // 0x22a6e4: 0x91660003  lbu         $a2, 0x3($t3)
    ctx->pc = 0x22a6e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x22a6e8: 0x3c0f00ff  lui         $t7, 0xFF
    ctx->pc = 0x22a6e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
    // 0x22a6ec: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x22a6ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x22a6f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22a6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6f4: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x22a6f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x22a6f8: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x22a6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x22a6fc: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x22a6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22a700: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x22a700u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x22a704: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22a704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22a708: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x22a708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x22a70c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x22a70cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x22a710: 0x646025  or          $t4, $v1, $a0
    ctx->pc = 0x22a710u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22a714: 0xc3202  srl         $a2, $t4, 8
    ctx->pc = 0x22a714u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x22a718: 0xc2a00  sll         $a1, $t4, 8
    ctx->pc = 0x22a718u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x22a71c: 0xc2600  sll         $a0, $t4, 24
    ctx->pc = 0x22a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x22a720: 0xc1e02  srl         $v1, $t4, 24
    ctx->pc = 0x22a720u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 24));
    // 0x22a724: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x22a724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x22a728: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x22a728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x22a72c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22a72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22a730: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x22a730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x22a734: 0x656025  or          $t4, $v1, $a1
    ctx->pc = 0x22a734u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22a738: 0x32c202a  slt         $a0, $t9, $t4
    ctx->pc = 0x22a738u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x22a73c: 0x14800090  bnez        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x22A73Cu;
    {
        const bool branch_taken_0x22a73c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A73Cu;
        // 0x22a740: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a73c) {
            ctx->pc = 0x22A980u;
            goto label_22a980;
        }
    }
    ctx->pc = 0x22A744u;
    // 0x22a744: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x22a744u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22a748: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x22a748u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a74c: 0x91680003  lbu         $t0, 0x3($t3)
    ctx->pc = 0x22a74cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x22a750: 0x91660002  lbu         $a2, 0x2($t3)
    ctx->pc = 0x22a750u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x22a754: 0x91670001  lbu         $a3, 0x1($t3)
    ctx->pc = 0x22a754u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x22a758: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x22a75c: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x22a75cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x22a760: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x22a760u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x22a764: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x22a764u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x22a768: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x22a768u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x22a76c: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x22a76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x22a770: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22a770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22a774: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x22a774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22a778: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x22a778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x22a77c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22a780: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22a780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22a784: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22a784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22a788: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x22a788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x22a78c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x22a78cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x22a790: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x22a790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22a794: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x22a794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x22a798: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x22a798u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x22a79c: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x22a79cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x22a7a0: 0x43602  srl         $a2, $a0, 24
    ctx->pc = 0x22a7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x22a7a4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x22a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x22a7a8: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x22a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22a7ac: 0x93a02  srl         $a3, $t1, 8
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x22a7b0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x22a7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x22a7b4: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x22a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x22a7b8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x22a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x22a7bc: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x22a7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x22a7c0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x22a7c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x22a7c4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x22a7c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x22a7c8: 0x91602  srl         $v0, $t1, 24
    ctx->pc = 0x22a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x22a7cc: 0x92600  sll         $a0, $t1, 24
    ctx->pc = 0x22a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x22a7d0: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x22a7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x22a7d4: 0x30e7ff00  andi        $a3, $a3, 0xFF00
    ctx->pc = 0x22a7d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x22a7d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22a7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22a7dc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x22a7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x22a7e0: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x22a7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x22a7e4: 0x10990012  beq         $a0, $t9, . + 4 + (0x12 << 2)
    ctx->pc = 0x22A7E4u;
    {
        const bool branch_taken_0x22a7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 25));
        ctx->pc = 0x22A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7E4u;
        // 0x22a7e8: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7e4) {
            ctx->pc = 0x22A830u;
            goto label_22a830;
        }
    }
    ctx->pc = 0x22A7ECu;
    // 0x22a7ec: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x22a7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x22a7f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A7F0u;
    {
        const bool branch_taken_0x22a7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7F0u;
        // 0x22a7f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7f0) {
            ctx->pc = 0x22A810u;
            goto label_22a810;
        }
    }
    ctx->pc = 0x22A7F8u;
    // 0x22a7f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a7fc: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A7FCu;
    {
        const bool branch_taken_0x22a7fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7FCu;
        // 0x22a800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7fc) {
            ctx->pc = 0x22A820u;
            goto label_22a820;
        }
    }
    ctx->pc = 0x22A804u;
    // 0x22a804: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x22A804u;
    {
        const bool branch_taken_0x22a804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A804u;
        // 0x22a808: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a804) {
            ctx->pc = 0x22A984u;
            goto label_22a984;
        }
    }
    ctx->pc = 0x22A80Cu;
    // 0x22a80c: 0x0  nop
    ctx->pc = 0x22a80cu;
    // NOP
label_22a810:
    // 0x22a810: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22A810u;
    {
        const bool branch_taken_0x22a810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A810u;
        // 0x22a814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a810) {
            ctx->pc = 0x22A848u;
            goto label_22a848;
        }
    }
    ctx->pc = 0x22A818u;
    // 0x22a818: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x22A818u;
    {
        const bool branch_taken_0x22a818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A818u;
        // 0x22a81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a818) {
            ctx->pc = 0x22A984u;
            goto label_22a984;
        }
    }
    ctx->pc = 0x22A820u;
label_22a820:
    // 0x22a820: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22a824: 0xad590000  sw          $t9, 0x0($t2)
    ctx->pc = 0x22a824u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 25));
    // 0x22a828: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22A828u;
    {
        const bool branch_taken_0x22a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A828u;
        // 0x22a82c: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a828) {
            ctx->pc = 0x22A854u;
            goto label_22a854;
        }
    }
    ctx->pc = 0x22A830u;
label_22a830:
    // 0x22a830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a834: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22a834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22a838: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x22a838u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x22a83c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22A83Cu;
    {
        const bool branch_taken_0x22a83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A83Cu;
        // 0x22a840: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a83c) {
            ctx->pc = 0x22A854u;
            goto label_22a854;
        }
    }
    ctx->pc = 0x22A844u;
    // 0x22a844: 0x0  nop
    ctx->pc = 0x22a844u;
    // NOP
label_22a848:
    // 0x22a848: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x22a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22a84c: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x22a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x22a850: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x22a850u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_22a854:
    // 0x22a854: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x22a854u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x22a858: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x22a85c: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x22a85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x22a860: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x22a860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a864: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x22a864u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x22a868: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22a868u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22a86c: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x22a86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22a870: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x22a870u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x22a874: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x22a874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22a878: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22a878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22a87c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22a87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22a880: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22a880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22a884: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22a888: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x22a888u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x22a88c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x22a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22a890: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x22a890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x22a894: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x22a894u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x22a898: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x22a898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x22a89c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x22a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22a8a0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x22a8a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x22a8a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22a8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22a8a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22a8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22a8ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x22a8b0: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x22a8b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x22a8b4: 0x91640003  lbu         $a0, 0x3($t3)
    ctx->pc = 0x22a8b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x22a8b8: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x22a8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x22a8bc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x22a8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x22a8c0: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x22a8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22a8c4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x22a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x22a8c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22a8cc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22a8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22a8d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22a8d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22a8d8: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x22a8d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x22a8dc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x22a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22a8e0: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x22a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x22a8e4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x22a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22a8e8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x22a8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x22a8ec: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x22a8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x22a8f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22a8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22a8f4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x22a8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x22a8f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22a8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22a8fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x22a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x22a900: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x22a900u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x22a904: 0x15470008  bne         $t2, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A904u;
    {
        const bool branch_taken_0x22a904 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x22A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A904u;
        // 0x22a908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a904) {
            ctx->pc = 0x22A928u;
            goto label_22a928;
        }
    }
    ctx->pc = 0x22A90Cu;
    // 0x22a90c: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x22a90cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22a910: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22A910u;
    {
        const bool branch_taken_0x22a910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a910) {
            ctx->pc = 0x22A914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A910u;
            // 0x22a914: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A918u;
            goto label_22a918;
        }
    }
    ctx->pc = 0x22A918u;
label_22a918:
    // 0x22a918: 0x1012  mflo        $v0
    ctx->pc = 0x22a918u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22a91c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22A91Cu;
    {
        const bool branch_taken_0x22a91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A91Cu;
        // 0x22a920: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a91c) {
            ctx->pc = 0x22A97Cu;
            goto label_22a97c;
        }
    }
    ctx->pc = 0x22A924u;
    // 0x22a924: 0x0  nop
    ctx->pc = 0x22a924u;
    // NOP
label_22a928:
    // 0x22a928: 0x15420007  bne         $t2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A928u;
    {
        const bool branch_taken_0x22a928 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a928) {
            ctx->pc = 0x22A948u;
            goto label_22a948;
        }
    }
    ctx->pc = 0x22A930u;
    // 0x22a930: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x22a930u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22a934: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22A934u;
    {
        const bool branch_taken_0x22a934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a934) {
            ctx->pc = 0x22A938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A934u;
            // 0x22a938: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A93Cu;
            goto label_22a93c;
        }
    }
    ctx->pc = 0x22A93Cu;
label_22a93c:
    // 0x22a93c: 0x1012  mflo        $v0
    ctx->pc = 0x22a93cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22a940: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22A940u;
    {
        const bool branch_taken_0x22a940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A940u;
        // 0x22a944: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a940) {
            ctx->pc = 0x22A97Cu;
            goto label_22a97c;
        }
    }
    ctx->pc = 0x22A948u;
label_22a948:
    // 0x22a948: 0x1540000b  bnez        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x22A948u;
    {
        const bool branch_taken_0x22a948 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A948u;
        // 0x22a94c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a948) {
            ctx->pc = 0x22A978u;
            goto label_22a978;
        }
    }
    ctx->pc = 0x22A950u;
    // 0x22a950: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x22a950u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x22a954: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22A954u;
    {
        const bool branch_taken_0x22a954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a954) {
            ctx->pc = 0x22A958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A954u;
            // 0x22a958: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A95Cu;
            goto label_22a95c;
        }
    }
    ctx->pc = 0x22A95Cu;
label_22a95c:
    // 0x22a95c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x22a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x22a960: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22a960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22a964: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x22a964u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22a968: 0x1012  mflo        $v0
    ctx->pc = 0x22a968u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22a96c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22A96Cu;
    {
        const bool branch_taken_0x22a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A96Cu;
        // 0x22a970: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a96c) {
            ctx->pc = 0x22A97Cu;
            goto label_22a97c;
        }
    }
    ctx->pc = 0x22A974u;
    // 0x22a974: 0x0  nop
    ctx->pc = 0x22a974u;
    // NOP
label_22a978:
    // 0x22a978: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x22a978u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_22a97c:
    // 0x22a97c: 0x1cc1021  addu        $v0, $t6, $t4
    ctx->pc = 0x22a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_22a980:
    // 0x22a980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a984:
    // 0x22a984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a988: 0x3e00008  jr          $ra
    ctx->pc = 0x22A988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A988u;
        // 0x22a98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A990u;
}

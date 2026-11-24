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

// Function: sub_002D66A0
// Address: 0x2d66a0 - 0x2d692c
void sub_002D66A0_0x2d66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D66A0_0x2d66a0");
#endif

    switch (ctx->pc) {
        case 0x2d6730u: goto label_2d6730;
        case 0x2d67a8u: goto label_2d67a8;
        case 0x2d6818u: goto label_2d6818;
        case 0x2d68e4u: goto label_2d68e4;
        default: break;
    }

    ctx->pc = 0x2d66a0u;

    // 0x2d66a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d66a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d66a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d66a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d66a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d66a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d66ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d66acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d66b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d66b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d66b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d66b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d66b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d66b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d66bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d66bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d66c0: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x2d66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2d66c4: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2D66C4u;
    {
        const bool branch_taken_0x2d66c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D66C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66C4u;
        // 0x2d66c8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66c4) {
            ctx->pc = 0x2D6908u;
            goto label_2d6908;
        }
    }
    ctx->pc = 0x2D66CCu;
    // 0x2d66cc: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x2d66ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d66d0: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x2d66d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d66d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d66d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d66d8: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x2d66d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d66dc: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x2d66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x2d66e0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d66e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d66e4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x2d66e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d66e8: 0x8eb40074  lw          $s4, 0x74($s5)
    ctx->pc = 0x2d66e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2d66ec: 0x84225d68  lh          $v0, 0x5D68($at)
    ctx->pc = 0x2d66ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 23912)));
    // 0x2d66f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2d66f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2d66f4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d66f4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d66f8: 0x30710001  andi        $s1, $v1, 0x1
    ctx->pc = 0x2d66f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d66fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d6700: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d6700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d6704: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2d6704u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d6708: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2d6708u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d670c: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D670Cu;
    {
        const bool branch_taken_0x2d670c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D670Cu;
        // 0x2d6710: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d670c) {
            ctx->pc = 0x2D6788u;
            goto label_2d6788;
        }
    }
    ctx->pc = 0x2D6714u;
    // 0x2d6714: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2d6714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d6718: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2d6718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x2d671c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d671cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d6720: 0x24845d60  addiu       $a0, $a0, 0x5D60
    ctx->pc = 0x2d6720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23904));
    // 0x2d6724: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D6724u;
    {
        const bool branch_taken_0x2d6724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6724u;
        // 0x2d6728: 0xaea20038  sw          $v0, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6724) {
            ctx->pc = 0x2D6750u;
            goto label_2d6750;
        }
    }
    ctx->pc = 0x2D672Cu;
    // 0x2d672c: 0x0  nop
    ctx->pc = 0x2d672cu;
    // NOP
label_2d6730:
    // 0x2d6730: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x2d6730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6734: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x2d6734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d6738: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d6738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d673c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2d673cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6740: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d6740u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d6744: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D6744u;
    {
        const bool branch_taken_0x2d6744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6744) {
            ctx->pc = 0x2D6730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6730;
        }
    }
    ctx->pc = 0x2D674Cu;
    // 0x2d674c: 0x0  nop
    ctx->pc = 0x2d674cu;
    // NOP
label_2d6750:
    // 0x2d6750: 0x121023  negu        $v0, $s2
    ctx->pc = 0x2d6750u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x2d6754: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d6754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d6758: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d675c: 0x84225d68  lh          $v0, 0x5D68($at)
    ctx->pc = 0x2d675cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5D68u));
    // 0x2d6760: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x2d6760u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6764: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d6764u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d6768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d6768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d676c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d676cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6770: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d6770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6774: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d6774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d6778: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d677c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2d677cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6780: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d6780u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d6784: 0x0  nop
    ctx->pc = 0x2d6784u;
    // NOP
label_2d6788:
    // 0x2d6788: 0x2a812710  slti        $at, $s4, 0x2710
    ctx->pc = 0x2d6788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x2d678c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D678Cu;
    {
        const bool branch_taken_0x2d678c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D678Cu;
        // 0x2d6790: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d678c) {
            ctx->pc = 0x2D6798u;
            goto label_2d6798;
        }
    }
    ctx->pc = 0x2D6794u;
    // 0x2d6794: 0x3454423f  ori         $s4, $v0, 0x423F
    ctx->pc = 0x2d6794u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_2d6798:
    // 0x2d6798: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x2d6798u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d679c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d679cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d67a0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D67A0u;
    {
        const bool branch_taken_0x2d67a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67A0u;
        // 0x2d67a4: 0x24130006  addiu       $s3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67a0) {
            ctx->pc = 0x2D6868u;
            goto label_2d6868;
        }
    }
    ctx->pc = 0x2D67A8u;
label_2d67a8:
    // 0x2d67a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2d67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d67ac: 0x282001a  div         $zero, $s4, $v0
    ctx->pc = 0x2d67acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d67b0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d67b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d67b4: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x2d67b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d67b8: 0x24a55d60  addiu       $a1, $a1, 0x5D60
    ctx->pc = 0x2d67b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23904));
    // 0x2d67bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d67bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d67c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d67c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d67c4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d67c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d67c8: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2d67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d67cc: 0x3010  mfhi        $a2
    ctx->pc = 0x2d67ccu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2d67d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d67d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d67d4: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x2d67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x2d67d8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2d67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d67dc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2d67dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d67e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d67e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d67e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d67e8: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x2d67e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d67ec: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x2d67ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2d67f0: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x2d67f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d67f4: 0x84a9000a  lh          $t1, 0xA($a1)
    ctx->pc = 0x2d67f4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2d67f8: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x2d67f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d67fc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2d67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d6800: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d6800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d6804: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6808: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d680c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d680cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6810: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6810u;
    SET_GPR_U32(ctx, 31, 0x2D6818u);
    ctx->pc = 0x2D6814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6810u;
    // 0x2d6814: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6810u, 0x2D6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6818u;
label_2d6818:
    // 0x2d6818: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2d6818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2d681c: 0x8ea50038  lw          $a1, 0x38($s5)
    ctx->pc = 0x2d681cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d6820: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2d6820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2d6824: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2d6824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2d6828: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x2d6828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d682c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d682cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6830: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x2d6830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x2d6834: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2d6834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2d6838: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x2d6838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2d683c: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x2d683cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x2d6840: 0x84245d68  lh          $a0, 0x5D68($at)
    ctx->pc = 0x2d6840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 23912)));
    // 0x2d6844: 0x1010  mfhi        $v0
    ctx->pc = 0x2d6844u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d6848: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d6848u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d684c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x2d684cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6850: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2d6850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d6854: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d6854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6858: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d6858u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d685c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2d685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d6860: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2d6860u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6864: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d6864u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_2d6868:
    // 0x2d6868: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2d6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d686c: 0x1262ffce  beq         $s3, $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2D686Cu;
    {
        const bool branch_taken_0x2d686c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d686c) {
            ctx->pc = 0x2D67A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d67a8;
        }
    }
    ctx->pc = 0x2D6874u;
    // 0x2d6874: 0x1680ffcc  bnez        $s4, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2D6874u;
    {
        const bool branch_taken_0x2d6874 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6874) {
            ctx->pc = 0x2D67A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d67a8;
        }
    }
    ctx->pc = 0x2D687Cu;
    // 0x2d687c: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2d687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d6880: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x2d6880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d6884: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6888: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d688c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d688cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d6890: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6894: 0x24a55e78  addiu       $a1, $a1, 0x5E78
    ctx->pc = 0x2d6894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24184));
    // 0x2d6898: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6898u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d689c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d689cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d68a0: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x2d68a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x2d68a4: 0x84265e7c  lh          $a2, 0x5E7C($at)
    ctx->pc = 0x2d68a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24188)));
    // 0x2d68a8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d68a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d68ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2d68acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d68b0: 0x84225e7e  lh          $v0, 0x5E7E($at)
    ctx->pc = 0x2d68b0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5E7Eu));
    // 0x2d68b4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d68b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d68b8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d68b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d68bc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d68bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d68c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d68c4: 0x84285e80  lh          $t0, 0x5E80($at)
    ctx->pc = 0x2d68c4u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E5E80u));
    // 0x2d68c8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d68c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d68cc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d68ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d68d0: 0x84295e82  lh          $t1, 0x5E82($at)
    ctx->pc = 0x2d68d0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5E82u));
    // 0x2d68d4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d68d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d68d8: 0x8c2a5e78  lw          $t2, 0x5E78($at)
    ctx->pc = 0x2d68d8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5E78u));
    // 0x2d68dc: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D68DCu;
    SET_GPR_U32(ctx, 31, 0x2D68E4u);
    ctx->pc = 0x2D68E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68DCu;
    // 0x2d68e0: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D68DCu, 0x2D68E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68E4u;
label_2d68e4:
    // 0x2d68e4: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x2d68e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d68e8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2d68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2d68ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d68ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d68f0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D68F0u;
    {
        const bool branch_taken_0x2d68f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68F0u;
        // 0x2d68f4: 0xaea30038  sw          $v1, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68f0) {
            ctx->pc = 0x2D6908u;
            goto label_2d6908;
        }
    }
    ctx->pc = 0x2D68F8u;
    // 0x2d68f8: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x2d68f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d68fc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d68fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d6900: 0xaea30038  sw          $v1, 0x38($s5)
    ctx->pc = 0x2d6900u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 3));
    // 0x2d6904: 0x0  nop
    ctx->pc = 0x2d6904u;
    // NOP
label_2d6908:
    // 0x2d6908: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d6908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d690c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d690cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6910: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d6910u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d6914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d6918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d691c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d691cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6924: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6924u;
        // 0x2d6928: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D692Cu;
}

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

// Function: sub_002549B0
// Address: 0x2549b0 - 0x254ba0
void sub_002549B0_0x2549b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002549B0_0x2549b0");
#endif

    switch (ctx->pc) {
        case 0x254a00u: goto label_254a00;
        case 0x254a1cu: goto label_254a1c;
        case 0x254ac8u: goto label_254ac8;
        default: break;
    }

    ctx->pc = 0x2549b0u;

    // 0x2549b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2549b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2549b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2549b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2549b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2549b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2549bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2549bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2549c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2549c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2549c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2549c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2549c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2549ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2549d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2549d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2549d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2549d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2549d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2549dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2549e0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2549e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549e4: 0xafaa0074  sw          $t2, 0x74($sp)
    ctx->pc = 0x2549e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 10));
    // 0x2549e8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2549e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549ec: 0xafab0078  sw          $t3, 0x78($sp)
    ctx->pc = 0x2549ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 11));
    // 0x2549f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2549f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2549f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549f8: 0xc049590  jal         func_125640
    ctx->pc = 0x2549F8u;
    SET_GPR_U32(ctx, 31, 0x254A00u);
    ctx->pc = 0x2549FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549F8u;
    // 0x2549fc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2549F8u, 0x254A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A00u;
label_254a00:
    // 0x254a00: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x254a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x254a04: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x254a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x254a08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x254A08u;
    {
        const bool branch_taken_0x254a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A08u;
        // 0x254a0c: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a08) {
            ctx->pc = 0x254A30u;
            goto label_254a30;
        }
    }
    ctx->pc = 0x254A10u;
    // 0x254a10: 0x3273000f  andi        $s3, $s3, 0xF
    ctx->pc = 0x254a10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x254a14: 0xc0c7f60  jal         func_31FD80
    ctx->pc = 0x254A14u;
    SET_GPR_U32(ctx, 31, 0x254A1Cu);
    ctx->pc = 0x254A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A14u;
    // 0x254a18: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FD80u, 0x254A14u, 0x254A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A1Cu;
label_254a1c:
    // 0x254a1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254A1Cu;
    {
        const bool branch_taken_0x254a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254a1c) {
            ctx->pc = 0x254A30u;
            goto label_254a30;
        }
    }
    ctx->pc = 0x254A24u;
    // 0x254a24: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x254a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x254a28: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x254a28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254a2c: 0x0  nop
    ctx->pc = 0x254a2cu;
    // NOP
label_254a30:
    // 0x254a30: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x254a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x254a34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x254a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254a38: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x254a38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x254a3c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x254a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254a40: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x254a40u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x254a44: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x254a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x254a48: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x254a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x254a4c: 0x24420860  addiu       $v0, $v0, 0x860
    ctx->pc = 0x254a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2144));
    // 0x254a50: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x254a50u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x254a54: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x254a54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254a58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x254a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a5c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x254a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x254a60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x254a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a64: 0x27a60074  addiu       $a2, $sp, 0x74
    ctx->pc = 0x254a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x254a68: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x254a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x254a6c: 0x27a8007c  addiu       $t0, $sp, 0x7C
    ctx->pc = 0x254a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x254a70: 0xa2820003  sb          $v0, 0x3($s4)
    ctx->pc = 0x254a70u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x254a74: 0xa6800006  sh          $zero, 0x6($s4)
    ctx->pc = 0x254a74u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x254a78: 0xa6920004  sh          $s2, 0x4($s4)
    ctx->pc = 0x254a78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x254a7c: 0x95220002  lhu         $v0, 0x2($t1)
    ctx->pc = 0x254a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x254a80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x254a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x254a84: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x254a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x254a88: 0xa6820018  sh          $v0, 0x18($s4)
    ctx->pc = 0x254a88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x254a8c: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x254a8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x254a90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x254a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x254a94: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x254a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x254a98: 0xa682001a  sh          $v0, 0x1A($s4)
    ctx->pc = 0x254a98u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x254a9c: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x254a9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x254aa0: 0x96830018  lhu         $v1, 0x18($s4)
    ctx->pc = 0x254aa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x254aa4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x254aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x254aa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x254aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254aac: 0xa682001c  sh          $v0, 0x1C($s4)
    ctx->pc = 0x254aacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x254ab0: 0x95220008  lhu         $v0, 0x8($t1)
    ctx->pc = 0x254ab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x254ab4: 0x9683001a  lhu         $v1, 0x1A($s4)
    ctx->pc = 0x254ab4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x254ab8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x254ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x254abc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x254abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254ac0: 0xc0952e8  jal         func_254BA0
    ctx->pc = 0x254AC0u;
    SET_GPR_U32(ctx, 31, 0x254AC8u);
    ctx->pc = 0x254AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AC0u;
    // 0x254ac4: 0xa682001e  sh          $v0, 0x1E($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 30), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x254AC0u, 0x254AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AC8u;
label_254ac8:
    // 0x254ac8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x254ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x254acc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x254accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x254ad0: 0xa6910008  sh          $s1, 0x8($s4)
    ctx->pc = 0x254ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x254ad4: 0xa690000a  sh          $s0, 0xA($s4)
    ctx->pc = 0x254ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 16));
    // 0x254ad8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x254ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x254adc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x254adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x254ae0: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x254ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x254ae4: 0xa690000e  sh          $s0, 0xE($s4)
    ctx->pc = 0x254ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 16));
    // 0x254ae8: 0xa6910010  sh          $s1, 0x10($s4)
    ctx->pc = 0x254ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 17));
    // 0x254aec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x254aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x254af0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x254af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x254af4: 0xa6820012  sh          $v0, 0x12($s4)
    ctx->pc = 0x254af4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x254af8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x254af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x254afc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x254afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x254b00: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x254b00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x254b04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x254b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x254b08: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x254b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x254b0c: 0xa6820016  sh          $v0, 0x16($s4)
    ctx->pc = 0x254b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x254b10: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x254b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x254b14: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x254B14u;
    {
        const bool branch_taken_0x254b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254b14) {
            ctx->pc = 0x254B78u;
            goto label_254b78;
        }
    }
    ctx->pc = 0x254B1Cu;
    // 0x254b1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x254b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x254b20: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x254b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x254b24: 0x34455556  ori         $a1, $v0, 0x5556
    ctx->pc = 0x254b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x254b28: 0x96820010  lhu         $v0, 0x10($s4)
    ctx->pc = 0x254b28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x254b2c: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x254b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x254b30: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x254b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x254b34: 0x0  nop
    ctx->pc = 0x254b34u;
    // NOP
    // 0x254b38: 0x1810  mfhi        $v1
    ctx->pc = 0x254b38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x254b3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254b40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x254b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254b44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254b48: 0xa6820010  sh          $v0, 0x10($s4)
    ctx->pc = 0x254b48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x254b4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x254b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x254b50: 0x96820014  lhu         $v0, 0x14($s4)
    ctx->pc = 0x254b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x254b54: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x254b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x254b58: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x254b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x254b5c: 0x0  nop
    ctx->pc = 0x254b5cu;
    // NOP
    // 0x254b60: 0x1810  mfhi        $v1
    ctx->pc = 0x254b60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x254b64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254b68: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x254b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254b6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254b70: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x254b70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x254b74: 0x0  nop
    ctx->pc = 0x254b74u;
    // NOP
label_254b78:
    // 0x254b78: 0x87a20074  lh          $v0, 0x74($sp)
    ctx->pc = 0x254b78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x254b7c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x254b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x254b80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x254b80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254b84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x254b84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254b88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x254b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x254b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254b98: 0x3e00008  jr          $ra
    ctx->pc = 0x254B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B98u;
        // 0x254b9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254BA0u;
}

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

// Function: sub_00255A90
// Address: 0x255a90 - 0x255e30
void sub_00255A90_0x255a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255A90_0x255a90");
#endif

    switch (ctx->pc) {
        case 0x255ae4u: goto label_255ae4;
        case 0x255b60u: goto label_255b60;
        case 0x255c14u: goto label_255c14;
        case 0x255d80u: goto label_255d80;
        case 0x255d8cu: goto label_255d8c;
        case 0x255dacu: goto label_255dac;
        case 0x255dd4u: goto label_255dd4;
        case 0x255df8u: goto label_255df8;
        case 0x255e04u: goto label_255e04;
        default: break;
    }

    ctx->pc = 0x255a90u;

    // 0x255a90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x255a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x255a94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x255a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x255a98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x255a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x255a9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x255a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x255aa0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x255aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x255aa4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x255aa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255aa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x255aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x255aac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x255aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x255ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x255ab4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x255ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x255ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x255abc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x255abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255ac4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x255ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ac8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x255AC8u;
    {
        const bool branch_taken_0x255ac8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x255ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AC8u;
        // 0x255acc: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ac8) {
            ctx->pc = 0x255AD8u;
            goto label_255ad8;
        }
    }
    ctx->pc = 0x255AD0u;
    // 0x255ad0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x255AD0u;
    {
        const bool branch_taken_0x255ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AD0u;
        // 0x255ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ad0) {
            ctx->pc = 0x255E08u;
            goto label_255e08;
        }
    }
    ctx->pc = 0x255AD8u;
label_255ad8:
    // 0x255ad8: 0x13b43c  dsll32      $s6, $s3, 16
    ctx->pc = 0x255ad8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) << (32 + 16));
    // 0x255adc: 0xc09581c  jal         func_256070
    ctx->pc = 0x255ADCu;
    SET_GPR_U32(ctx, 31, 0x255AE4u);
    ctx->pc = 0x255AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255ADCu;
    // 0x255ae0: 0x16b43f  dsra32      $s6, $s6, 16 (Delay Slot)
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256070u, 0x255ADCu, 0x255AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AE4u;
label_255ae4:
    // 0x255ae4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x255ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x255ae8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x255ae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x255aec: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x255aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x255af0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255AF0u;
    {
        const bool branch_taken_0x255af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255af0) {
            ctx->pc = 0x255B00u;
            goto label_255b00;
        }
    }
    ctx->pc = 0x255AF8u;
    // 0x255af8: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x255AF8u;
    {
        const bool branch_taken_0x255af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AF8u;
        // 0x255afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255af8) {
            ctx->pc = 0x255E08u;
            goto label_255e08;
        }
    }
    ctx->pc = 0x255B00u;
label_255b00:
    // 0x255b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x255b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255b04: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x255b04u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x255b08: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x255b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x255b0c: 0xa2a30002  sb          $v1, 0x2($s5)
    ctx->pc = 0x255b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x255b10: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x255b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x255b14: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x255b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255b18: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x255b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x255b1c: 0x278280e8  addiu       $v0, $gp, -0x7F18
    ctx->pc = 0x255b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934760));
    // 0x255b20: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x255b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x255b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255b28: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x255b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x255b2c: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x255b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x255b30: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x255b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255b34: 0xacb40008  sw          $s4, 0x8($a1)
    ctx->pc = 0x255b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 20));
    // 0x255b38: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x255b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255b3c: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x255b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x255b40: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x255b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255b44: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x255b44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x255b48: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x255b48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255b4c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255b50: 0xa4450018  sh          $a1, 0x18($v0)
    ctx->pc = 0x255b50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x255b54: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255b58: 0xc095018  jal         func_254060
    ctx->pc = 0x255B58u;
    SET_GPR_U32(ctx, 31, 0x255B60u);
    ctx->pc = 0x255B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B58u;
    // 0x255b5c: 0xa443001a  sh          $v1, 0x1A($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x255B58u, 0x255B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B60u;
label_255b60:
    // 0x255b60: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x255b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255b64: 0x24480190  addiu       $t0, $v0, 0x190
    ctx->pc = 0x255b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x255b68: 0x324200f0  andi        $v0, $s2, 0xF0
    ctx->pc = 0x255b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)240);
    // 0x255b6c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x255b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x255b70: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x255b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x255b74: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x255b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x255b78: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x255b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x255b7c: 0x246309e0  addiu       $v1, $v1, 0x9E0
    ctx->pc = 0x255b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2528));
    // 0x255b80: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x255b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x255b84: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x255b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x255b88: 0x244209e4  addiu       $v0, $v0, 0x9E4
    ctx->pc = 0x255b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2532));
    // 0x255b8c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x255b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x255b90: 0xa4c8001c  sh          $t0, 0x1C($a2)
    ctx->pc = 0x255b90u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 8));
    // 0x255b94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x255b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x255b98: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x255b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255b9c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x255b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x255ba0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x255ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x255ba4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x255ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x255ba8: 0xa4c0001e  sh          $zero, 0x1E($a2)
    ctx->pc = 0x255ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x255bac: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x255bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255bb0: 0xa4c00020  sh          $zero, 0x20($a2)
    ctx->pc = 0x255bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x255bb4: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x255bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255bb8: 0xa4c70022  sh          $a3, 0x22($a2)
    ctx->pc = 0x255bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 34), (uint16_t)GPR_U32(ctx, 7));
    // 0x255bbc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x255bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255bc0: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x255bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255bc4: 0xaca60024  sw          $a2, 0x24($a1)
    ctx->pc = 0x255bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 6));
    // 0x255bc8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x255bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255bcc: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255bd0: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x255bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x255bd4: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255bd8: 0xa440002c  sh          $zero, 0x2C($v0)
    ctx->pc = 0x255bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x255bdc: 0x9025fc8d  lbu         $a1, -0x373($at)
    ctx->pc = 0x255bdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x255be0: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255be4: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x255be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x255be8: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x255be8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x255bec: 0xa045002e  sb          $a1, 0x2E($v0)
    ctx->pc = 0x255becu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 5));
    // 0x255bf0: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255bf4: 0xa040002f  sb          $zero, 0x2F($v0)
    ctx->pc = 0x255bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x255bf8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255bfc: 0xa051003d  sb          $s1, 0x3D($v0)
    ctx->pc = 0x255bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 17));
    // 0x255c00: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c04: 0xa040008a  sb          $zero, 0x8A($v0)
    ctx->pc = 0x255c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x255c08: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c0c: 0xc095018  jal         func_254060
    ctx->pc = 0x255C0Cu;
    SET_GPR_U32(ctx, 31, 0x255C14u);
    ctx->pc = 0x255C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C0Cu;
    // 0x255c10: 0xa4430040  sh          $v1, 0x40($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x255C0Cu, 0x255C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C14u;
label_255c14:
    // 0x255c14: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c18: 0x2445019c  addiu       $a1, $v0, 0x19C
    ctx->pc = 0x255c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x255c1c: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x255c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x255c20: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x255c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x255c24: 0xa4650042  sh          $a1, 0x42($v1)
    ctx->pc = 0x255c24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 5));
    // 0x255c28: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c2c: 0xa460009c  sh          $zero, 0x9C($v1)
    ctx->pc = 0x255c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 156), (uint16_t)GPR_U32(ctx, 0));
    // 0x255c30: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c34: 0xa064009f  sb          $a0, 0x9F($v1)
    ctx->pc = 0x255c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 159), (uint8_t)GPR_U32(ctx, 4));
    // 0x255c38: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c3c: 0xa06000a0  sb          $zero, 0xA0($v1)
    ctx->pc = 0x255c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x255c40: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255C44u;
    {
        const bool branch_taken_0x255c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C44u;
        // 0x255c48: 0xa06000a1  sb          $zero, 0xA1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 161), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c44) {
            ctx->pc = 0x255C60u;
            goto label_255c60;
        }
    }
    ctx->pc = 0x255C4Cu;
    // 0x255c4c: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c50: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x255c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255c54: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x255c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x255c58: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x255c58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x255c5c: 0x0  nop
    ctx->pc = 0x255c5cu;
    // NOP
label_255c60:
    // 0x255c60: 0x32420100  andi        $v0, $s2, 0x100
    ctx->pc = 0x255c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
    // 0x255c64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255C64u;
    {
        const bool branch_taken_0x255c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255c64) {
            ctx->pc = 0x255C80u;
            goto label_255c80;
        }
    }
    ctx->pc = 0x255C6Cu;
    // 0x255c6c: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c70: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x255c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255c74: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x255c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x255c78: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x255c78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x255c7c: 0x0  nop
    ctx->pc = 0x255c7cu;
    // NOP
label_255c80:
    // 0x255c80: 0x32420400  andi        $v0, $s2, 0x400
    ctx->pc = 0x255c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
    // 0x255c84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255C84u;
    {
        const bool branch_taken_0x255c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255c84) {
            ctx->pc = 0x255CA0u;
            goto label_255ca0;
        }
    }
    ctx->pc = 0x255C8Cu;
    // 0x255c8c: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255c90: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x255c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255c94: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x255c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x255c98: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x255c98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x255c9c: 0x0  nop
    ctx->pc = 0x255c9cu;
    // NOP
label_255ca0:
    // 0x255ca0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x255CA0u;
    {
        const bool branch_taken_0x255ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x255ca0) {
            ctx->pc = 0x255D50u;
            goto label_255d50;
        }
    }
    ctx->pc = 0x255CA8u;
    // 0x255ca8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x255ca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x255cac: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255cb0: 0xa443001a  sh          $v1, 0x1A($v0)
    ctx->pc = 0x255cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x255cb4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x255cb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x255cb8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255cbc: 0xa443001c  sh          $v1, 0x1C($v0)
    ctx->pc = 0x255cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x255cc0: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x255cc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x255cc4: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255cc8: 0xa4430022  sh          $v1, 0x22($v0)
    ctx->pc = 0x255cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x255ccc: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x255cccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x255cd0: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255cd4: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x255cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x255cd8: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x255cd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x255cdc: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255ce0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x255ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x255ce4: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x255ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x255ce8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255cec: 0xa043009f  sb          $v1, 0x9F($v0)
    ctx->pc = 0x255cecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 159), (uint8_t)GPR_U32(ctx, 3));
    // 0x255cf0: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x255cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x255cf4: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255cf8: 0xa04300a0  sb          $v1, 0xA0($v0)
    ctx->pc = 0x255cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x255cfc: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x255cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x255d00: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255d04: 0xa04300a1  sb          $v1, 0xA1($v0)
    ctx->pc = 0x255d04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x255d08: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x255d08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x255d0c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255d10: 0xa4430040  sh          $v1, 0x40($v0)
    ctx->pc = 0x255d10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x255d14: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x255d14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x255d18: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255d1c: 0xa4430042  sh          $v1, 0x42($v0)
    ctx->pc = 0x255d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x255d20: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x255d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x255d24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255D24u;
    {
        const bool branch_taken_0x255d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255d24) {
            ctx->pc = 0x255D40u;
            goto label_255d40;
        }
    }
    ctx->pc = 0x255D2Cu;
    // 0x255d2c: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255d30: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x255d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255d34: 0x3042fbff  andi        $v0, $v0, 0xFBFF
    ctx->pc = 0x255d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
    // 0x255d38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x255D38u;
    {
        const bool branch_taken_0x255d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D38u;
        // 0x255d3c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d38) {
            ctx->pc = 0x255D50u;
            goto label_255d50;
        }
    }
    ctx->pc = 0x255D40u;
label_255d40:
    // 0x255d40: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255d44: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x255d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255d48: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x255d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x255d4c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x255d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_255d50:
    // 0x255d50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x255d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x255d54: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x255d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x255d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255d5c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255D5Cu;
    {
        const bool branch_taken_0x255d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x255d5c) {
            ctx->pc = 0x255D78u;
            goto label_255d78;
        }
    }
    ctx->pc = 0x255D64u;
    // 0x255d64: 0x0  nop
    ctx->pc = 0x255d64u;
    // NOP
    // 0x255d68: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255d6c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x255d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x255d70: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x255d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x255d74: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x255d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_255d78:
    // 0x255d78: 0xc0ca588  jal         func_329620
    ctx->pc = 0x255D78u;
    SET_GPR_U32(ctx, 31, 0x255D80u);
    ctx->pc = 0x255D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D78u;
    // 0x255d7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329620u, 0x255D78u, 0x255D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D80u;
label_255d80:
    // 0x255d80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x255d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d84: 0xc09578c  jal         func_255E30
    ctx->pc = 0x255D84u;
    SET_GPR_U32(ctx, 31, 0x255D8Cu);
    ctx->pc = 0x255D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D84u;
    // 0x255d88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E30u, 0x255D84u, 0x255D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D8Cu;
label_255d8c:
    // 0x255d8c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255d90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d94: 0x94490024  lhu         $t1, 0x24($v0)
    ctx->pc = 0x255d94u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x255d98: 0x9046009f  lbu         $a2, 0x9F($v0)
    ctx->pc = 0x255d98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 159)));
    // 0x255d9c: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x255d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x255da0: 0x8448001a  lh          $t0, 0x1A($v0)
    ctx->pc = 0x255da0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x255da4: 0xc095e0c  jal         func_257830
    ctx->pc = 0x255DA4u;
    SET_GPR_U32(ctx, 31, 0x255DACu);
    ctx->pc = 0x255DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DA4u;
    // 0x255da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257830u, 0x255DA4u, 0x255DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DACu;
label_255dac:
    // 0x255dac: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255db0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255db4: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x255db4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x255db8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255dbc: 0x94490028  lhu         $t1, 0x28($v0)
    ctx->pc = 0x255dbcu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x255dc0: 0x9046009f  lbu         $a2, 0x9F($v0)
    ctx->pc = 0x255dc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 159)));
    // 0x255dc4: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x255dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x255dc8: 0x8448001c  lh          $t0, 0x1C($v0)
    ctx->pc = 0x255dc8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x255dcc: 0xc095e30  jal         func_2578C0
    ctx->pc = 0x255DCCu;
    SET_GPR_U32(ctx, 31, 0x255DD4u);
    ctx->pc = 0x255DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DCCu;
    // 0x255dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2578C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2578C0u, 0x255DCCu, 0x255DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DD4u;
label_255dd4:
    // 0x255dd4: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255dd8: 0xa4620020  sh          $v0, 0x20($v1)
    ctx->pc = 0x255dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x255ddc: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255de0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x255de0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255de4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x255de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x255de8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255DE8u;
    {
        const bool branch_taken_0x255de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255de8) {
            ctx->pc = 0x255DF8u;
            goto label_255df8;
        }
    }
    ctx->pc = 0x255DF0u;
    // 0x255df0: 0xc0979b0  jal         func_25E6C0
    ctx->pc = 0x255DF0u;
    SET_GPR_U32(ctx, 31, 0x255DF8u);
    ctx->pc = 0x255DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DF0u;
    // 0x255df4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E6C0u, 0x255DF0u, 0x255DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DF8u;
label_255df8:
    // 0x255df8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x255df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255dfc: 0xc0b787c  jal         func_2DE1F0
    ctx->pc = 0x255DFCu;
    SET_GPR_U32(ctx, 31, 0x255E04u);
    ctx->pc = 0x255E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DFCu;
    // 0x255e00: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE1F0u, 0x255DFCu, 0x255E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E04u;
label_255e04:
    // 0x255e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_255e08:
    // 0x255e08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x255e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x255e0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x255e0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x255e10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x255e10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255e14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x255e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255e18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255e1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255e20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255e28: 0x3e00008  jr          $ra
    ctx->pc = 0x255E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E28u;
        // 0x255e2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255E30u;
}

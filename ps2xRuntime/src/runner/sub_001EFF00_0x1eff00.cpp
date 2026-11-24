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

// Function: sub_001EFF00
// Address: 0x1eff00 - 0x1f0210
void sub_001EFF00_0x1eff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFF00_0x1eff00");
#endif

    switch (ctx->pc) {
        case 0x1f001cu: goto label_1f001c;
        case 0x1f0064u: goto label_1f0064;
        case 0x1f0070u: goto label_1f0070;
        case 0x1f0088u: goto label_1f0088;
        case 0x1f00e4u: goto label_1f00e4;
        case 0x1f0124u: goto label_1f0124;
        case 0x1f016cu: goto label_1f016c;
        case 0x1f0190u: goto label_1f0190;
        case 0x1f01c8u: goto label_1f01c8;
        default: break;
    }

    ctx->pc = 0x1eff00u;

    // 0x1eff00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1eff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1eff04: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1eff04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1eff08: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1eff08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1eff0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eff10: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1eff10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1eff14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1eff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eff18: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1eff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1eff1c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1eff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1eff20: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1eff20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1eff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1eff28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1eff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1eff2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1eff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1eff30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1eff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1eff34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1eff34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1eff38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1eff3c: 0xa3a500cf  sb          $a1, 0xCF($sp)
    ctx->pc = 0x1eff3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eff40: 0xa3a600ce  sb          $a2, 0xCE($sp)
    ctx->pc = 0x1eff40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 206), (uint8_t)GPR_U32(ctx, 6));
    // 0x1eff44: 0xa3a800cd  sb          $t0, 0xCD($sp)
    ctx->pc = 0x1eff44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 205), (uint8_t)GPR_U32(ctx, 8));
    // 0x1eff48: 0x8c740080  lw          $s4, 0x80($v1)
    ctx->pc = 0x1eff48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1eff4c: 0x128000a4  beqz        $s4, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1EFF4Cu;
    {
        const bool branch_taken_0x1eff4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF4Cu;
        // 0x1eff50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff4c) {
            ctx->pc = 0x1F01E0u;
            goto label_1f01e0;
        }
    }
    ctx->pc = 0x1EFF54u;
    // 0x1eff54: 0x968314b0  lhu         $v1, 0x14B0($s4)
    ctx->pc = 0x1eff54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 5296)));
    // 0x1eff58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eff5c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EFF5Cu;
    {
        const bool branch_taken_0x1eff5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eff5c) {
            ctx->pc = 0x1EFF90u;
            goto label_1eff90;
        }
    }
    ctx->pc = 0x1EFF64u;
    // 0x1eff64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eff64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eff68: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x1eff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x1eff6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eff70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eff74: 0x8c42085c  lw          $v0, 0x85C($v0)
    ctx->pc = 0x1eff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2140)));
    // 0x1eff78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFF78u;
    {
        const bool branch_taken_0x1eff78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eff78) {
            ctx->pc = 0x1EFF90u;
            goto label_1eff90;
        }
    }
    ctx->pc = 0x1EFF80u;
    // 0x1eff80: 0x90530001  lbu         $s3, 0x1($v0)
    ctx->pc = 0x1eff80u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1eff84: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x1eff84u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1eff88: 0x90520002  lbu         $s2, 0x2($v0)
    ctx->pc = 0x1eff88u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1eff8c: 0x90510003  lbu         $s1, 0x3($v0)
    ctx->pc = 0x1eff8cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1eff90:
    // 0x1eff90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1eff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1eff94: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1eff94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1eff98: 0x8c23a3c8  lw          $v1, -0x5C38($at)
    ctx->pc = 0x1eff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
    // 0x1eff9c: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1EFF9Cu;
    {
        const bool branch_taken_0x1eff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eff9c) {
            ctx->pc = 0x1F00F8u;
            goto label_1f00f8;
        }
    }
    ctx->pc = 0x1EFFA4u;
    // 0x1effa4: 0x93a200ce  lbu         $v0, 0xCE($sp)
    ctx->pc = 0x1effa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x1effa8: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1effa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effac: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1EFFACu;
    {
        const bool branch_taken_0x1effac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1effac) {
            ctx->pc = 0x1F00F8u;
            goto label_1f00f8;
        }
    }
    ctx->pc = 0x1EFFB4u;
    // 0x1effb4: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1EFFB4u;
    {
        const bool branch_taken_0x1effb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1effb4) {
            ctx->pc = 0x1F00F8u;
            goto label_1f00f8;
        }
    }
    ctx->pc = 0x1EFFBCu;
    // 0x1effbc: 0x93a200cf  lbu         $v0, 0xCF($sp)
    ctx->pc = 0x1effbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
    // 0x1effc0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1effc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effc4: 0x161140  sll         $v0, $s6, 5
    ctx->pc = 0x1effc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x1effc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1effc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1effcc: 0x805e0003  lb          $fp, 0x3($v0)
    ctx->pc = 0x1effccu;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1effd0: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFFD0u;
    {
        const bool branch_taken_0x1effd0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFD0u;
        // 0x1effd4: 0x8043000a  lb          $v1, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effd0) {
            ctx->pc = 0x1EFFE8u;
            goto label_1effe8;
        }
    }
    ctx->pc = 0x1EFFD8u;
    // 0x1effd8: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x1effd8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1effdc: 0x90520001  lbu         $s2, 0x1($v0)
    ctx->pc = 0x1effdcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1effe0: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x1effe0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1effe4: 0x0  nop
    ctx->pc = 0x1effe4u;
    // NOP
label_1effe8:
    // 0x1effe8: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1effe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1effec: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1effecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1efff0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1efff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1efff4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1efff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1efff8: 0x440003f  bltz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1EFFF8u;
    {
        const bool branch_taken_0x1efff8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1EFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFF8u;
        // 0x1efffc: 0x1e163c  dsll32      $v0, $fp, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efff8) {
            ctx->pc = 0x1F00F8u;
            goto label_1f00f8;
        }
    }
    ctx->pc = 0x1F0000u;
    // 0x1f0000: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1f0000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1f0004: 0x440003c  bltz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1F0004u;
    {
        const bool branch_taken_0x1f0004 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1F0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0004u;
        // 0x1f0008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0004) {
            ctx->pc = 0x1F00F8u;
            goto label_1f00f8;
        }
    }
    ctx->pc = 0x1F000Cu;
    // 0x1f000c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0010: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f0010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0014: 0xc0b2f78  jal         func_2CBDE0
    ctx->pc = 0x1F0014u;
    SET_GPR_U32(ctx, 31, 0x1F001Cu);
    ctx->pc = 0x1F0018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0014u;
    // 0x1f0018: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBDE0u, 0x1F0014u, 0x1F001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F001Cu;
label_1f001c:
    // 0x1f001c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F001Cu;
    {
        const bool branch_taken_0x1f001c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F001Cu;
        // 0x1f0020: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f001c) {
            ctx->pc = 0x1F00F8u;
            goto label_1f00f8;
        }
    }
    ctx->pc = 0x1F0024u;
    // 0x1f0024: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0028: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f002c: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f002cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f0030: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0034: 0xa6a214b2  sh          $v0, 0x14B2($s5)
    ctx->pc = 0x1f0034u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 5298), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f0038: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f0038u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f003c: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f003cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f0040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f0044: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0044u;
    {
        const bool branch_taken_0x1f0044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0044) {
            ctx->pc = 0x1F0070u;
            goto label_1f0070;
        }
    }
    ctx->pc = 0x1F004Cu;
    // 0x1f004c: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x1f004cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1f0050: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0054: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x1f0054u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1f0058: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x1f0058u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1f005c: 0xc0ae728  jal         func_2B9CA0
    ctx->pc = 0x1F005Cu;
    SET_GPR_U32(ctx, 31, 0x1F0064u);
    ctx->pc = 0x1F0060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F005Cu;
    // 0x1f0060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9CA0u, 0x1F005Cu, 0x1F0064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0064u;
label_1f0064:
    // 0x1f0064: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0064u;
    {
        const bool branch_taken_0x1f0064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0064) {
            ctx->pc = 0x1F0088u;
            goto label_1f0088;
        }
    }
    ctx->pc = 0x1F006Cu;
    // 0x1f006c: 0x0  nop
    ctx->pc = 0x1f006cu;
    // NOP
label_1f0070:
    // 0x1f0070: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x1f0070u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1f0074: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x1f0074u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1f0078: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f0078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f007c: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x1f007cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1f0080: 0xc0ae728  jal         func_2B9CA0
    ctx->pc = 0x1F0080u;
    SET_GPR_U32(ctx, 31, 0x1F0088u);
    ctx->pc = 0x1F0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0080u;
    // 0x1f0084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9CA0u, 0x1F0080u, 0x1F0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0088u;
label_1f0088:
    // 0x1f0088: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1f0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f008c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0090: 0x161940  sll         $v1, $s6, 5
    ctx->pc = 0x1f0090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x1f0094: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f0094u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f0098: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1f0098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f009c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f009cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f00a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f00a4: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x1f00a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1f00a8: 0x8c22a3c8  lw          $v0, -0x5C38($at)
    ctx->pc = 0x1f00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
    // 0x1f00ac: 0x8c88004c  lw          $t0, 0x4C($a0)
    ctx->pc = 0x1f00acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1f00b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f00b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f00b4: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x1f00b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f00b8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f00b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1f00bc: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x1f00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1f00c0: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x1f00c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f00c4: 0x9106006a  lbu         $a2, 0x6A($t0)
    ctx->pc = 0x1f00c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x1f00c8: 0xc46d0014  lwc1        $f13, 0x14($v1)
    ctx->pc = 0x1f00c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f00cc: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x1f00ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x1f00d0: 0xc46e0018  lwc1        $f14, 0x18($v1)
    ctx->pc = 0x1f00d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f00d4: 0x846a0004  lh          $t2, 0x4($v1)
    ctx->pc = 0x1f00d4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f00d8: 0x846b0006  lh          $t3, 0x6($v1)
    ctx->pc = 0x1f00d8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1f00dc: 0xc0603b4  jal         func_180ED0
    ctx->pc = 0x1F00DCu;
    SET_GPR_U32(ctx, 31, 0x1F00E4u);
    ctx->pc = 0x1F00E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F00DCu;
    // 0x1f00e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180ED0u, 0x1F00DCu, 0x1F00E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00E4u;
label_1f00e4:
    // 0x1f00e4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1f00e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1f00e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1f00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f00ec: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1F00ECu;
    {
        const bool branch_taken_0x1f00ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00ECu;
        // 0x1f00f0: 0xac750080  sw          $s5, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00ec) {
            ctx->pc = 0x1F01E0u;
            goto label_1f01e0;
        }
    }
    ctx->pc = 0x1F00F4u;
    // 0x1f00f4: 0x0  nop
    ctx->pc = 0x1f00f4u;
    // NOP
label_1f00f8:
    // 0x1f00f8: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F00F8u;
    {
        const bool branch_taken_0x1f00f8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f00f8) {
            ctx->pc = 0x1F0110u;
            goto label_1f0110;
        }
    }
    ctx->pc = 0x1F0100u;
    // 0x1f0100: 0x93a200ce  lbu         $v0, 0xCE($sp)
    ctx->pc = 0x1f0100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x1f0104: 0x64130004  daddiu      $s3, $zero, 0x4
    ctx->pc = 0x1f0104u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1f0108: 0x92920002  lbu         $s2, 0x2($s4)
    ctx->pc = 0x1f0108u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1f010c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f010cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0110:
    // 0x1f0110: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f0110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f0114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0118: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f0118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f011c: 0xc0b2f78  jal         func_2CBDE0
    ctx->pc = 0x1F011Cu;
    SET_GPR_U32(ctx, 31, 0x1F0124u);
    ctx->pc = 0x1F0120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F011Cu;
    // 0x1f0120: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBDE0u, 0x1F011Cu, 0x1F0124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0124u;
label_1f0124:
    // 0x1f0124: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F0124u;
    {
        const bool branch_taken_0x1f0124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0124u;
        // 0x1f0128: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0124) {
            ctx->pc = 0x1F01E0u;
            goto label_1f01e0;
        }
    }
    ctx->pc = 0x1F012Cu;
    // 0x1f012c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0130: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f0130u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f0134: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f0134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f0138: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f013c: 0xa62214b2  sh          $v0, 0x14B2($s1)
    ctx->pc = 0x1f013cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 5298), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f0140: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f0140u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f0144: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f0144u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f0148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f0148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f014c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F014Cu;
    {
        const bool branch_taken_0x1f014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f014c) {
            ctx->pc = 0x1F0178u;
            goto label_1f0178;
        }
    }
    ctx->pc = 0x1F0154u;
    // 0x1f0154: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x1f0154u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1f0158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f015c: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x1f015cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1f0160: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x1f0160u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1f0164: 0xc0ae728  jal         func_2B9CA0
    ctx->pc = 0x1F0164u;
    SET_GPR_U32(ctx, 31, 0x1F016Cu);
    ctx->pc = 0x1F0168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0164u;
    // 0x1f0168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9CA0u, 0x1F0164u, 0x1F016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F016Cu;
label_1f016c:
    // 0x1f016c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F016Cu;
    {
        const bool branch_taken_0x1f016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f016c) {
            ctx->pc = 0x1F0190u;
            goto label_1f0190;
        }
    }
    ctx->pc = 0x1F0174u;
    // 0x1f0174: 0x0  nop
    ctx->pc = 0x1f0174u;
    // NOP
label_1f0178:
    // 0x1f0178: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x1f0178u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1f017c: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x1f017cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1f0180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0184: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x1f0184u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1f0188: 0xc0ae728  jal         func_2B9CA0
    ctx->pc = 0x1F0188u;
    SET_GPR_U32(ctx, 31, 0x1F0190u);
    ctx->pc = 0x1F018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0188u;
    // 0x1f018c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9CA0u, 0x1F0188u, 0x1F0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0190u;
label_1f0190:
    // 0x1f0190: 0x83a200cd  lb          $v0, 0xCD($sp)
    ctx->pc = 0x1f0190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 205)));
    // 0x1f0194: 0x8e88004c  lw          $t0, 0x4C($s4)
    ctx->pc = 0x1f0194u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1f0198: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f0198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f019c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f019cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f01a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f01a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f01a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f01a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1f01a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f01a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f01ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1f01acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1f01b0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f01b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f01b4: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x1f01b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1f01b8: 0x9106006a  lbu         $a2, 0x6A($t0)
    ctx->pc = 0x1f01b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x1f01bc: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x1f01bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1f01c0: 0xc0603b4  jal         func_180ED0
    ctx->pc = 0x1F01C0u;
    SET_GPR_U32(ctx, 31, 0x1F01C8u);
    ctx->pc = 0x1F01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F01C0u;
    // 0x1f01c4: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180ED0u, 0x1F01C0u, 0x1F01C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01C8u;
label_1f01c8:
    // 0x1f01c8: 0x93a300cf  lbu         $v1, 0xCF($sp)
    ctx->pc = 0x1f01c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
    // 0x1f01cc: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x1f01ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f01d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f01d4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1f01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f01d8: 0xac710080  sw          $s1, 0x80($v1)
    ctx->pc = 0x1f01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 17));
    // 0x1f01dc: 0x0  nop
    ctx->pc = 0x1f01dcu;
    // NOP
label_1f01e0:
    // 0x1f01e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f01e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f01e4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1f01e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f01e8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1f01e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f01ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1f01ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f01f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1f01f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f01f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f01f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f01f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f01f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f01fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f01fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0200: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f0200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f0204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0208: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0208u;
        // 0x1f020c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0210u;
}

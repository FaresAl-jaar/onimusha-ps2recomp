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

// Function: sub_002F3C60
// Address: 0x2f3c60 - 0x2f3e68
void sub_002F3C60_0x2f3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3C60_0x2f3c60");
#endif

    switch (ctx->pc) {
        case 0x2f3cc8u: goto label_2f3cc8;
        case 0x2f3ce8u: goto label_2f3ce8;
        case 0x2f3dacu: goto label_2f3dac;
        default: break;
    }

    ctx->pc = 0x2f3c60u;

    // 0x2f3c60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f3c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f3c64: 0x24020346  addiu       $v0, $zero, 0x346
    ctx->pc = 0x2f3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    // 0x2f3c68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f3c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f3c6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f3c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2f3c70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f3c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f3c74: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f3c74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f3c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f3c7c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2f3c7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f3c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f3c84: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2f3c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f3c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f3c8c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2f3c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3c94: 0x3112ffff  andi        $s2, $t0, 0xFFFF
    ctx->pc = 0x2f3c94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2f3c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3c9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f3c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ca0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3CA0u;
    {
        const bool branch_taken_0x2f3ca0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CA0u;
        // 0x2f3ca4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ca0) {
            ctx->pc = 0x2F3CB0u;
            goto label_2f3cb0;
        }
    }
    ctx->pc = 0x2F3CA8u;
    // 0x2f3ca8: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x2f3ca8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2f3cac: 0x0  nop
    ctx->pc = 0x2f3cacu;
    // NOP
label_2f3cb0:
    // 0x2f3cb0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3CB0u;
    {
        const bool branch_taken_0x2f3cb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3cb0) {
            ctx->pc = 0x2F3CD0u;
            goto label_2f3cd0;
        }
    }
    ctx->pc = 0x2F3CB8u;
    // 0x2f3cb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f3cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3cbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f3cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3cc0: 0xc0bce00  jal         func_2F3800
    ctx->pc = 0x2F3CC0u;
    SET_GPR_U32(ctx, 31, 0x2F3CC8u);
    ctx->pc = 0x2F3CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3CC0u;
    // 0x2f3cc4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3800u, 0x2F3CC0u, 0x2F3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3CC8u;
label_2f3cc8:
    // 0x2f3cc8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f3cc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ccc: 0x0  nop
    ctx->pc = 0x2f3cccu;
    // NOP
label_2f3cd0:
    // 0x2f3cd0: 0x16a0001f  bnez        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F3CD0u;
    {
        const bool branch_taken_0x2f3cd0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3cd0) {
            ctx->pc = 0x2F3D50u;
            goto label_2f3d50;
        }
    }
    ctx->pc = 0x2F3CD8u;
    // 0x2f3cd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f3cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3cdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f3cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ce0: 0xc0bcdac  jal         func_2F36B0
    ctx->pc = 0x2F3CE0u;
    SET_GPR_U32(ctx, 31, 0x2F3CE8u);
    ctx->pc = 0x2F3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3CE0u;
    // 0x2f3ce4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F36B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F36B0u, 0x2F3CE0u, 0x2F3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3CE8u;
label_2f3ce8:
    // 0x2f3ce8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3cec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f3cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f3cf0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3CF0u;
    {
        const bool branch_taken_0x2f3cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3cf0) {
            ctx->pc = 0x2F3D00u;
            goto label_2f3d00;
        }
    }
    ctx->pc = 0x2F3CF8u;
    // 0x2f3cf8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2F3CF8u;
    {
        const bool branch_taken_0x2f3cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CF8u;
        // 0x2f3cfc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cf8) {
            ctx->pc = 0x2F3E40u;
            goto label_2f3e40;
        }
    }
    ctx->pc = 0x2F3D00u;
label_2f3d00:
    // 0x2f3d00: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x2f3d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2f3d04: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x2f3d04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2f3d08: 0x3002007f  andi        $v0, $zero, 0x7F
    ctx->pc = 0x2f3d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)127);
    // 0x2f3d0c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2f3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f3d10: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2f3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f3d14: 0x32850001  andi        $a1, $s4, 0x1
    ctx->pc = 0x2f3d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2f3d18: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x2f3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x2f3d1c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x2f3d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2f3d20: 0x90e6009c  lbu         $a2, 0x9C($a3)
    ctx->pc = 0x2f3d20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x2f3d24: 0x24f5009c  addiu       $s5, $a3, 0x9C
    ctx->pc = 0x2f3d24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 156));
    // 0x2f3d28: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x2f3d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2f3d2c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2f3d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2f3d30: 0xa0e4009c  sb          $a0, 0x9C($a3)
    ctx->pc = 0x2f3d30u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 156), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f3d34: 0x90e4009c  lbu         $a0, 0x9C($a3)
    ctx->pc = 0x2f3d34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x2f3d38: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2f3d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f3d3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f3d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f3d40: 0xa0e2009c  sb          $v0, 0x9C($a3)
    ctx->pc = 0x2f3d40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 156), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f3d44: 0xa0e0009d  sb          $zero, 0x9D($a3)
    ctx->pc = 0x2f3d44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 157), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3d48: 0xa4e0009e  sh          $zero, 0x9E($a3)
    ctx->pc = 0x2f3d48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 158), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f3d4c: 0xa4f100a0  sh          $s1, 0xA0($a3)
    ctx->pc = 0x2f3d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 160), (uint16_t)GPR_U32(ctx, 17));
label_2f3d50:
    // 0x2f3d50: 0x24020346  addiu       $v0, $zero, 0x346
    ctx->pc = 0x2f3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    // 0x2f3d54: 0x1642000e  bne         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F3D54u;
    {
        const bool branch_taken_0x2f3d54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3d54) {
            ctx->pc = 0x2F3D90u;
            goto label_2f3d90;
        }
    }
    ctx->pc = 0x2F3D5Cu;
    // 0x2f3d5c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2f3d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2f3d60: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2f3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2f3d64: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F3D64u;
    {
        const bool branch_taken_0x2f3d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3d64) {
            ctx->pc = 0x2F3D90u;
            goto label_2f3d90;
        }
    }
    ctx->pc = 0x2F3D6Cu;
    // 0x2f3d6c: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x2f3d6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f3d70: 0x3202007f  andi        $v0, $s0, 0x7F
    ctx->pc = 0x2f3d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)127);
    // 0x2f3d74: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x2f3d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x2f3d78: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x2f3d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f3d7c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2f3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f3d80: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2f3d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2f3d84: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f3d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f3d88: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2F3D88u;
    {
        const bool branch_taken_0x2f3d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D88u;
        // 0x2f3d8c: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d88) {
            ctx->pc = 0x2F3E40u;
            goto label_2f3e40;
        }
    }
    ctx->pc = 0x2F3D90u;
label_2f3d90:
    // 0x2f3d90: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x2f3d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f3d94: 0x24130063  addiu       $s3, $zero, 0x63
    ctx->pc = 0x2f3d94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f3d98: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2f3d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2f3d9c: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F3D9Cu;
    {
        const bool branch_taken_0x2f3d9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D9Cu;
        // 0x2f3da0: 0x2a67e  dsrl32      $s4, $v0, 25 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) >> (32 + 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d9c) {
            ctx->pc = 0x2F3DE0u;
            goto label_2f3de0;
        }
    }
    ctx->pc = 0x2F3DA4u;
    // 0x2f3da4: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x2F3DA4u;
    SET_GPR_U32(ctx, 31, 0x2F3DACu);
    ctx->pc = 0x2F3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3DA4u;
    // 0x2f3da8: 0x3224ffff  andi        $a0, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2F3DA4u, 0x2F3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3DACu;
label_2f3dac:
    // 0x2f3dac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3DACu;
    {
        const bool branch_taken_0x2f3dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3dac) {
            ctx->pc = 0x2F3DE0u;
            goto label_2f3de0;
        }
    }
    ctx->pc = 0x2F3DB4u;
    // 0x2f3db4: 0x9053000c  lbu         $s3, 0xC($v0)
    ctx->pc = 0x2f3db4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f3db8: 0x2a610064  slti        $at, $s3, 0x64
    ctx->pc = 0x2f3db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2f3dbc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3DBCu;
    {
        const bool branch_taken_0x2f3dbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3dbc) {
            ctx->pc = 0x2F3DCCu;
            goto label_2f3dcc;
        }
    }
    ctx->pc = 0x2F3DC4u;
    // 0x2f3dc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3DC4u;
    {
        const bool branch_taken_0x2f3dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DC4u;
        // 0x2f3dc8: 0x24130063  addiu       $s3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dc4) {
            ctx->pc = 0x2F3DDCu;
            goto label_2f3ddc;
        }
    }
    ctx->pc = 0x2F3DCCu;
label_2f3dcc:
    // 0x2f3dcc: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3DCCu;
    {
        const bool branch_taken_0x2f3dcc = (GPR_S64(ctx, 19) > 0);
        if (branch_taken_0x2f3dcc) {
            ctx->pc = 0x2F3DDCu;
            goto label_2f3ddc;
        }
    }
    ctx->pc = 0x2F3DD4u;
    // 0x2f3dd4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3DD4u;
    {
        const bool branch_taken_0x2f3dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DD4u;
        // 0x2f3dd8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dd4) {
            ctx->pc = 0x2F3DDCu;
            goto label_2f3ddc;
        }
    }
    ctx->pc = 0x2F3DDCu;
label_2f3ddc:
    // 0x2f3ddc: 0x0  nop
    ctx->pc = 0x2f3ddcu;
    // NOP
label_2f3de0:
    // 0x2f3de0: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x2f3de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f3de4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2f3de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2f3de8: 0x21e7e  dsrl32      $v1, $v0, 25
    ctx->pc = 0x2f3de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x2f3dec: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x2f3decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2f3df0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3DF0u;
    {
        const bool branch_taken_0x2f3df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3df0) {
            ctx->pc = 0x2F3E00u;
            goto label_2f3e00;
        }
    }
    ctx->pc = 0x2F3DF8u;
    // 0x2f3df8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3DF8u;
    {
        const bool branch_taken_0x2f3df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DF8u;
        // 0x2f3dfc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3df8) {
            ctx->pc = 0x2F3E40u;
            goto label_2f3e40;
        }
    }
    ctx->pc = 0x2F3E00u;
label_2f3e00:
    // 0x2f3e00: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2f3e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2f3e04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3e08: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x2f3e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f3e0c: 0x41980a  movz        $s3, $v0, $at
    ctx->pc = 0x2f3e0cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x2f3e10: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x2f3e10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f3e14: 0x3262007f  andi        $v0, $s3, 0x7F
    ctx->pc = 0x2f3e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)127);
    // 0x2f3e18: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2f3e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f3e1c: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x2f3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x2f3e20: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2f3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f3e24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f3e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f3e28: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2f3e28u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f3e2c: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x2f3e2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f3e30: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2f3e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2f3e34: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x2f3e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x2f3e38: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2f3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2f3e3c: 0x0  nop
    ctx->pc = 0x2f3e3cu;
    // NOP
label_2f3e40:
    // 0x2f3e40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f3e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f3e44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f3e44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f3e48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f3e48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3e4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f3e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3e50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f3e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f3e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3e60: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E60u;
        // 0x2f3e64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3E68u;
}

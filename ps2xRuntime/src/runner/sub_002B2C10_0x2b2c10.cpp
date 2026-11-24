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

// Function: sub_002B2C10
// Address: 0x2b2c10 - 0x2b2d2c
void sub_002B2C10_0x2b2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2C10_0x2b2c10");
#endif

    switch (ctx->pc) {
        case 0x2b2c48u: goto label_2b2c48;
        case 0x2b2c94u: goto label_2b2c94;
        case 0x2b2cacu: goto label_2b2cac;
        case 0x2b2cc4u: goto label_2b2cc4;
        default: break;
    }

    ctx->pc = 0x2b2c10u;

    // 0x2b2c10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b2c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b2c14: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2b2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2b2c18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b2c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b2c1c: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x2b2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
    // 0x2b2c20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b2c24: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2b2c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b2c28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b2c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b2c2c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2b2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b2c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2c34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b2c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b2c38: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2b2c38u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x4E4F10u));
    // 0x2b2c3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b2c40: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2C40u;
    {
        const bool branch_taken_0x2b2c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C40u;
        // 0x2b2c44: 0x7cc50000  sq          $a1, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c40) {
            ctx->pc = 0x2B2C64u;
            goto label_2b2c64;
        }
    }
    ctx->pc = 0x2B2C48u;
label_2b2c48:
    // 0x2b2c48: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2b2c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2c4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b2c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b2c54: 0x0  nop
    ctx->pc = 0x2b2c54u;
    // NOP
    // 0x2b2c58: 0x0  nop
    ctx->pc = 0x2b2c58u;
    // NOP
    // 0x2b2c5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B2C5Cu;
    {
        const bool branch_taken_0x2b2c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c5c) {
            ctx->pc = 0x2B2C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2c48;
        }
    }
    ctx->pc = 0x2B2C64u;
label_2b2c64:
    // 0x2b2c64: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2b2c68: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x2b2c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2b2c6c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2b2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2b2c70: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x2b2c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b2c74: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2b2c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2b2c78: 0x27b0005c  addiu       $s0, $sp, 0x5C
    ctx->pc = 0x2b2c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2b2c7c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2b2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2b2c80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b2c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2c84: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b2c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c8c: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B2C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B2C94u);
    ctx->pc = 0x2B2C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C8Cu;
    // 0x2b2c90: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B2C8Cu, 0x2B2C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C94u;
label_2b2c94:
    // 0x2b2c94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b2c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c98: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2B2C98u;
    {
        const bool branch_taken_0x2b2c98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C98u;
        // 0x2b2c9c: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c98) {
            ctx->pc = 0x2B2CC8u;
            goto label_2b2cc8;
        }
    }
    ctx->pc = 0x2B2CA0u;
    // 0x2b2ca0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2ca4: 0xc0ad0bc  jal         func_2B42F0
    ctx->pc = 0x2B2CA4u;
    SET_GPR_U32(ctx, 31, 0x2B2CACu);
    ctx->pc = 0x2B2CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2CA4u;
    // 0x2b2ca8: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F0u, 0x2B2CA4u, 0x2B2CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CACu;
label_2b2cac:
    // 0x2b2cac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b2cacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2cb0: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B2CB0u;
    {
        const bool branch_taken_0x2b2cb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CB0u;
        // 0x2b2cb4: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2cb0) {
            ctx->pc = 0x2B2D10u;
            goto label_2b2d10;
        }
    }
    ctx->pc = 0x2B2CB8u;
    // 0x2b2cb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b2cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2cbc: 0xc0ac958  jal         func_2B2560
    ctx->pc = 0x2B2CBCu;
    SET_GPR_U32(ctx, 31, 0x2B2CC4u);
    ctx->pc = 0x2B2CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2CBCu;
    // 0x2b2cc0: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2560u, 0x2B2CBCu, 0x2B2CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CC4u;
label_2b2cc4:
    // 0x2b2cc4: 0x0  nop
    ctx->pc = 0x2b2cc4u;
    // NOP
label_2b2cc8:
    // 0x2b2cc8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2ccc: 0xa263002c  sb          $v1, 0x2C($s3)
    ctx->pc = 0x2b2cccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2cd0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2b2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b2cd4: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x2b2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x2b2cd8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b2cdc: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x2b2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
    // 0x2b2ce0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2b2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2b2ce4: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x2b2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
    // 0x2b2ce8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b2cec: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x2b2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x2b2cf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2b2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2b2cf4: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x2b2cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
    // 0x2b2cf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2cfc: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x2b2cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x2b2d00: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x2b2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2b2d04: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x2b2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x2b2d08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b2d0c: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x2b2d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_2b2d10:
    // 0x2b2d10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b2d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2d14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b2d14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2d18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b2d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2d24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D24u;
        // 0x2b2d28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2D2Cu;
}

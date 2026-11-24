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

// Function: sub_002C1BB0
// Address: 0x2c1bb0 - 0x2c1ce4
void sub_002C1BB0_0x2c1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1BB0_0x2c1bb0");
#endif

    switch (ctx->pc) {
        case 0x2c1c30u: goto label_2c1c30;
        case 0x2c1cb0u: goto label_2c1cb0;
        default: break;
    }

    ctx->pc = 0x2c1bb0u;

    // 0x2c1bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1bb8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2c1bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c1bbc: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x2c1bbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2c1bc0: 0x948300e0  lhu         $v1, 0xE0($a0)
    ctx->pc = 0x2c1bc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2c1bc4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C1BC4u;
    {
        const bool branch_taken_0x2c1bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BC4u;
        // 0x2c1bc8: 0x90c80002  lbu         $t0, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bc4) {
            ctx->pc = 0x2C1C50u;
            goto label_2c1c50;
        }
    }
    ctx->pc = 0x2C1BCCu;
    // 0x2c1bcc: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x2c1bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2c1bd0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2c1bd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c1bd4: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C1BD4u;
    {
        const bool branch_taken_0x2c1bd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1bd4) {
            ctx->pc = 0x2C1CD0u;
            goto label_2c1cd0;
        }
    }
    ctx->pc = 0x2C1BDCu;
    // 0x2c1bdc: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c1bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c1be0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C1BE0u;
    {
        const bool branch_taken_0x2c1be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1be0) {
            ctx->pc = 0x2C1C38u;
            goto label_2c1c38;
        }
    }
    ctx->pc = 0x2C1BE8u;
    // 0x2c1be8: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2C1BE8u;
    {
        const bool branch_taken_0x2c1be8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BE8u;
        // 0x2c1bec: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1be8) {
            ctx->pc = 0x2C1C28u;
            goto label_2c1c28;
        }
    }
    ctx->pc = 0x2C1BF0u;
    // 0x2c1bf0: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c1bf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c1bf4: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2c1bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2c1bf8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c1bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1bfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c1c00: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c1c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1c04: 0xa0870037  sb          $a3, 0x37($a0)
    ctx->pc = 0x2c1c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c1c08: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c1c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1c0c: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c1c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1c10: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c1c10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1c14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1c1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C1C1Cu;
    {
        const bool branch_taken_0x2c1c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C1Cu;
        // 0x2c1c20: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c1c) {
            ctx->pc = 0x2C1C48u;
            goto label_2c1c48;
        }
    }
    ctx->pc = 0x2C1C24u;
    // 0x2c1c24: 0x0  nop
    ctx->pc = 0x2c1c24u;
    // NOP
label_2c1c28:
    // 0x2c1c28: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1C28u;
    SET_GPR_U32(ctx, 31, 0x2C1C30u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1C28u, 0x2C1C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1C30u;
label_2c1c30:
    // 0x2c1c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1C30u;
    {
        const bool branch_taken_0x2c1c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c30) {
            ctx->pc = 0x2C1C40u;
            goto label_2c1c40;
        }
    }
    ctx->pc = 0x2C1C38u;
label_2c1c38:
    // 0x2c1c38: 0xa38789d8  sb          $a3, -0x7628($gp)
    ctx->pc = 0x2c1c38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c1c3c: 0x0  nop
    ctx->pc = 0x2c1c3cu;
    // NOP
label_2c1c40:
    // 0x2c1c40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c44: 0x0  nop
    ctx->pc = 0x2c1c44u;
    // NOP
label_2c1c48:
    // 0x2c1c48: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C1C48u;
    {
        const bool branch_taken_0x2c1c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c48) {
            ctx->pc = 0x2C1CD8u;
            goto label_2c1cd8;
        }
    }
    ctx->pc = 0x2C1C50u;
label_2c1c50:
    // 0x2c1c50: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x2c1c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2c1c54: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2c1c54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c1c58: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C1C58u;
    {
        const bool branch_taken_0x2c1c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c58) {
            ctx->pc = 0x2C1CD0u;
            goto label_2c1cd0;
        }
    }
    ctx->pc = 0x2C1C60u;
    // 0x2c1c60: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c1c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c1c64: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C1C64u;
    {
        const bool branch_taken_0x2c1c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1c64) {
            ctx->pc = 0x2C1CB8u;
            goto label_2c1cb8;
        }
    }
    ctx->pc = 0x2C1C6Cu;
    // 0x2c1c6c: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2C1C6Cu;
    {
        const bool branch_taken_0x2c1c6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C6Cu;
        // 0x2c1c70: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c6c) {
            ctx->pc = 0x2C1CA8u;
            goto label_2c1ca8;
        }
    }
    ctx->pc = 0x2C1C74u;
    // 0x2c1c74: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c1c74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c1c78: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2c1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2c1c7c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1c80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c1c84: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c1c84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1c88: 0xa0870037  sb          $a3, 0x37($a0)
    ctx->pc = 0x2c1c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c1c8c: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c1c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1c90: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c1c90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1c94: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c1c94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1c98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1ca0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1CA0u;
    {
        const bool branch_taken_0x2c1ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CA0u;
        // 0x2c1ca4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ca0) {
            ctx->pc = 0x2C1CC8u;
            goto label_2c1cc8;
        }
    }
    ctx->pc = 0x2C1CA8u;
label_2c1ca8:
    // 0x2c1ca8: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1CA8u;
    SET_GPR_U32(ctx, 31, 0x2C1CB0u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1CA8u, 0x2C1CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1CB0u;
label_2c1cb0:
    // 0x2c1cb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1CB0u;
    {
        const bool branch_taken_0x2c1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1cb0) {
            ctx->pc = 0x2C1CC0u;
            goto label_2c1cc0;
        }
    }
    ctx->pc = 0x2C1CB8u;
label_2c1cb8:
    // 0x2c1cb8: 0xa38789d8  sb          $a3, -0x7628($gp)
    ctx->pc = 0x2c1cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c1cbc: 0x0  nop
    ctx->pc = 0x2c1cbcu;
    // NOP
label_2c1cc0:
    // 0x2c1cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1cc4: 0x0  nop
    ctx->pc = 0x2c1cc4u;
    // NOP
label_2c1cc8:
    // 0x2c1cc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1CC8u;
    {
        const bool branch_taken_0x2c1cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1cc8) {
            ctx->pc = 0x2C1CD8u;
            goto label_2c1cd8;
        }
    }
    ctx->pc = 0x2C1CD0u;
label_2c1cd0:
    // 0x2c1cd0: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c1cd4: 0x0  nop
    ctx->pc = 0x2c1cd4u;
    // NOP
label_2c1cd8:
    // 0x2c1cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1CDCu;
        // 0x2c1ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1CE4u;
}

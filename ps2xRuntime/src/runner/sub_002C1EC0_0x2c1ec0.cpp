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

// Function: sub_002C1EC0
// Address: 0x2c1ec0 - 0x2c1f6c
void sub_002C1EC0_0x2c1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1EC0_0x2c1ec0");
#endif

    switch (ctx->pc) {
        case 0x2c1f48u: goto label_2c1f48;
        default: break;
    }

    ctx->pc = 0x2c1ec0u;

    // 0x2c1ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1ec8: 0x90a30171  lbu         $v1, 0x171($a1)
    ctx->pc = 0x2c1ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 369)));
    // 0x2c1ecc: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2c1eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c1ed0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c1ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c1ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1ED4u;
    {
        const bool branch_taken_0x2c1ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1ED4u;
        // 0x2c1ed8: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ed4) {
            ctx->pc = 0x2C1EE8u;
            goto label_2c1ee8;
        }
    }
    ctx->pc = 0x2C1EDCu;
    // 0x2c1edc: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c1edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c1ee0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c1ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c1ee4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c1ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c1ee8:
    // 0x2c1ee8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1EE8u;
    {
        const bool branch_taken_0x2c1ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EE8u;
        // 0x2c1eec: 0x24c20004  addiu       $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ee8) {
            ctx->pc = 0x2C1EF8u;
            goto label_2c1ef8;
        }
    }
    ctx->pc = 0x2C1EF0u;
    // 0x2c1ef0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C1EF0u;
    {
        const bool branch_taken_0x2c1ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ef0) {
            ctx->pc = 0x2C1F60u;
            goto label_2c1f60;
        }
    }
    ctx->pc = 0x2C1EF8u;
label_2c1ef8:
    // 0x2c1ef8: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c1ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c1efc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C1EFCu;
    {
        const bool branch_taken_0x2c1efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EFCu;
        // 0x2c1f00: 0x90c60002  lbu         $a2, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1efc) {
            ctx->pc = 0x2C1F50u;
            goto label_2c1f50;
        }
    }
    ctx->pc = 0x2C1F04u;
    // 0x2c1f04: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C1F04u;
    {
        const bool branch_taken_0x2c1f04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F04u;
        // 0x2c1f08: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f04) {
            ctx->pc = 0x2C1F40u;
            goto label_2c1f40;
        }
    }
    ctx->pc = 0x2C1F0Cu;
    // 0x2c1f0c: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c1f0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c1f10: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c1f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c1f14: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1f18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c1f1c: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c1f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1f20: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c1f20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c1f24: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c1f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1f28: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c1f28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1f2c: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c1f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1f30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1f34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1f38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1F38u;
    {
        const bool branch_taken_0x2c1f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F38u;
        // 0x2c1f3c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f38) {
            ctx->pc = 0x2C1F60u;
            goto label_2c1f60;
        }
    }
    ctx->pc = 0x2C1F40u;
label_2c1f40:
    // 0x2c1f40: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1F40u;
    SET_GPR_U32(ctx, 31, 0x2C1F48u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1F40u, 0x2C1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F48u;
label_2c1f48:
    // 0x2c1f48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1F48u;
    {
        const bool branch_taken_0x2c1f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f48) {
            ctx->pc = 0x2C1F58u;
            goto label_2c1f58;
        }
    }
    ctx->pc = 0x2C1F50u;
label_2c1f50:
    // 0x2c1f50: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c1f50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c1f54: 0x0  nop
    ctx->pc = 0x2c1f54u;
    // NOP
label_2c1f58:
    // 0x2c1f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f5c: 0x0  nop
    ctx->pc = 0x2c1f5cu;
    // NOP
label_2c1f60:
    // 0x2c1f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1f64: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F64u;
        // 0x2c1f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1F6Cu;
}

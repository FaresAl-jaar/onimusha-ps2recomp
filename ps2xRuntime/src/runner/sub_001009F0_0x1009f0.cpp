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

// Function: sub_001009F0
// Address: 0x1009f0 - 0x100a98
void sub_001009F0_0x1009f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001009F0_0x1009f0");
#endif

    ctx->pc = 0x1009f0u;

    // 0x1009f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1009f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1009f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1009f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1009f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1009F8u;
    {
        const bool branch_taken_0x1009f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1009f8) {
            ctx->pc = 0x100A10u;
            goto label_100a10;
        }
    }
    ctx->pc = 0x100A00u;
    // 0x100a00: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x100a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x100a04: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x100a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x100a08: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x100A08u;
    {
        const bool branch_taken_0x100a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A08u;
        // 0x100a0c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a08) {
            ctx->pc = 0x100A90u;
            goto label_100a90;
        }
    }
    ctx->pc = 0x100A10u;
label_100a10:
    // 0x100a10: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x100a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x100a14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100A14u;
    {
        const bool branch_taken_0x100a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A14u;
        // 0x100a18: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a14) {
            ctx->pc = 0x100A38u;
            goto label_100a38;
        }
    }
    ctx->pc = 0x100A1Cu;
    // 0x100a1c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x100a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x100a20: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x100a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x100a24: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x100a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x100a28: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x100a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x100a2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x100A2Cu;
    {
        const bool branch_taken_0x100a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A2Cu;
        // 0x100a30: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a2c) {
            ctx->pc = 0x100A90u;
            goto label_100a90;
        }
    }
    ctx->pc = 0x100A34u;
    // 0x100a34: 0x0  nop
    ctx->pc = 0x100a34u;
    // NOP
label_100a38:
    // 0x100a38: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x100a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x100a3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x100A3Cu;
    {
        const bool branch_taken_0x100a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A3Cu;
        // 0x100a40: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a3c) {
            ctx->pc = 0x100A68u;
            goto label_100a68;
        }
    }
    ctx->pc = 0x100A44u;
    // 0x100a44: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x100a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x100a48: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x100a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x100a4c: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x100a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x100a50: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x100a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x100a54: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x100a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x100a58: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x100a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x100a5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x100A5Cu;
    {
        const bool branch_taken_0x100a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A5Cu;
        // 0x100a60: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a5c) {
            ctx->pc = 0x100A90u;
            goto label_100a90;
        }
    }
    ctx->pc = 0x100A64u;
    // 0x100a64: 0x0  nop
    ctx->pc = 0x100a64u;
    // NOP
label_100a68:
    // 0x100a68: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x100a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x100a6c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x100a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x100a70: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x100a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x100a74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x100a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x100a78: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x100a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x100a7c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x100a7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100a80: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x100a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x100a84: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x100a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x100a88: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x100a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x100a8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x100a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_100a90:
    // 0x100a90: 0x3e00008  jr          $ra
    ctx->pc = 0x100A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100A98u;
}

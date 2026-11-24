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

// Function: sub_001D0F00
// Address: 0x1d0f00 - 0x1d0f80
void sub_001D0F00_0x1d0f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0F00_0x1d0f00");
#endif

    ctx->pc = 0x1d0f00u;

    // 0x1d0f00: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x1d0f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d0f04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d0f08: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x1d0f08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0f0c: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x1d0f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d0f10: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D0F10u;
    {
        const bool branch_taken_0x1d0f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f10) {
            ctx->pc = 0x1D0F70u;
            goto label_1d0f70;
        }
    }
    ctx->pc = 0x1D0F18u;
    // 0x1d0f18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d0f1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1d0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d0f20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d0f24: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1d0f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d0f28: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1d0f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d0f2c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0F2Cu;
    {
        const bool branch_taken_0x1d0f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F2Cu;
        // 0x1d0f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f2c) {
            ctx->pc = 0x1D0F40u;
            goto label_1d0f40;
        }
    }
    ctx->pc = 0x1D0F34u;
    // 0x1d0f34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D0F34u;
    {
        const bool branch_taken_0x1d0f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f34) {
            ctx->pc = 0x1D0F78u;
            goto label_1d0f78;
        }
    }
    ctx->pc = 0x1D0F3Cu;
    // 0x1d0f3c: 0x0  nop
    ctx->pc = 0x1d0f3cu;
    // NOP
label_1d0f40:
    // 0x1d0f40: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1d0f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1d0f44: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d0f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d0f48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0F48u;
    {
        const bool branch_taken_0x1d0f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F48u;
        // 0x1d0f4c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f48) {
            ctx->pc = 0x1D0F68u;
            goto label_1d0f68;
        }
    }
    ctx->pc = 0x1D0F50u;
    // 0x1d0f50: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1d0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d0f54: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d0f58: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d0f5c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1d0f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d0f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F60u;
    {
        const bool branch_taken_0x1d0f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F60u;
        // 0x1d0f64: 0xa0820008  sb          $v0, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f60) {
            ctx->pc = 0x1D0F70u;
            goto label_1d0f70;
        }
    }
    ctx->pc = 0x1D0F68u;
label_1d0f68:
    // 0x1d0f68: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x1d0f68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0f6c: 0x0  nop
    ctx->pc = 0x1d0f6cu;
    // NOP
label_1d0f70:
    // 0x1d0f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0f74: 0x0  nop
    ctx->pc = 0x1d0f74u;
    // NOP
label_1d0f78:
    // 0x1d0f78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0F80u;
}

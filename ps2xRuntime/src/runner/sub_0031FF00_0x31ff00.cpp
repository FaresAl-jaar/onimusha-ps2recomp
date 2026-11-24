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

// Function: sub_0031FF00
// Address: 0x31ff00 - 0x31ff58
void sub_0031FF00_0x31ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FF00_0x31ff00");
#endif

    ctx->pc = 0x31ff00u;

    // 0x31ff00: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x31ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x31ff04: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31FF04u;
    {
        const bool branch_taken_0x31ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ff04) {
            ctx->pc = 0x31FF48u;
            goto label_31ff48;
        }
    }
    ctx->pc = 0x31FF0Cu;
    // 0x31ff0c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x31ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x31ff10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31ff14: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x31ff14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x31ff18: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x31ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x31ff1c: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x31ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x31ff20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ff24: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x31ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x31ff28: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x31ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x31ff2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ff30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ff34: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31ff34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31ff38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FF38u;
    {
        const bool branch_taken_0x31ff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ff38) {
            ctx->pc = 0x31FF48u;
            goto label_31ff48;
        }
    }
    ctx->pc = 0x31FF40u;
    // 0x31ff40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31FF40u;
    {
        const bool branch_taken_0x31ff40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF40u;
        // 0x31ff44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff40) {
            ctx->pc = 0x31FF50u;
            goto label_31ff50;
        }
    }
    ctx->pc = 0x31FF48u;
label_31ff48:
    // 0x31ff48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ff48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff4c: 0x0  nop
    ctx->pc = 0x31ff4cu;
    // NOP
label_31ff50:
    // 0x31ff50: 0x3e00008  jr          $ra
    ctx->pc = 0x31FF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FF58u;
}

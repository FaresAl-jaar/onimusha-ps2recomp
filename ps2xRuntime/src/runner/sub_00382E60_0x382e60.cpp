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

// Function: sub_00382E60
// Address: 0x382e60 - 0x382eb4
void sub_00382E60_0x382e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382E60_0x382e60");
#endif

    ctx->pc = 0x382e60u;

    // 0x382e60: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x382e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x382e64: 0x2442fff3  addiu       $v0, $v0, -0xD
    ctx->pc = 0x382e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x382e68: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x382e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x382e6c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x382E6Cu;
    {
        const bool branch_taken_0x382e6c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x382E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E6Cu;
        // 0x382e70: 0x51042  srl         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e6c) {
            ctx->pc = 0x382E7Cu;
            goto label_382e7c;
        }
    }
    ctx->pc = 0x382E74u;
    // 0x382e74: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x382E74u;
    {
        const bool branch_taken_0x382e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E74u;
        // 0x382e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e74) {
            ctx->pc = 0x382EACu;
            goto label_382eac;
        }
    }
    ctx->pc = 0x382E7Cu;
label_382e7c:
    // 0x382e7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x382e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x382e80: 0x80440100  lb          $a0, 0x100($v0)
    ctx->pc = 0x382e80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x382e84: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x382E84u;
    {
        const bool branch_taken_0x382e84 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x382E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E84u;
        // 0x382e88: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e84) {
            ctx->pc = 0x382E98u;
            goto label_382e98;
        }
    }
    ctx->pc = 0x382E8Cu;
    // 0x382e8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x382E8Cu;
    {
        const bool branch_taken_0x382e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E8Cu;
        // 0x382e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e8c) {
            ctx->pc = 0x382E9Cu;
            goto label_382e9c;
        }
    }
    ctx->pc = 0x382E94u;
    // 0x382e94: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x382e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_382e98:
    // 0x382e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x382e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_382e9c:
    // 0x382e9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x382e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x382ea0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x382ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x382ea4: 0x441007  srav        $v0, $a0, $v0
    ctx->pc = 0x382ea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x382ea8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x382ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_382eac:
    // 0x382eac: 0x3e00008  jr          $ra
    ctx->pc = 0x382EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382EB4u;
}

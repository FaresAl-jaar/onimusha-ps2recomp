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

// Function: sub_00257E20
// Address: 0x257e20 - 0x257e9c
void sub_00257E20_0x257e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257E20_0x257e20");
#endif

    switch (ctx->pc) {
        case 0x257e90u: goto label_257e90;
        default: break;
    }

    ctx->pc = 0x257e20u;

    // 0x257e20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x257e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x257e24: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x257e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x257e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257e2c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x257e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x257e30: 0xafa90070  sw          $t1, 0x70($sp)
    ctx->pc = 0x257e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 9));
    // 0x257e34: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x257e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x257e38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257E38u;
    {
        const bool branch_taken_0x257e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E38u;
        // 0x257e3c: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e38) {
            ctx->pc = 0x257E48u;
            goto label_257e48;
        }
    }
    ctx->pc = 0x257E40u;
    // 0x257e40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257E40u;
    {
        const bool branch_taken_0x257e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E40u;
        // 0x257e44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e40) {
            ctx->pc = 0x257E54u;
            goto label_257e54;
        }
    }
    ctx->pc = 0x257E48u;
label_257e48:
    // 0x257e48: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x257e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x257e4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257e50: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x257e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_257e54:
    // 0x257e54: 0xa3a7001c  sb          $a3, 0x1C($sp)
    ctx->pc = 0x257e54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 7));
    // 0x257e58: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x257e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x257e5c: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x257e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257e60: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x257e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257e64: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x257e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x257e68: 0xa7a6001a  sh          $a2, 0x1A($sp)
    ctx->pc = 0x257e68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 6));
    // 0x257e6c: 0xa3a2001d  sb          $v0, 0x1D($sp)
    ctx->pc = 0x257e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x257e70: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x257e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x257e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x257e78: 0xa7a50018  sh          $a1, 0x18($sp)
    ctx->pc = 0x257e78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x257e7c: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x257e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x257e80: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x257e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x257e84: 0xa3a2001f  sb          $v0, 0x1F($sp)
    ctx->pc = 0x257e84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x257e88: 0xc095ff8  jal         func_257FE0
    ctx->pc = 0x257E88u;
    SET_GPR_U32(ctx, 31, 0x257E90u);
    ctx->pc = 0x257E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E88u;
    // 0x257e8c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257FE0u, 0x257E88u, 0x257E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E90u;
label_257e90:
    // 0x257e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257e94: 0x3e00008  jr          $ra
    ctx->pc = 0x257E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E94u;
        // 0x257e98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257E9Cu;
}

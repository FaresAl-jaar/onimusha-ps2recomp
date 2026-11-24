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

// Function: sub_001A1B20
// Address: 0x1a1b20 - 0x1a1b94
void sub_001A1B20_0x1a1b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1B20_0x1a1b20");
#endif

    switch (ctx->pc) {
        case 0x1a1b44u: goto label_1a1b44;
        case 0x1a1b54u: goto label_1a1b54;
        case 0x1a1b64u: goto label_1a1b64;
        case 0x1a1b74u: goto label_1a1b74;
        default: break;
    }

    ctx->pc = 0x1a1b20u;

    // 0x1a1b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a1b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a1b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a1b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1b3c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1A1B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B44u);
    ctx->pc = 0x1A1B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B3Cu;
    // 0x1a1b40: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1A1B3Cu, 0x1A1B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B44u;
label_1a1b44:
    // 0x1a1b44: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a1b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1b48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a1b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b4c: 0xc041460  jal         func_105180
    ctx->pc = 0x1A1B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B54u);
    ctx->pc = 0x1A1B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B4Cu;
    // 0x1a1b50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1A1B4Cu, 0x1A1B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B54u;
label_1a1b54:
    // 0x1a1b54: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x1a1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1a1b58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a1b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b5c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A1B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B64u);
    ctx->pc = 0x1A1B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B5Cu;
    // 0x1a1b60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A1B5Cu, 0x1A1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B64u;
label_1a1b64:
    // 0x1a1b64: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x1a1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1a1b68: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1a1b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1b6c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A1B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B74u);
    ctx->pc = 0x1A1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B6Cu;
    // 0x1a1b70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A1B6Cu, 0x1A1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B74u;
label_1a1b74:
    // 0x1a1b74: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x1a1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1a1b78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1b7c: 0xae230100  sw          $v1, 0x100($s1)
    ctx->pc = 0x1a1b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
    // 0x1a1b80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B8Cu;
        // 0x1a1b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1B94u;
}

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

// Function: sub_002F4A50
// Address: 0x2f4a50 - 0x2f4a98
void sub_002F4A50_0x2f4a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4A50_0x2f4a50");
#endif

    switch (ctx->pc) {
        case 0x2f4a64u: goto label_2f4a64;
        default: break;
    }

    ctx->pc = 0x2f4a50u;

    // 0x2f4a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f4a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4a5c: 0xc0bcc90  jal         func_2F3240
    ctx->pc = 0x2F4A5Cu;
    SET_GPR_U32(ctx, 31, 0x2F4A64u);
    ctx->pc = 0x2F4A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A5Cu;
    // 0x2f4a60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3240u, 0x2F4A5Cu, 0x2F4A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A64u;
label_2f4a64:
    // 0x2f4a64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2f4a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f4a68: 0x228c2  srl         $a1, $v0, 3
    ctx->pc = 0x2f4a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2f4a6c: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2f4a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f4a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4a78: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2f4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2f4a7c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2f4a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f4a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4a84: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2f4a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f4a88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f4a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f4a8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4a90: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A90u;
        // 0x2f4a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4A98u;
}

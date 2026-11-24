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

// Function: sub_002A9B10
// Address: 0x2a9b10 - 0x2a9ba0
void sub_002A9B10_0x2a9b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9B10_0x2a9b10");
#endif

    switch (ctx->pc) {
        case 0x2a9b68u: goto label_2a9b68;
        case 0x2a9b84u: goto label_2a9b84;
        default: break;
    }

    ctx->pc = 0x2a9b10u;

    // 0x2a9b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a9b14: 0x3c025500  lui         $v0, 0x5500
    ctx->pc = 0x2a9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21760 << 16));
    // 0x2a9b18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a9b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a9b1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a9b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a9b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a9b24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a9b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a9b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a9b2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a9b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a9b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a9b34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a9b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9b3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a9b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b40: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a9b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b44: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a9b48: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a9b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a9b4c: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a9b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a9b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b54: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x2a9b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2a9b58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a9b58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a9b5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b60: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A9B60u;
    SET_GPR_U32(ctx, 31, 0x2A9B68u);
    ctx->pc = 0x2A9B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9B60u;
    // 0x2a9b64: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A9B60u, 0x2A9B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9B68u;
label_2a9b68:
    // 0x2a9b68: 0x8e080190  lw          $t0, 0x190($s0)
    ctx->pc = 0x2a9b68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2a9b6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a9b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a9b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b74: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a9b74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a9b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9b7c: 0xc0c197c  jal         func_3065F0
    ctx->pc = 0x2A9B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A9B84u);
    ctx->pc = 0x2A9B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9B7Cu;
    // 0x2a9b80: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3065F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3065F0u, 0x2A9B7Cu, 0x2A9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9B84u;
label_2a9b84:
    // 0x2a9b84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a9b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9b88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a9b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9b8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a9b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9b90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a9b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9b94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9b98: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B98u;
        // 0x2a9b9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9BA0u;
}

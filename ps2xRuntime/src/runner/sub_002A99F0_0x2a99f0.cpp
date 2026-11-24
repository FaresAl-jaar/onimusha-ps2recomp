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

// Function: sub_002A99F0
// Address: 0x2a99f0 - 0x2a9a80
void sub_002A99F0_0x2a99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A99F0_0x2a99f0");
#endif

    switch (ctx->pc) {
        case 0x2a9a48u: goto label_2a9a48;
        case 0x2a9a64u: goto label_2a9a64;
        default: break;
    }

    ctx->pc = 0x2a99f0u;

    // 0x2a99f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a99f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a99f4: 0x3c025200  lui         $v0, 0x5200
    ctx->pc = 0x2a99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20992 << 16));
    // 0x2a99f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a99f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a99fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a99fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a9a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a9a04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a9a04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a9a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a9a0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a9a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a9a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a9a14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a9a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9a1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a9a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a20: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a9a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a24: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a9a28: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a9a2c: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a9a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a9a30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a34: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x2a9a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2a9a38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a9a38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a9a3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a40: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A9A40u;
    SET_GPR_U32(ctx, 31, 0x2A9A48u);
    ctx->pc = 0x2A9A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A40u;
    // 0x2a9a44: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A9A40u, 0x2A9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A48u;
label_2a9a48:
    // 0x2a9a48: 0x8e080190  lw          $t0, 0x190($s0)
    ctx->pc = 0x2a9a48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2a9a4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a9a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a9a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a54: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a9a54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a9a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9a5c: 0xc0a0f10  jal         func_283C40
    ctx->pc = 0x2A9A5Cu;
    SET_GPR_U32(ctx, 31, 0x2A9A64u);
    ctx->pc = 0x2A9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A5Cu;
    // 0x2a9a60: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283C40u, 0x2A9A5Cu, 0x2A9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A64u;
label_2a9a64:
    // 0x2a9a64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a9a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9a68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a9a68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9a6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a9a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9a70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a9a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9a74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9a78: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A78u;
        // 0x2a9a7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9A80u;
}

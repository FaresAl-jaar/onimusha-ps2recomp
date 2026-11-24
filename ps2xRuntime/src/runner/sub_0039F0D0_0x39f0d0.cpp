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

// Function: sub_0039F0D0
// Address: 0x39f0d0 - 0x39f118
void sub_0039F0D0_0x39f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F0D0_0x39f0d0");
#endif

    switch (ctx->pc) {
        case 0x39f0e4u: goto label_39f0e4;
        case 0x39f0fcu: goto label_39f0fc;
        case 0x39f108u: goto label_39f108;
        default: break;
    }

    ctx->pc = 0x39f0d0u;

    // 0x39f0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39f0d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39f0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39f0dc: 0xc0c0858  jal         func_302160
    ctx->pc = 0x39F0DCu;
    SET_GPR_U32(ctx, 31, 0x39F0E4u);
    ctx->pc = 0x39F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F0DCu;
    // 0x39f0e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x39F0DCu, 0x39F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F0E4u;
label_39f0e4:
    // 0x39f0e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39F0E4u;
    {
        const bool branch_taken_0x39f0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f0e4) {
            ctx->pc = 0x39F0F0u;
            goto label_39f0f0;
        }
    }
    ctx->pc = 0x39F0ECu;
    // 0x39f0ec: 0xa4400574  sh          $zero, 0x574($v0)
    ctx->pc = 0x39f0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1396), (uint16_t)GPR_U32(ctx, 0));
label_39f0f0:
    // 0x39f0f0: 0x8e050550  lw          $a1, 0x550($s0)
    ctx->pc = 0x39f0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x39f0f4: 0xc0c0844  jal         func_302110
    ctx->pc = 0x39F0F4u;
    SET_GPR_U32(ctx, 31, 0x39F0FCu);
    ctx->pc = 0x39F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F0F4u;
    // 0x39f0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x39F0F4u, 0x39F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F0FCu;
label_39f0fc:
    // 0x39f0fc: 0x8e050554  lw          $a1, 0x554($s0)
    ctx->pc = 0x39f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x39f100: 0xc0c0844  jal         func_302110
    ctx->pc = 0x39F100u;
    SET_GPR_U32(ctx, 31, 0x39F108u);
    ctx->pc = 0x39F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F100u;
    // 0x39f104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x39F100u, 0x39F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F108u;
label_39f108:
    // 0x39f108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39f108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f10c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39f10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f110: 0x3e00008  jr          $ra
    ctx->pc = 0x39F110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F110u;
        // 0x39f114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F118u;
}

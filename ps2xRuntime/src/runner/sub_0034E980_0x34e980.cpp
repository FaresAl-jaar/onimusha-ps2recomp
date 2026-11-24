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

// Function: sub_0034E980
// Address: 0x34e980 - 0x34e9d8
void sub_0034E980_0x34e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E980_0x34e980");
#endif

    switch (ctx->pc) {
        case 0x34e99cu: goto label_34e99c;
        case 0x34e9c0u: goto label_34e9c0;
        default: break;
    }

    ctx->pc = 0x34e980u;

    // 0x34e980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34e988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e98c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e990: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x34e990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x34e994: 0xc095150  jal         func_254540
    ctx->pc = 0x34E994u;
    SET_GPR_U32(ctx, 31, 0x34E99Cu);
    ctx->pc = 0x34E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E994u;
    // 0x34e998: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x34E994u, 0x34E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E99Cu;
label_34e99c:
    // 0x34e99c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E99Cu;
    {
        const bool branch_taken_0x34e99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e99c) {
            ctx->pc = 0x34E9B0u;
            goto label_34e9b0;
        }
    }
    ctx->pc = 0x34E9A4u;
    // 0x34e9a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E9A4u;
    {
        const bool branch_taken_0x34e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E9A4u;
        // 0x34e9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e9a4) {
            ctx->pc = 0x34E9C8u;
            goto label_34e9c8;
        }
    }
    ctx->pc = 0x34E9ACu;
    // 0x34e9ac: 0x0  nop
    ctx->pc = 0x34e9acu;
    // NOP
label_34e9b0:
    // 0x34e9b0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x34e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x34e9b4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x34e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x34e9b8: 0xc095154  jal         func_254550
    ctx->pc = 0x34E9B8u;
    SET_GPR_U32(ctx, 31, 0x34E9C0u);
    ctx->pc = 0x34E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E9B8u;
    // 0x34e9bc: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x34E9B8u, 0x34E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E9C0u;
label_34e9c0:
    // 0x34e9c0: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x34e9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x34e9c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34e9c8:
    // 0x34e9c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e9cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x34E9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E9D0u;
        // 0x34e9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E9D8u;
}

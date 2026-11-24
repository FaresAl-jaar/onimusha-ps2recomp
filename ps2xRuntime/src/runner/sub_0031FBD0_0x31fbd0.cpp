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

// Function: sub_0031FBD0
// Address: 0x31fbd0 - 0x31fc10
void sub_0031FBD0_0x31fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FBD0_0x31fbd0");
#endif

    switch (ctx->pc) {
        case 0x31fbe8u: goto label_31fbe8;
        case 0x31fbf4u: goto label_31fbf4;
        case 0x31fc00u: goto label_31fc00;
        default: break;
    }

    ctx->pc = 0x31fbd0u;

    // 0x31fbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31fbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31fbd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31fbd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31fbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31fbdc: 0x8c850580  lw          $a1, 0x580($a0)
    ctx->pc = 0x31fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x31fbe0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x31FBE0u;
    SET_GPR_U32(ctx, 31, 0x31FBE8u);
    ctx->pc = 0x31FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FBE0u;
    // 0x31fbe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x31FBE0u, 0x31FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FBE8u;
label_31fbe8:
    // 0x31fbe8: 0x8e050584  lw          $a1, 0x584($s0)
    ctx->pc = 0x31fbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x31fbec: 0xc0c0844  jal         func_302110
    ctx->pc = 0x31FBECu;
    SET_GPR_U32(ctx, 31, 0x31FBF4u);
    ctx->pc = 0x31FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FBECu;
    // 0x31fbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x31FBECu, 0x31FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FBF4u;
label_31fbf4:
    // 0x31fbf4: 0x8e050588  lw          $a1, 0x588($s0)
    ctx->pc = 0x31fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
    // 0x31fbf8: 0xc0c0844  jal         func_302110
    ctx->pc = 0x31FBF8u;
    SET_GPR_U32(ctx, 31, 0x31FC00u);
    ctx->pc = 0x31FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FBF8u;
    // 0x31fbfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x31FBF8u, 0x31FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC00u;
label_31fc00:
    // 0x31fc00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31fc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fc04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31fc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x31FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC08u;
        // 0x31fc0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FC10u;
}

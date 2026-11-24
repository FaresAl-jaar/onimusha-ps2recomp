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

// Function: sub_0023AC38
// Address: 0x23ac38 - 0x23ac80
void sub_0023AC38_0x23ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AC38_0x23ac38");
#endif

    switch (ctx->pc) {
        case 0x23ac64u: goto label_23ac64;
        default: break;
    }

    ctx->pc = 0x23ac38u;

    // 0x23ac38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ac3c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x23ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x23ac40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23ac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23ac44: 0x3c100088  lui         $s0, 0x88
    ctx->pc = 0x23ac44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)136 << 16));
    // 0x23ac48: 0x26105ae0  addiu       $s0, $s0, 0x5AE0
    ctx->pc = 0x23ac48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23264));
    // 0x23ac4c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x23ac4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x23ac50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23ac50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ac54: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x23ac54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23ac58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23ac5c: 0xc08b770  jal         func_22DDC0
    ctx->pc = 0x23AC5Cu;
    SET_GPR_U32(ctx, 31, 0x23AC64u);
    ctx->pc = 0x23AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC5Cu;
    // 0x23ac60: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DDC0u, 0x23AC5Cu, 0x23AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC64u;
label_23ac64:
    // 0x23ac64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23ac64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ac68: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23ac6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23ac6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ac70: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x23ac70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x23ac74: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23ac74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ac78: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC78u;
        // 0x23ac7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC80u;
}

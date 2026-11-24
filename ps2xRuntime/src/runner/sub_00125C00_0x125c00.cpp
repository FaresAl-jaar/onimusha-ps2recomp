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

// Function: sub_00125C00
// Address: 0x125c00 - 0x125c34
void sub_00125C00_0x125c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125C00_0x125c00");
#endif

    switch (ctx->pc) {
        case 0x125c18u: goto label_125c18;
        default: break;
    }

    ctx->pc = 0x125c00u;

    // 0x125c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x125c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125c0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x125c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c10: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x125C10u;
    SET_GPR_U32(ctx, 31, 0x125C18u);
    ctx->pc = 0x125C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C10u;
    // 0x125c14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x125C10u, 0x125C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C18u;
label_125c18:
    // 0x125c18: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x125c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x125c1c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x125c1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125c20: 0xac4f0010  sw          $t7, 0x10($v0)
    ctx->pc = 0x125c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 15));
    // 0x125c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125c28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x125c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x125C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C2Cu;
        // 0x125c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125C34u;
}

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

// Function: sub_002B3BF0
// Address: 0x2b3bf0 - 0x2b3c2c
void sub_002B3BF0_0x2b3bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3BF0_0x2b3bf0");
#endif

    switch (ctx->pc) {
        case 0x2b3c08u: goto label_2b3c08;
        case 0x2b3c1cu: goto label_2b3c1c;
        default: break;
    }

    ctx->pc = 0x2b3bf0u;

    // 0x2b3bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3bf4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b3bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3bfc: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b3c00: 0xc0ad0bc  jal         func_2B42F0
    ctx->pc = 0x2B3C00u;
    SET_GPR_U32(ctx, 31, 0x2B3C08u);
    ctx->pc = 0x2B3C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C00u;
    // 0x2b3c04: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F0u, 0x2B3C00u, 0x2B3C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C08u;
label_2b3c08:
    // 0x2b3c08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b3c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c0c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3C0Cu;
    {
        const bool branch_taken_0x2b3c0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C0Cu;
        // 0x2b3c10: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c0c) {
            ctx->pc = 0x2B3C20u;
            goto label_2b3c20;
        }
    }
    ctx->pc = 0x2B3C14u;
    // 0x2b3c14: 0xc0acc44  jal         func_2B3110
    ctx->pc = 0x2B3C14u;
    SET_GPR_U32(ctx, 31, 0x2B3C1Cu);
    ctx->pc = 0x2B3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C14u;
    // 0x2b3c18: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3110u, 0x2B3C14u, 0x2B3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C1Cu;
label_2b3c1c:
    // 0x2b3c1c: 0x0  nop
    ctx->pc = 0x2b3c1cu;
    // NOP
label_2b3c20:
    // 0x2b3c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3c24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C24u;
        // 0x2b3c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3C2Cu;
}

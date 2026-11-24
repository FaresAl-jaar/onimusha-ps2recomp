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

// Function: sub_0020BFE8
// Address: 0x20bfe8 - 0x20c02c
void sub_0020BFE8_0x20bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BFE8_0x20bfe8");
#endif

    switch (ctx->pc) {
        case 0x20bffcu: goto label_20bffc;
        case 0x20c014u: goto label_20c014;
        default: break;
    }

    ctx->pc = 0x20bfe8u;

    // 0x20bfe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bfec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20bff0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20bff4: 0xc08300c  jal         func_20C030
    ctx->pc = 0x20BFF4u;
    SET_GPR_U32(ctx, 31, 0x20BFFCu);
    ctx->pc = 0x20BFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFF4u;
    // 0x20bff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C030u, 0x20BFF4u, 0x20BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFFCu;
label_20bffc:
    // 0x20bffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c004: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C004u;
    {
        const bool branch_taken_0x20c004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C004u;
        // 0x20c008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c004) {
            ctx->pc = 0x20C018u;
            goto label_20c018;
        }
    }
    ctx->pc = 0x20C00Cu;
    // 0x20c00c: 0xc083094  jal         func_20C250
    ctx->pc = 0x20C00Cu;
    SET_GPR_U32(ctx, 31, 0x20C014u);
    ctx->pc = 0x20C250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C250u, 0x20C00Cu, 0x20C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C014u;
label_20c014:
    // 0x20c014: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c018:
    // 0x20c018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c01c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20c01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c020: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20c020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c024: 0x3e00008  jr          $ra
    ctx->pc = 0x20C024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C024u;
        // 0x20c028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C02Cu;
}

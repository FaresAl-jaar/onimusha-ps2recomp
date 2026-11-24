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

// Function: sub_003827C0
// Address: 0x3827c0 - 0x382804
void sub_003827C0_0x3827c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003827C0_0x3827c0");
#endif

    switch (ctx->pc) {
        case 0x3827f4u: goto label_3827f4;
        default: break;
    }

    ctx->pc = 0x3827c0u;

    // 0x3827c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3827c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3827c4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3827c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3827c8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3827C8u;
    {
        const bool branch_taken_0x3827c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3827CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827C8u;
        // 0x3827cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3827c8) {
            ctx->pc = 0x3827F8u;
            goto label_3827f8;
        }
    }
    ctx->pc = 0x3827D0u;
    // 0x3827d0: 0x8f838c24  lw          $v1, -0x73DC($gp)
    ctx->pc = 0x3827d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937636)));
    // 0x3827d4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3827d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3827d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3827D8u;
    {
        const bool branch_taken_0x3827d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3827d8) {
            ctx->pc = 0x3827F8u;
            goto label_3827f8;
        }
    }
    ctx->pc = 0x3827E0u;
    // 0x3827e0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3827e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3827e4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3827e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3827e8: 0x2442c170  addiu       $v0, $v0, -0x3E90
    ctx->pc = 0x3827e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951280));
    // 0x3827ec: 0xc0e0bb0  jal         func_382EC0
    ctx->pc = 0x3827ECu;
    SET_GPR_U32(ctx, 31, 0x3827F4u);
    ctx->pc = 0x3827F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3827ECu;
    // 0x3827f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382EC0u, 0x3827ECu, 0x3827F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3827F4u;
label_3827f4:
    // 0x3827f4: 0x0  nop
    ctx->pc = 0x3827f4u;
    // NOP
label_3827f8:
    // 0x3827f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3827f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3827fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3827FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827FCu;
        // 0x382800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3827FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382804u;
}

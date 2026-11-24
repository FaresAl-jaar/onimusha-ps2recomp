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

// Function: sub_0025E190
// Address: 0x25e190 - 0x25e1f4
void sub_0025E190_0x25e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E190_0x25e190");
#endif

    switch (ctx->pc) {
        case 0x25e1a8u: goto label_25e1a8;
        default: break;
    }

    ctx->pc = 0x25e190u;

    // 0x25e190: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25e190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e194: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e198: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25e198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25e19c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e1a0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25E1A0u;
    SET_GPR_U32(ctx, 31, 0x25E1A8u);
    ctx->pc = 0x25E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1A0u;
    // 0x25e1a4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25E1A0u, 0x25E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1A8u;
label_25e1a8:
    // 0x25e1a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E1A8u;
    {
        const bool branch_taken_0x25e1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e1a8) {
            ctx->pc = 0x25E1B8u;
            goto label_25e1b8;
        }
    }
    ctx->pc = 0x25E1B0u;
    // 0x25e1b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25E1B0u;
    {
        const bool branch_taken_0x25e1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1B0u;
        // 0x25e1b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1b0) {
            ctx->pc = 0x25E1E8u;
            goto label_25e1e8;
        }
    }
    ctx->pc = 0x25E1B8u;
label_25e1b8:
    // 0x25e1b8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x25e1b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e1bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25e1c0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E1C0u;
    {
        const bool branch_taken_0x25e1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25e1c0) {
            ctx->pc = 0x25E1D0u;
            goto label_25e1d0;
        }
    }
    ctx->pc = 0x25E1C8u;
    // 0x25e1c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25E1C8u;
    {
        const bool branch_taken_0x25e1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1C8u;
        // 0x25e1cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1c8) {
            ctx->pc = 0x25E1E8u;
            goto label_25e1e8;
        }
    }
    ctx->pc = 0x25E1D0u;
label_25e1d0:
    // 0x25e1d0: 0x90422b0d  lbu         $v0, 0x2B0D($v0)
    ctx->pc = 0x25e1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11021)));
    // 0x25e1d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25e1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25e1d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25e1d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25e1dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x25e1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x25e1e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e1e4: 0x0  nop
    ctx->pc = 0x25e1e4u;
    // NOP
label_25e1e8:
    // 0x25e1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25E1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1ECu;
        // 0x25e1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E1F4u;
}

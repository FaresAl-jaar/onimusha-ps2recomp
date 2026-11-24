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

// Function: sub_00231488
// Address: 0x231488 - 0x2314d4
void sub_00231488_0x231488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231488_0x231488");
#endif

    switch (ctx->pc) {
        case 0x2314a8u: goto label_2314a8;
        default: break;
    }

    ctx->pc = 0x231488u;

    // 0x231488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23148c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23148cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231490: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x231490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231494: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x231494u;
    {
        const bool branch_taken_0x231494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231494u;
        // 0x231498: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231494) {
            ctx->pc = 0x2314B8u;
            goto label_2314b8;
        }
    }
    ctx->pc = 0x23149Cu;
    // 0x23149c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23149cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2314a0: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x2314A0u;
    SET_GPR_U32(ctx, 31, 0x2314A8u);
    ctx->pc = 0x2314A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314A0u;
    // 0x2314a4: 0x2484a908  addiu       $a0, $a0, -0x56F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x2314A0u, 0x2314A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314A8u;
label_2314a8:
    // 0x2314a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2314a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2314ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2314ACu;
    {
        const bool branch_taken_0x2314ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314ACu;
        // 0x2314b0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314ac) {
            ctx->pc = 0x2314C4u;
            goto label_2314c4;
        }
    }
    ctx->pc = 0x2314B4u;
    // 0x2314b4: 0x0  nop
    ctx->pc = 0x2314b4u;
    // NOP
label_2314b8:
    // 0x2314b8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2314b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2314bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2314bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2314c0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2314c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2314c4:
    // 0x2314c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2314c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2314c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2314c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2314cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2314CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2314D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314CCu;
        // 0x2314d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2314CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2314D4u;
}

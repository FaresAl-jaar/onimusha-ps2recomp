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

// Function: sub_00210578
// Address: 0x210578 - 0x2105c0
void sub_00210578_0x210578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210578_0x210578");
#endif

    switch (ctx->pc) {
        case 0x210590u: goto label_210590;
        case 0x2105a4u: goto label_2105a4;
        default: break;
    }

    ctx->pc = 0x210578u;

    // 0x210578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21057c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x21057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x210580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210584: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x210584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x210588: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x210588u;
    SET_GPR_U32(ctx, 31, 0x210590u);
    ctx->pc = 0x21058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210588u;
    // 0x21058c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x210588u, 0x210590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210590u;
label_210590:
    // 0x210590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210594: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210594u;
    {
        const bool branch_taken_0x210594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210594u;
        // 0x210598: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210594) {
            ctx->pc = 0x2105ACu;
            goto label_2105ac;
        }
    }
    ctx->pc = 0x21059Cu;
    // 0x21059c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21059Cu;
    SET_GPR_U32(ctx, 31, 0x2105A4u);
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21059Cu, 0x2105A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105A4u;
label_2105a4:
    // 0x2105a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2105A4u;
    {
        const bool branch_taken_0x2105a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2105A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105A4u;
        // 0x2105a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105a4) {
            ctx->pc = 0x2105B4u;
            goto label_2105b4;
        }
    }
    ctx->pc = 0x2105ACu;
label_2105ac:
    // 0x2105ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2105acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2105b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2105b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2105b4:
    // 0x2105b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2105b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2105b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2105B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2105BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105B8u;
        // 0x2105bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2105B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2105C0u;
}

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

// Function: sub_002C8870
// Address: 0x2c8870 - 0x2c88a8
void sub_002C8870_0x2c8870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8870_0x2c8870");
#endif

    switch (ctx->pc) {
        case 0x2c888cu: goto label_2c888c;
        case 0x2c8898u: goto label_2c8898;
        default: break;
    }

    ctx->pc = 0x2c8870u;

    // 0x2c8870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c887c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c887cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8880: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c8880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c8884: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C8884u;
    SET_GPR_U32(ctx, 31, 0x2C888Cu);
    ctx->pc = 0x2C8888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8884u;
    // 0x2c8888: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C8884u, 0x2C888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C888Cu;
label_2c888c:
    // 0x2c888c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c888cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8890: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C8890u;
    SET_GPR_U32(ctx, 31, 0x2C8898u);
    ctx->pc = 0x2C8894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8890u;
    // 0x2c8894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C8890u, 0x2C8898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8898u;
label_2c8898:
    // 0x2c8898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c889c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c889cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c88a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C88A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88A0u;
        // 0x2c88a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C88A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C88A8u;
}

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

// Function: sub_0035AF70
// Address: 0x35af70 - 0x35afb8
void sub_0035AF70_0x35af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AF70_0x35af70");
#endif

    switch (ctx->pc) {
        case 0x35af90u: goto label_35af90;
        case 0x35afa4u: goto label_35afa4;
        default: break;
    }

    ctx->pc = 0x35af70u;

    // 0x35af70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35af74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35af78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35af7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35af7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35af80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35af80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35af84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af88: 0xc04150c  jal         func_105430
    ctx->pc = 0x35AF88u;
    SET_GPR_U32(ctx, 31, 0x35AF90u);
    ctx->pc = 0x35AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF88u;
    // 0x35af8c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x35AF88u, 0x35AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF90u;
label_35af90:
    // 0x35af90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35af90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35af94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35af94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35af98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af9c: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35AF9Cu;
    SET_GPR_U32(ctx, 31, 0x35AFA4u);
    ctx->pc = 0x35AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF9Cu;
    // 0x35afa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35AF9Cu, 0x35AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFA4u;
label_35afa4:
    // 0x35afa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35afa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35afa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35afa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35afac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35afacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35afb0: 0x3e00008  jr          $ra
    ctx->pc = 0x35AFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AFB0u;
        // 0x35afb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AFB8u;
}

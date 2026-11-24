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

// Function: sub_00327020
// Address: 0x327020 - 0x327060
void sub_00327020_0x327020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327020_0x327020");
#endif

    switch (ctx->pc) {
        case 0x327038u: goto label_327038;
        case 0x327048u: goto label_327048;
        case 0x327050u: goto label_327050;
        default: break;
    }

    ctx->pc = 0x327020u;

    // 0x327020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x327028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32702c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32702cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327030: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x327030u;
    SET_GPR_U32(ctx, 31, 0x327038u);
    ctx->pc = 0x327034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327030u;
    // 0x327034: 0x8c8404e4  lw          $a0, 0x4E4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x327030u, 0x327038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327038u;
label_327038:
    // 0x327038: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x327038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x32703c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32703cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327040: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x327040u;
    SET_GPR_U32(ctx, 31, 0x327048u);
    ctx->pc = 0x327044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327040u;
    // 0x327044: 0x24840d40  addiu       $a0, $a0, 0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x327040u, 0x327048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327048u;
label_327048:
    // 0x327048: 0xc0a72d8  jal         func_29CB60
    ctx->pc = 0x327048u;
    SET_GPR_U32(ctx, 31, 0x327050u);
    ctx->pc = 0x32704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327048u;
    // 0x32704c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB60u, 0x327048u, 0x327050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327050u;
label_327050:
    // 0x327050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327058: 0x3e00008  jr          $ra
    ctx->pc = 0x327058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327058u;
        // 0x32705c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327060u;
}

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

// Function: sub_002F1BE0
// Address: 0x2f1be0 - 0x2f1c20
void sub_002F1BE0_0x2f1be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1BE0_0x2f1be0");
#endif

    switch (ctx->pc) {
        case 0x2f1c14u: goto label_2f1c14;
        default: break;
    }

    ctx->pc = 0x2f1be0u;

    // 0x2f1be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1be4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f1be4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1bec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bf0: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x2f1bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x2f1bf4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f1bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bf8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2f1bf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bfc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f1bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c00: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f1c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c08: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2f1c08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f1c0c: 0xc0ddc8c  jal         func_377230
    ctx->pc = 0x2F1C0Cu;
    SET_GPR_U32(ctx, 31, 0x2F1C14u);
    ctx->pc = 0x2F1C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C0Cu;
    // 0x2f1c10: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377230u, 0x2F1C0Cu, 0x2F1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C14u;
label_2f1c14:
    // 0x2f1c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1c18: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C18u;
        // 0x2f1c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1C20u;
}

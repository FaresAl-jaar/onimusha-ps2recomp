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

// Function: sub_00273200
// Address: 0x273200 - 0x273228
void sub_00273200_0x273200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273200_0x273200");
#endif

    switch (ctx->pc) {
        case 0x273210u: goto label_273210;
        case 0x27321cu: goto label_27321c;
        default: break;
    }

    ctx->pc = 0x273200u;

    // 0x273200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273208: 0xc09cc68  jal         func_2731A0
    ctx->pc = 0x273208u;
    SET_GPR_U32(ctx, 31, 0x273210u);
    ctx->pc = 0x2731A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2731A0u, 0x273208u, 0x273210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273210u;
label_273210:
    // 0x273210: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x273210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x273214: 0xc0b655c  jal         func_2D9570
    ctx->pc = 0x273214u;
    SET_GPR_U32(ctx, 31, 0x27321Cu);
    ctx->pc = 0x273218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273214u;
    // 0x273218: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9570u, 0x273214u, 0x27321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27321Cu;
label_27321c:
    // 0x27321c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27321cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273220: 0x3e00008  jr          $ra
    ctx->pc = 0x273220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273220u;
        // 0x273224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273228u;
}

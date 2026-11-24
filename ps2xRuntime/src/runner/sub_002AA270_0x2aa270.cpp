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

// Function: sub_002AA270
// Address: 0x2aa270 - 0x2aa2b0
void sub_002AA270_0x2aa270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA270_0x2aa270");
#endif

    switch (ctx->pc) {
        case 0x2aa2a4u: goto label_2aa2a4;
        default: break;
    }

    ctx->pc = 0x2aa270u;

    // 0x2aa270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa274: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2aa274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa278: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2aa278u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa27c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa280: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2aa280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa284: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2aa284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2aa288: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aa288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa28c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2aa28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2aa290: 0x3445cac4  ori         $a1, $v0, 0xCAC4
    ctx->pc = 0x2aa290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51908);
    // 0x2aa294: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2aa294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa298: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2aa298u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa29c: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2AA29Cu;
    SET_GPR_U32(ctx, 31, 0x2AA2A4u);
    ctx->pc = 0x2AA2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA29Cu;
    // 0x2aa2a0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2AA29Cu, 0x2AA2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2A4u;
label_2aa2a4:
    // 0x2aa2a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2A8u;
        // 0x2aa2ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA2B0u;
}

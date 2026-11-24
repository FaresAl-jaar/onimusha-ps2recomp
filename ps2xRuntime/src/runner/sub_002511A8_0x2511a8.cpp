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

// Function: sub_002511A8
// Address: 0x2511a8 - 0x251210
void sub_002511A8_0x2511a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002511A8_0x2511a8");
#endif

    switch (ctx->pc) {
        case 0x2511d4u: goto label_2511d4;
        case 0x2511e8u: goto label_2511e8;
        case 0x2511f0u: goto label_2511f0;
        default: break;
    }

    ctx->pc = 0x2511a8u;

    // 0x2511a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2511a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2511ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2511acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2511b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2511b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2511b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2511b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2511b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2511bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2511c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2511c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2511c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2511c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2511c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2511cc: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x2511CCu;
    SET_GPR_U32(ctx, 31, 0x2511D4u);
    ctx->pc = 0x2511D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2511CCu;
    // 0x2511d0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2511CCu, 0x2511D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511D4u;
label_2511d4:
    // 0x2511d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2511d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2511d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2511dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511e0: 0xc094484  jal         func_251210
    ctx->pc = 0x2511E0u;
    SET_GPR_U32(ctx, 31, 0x2511E8u);
    ctx->pc = 0x2511E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2511E0u;
    // 0x2511e4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251210u, 0x2511E0u, 0x2511E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511E8u;
label_2511e8:
    // 0x2511e8: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x2511E8u;
    SET_GPR_U32(ctx, 31, 0x2511F0u);
    ctx->pc = 0x2511ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2511E8u;
    // 0x2511ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x2511E8u, 0x2511F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511F0u;
label_2511f0:
    // 0x2511f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2511f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2511f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2511f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2511f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2511fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2511fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251200: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x251200u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x251204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251208: 0x3e00008  jr          $ra
    ctx->pc = 0x251208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251208u;
        // 0x25120c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251210u;
}

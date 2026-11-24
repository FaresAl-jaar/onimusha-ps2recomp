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

// Function: sub_0022F440
// Address: 0x22f440 - 0x22f4a8
void sub_0022F440_0x22f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F440_0x22f440");
#endif

    switch (ctx->pc) {
        case 0x22f46cu: goto label_22f46c;
        case 0x22f480u: goto label_22f480;
        case 0x22f488u: goto label_22f488;
        default: break;
    }

    ctx->pc = 0x22f440u;

    // 0x22f440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f44c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f450: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f454: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f458: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f45c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f460: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f464: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F464u;
    SET_GPR_U32(ctx, 31, 0x22F46Cu);
    ctx->pc = 0x22F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F464u;
    // 0x22f468: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F464u, 0x22F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F46Cu;
label_22f46c:
    // 0x22f46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f474: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f478: 0xc08bd2a  jal         func_22F4A8
    ctx->pc = 0x22F478u;
    SET_GPR_U32(ctx, 31, 0x22F480u);
    ctx->pc = 0x22F47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F478u;
    // 0x22f47c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4A8u, 0x22F478u, 0x22F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F480u;
label_22f480:
    // 0x22f480: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F480u;
    SET_GPR_U32(ctx, 31, 0x22F488u);
    ctx->pc = 0x22F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F480u;
    // 0x22f484: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F480u, 0x22F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F488u;
label_22f488:
    // 0x22f488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f48c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f490: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f498: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f49c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x22F4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4A0u;
        // 0x22f4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F4A8u;
}

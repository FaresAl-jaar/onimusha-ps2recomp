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

// Function: sub_0022F320
// Address: 0x22f320 - 0x22f388
void sub_0022F320_0x22f320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F320_0x22f320");
#endif

    switch (ctx->pc) {
        case 0x22f34cu: goto label_22f34c;
        case 0x22f360u: goto label_22f360;
        case 0x22f368u: goto label_22f368;
        default: break;
    }

    ctx->pc = 0x22f320u;

    // 0x22f320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f32c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f330: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f334: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f338: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f33c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f340: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f344: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F344u;
    SET_GPR_U32(ctx, 31, 0x22F34Cu);
    ctx->pc = 0x22F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F344u;
    // 0x22f348: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F344u, 0x22F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F34Cu;
label_22f34c:
    // 0x22f34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f354: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f358: 0xc08bce2  jal         func_22F388
    ctx->pc = 0x22F358u;
    SET_GPR_U32(ctx, 31, 0x22F360u);
    ctx->pc = 0x22F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F358u;
    // 0x22f35c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F388u, 0x22F358u, 0x22F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F360u;
label_22f360:
    // 0x22f360: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F360u;
    SET_GPR_U32(ctx, 31, 0x22F368u);
    ctx->pc = 0x22F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F360u;
    // 0x22f364: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F360u, 0x22F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F368u;
label_22f368:
    // 0x22f368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f36c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f370: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f378: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f37c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f380: 0x3e00008  jr          $ra
    ctx->pc = 0x22F380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F380u;
        // 0x22f384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F388u;
}

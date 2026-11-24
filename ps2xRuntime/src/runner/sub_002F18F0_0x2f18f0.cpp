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

// Function: sub_002F18F0
// Address: 0x2f18f0 - 0x2f1940
void sub_002F18F0_0x2f18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F18F0_0x2f18f0");
#endif

    switch (ctx->pc) {
        case 0x2f1934u: goto label_2f1934;
        default: break;
    }

    ctx->pc = 0x2f18f0u;

    // 0x2f18f0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f18f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18f4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2f18f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f18f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f18fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1900: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2f1900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1904: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2f1904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1908: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x2f1908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f190c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f190cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1910: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1914: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2f1914u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f191c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1920: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f1920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f1924: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x2f1924u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f192c: 0xc0da584  jal         func_369610
    ctx->pc = 0x2F192Cu;
    SET_GPR_U32(ctx, 31, 0x2F1934u);
    ctx->pc = 0x2F1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F192Cu;
    // 0x2f1930: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369610u, 0x2F192Cu, 0x2F1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1934u;
label_2f1934:
    // 0x2f1934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1938: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1938u;
        // 0x2f193c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1940u;
}

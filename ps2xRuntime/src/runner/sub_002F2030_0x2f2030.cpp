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

// Function: sub_002F2030
// Address: 0x2f2030 - 0x2f2090
void sub_002F2030_0x2f2030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2030_0x2f2030");
#endif

    switch (ctx->pc) {
        case 0x2f2058u: goto label_2f2058;
        case 0x2f2078u: goto label_2f2078;
        default: break;
    }

    ctx->pc = 0x2f2030u;

    // 0x2f2030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f2030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f2034: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f2034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f2038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f2038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f203c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f2040: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f2040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2044: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f2044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f2048: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f2048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f204c: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f204cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f2050: 0xc0bc2dc  jal         func_2F0B70
    ctx->pc = 0x2F2050u;
    SET_GPR_U32(ctx, 31, 0x2F2058u);
    ctx->pc = 0x2F2054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2050u;
    // 0x2f2054: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B70u, 0x2F2050u, 0x2F2058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2058u;
label_2f2058:
    // 0x2f2058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f2058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f205c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f205cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2060: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2f2060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2068: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f2068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f206c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f206cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2070: 0xc0f3628  jal         func_3CD8A0
    ctx->pc = 0x2F2070u;
    SET_GPR_U32(ctx, 31, 0x2F2078u);
    ctx->pc = 0x2F2074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2070u;
    // 0x2f2074: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD8A0u, 0x2F2070u, 0x2F2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2078u;
label_2f2078:
    // 0x2f2078: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f2078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f207c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f207cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2088: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2088u;
        // 0x2f208c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2090u;
}

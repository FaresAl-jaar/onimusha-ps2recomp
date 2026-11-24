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

// Function: sub_001E2220
// Address: 0x1e2220 - 0x1e2278
void sub_001E2220_0x1e2220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2220_0x1e2220");
#endif

    switch (ctx->pc) {
        case 0x1e223cu: goto label_1e223c;
        case 0x1e224cu: goto label_1e224c;
        default: break;
    }

    ctx->pc = 0x1e2220u;

    // 0x1e2220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e222c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2234: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1E2234u;
    SET_GPR_U32(ctx, 31, 0x1E223Cu);
    ctx->pc = 0x1E2238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2234u;
    // 0x1e2238: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E2234u, 0x1E223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E223Cu;
label_1e223c:
    // 0x1e223c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1e223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e2240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2244: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1E2244u;
    SET_GPR_U32(ctx, 31, 0x1E224Cu);
    ctx->pc = 0x1E2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2244u;
    // 0x1e2248: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E2244u, 0x1E224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E224Cu;
label_1e224c:
    // 0x1e224c: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x1e224cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1e2250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2254: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1e2254u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x1e2258: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1e2258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e225c: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x1e225cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e2260: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1e2260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e2264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e226c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e226cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2270: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2270u;
        // 0x1e2274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2278u;
}

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

// Function: sub_00201258
// Address: 0x201258 - 0x20127c
void sub_00201258_0x201258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201258_0x201258");
#endif

    ctx->pc = 0x201258u;

    // 0x201258: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x201258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x20125c: 0xac443f9c  sw          $a0, 0x3F9C($v0)
    ctx->pc = 0x20125cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x873F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x873F9Cu, _value); } while (0);
    // 0x201260: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201260u;
    {
        const bool branch_taken_0x201260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201260u;
        // 0x201264: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201260) {
            ctx->pc = 0x201274u;
            goto label_201274;
        }
    }
    ctx->pc = 0x201268u;
    // 0x201268: 0x8c830188  lw          $v1, 0x188($a0)
    ctx->pc = 0x201268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x20126c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x20126cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x201270: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x201270u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_201274:
    // 0x201274: 0x3e00008  jr          $ra
    ctx->pc = 0x201274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20127Cu;
}

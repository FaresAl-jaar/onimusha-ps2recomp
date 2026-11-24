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

// Function: sub_0025A720
// Address: 0x25a720 - 0x25a754
void sub_0025A720_0x25a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A720_0x25a720");
#endif

    switch (ctx->pc) {
        case 0x25a734u: goto label_25a734;
        default: break;
    }

    ctx->pc = 0x25a720u;

    // 0x25a720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a72c: 0xc096998  jal         func_25A660
    ctx->pc = 0x25A72Cu;
    SET_GPR_U32(ctx, 31, 0x25A734u);
    ctx->pc = 0x25A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A72Cu;
    // 0x25a730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A660u, 0x25A72Cu, 0x25A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A734u;
label_25a734:
    // 0x25a734: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x25a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25a738: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a73c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x25a73cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25a740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a748: 0x1010  mfhi        $v0
    ctx->pc = 0x25a748u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x25a74c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A74Cu;
        // 0x25a750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A754u;
}

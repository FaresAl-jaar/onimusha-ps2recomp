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

// Function: sub_0027E660
// Address: 0x27e660 - 0x27e690
void sub_0027E660_0x27e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E660_0x27e660");
#endif

    ctx->pc = 0x27e660u;

    // 0x27e660: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27e660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27e664: 0x3c048ff8  lui         $a0, 0x8FF8
    ctx->pc = 0x27e664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36856 << 16));
    // 0x27e668: 0x8c23ced4  lw          $v1, -0x312C($at)
    ctx->pc = 0x27e668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED4u));
    // 0x27e66c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x27e66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x27e670: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E670u;
    {
        const bool branch_taken_0x27e670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x27e670) {
            ctx->pc = 0x27E688u;
            goto label_27e688;
        }
    }
    ctx->pc = 0x27E678u;
    // 0x27e678: 0xa7808920  sh          $zero, -0x76E0($gp)
    ctx->pc = 0x27e678u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936864), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e67c: 0xa7808924  sh          $zero, -0x76DC($gp)
    ctx->pc = 0x27e67cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936868), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e680: 0xa7808928  sh          $zero, -0x76D8($gp)
    ctx->pc = 0x27e680u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936872), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e684: 0x0  nop
    ctx->pc = 0x27e684u;
    // NOP
label_27e688:
    // 0x27e688: 0x3e00008  jr          $ra
    ctx->pc = 0x27E688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E690u;
}

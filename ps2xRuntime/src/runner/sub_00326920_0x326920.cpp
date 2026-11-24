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

// Function: sub_00326920
// Address: 0x326920 - 0x32695c
void sub_00326920_0x326920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326920_0x326920");
#endif

    switch (ctx->pc) {
        case 0x32693cu: goto label_32693c;
        default: break;
    }

    ctx->pc = 0x326920u;

    // 0x326920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326924: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x326924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x326928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32692c: 0x24840d30  addiu       $a0, $a0, 0xD30
    ctx->pc = 0x32692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x326930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326934: 0xc049590  jal         func_125640
    ctx->pc = 0x326934u;
    SET_GPR_U32(ctx, 31, 0x32693Cu);
    ctx->pc = 0x326938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326934u;
    // 0x326938: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x326934u, 0x32693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32693Cu;
label_32693c:
    // 0x32693c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x32693cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x326940: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x326940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x326944: 0x2463cb70  addiu       $v1, $v1, -0x3490
    ctx->pc = 0x326944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953840));
    // 0x326948: 0xaf808b60  sw          $zero, -0x74A0($gp)
    ctx->pc = 0x326948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 0));
    // 0x32694c: 0xac230d38  sw          $v1, 0xD38($at)
    ctx->pc = 0x32694cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x910D38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x910D38u, _value); } while (0);
    // 0x326950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326954: 0x3e00008  jr          $ra
    ctx->pc = 0x326954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326954u;
        // 0x326958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32695Cu;
}

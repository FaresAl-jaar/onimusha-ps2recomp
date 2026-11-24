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

// Function: sub_00224EF8
// Address: 0x224ef8 - 0x224f34
void sub_00224EF8_0x224ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224EF8_0x224ef8");
#endif

    switch (ctx->pc) {
        case 0x224f1cu: goto label_224f1c;
        default: break;
    }

    ctx->pc = 0x224ef8u;

    // 0x224ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224f04: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x224f04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x224f08: 0x2610a248  addiu       $s0, $s0, -0x5DB8
    ctx->pc = 0x224f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943304));
    // 0x224f0c: 0x24060128  addiu       $a2, $zero, 0x128
    ctx->pc = 0x224f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x224f10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x224f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x224f14: 0xc049590  jal         func_125640
    ctx->pc = 0x224F14u;
    SET_GPR_U32(ctx, 31, 0x224F1Cu);
    ctx->pc = 0x224F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F14u;
    // 0x224f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x224F14u, 0x224F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F1Cu;
label_224f1c:
    // 0x224f1c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x224f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224f20: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x224f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x224f24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x224f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224f28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x224F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F2Cu;
        // 0x224f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224F34u;
}

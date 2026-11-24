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

// Function: sub_0010B9D0
// Address: 0x10b9d0 - 0x10ba14
void sub_0010B9D0_0x10b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B9D0_0x10b9d0");
#endif

    switch (ctx->pc) {
        case 0x10ba08u: goto label_10ba08;
        default: break;
    }

    ctx->pc = 0x10b9d0u;

    // 0x10b9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b9d4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10b9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b9dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10b9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10b9e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10b9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10b9e4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10b9e8: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x10b9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10b9ec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x10b9ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10b9f0: 0xace600f8  sw          $a2, 0xF8($a3)
    ctx->pc = 0x10b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 6));
    // 0x10b9f4: 0xace500ec  sw          $a1, 0xEC($a3)
    ctx->pc = 0x10b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 236), GPR_U32(ctx, 5));
    // 0x10b9f8: 0xace000f0  sw          $zero, 0xF0($a3)
    ctx->pc = 0x10b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
    // 0x10b9fc: 0xace000c4  sw          $zero, 0xC4($a3)
    ctx->pc = 0x10b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 196), GPR_U32(ctx, 0));
    // 0x10ba00: 0xc042c3a  jal         func_10B0E8
    ctx->pc = 0x10BA00u;
    SET_GPR_U32(ctx, 31, 0x10BA08u);
    ctx->pc = 0x10BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA00u;
    // 0x10ba04: 0xace000f4  sw          $zero, 0xF4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B0E8u, 0x10BA00u, 0x10BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA08u;
label_10ba08:
    // 0x10ba08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ba08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ba0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA0Cu;
        // 0x10ba10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BA14u;
}

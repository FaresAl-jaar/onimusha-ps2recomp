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

// Function: sub_00361660
// Address: 0x361660 - 0x36168c
void sub_00361660_0x361660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361660_0x361660");
#endif

    switch (ctx->pc) {
        case 0x361674u: goto label_361674;
        default: break;
    }

    ctx->pc = 0x361660u;

    // 0x361660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x361660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x361664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x361664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x361668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36166c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x36166Cu;
    SET_GPR_U32(ctx, 31, 0x361674u);
    ctx->pc = 0x361670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36166Cu;
    // 0x361670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x36166Cu, 0x361674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361674u;
label_361674:
    // 0x361674: 0xa6002b32  sh          $zero, 0x2B32($s0)
    ctx->pc = 0x361674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 0));
    // 0x361678: 0xa2002b34  sb          $zero, 0x2B34($s0)
    ctx->pc = 0x361678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11060), (uint8_t)GPR_U32(ctx, 0));
    // 0x36167c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361684: 0x3e00008  jr          $ra
    ctx->pc = 0x361684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361684u;
        // 0x361688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36168Cu;
}

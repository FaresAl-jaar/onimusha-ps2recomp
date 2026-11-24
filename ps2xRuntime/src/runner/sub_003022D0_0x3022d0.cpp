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

// Function: sub_003022D0
// Address: 0x3022d0 - 0x302318
void sub_003022D0_0x3022d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003022D0_0x3022d0");
#endif

    switch (ctx->pc) {
        case 0x3022e8u: goto label_3022e8;
        default: break;
    }

    ctx->pc = 0x3022d0u;

    // 0x3022d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3022d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3022d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3022d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3022d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3022dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3022dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3022e0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3022E0u;
    SET_GPR_U32(ctx, 31, 0x3022E8u);
    ctx->pc = 0x3022E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022E0u;
    // 0x3022e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3022E0u, 0x3022E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022E8u;
label_3022e8:
    // 0x3022e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3022E8u;
    {
        const bool branch_taken_0x3022e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3022e8) {
            ctx->pc = 0x302300u;
            goto label_302300;
        }
    }
    ctx->pc = 0x3022F0u;
    // 0x3022f0: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3022f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3022f4: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x3022f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
    // 0x3022f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3022F8u;
    {
        const bool branch_taken_0x3022f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3022FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3022F8u;
        // 0x3022fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3022f8) {
            ctx->pc = 0x302308u;
            goto label_302308;
        }
    }
    ctx->pc = 0x302300u;
label_302300:
    // 0x302300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x302300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302304: 0x0  nop
    ctx->pc = 0x302304u;
    // NOP
label_302308:
    // 0x302308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30230c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30230cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302310: 0x3e00008  jr          $ra
    ctx->pc = 0x302310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302310u;
        // 0x302314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302318u;
}

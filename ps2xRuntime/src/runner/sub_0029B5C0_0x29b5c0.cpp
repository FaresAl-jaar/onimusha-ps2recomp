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

// Function: sub_0029B5C0
// Address: 0x29b5c0 - 0x29b618
void sub_0029B5C0_0x29b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B5C0_0x29b5c0");
#endif

    switch (ctx->pc) {
        case 0x29b5e4u: goto label_29b5e4;
        default: break;
    }

    ctx->pc = 0x29b5c0u;

    // 0x29b5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5d0: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x29b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x29b5d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B5D4u;
    {
        const bool branch_taken_0x29b5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b5d4) {
            ctx->pc = 0x29B5E8u;
            goto label_29b5e8;
        }
    }
    ctx->pc = 0x29B5DCu;
    // 0x29b5dc: 0xc0a83c8  jal         func_2A0F20
    ctx->pc = 0x29B5DCu;
    SET_GPR_U32(ctx, 31, 0x29B5E4u);
    ctx->pc = 0x2A0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0F20u, 0x29B5DCu, 0x29B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B5E4u;
label_29b5e4:
    // 0x29b5e4: 0x0  nop
    ctx->pc = 0x29b5e4u;
    // NOP
label_29b5e8:
    // 0x29b5e8: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x29b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x29b5ec: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x29b5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29b5f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B5F0u;
    {
        const bool branch_taken_0x29b5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b5f0) {
            ctx->pc = 0x29B608u;
            goto label_29b608;
        }
    }
    ctx->pc = 0x29B5F8u;
    // 0x29b5f8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x29b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29b5fc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29b5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29b600: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x29b600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x29b604: 0x0  nop
    ctx->pc = 0x29b604u;
    // NOP
label_29b608:
    // 0x29b608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b60c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b610: 0x3e00008  jr          $ra
    ctx->pc = 0x29B610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B610u;
        // 0x29b614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B618u;
}

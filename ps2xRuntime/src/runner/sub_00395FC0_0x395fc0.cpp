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

// Function: sub_00395FC0
// Address: 0x395fc0 - 0x396008
void sub_00395FC0_0x395fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395FC0_0x395fc0");
#endif

    switch (ctx->pc) {
        case 0x395ff0u: goto label_395ff0;
        default: break;
    }

    ctx->pc = 0x395fc0u;

    // 0x395fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x395fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x395fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x395fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x395fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x395fcc: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x395fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x395fd0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x395fd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395fd4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x395FD4u;
    {
        const bool branch_taken_0x395fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x395FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FD4u;
        // 0x395fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395fd4) {
            ctx->pc = 0x395FF8u;
            goto label_395ff8;
        }
    }
    ctx->pc = 0x395FDCu;
    // 0x395fdc: 0x92032b37  lbu         $v1, 0x2B37($s0)
    ctx->pc = 0x395fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11063)));
    // 0x395fe0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x395FE0u;
    {
        const bool branch_taken_0x395fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x395fe0) {
            ctx->pc = 0x395FF8u;
            goto label_395ff8;
        }
    }
    ctx->pc = 0x395FE8u;
    // 0x395fe8: 0xc0e53c8  jal         func_394F20
    ctx->pc = 0x395FE8u;
    SET_GPR_U32(ctx, 31, 0x395FF0u);
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x395FE8u, 0x395FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395FF0u;
label_395ff0:
    // 0x395ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x395ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395ff4: 0xa2032b37  sb          $v1, 0x2B37($s0)
    ctx->pc = 0x395ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11063), (uint8_t)GPR_U32(ctx, 3));
label_395ff8:
    // 0x395ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x395ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396000: 0x3e00008  jr          $ra
    ctx->pc = 0x396000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396000u;
        // 0x396004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396008u;
}

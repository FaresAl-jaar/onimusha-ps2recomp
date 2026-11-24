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

// Function: sub_00338D80
// Address: 0x338d80 - 0x338dc4
void sub_00338D80_0x338d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338D80_0x338d80");
#endif

    switch (ctx->pc) {
        case 0x338db8u: goto label_338db8;
        default: break;
    }

    ctx->pc = 0x338d80u;

    // 0x338d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338d84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x338d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x338d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338d8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x338d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x338d90: 0x8c28cee4  lw          $t0, -0x311C($at)
    ctx->pc = 0x338d90u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEE4u));
    // 0x338d94: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x338d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x338d98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x338D98u;
    {
        const bool branch_taken_0x338d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D98u;
        // 0x338d9c: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d98) {
            ctx->pc = 0x338DB8u;
            goto label_338db8;
        }
    }
    ctx->pc = 0x338DA0u;
    // 0x338da0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x338da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x338da4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x338da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338da8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x338DA8u;
    {
        const bool branch_taken_0x338da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DA8u;
        // 0x338dac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338da8) {
            ctx->pc = 0x338DB8u;
            goto label_338db8;
        }
    }
    ctx->pc = 0x338DB0u;
    // 0x338db0: 0xc09365e  jal         func_24D978
    ctx->pc = 0x338DB0u;
    SET_GPR_U32(ctx, 31, 0x338DB8u);
    ctx->pc = 0x338DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DB0u;
    // 0x338db4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D978u, 0x338DB0u, 0x338DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DB8u;
label_338db8:
    // 0x338db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x338DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DBCu;
        // 0x338dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338DC4u;
}

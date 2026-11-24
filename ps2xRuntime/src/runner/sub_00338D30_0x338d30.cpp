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

// Function: sub_00338D30
// Address: 0x338d30 - 0x338d7c
void sub_00338D30_0x338d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338D30_0x338d30");
#endif

    switch (ctx->pc) {
        case 0x338d6cu: goto label_338d6c;
        default: break;
    }

    ctx->pc = 0x338d30u;

    // 0x338d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338d34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x338d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x338d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338d3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x338d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x338d40: 0x8c27cee4  lw          $a3, -0x311C($at)
    ctx->pc = 0x338d40u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEE4u));
    // 0x338d44: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x338d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x338d48: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x338D48u;
    {
        const bool branch_taken_0x338d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D48u;
        // 0x338d4c: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d48) {
            ctx->pc = 0x338D70u;
            goto label_338d70;
        }
    }
    ctx->pc = 0x338D50u;
    // 0x338d50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x338d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x338d54: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x338d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x338d58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x338d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338d5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338D5Cu;
    {
        const bool branch_taken_0x338d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D5Cu;
        // 0x338d60: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d5c) {
            ctx->pc = 0x338D70u;
            goto label_338d70;
        }
    }
    ctx->pc = 0x338D64u;
    // 0x338d64: 0xc08ea76  jal         func_23A9D8
    ctx->pc = 0x338D64u;
    SET_GPR_U32(ctx, 31, 0x338D6Cu);
    ctx->pc = 0x23A9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A9D8u, 0x338D64u, 0x338D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D6Cu;
label_338d6c:
    // 0x338d6c: 0x0  nop
    ctx->pc = 0x338d6cu;
    // NOP
label_338d70:
    // 0x338d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338d74: 0x3e00008  jr          $ra
    ctx->pc = 0x338D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D74u;
        // 0x338d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338D7Cu;
}

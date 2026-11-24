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

// Function: sub_00323D30
// Address: 0x323d30 - 0x323d70
void sub_00323D30_0x323d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323D30_0x323d30");
#endif

    switch (ctx->pc) {
        case 0x323d48u: goto label_323d48;
        case 0x323d54u: goto label_323d54;
        case 0x323d60u: goto label_323d60;
        default: break;
    }

    ctx->pc = 0x323d30u;

    // 0x323d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323d3c: 0x8c850550  lw          $a1, 0x550($a0)
    ctx->pc = 0x323d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x323d40: 0xc0c0844  jal         func_302110
    ctx->pc = 0x323D40u;
    SET_GPR_U32(ctx, 31, 0x323D48u);
    ctx->pc = 0x323D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D40u;
    // 0x323d44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x323D40u, 0x323D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D48u;
label_323d48:
    // 0x323d48: 0x8e050554  lw          $a1, 0x554($s0)
    ctx->pc = 0x323d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x323d4c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x323D4Cu;
    SET_GPR_U32(ctx, 31, 0x323D54u);
    ctx->pc = 0x323D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D4Cu;
    // 0x323d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x323D4Cu, 0x323D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D54u;
label_323d54:
    // 0x323d54: 0x8e050558  lw          $a1, 0x558($s0)
    ctx->pc = 0x323d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x323d58: 0xc0c0844  jal         func_302110
    ctx->pc = 0x323D58u;
    SET_GPR_U32(ctx, 31, 0x323D60u);
    ctx->pc = 0x323D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D58u;
    // 0x323d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x323D58u, 0x323D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D60u;
label_323d60:
    // 0x323d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323d68: 0x3e00008  jr          $ra
    ctx->pc = 0x323D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D68u;
        // 0x323d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323D70u;
}

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

// Function: sub_0033EBC0
// Address: 0x33ebc0 - 0x33ebf4
void sub_0033EBC0_0x33ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EBC0_0x33ebc0");
#endif

    switch (ctx->pc) {
        case 0x33ebe0u: goto label_33ebe0;
        default: break;
    }

    ctx->pc = 0x33ebc0u;

    // 0x33ebc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ebc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33ebc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33ebcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ebd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ebd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ebd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ebd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebd8: 0xc0a92fc  jal         func_2A4BF0
    ctx->pc = 0x33EBD8u;
    SET_GPR_U32(ctx, 31, 0x33EBE0u);
    ctx->pc = 0x33EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EBD8u;
    // 0x33ebdc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4BF0u, 0x33EBD8u, 0x33EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EBE0u;
label_33ebe0:
    // 0x33ebe0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x33ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x33ebe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33ebe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ebe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ebe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ebec: 0x3e00008  jr          $ra
    ctx->pc = 0x33EBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EBECu;
        // 0x33ebf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EBF4u;
}

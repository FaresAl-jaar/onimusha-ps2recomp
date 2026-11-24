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

// Function: sub_00218D98
// Address: 0x218d98 - 0x218ddc
void sub_00218D98_0x218d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218D98_0x218d98");
#endif

    switch (ctx->pc) {
        case 0x218dc0u: goto label_218dc0;
        default: break;
    }

    ctx->pc = 0x218d98u;

    // 0x218d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218da0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x218da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218da8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x218dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x218db0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x218db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x218db4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x218db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218db8: 0xc049522  jal         func_125488
    ctx->pc = 0x218DB8u;
    SET_GPR_U32(ctx, 31, 0x218DC0u);
    ctx->pc = 0x218DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DB8u;
    // 0x218dbc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x218DB8u, 0x218DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DC0u;
label_218dc0:
    // 0x218dc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x218dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218dc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x218dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218dc8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x218dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x218dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218dd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x218DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DD4u;
        // 0x218dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218DDCu;
}

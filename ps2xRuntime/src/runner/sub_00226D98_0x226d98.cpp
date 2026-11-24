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

// Function: sub_00226D98
// Address: 0x226d98 - 0x226de4
void sub_00226D98_0x226d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226D98_0x226d98");
#endif

    switch (ctx->pc) {
        case 0x226dbcu: goto label_226dbc;
        case 0x226dd0u: goto label_226dd0;
        default: break;
    }

    ctx->pc = 0x226d98u;

    // 0x226d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226d9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x226d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x226da0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x226da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226da4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x226da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x226da8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x226da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x226dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x226db0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x226db4: 0xc089aaa  jal         func_226AA8
    ctx->pc = 0x226DB4u;
    SET_GPR_U32(ctx, 31, 0x226DBCu);
    ctx->pc = 0x226DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DB4u;
    // 0x226db8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226AA8u, 0x226DB4u, 0x226DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DBCu;
label_226dbc:
    // 0x226dbc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x226dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dc4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x226dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x226dc8: 0xc089b7a  jal         func_226DE8
    ctx->pc = 0x226DC8u;
    SET_GPR_U32(ctx, 31, 0x226DD0u);
    ctx->pc = 0x226DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DC8u;
    // 0x226dcc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226DE8u, 0x226DC8u, 0x226DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DD0u;
label_226dd0:
    // 0x226dd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x226dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226dd4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x226dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226dd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x226DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DDCu;
        // 0x226de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226DE4u;
}

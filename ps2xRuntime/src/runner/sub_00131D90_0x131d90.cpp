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

// Function: sub_00131D90
// Address: 0x131d90 - 0x131de8
void sub_00131D90_0x131d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131D90_0x131d90");
#endif

    switch (ctx->pc) {
        case 0x131dacu: goto label_131dac;
        case 0x131dd4u: goto label_131dd4;
        default: break;
    }

    ctx->pc = 0x131d90u;

    // 0x131d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131da4: 0xc04c77c  jal         func_131DF0
    ctx->pc = 0x131DA4u;
    SET_GPR_U32(ctx, 31, 0x131DACu);
    ctx->pc = 0x131DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131DA4u;
    // 0x131da8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131DF0u, 0x131DA4u, 0x131DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131DACu;
label_131dac:
    // 0x131dac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x131dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x131db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131db4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x131db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x131db8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x131db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131dbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x131dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x131dc0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x131dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x131dc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131dc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x131dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x131dcc: 0xc049590  jal         func_125640
    ctx->pc = 0x131DCCu;
    SET_GPR_U32(ctx, 31, 0x131DD4u);
    ctx->pc = 0x131DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131DCCu;
    // 0x131dd0: 0x244404ac  addiu       $a0, $v0, 0x4AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x131DCCu, 0x131DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131DD4u;
label_131dd4:
    // 0x131dd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131de0: 0x3e00008  jr          $ra
    ctx->pc = 0x131DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131DE0u;
        // 0x131de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131DE8u;
}

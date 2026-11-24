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

// Function: sub_0039BDB0
// Address: 0x39bdb0 - 0x39bdd8
void sub_0039BDB0_0x39bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BDB0_0x39bdb0");
#endif

    switch (ctx->pc) {
        case 0x39bdc4u: goto label_39bdc4;
        default: break;
    }

    ctx->pc = 0x39bdb0u;

    // 0x39bdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39bdb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39bdb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39bdbc: 0xc0e6f38  jal         func_39BCE0
    ctx->pc = 0x39BDBCu;
    SET_GPR_U32(ctx, 31, 0x39BDC4u);
    ctx->pc = 0x39BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BDBCu;
    // 0x39bdc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BCE0u, 0x39BDBCu, 0x39BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BDC4u;
label_39bdc4:
    // 0x39bdc4: 0xae022bf4  sw          $v0, 0x2BF4($s0)
    ctx->pc = 0x39bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11252), GPR_U32(ctx, 2));
    // 0x39bdc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39bdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bdcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39bdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x39BDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDD0u;
        // 0x39bdd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BDD8u;
}

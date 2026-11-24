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

// Function: sub_00275FA0
// Address: 0x275fa0 - 0x275fec
void sub_00275FA0_0x275fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275FA0_0x275fa0");
#endif

    switch (ctx->pc) {
        case 0x275fd8u: goto label_275fd8;
        default: break;
    }

    ctx->pc = 0x275fa0u;

    // 0x275fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275fa4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x275fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x275fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275fac: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x275facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x275fb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x275fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x275fb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275FB4u;
    {
        const bool branch_taken_0x275fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FB4u;
        // 0x275fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fb4) {
            ctx->pc = 0x275FC8u;
            goto label_275fc8;
        }
    }
    ctx->pc = 0x275FBCu;
    // 0x275fbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275FBCu;
    {
        const bool branch_taken_0x275fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275fbc) {
            ctx->pc = 0x275FE0u;
            goto label_275fe0;
        }
    }
    ctx->pc = 0x275FC4u;
    // 0x275fc4: 0x0  nop
    ctx->pc = 0x275fc4u;
    // NOP
label_275fc8:
    // 0x275fc8: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x275fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x275fcc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x275fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x275fd0: 0xc0a2424  jal         func_289090
    ctx->pc = 0x275FD0u;
    SET_GPR_U32(ctx, 31, 0x275FD8u);
    ctx->pc = 0x275FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275FD0u;
    // 0x275fd4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x289090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289090u, 0x275FD0u, 0x275FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275FD8u;
label_275fd8:
    // 0x275fd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275fdc: 0x0  nop
    ctx->pc = 0x275fdcu;
    // NOP
label_275fe0:
    // 0x275fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x275FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FE4u;
        // 0x275fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275FECu;
}

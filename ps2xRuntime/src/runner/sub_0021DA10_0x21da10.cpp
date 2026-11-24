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

// Function: sub_0021DA10
// Address: 0x21da10 - 0x21da68
void sub_0021DA10_0x21da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DA10_0x21da10");
#endif

    switch (ctx->pc) {
        case 0x21da24u: goto label_21da24;
        case 0x21da50u: goto label_21da50;
        default: break;
    }

    ctx->pc = 0x21da10u;

    // 0x21da10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21da14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21da14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21da18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21da1c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21DA1Cu;
    SET_GPR_U32(ctx, 31, 0x21DA24u);
    ctx->pc = 0x21DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA1Cu;
    // 0x21da20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21DA1Cu, 0x21DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA24u;
label_21da24:
    // 0x21da24: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21da24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21da28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21da28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21DA2Cu;
    {
        const bool branch_taken_0x21da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA2Cu;
        // 0x21da30: 0x34a50133  ori         $a1, $a1, 0x133 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)307);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da2c) {
            ctx->pc = 0x21DA48u;
            goto label_21da48;
        }
    }
    ctx->pc = 0x21DA34u;
    // 0x21da34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21da34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21da38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21da38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21da3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21da40: 0x80848e0  j           func_212380
    ctx->pc = 0x21DA40u;
    ctx->pc = 0x21DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA40u;
    // 0x21da44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21DA48u;
label_21da48:
    // 0x21da48: 0xc08769a  jal         func_21DA68
    ctx->pc = 0x21DA48u;
    SET_GPR_U32(ctx, 31, 0x21DA50u);
    ctx->pc = 0x21DA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA68u, 0x21DA48u, 0x21DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA50u;
label_21da50:
    // 0x21da50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21da54: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x21da54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x21da58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21da58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21da5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21da5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21da60: 0x3e00008  jr          $ra
    ctx->pc = 0x21DA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA60u;
        // 0x21da64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DA68u;
}

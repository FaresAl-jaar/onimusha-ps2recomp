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

// Function: sub_0025AC80
// Address: 0x25ac80 - 0x25acdc
void sub_0025AC80_0x25ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AC80_0x25ac80");
#endif

    switch (ctx->pc) {
        case 0x25acc8u: goto label_25acc8;
        default: break;
    }

    ctx->pc = 0x25ac80u;

    // 0x25ac80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ac84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ac88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ac8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ac8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac90: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x25AC90u;
    {
        const bool branch_taken_0x25ac90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC90u;
        // 0x25ac94: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac90) {
            ctx->pc = 0x25ACC8u;
            goto label_25acc8;
        }
    }
    ctx->pc = 0x25AC98u;
    // 0x25ac98: 0x244273b0  addiu       $v0, $v0, 0x73B0
    ctx->pc = 0x25ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29616));
    // 0x25ac9c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AC9Cu;
    {
        const bool branch_taken_0x25ac9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC9Cu;
        // 0x25aca0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac9c) {
            ctx->pc = 0x25ACB0u;
            goto label_25acb0;
        }
    }
    ctx->pc = 0x25ACA4u;
    // 0x25aca4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x25aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x25aca8: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x25aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x25acac: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x25acacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_25acb0:
    // 0x25acb0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x25acb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x25acb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25acb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25acb8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ACB8u;
    {
        const bool branch_taken_0x25acb8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x25ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACB8u;
        // 0x25acbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acb8) {
            ctx->pc = 0x25ACC8u;
            goto label_25acc8;
        }
    }
    ctx->pc = 0x25ACC0u;
    // 0x25acc0: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x25ACC0u;
    SET_GPR_U32(ctx, 31, 0x25ACC8u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x25ACC0u, 0x25ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACC8u;
label_25acc8:
    // 0x25acc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25acc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25accc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25acccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25acd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25acd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25acd4: 0x3e00008  jr          $ra
    ctx->pc = 0x25ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACD4u;
        // 0x25acd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ACDCu;
}

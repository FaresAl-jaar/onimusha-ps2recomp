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

// Function: sub_00213FF0
// Address: 0x213ff0 - 0x214050
void sub_00213FF0_0x213ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213FF0_0x213ff0");
#endif

    switch (ctx->pc) {
        case 0x214004u: goto label_214004;
        case 0x214038u: goto label_214038;
        default: break;
    }

    ctx->pc = 0x213ff0u;

    // 0x213ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213ff8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213ffc: 0xc084c2a  jal         func_2130A8
    ctx->pc = 0x213FFCu;
    SET_GPR_U32(ctx, 31, 0x214004u);
    ctx->pc = 0x214000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FFCu;
    // 0x214000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2130A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2130A8u, 0x213FFCu, 0x214004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214004u;
label_214004:
    // 0x214004: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x214004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x214008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21400c: 0x26100a0c  addiu       $s0, $s0, 0xA0C
    ctx->pc = 0x21400cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
    // 0x214010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214014: 0x1cc00002  bgtz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x214014u;
    {
        const bool branch_taken_0x214014 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x214018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214014u;
        // 0x214018: 0x8e070058  lw          $a3, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214014) {
            ctx->pc = 0x214020u;
            goto label_214020;
        }
    }
    ctx->pc = 0x21401Cu;
    // 0x21401c: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x21401cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_214020:
    // 0x214020: 0x6102a  slt         $v0, $zero, $a2
    ctx->pc = 0x214020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x214024: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x214024u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x214028: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x214028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x21402c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21402cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214030: 0xc083e90  jal         func_20FA40
    ctx->pc = 0x214030u;
    SET_GPR_U32(ctx, 31, 0x214038u);
    ctx->pc = 0x214034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214030u;
    // 0x214034: 0xe3800a  movz        $s0, $a3, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA40u, 0x214030u, 0x214038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214038u;
label_214038:
    // 0x214038: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x214038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x21403c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21403cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214040: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214044: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x214044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x214048: 0x3e00008  jr          $ra
    ctx->pc = 0x214048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214048u;
        // 0x21404c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214050u;
}

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

// Function: sub_00363D60
// Address: 0x363d60 - 0x363dfc
void sub_00363D60_0x363d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363D60_0x363d60");
#endif

    switch (ctx->pc) {
        case 0x363d94u: goto label_363d94;
        case 0x363dccu: goto label_363dcc;
        default: break;
    }

    ctx->pc = 0x363d60u;

    // 0x363d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x363d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x363d64: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x363d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x363d68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x363d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x363d6c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x363d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x363d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x363d74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363d78: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x363d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x363d7c: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x363d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x363d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x363d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x363d84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363d88: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x363d88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363d8c: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x363D8Cu;
    SET_GPR_U32(ctx, 31, 0x363D94u);
    ctx->pc = 0x363D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363D8Cu;
    // 0x363d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x363D8Cu, 0x363D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363D94u;
label_363d94:
    // 0x363d94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x363d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363d98: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363D98u;
    {
        const bool branch_taken_0x363d98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x363d98) {
            ctx->pc = 0x363DA8u;
            goto label_363da8;
        }
    }
    ctx->pc = 0x363DA0u;
    // 0x363da0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x363DA0u;
    {
        const bool branch_taken_0x363da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363DA0u;
        // 0x363da4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363da0) {
            ctx->pc = 0x363DE8u;
            goto label_363de8;
        }
    }
    ctx->pc = 0x363DA8u;
label_363da8:
    // 0x363da8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x363da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x363dac: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x363dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x363db0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x363db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x363db4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x363db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x363db8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x363db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x363dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363dc0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x363dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363dc4: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x363DC4u;
    SET_GPR_U32(ctx, 31, 0x363DCCu);
    ctx->pc = 0x363DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363DC4u;
    // 0x363dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x363DC4u, 0x363DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363DCCu;
label_363dcc:
    // 0x363dcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x363dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363dd0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363DD0u;
    {
        const bool branch_taken_0x363dd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x363dd0) {
            ctx->pc = 0x363DE0u;
            goto label_363de0;
        }
    }
    ctx->pc = 0x363DD8u;
    // 0x363dd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x363DD8u;
    {
        const bool branch_taken_0x363dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363DD8u;
        // 0x363ddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363dd8) {
            ctx->pc = 0x363DE8u;
            goto label_363de8;
        }
    }
    ctx->pc = 0x363DE0u;
label_363de0:
    // 0x363de0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x363de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363de4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x363de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_363de8:
    // 0x363de8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x363de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363dec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x363decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363df0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363df4: 0x3e00008  jr          $ra
    ctx->pc = 0x363DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363DF4u;
        // 0x363df8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363DFCu;
}

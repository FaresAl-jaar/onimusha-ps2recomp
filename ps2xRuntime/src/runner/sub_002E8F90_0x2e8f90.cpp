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

// Function: sub_002E8F90
// Address: 0x2e8f90 - 0x2e9000
void sub_002E8F90_0x2e8f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8F90_0x2e8f90");
#endif

    switch (ctx->pc) {
        case 0x2e8fbcu: goto label_2e8fbc;
        case 0x2e8fd4u: goto label_2e8fd4;
        case 0x2e8fe8u: goto label_2e8fe8;
        default: break;
    }

    ctx->pc = 0x2e8f90u;

    // 0x2e8f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8f94: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2e8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e8f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e8f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8fa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8fb0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e8fb4: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x2E8FB4u;
    SET_GPR_U32(ctx, 31, 0x2E8FBCu);
    ctx->pc = 0x2E8FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FB4u;
    // 0x2e8fb8: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x2E8FB4u, 0x2E8FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FBCu;
label_2e8fbc:
    // 0x2e8fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fc0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8FC0u;
    {
        const bool branch_taken_0x2e8fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FC0u;
        // 0x2e8fc4: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fc0) {
            ctx->pc = 0x2E8FE8u;
            goto label_2e8fe8;
        }
    }
    ctx->pc = 0x2E8FC8u;
    // 0x2e8fc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e8fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fcc: 0xc0ba420  jal         func_2E9080
    ctx->pc = 0x2E8FCCu;
    SET_GPR_U32(ctx, 31, 0x2E8FD4u);
    ctx->pc = 0x2E8FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FCCu;
    // 0x2e8fd0: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9080u, 0x2E8FCCu, 0x2E8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FD4u;
label_2e8fd4:
    // 0x2e8fd4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e8fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e8fd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e8fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fdc: 0x2484b7f0  addiu       $a0, $a0, -0x4810
    ctx->pc = 0x2e8fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    // 0x2e8fe0: 0xc0ba42c  jal         func_2E90B0
    ctx->pc = 0x2E8FE0u;
    SET_GPR_U32(ctx, 31, 0x2E8FE8u);
    ctx->pc = 0x2E8FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FE0u;
    // 0x2e8fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E90B0u, 0x2E8FE0u, 0x2E8FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FE8u;
label_2e8fe8:
    // 0x2e8fe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e8fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FF8u;
        // 0x2e8ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9000u;
}

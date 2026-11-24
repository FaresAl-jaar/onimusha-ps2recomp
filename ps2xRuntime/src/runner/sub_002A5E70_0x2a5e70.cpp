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

// Function: sub_002A5E70
// Address: 0x2a5e70 - 0x2a5f00
void sub_002A5E70_0x2a5e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5E70_0x2a5e70");
#endif

    switch (ctx->pc) {
        case 0x2a5ec0u: goto label_2a5ec0;
        case 0x2a5ee8u: goto label_2a5ee8;
        default: break;
    }

    ctx->pc = 0x2a5e70u;

    // 0x2a5e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a5e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a5e74: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a5e78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a5e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a5e7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a5e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a5e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a5e84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a5e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a5e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a5e8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a5e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a5e94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a5e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e98: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a5e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e9c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a5e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a5ea0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a5ea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ea8: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a5ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a5eac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a5eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5eb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5eb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5eb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a5eb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5eb8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A5EB8u;
    SET_GPR_U32(ctx, 31, 0x2A5EC0u);
    ctx->pc = 0x2A5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5EB8u;
    // 0x2a5ebc: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A5EB8u, 0x2A5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EC0u;
label_2a5ec0:
    // 0x2a5ec0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a5ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ec4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a5ec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ec8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a5ec8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ed0: 0x24057d5c  addiu       $a1, $zero, 0x7D5C
    ctx->pc = 0x2a5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32092));
    // 0x2a5ed4: 0x24060174  addiu       $a2, $zero, 0x174
    ctx->pc = 0x2a5ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x2a5ed8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5edc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5edcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ee0: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A5EE0u;
    SET_GPR_U32(ctx, 31, 0x2A5EE8u);
    ctx->pc = 0x2A5EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5EE0u;
    // 0x2a5ee4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A5EE0u, 0x2A5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EE8u;
label_2a5ee8:
    // 0x2a5ee8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a5ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5eec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a5eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5ef0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a5ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5ef4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EF8u;
        // 0x2a5efc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5F00u;
}

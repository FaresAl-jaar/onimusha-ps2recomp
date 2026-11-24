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

// Function: sub_002E9000
// Address: 0x2e9000 - 0x2e907c
void sub_002E9000_0x2e9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9000_0x2e9000");
#endif

    switch (ctx->pc) {
        case 0x2e9034u: goto label_2e9034;
        case 0x2e904cu: goto label_2e904c;
        case 0x2e9060u: goto label_2e9060;
        default: break;
    }

    ctx->pc = 0x2e9000u;

    // 0x2e9000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e9004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9008: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e9008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e900c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e900cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9010: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e9014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9018: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e9018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e901c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e901cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9020: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e9020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e9024: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x2e9024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x2e9028: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2e9028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e902c: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x2E902Cu;
    SET_GPR_U32(ctx, 31, 0x2E9034u);
    ctx->pc = 0x2E9030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E902Cu;
    // 0x2e9030: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x2E902Cu, 0x2E9034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9034u;
label_2e9034:
    // 0x2e9034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9038: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E9038u;
    {
        const bool branch_taken_0x2e9038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9038u;
        // 0x2e903c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9038) {
            ctx->pc = 0x2E9060u;
            goto label_2e9060;
        }
    }
    ctx->pc = 0x2E9040u;
    // 0x2e9040: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e9040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9044: 0xc0ba420  jal         func_2E9080
    ctx->pc = 0x2E9044u;
    SET_GPR_U32(ctx, 31, 0x2E904Cu);
    ctx->pc = 0x2E9048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9044u;
    // 0x2e9048: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9080u, 0x2E9044u, 0x2E904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E904Cu;
label_2e904c:
    // 0x2e904c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e904cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e9050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e9050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9054: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e9054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9058: 0xc0ba42c  jal         func_2E90B0
    ctx->pc = 0x2E9058u;
    SET_GPR_U32(ctx, 31, 0x2E9060u);
    ctx->pc = 0x2E905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9058u;
    // 0x2e905c: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E90B0u, 0x2E9058u, 0x2E9060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9060u;
label_2e9060:
    // 0x2e9060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e9060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9064: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e9064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9068: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e9068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e906c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e906cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9074: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9074u;
        // 0x2e9078: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E907Cu;
}

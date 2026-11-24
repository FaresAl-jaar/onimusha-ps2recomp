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

// Function: sub_002B4030
// Address: 0x2b4030 - 0x2b40a4
void sub_002B4030_0x2b4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4030_0x2b4030");
#endif

    switch (ctx->pc) {
        case 0x2b4054u: goto label_2b4054;
        case 0x2b4078u: goto label_2b4078;
        default: break;
    }

    ctx->pc = 0x2b4030u;

    // 0x2b4030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4034: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b4034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b4038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b403c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b4040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b4040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4044: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b4044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b4048: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b4048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b404c: 0xc0ad0bc  jal         func_2B42F0
    ctx->pc = 0x2B404Cu;
    SET_GPR_U32(ctx, 31, 0x2B4054u);
    ctx->pc = 0x2B4050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B404Cu;
    // 0x2b4050: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F0u, 0x2B404Cu, 0x2B4054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4054u;
label_2b4054:
    // 0x2b4054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4058: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4058u;
    {
        const bool branch_taken_0x2b4058 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4058) {
            ctx->pc = 0x2B4068u;
            goto label_2b4068;
        }
    }
    ctx->pc = 0x2B4060u;
    // 0x2b4060: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B4060u;
    {
        const bool branch_taken_0x2b4060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4060u;
        // 0x2b4064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4060) {
            ctx->pc = 0x2B4090u;
            goto label_2b4090;
        }
    }
    ctx->pc = 0x2B4068u;
label_2b4068:
    // 0x2b4068: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b4068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b406c: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b4070: 0xc0acf28  jal         func_2B3CA0
    ctx->pc = 0x2B4070u;
    SET_GPR_U32(ctx, 31, 0x2B4078u);
    ctx->pc = 0x2B4074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4070u;
    // 0x2b4074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3CA0u, 0x2B4070u, 0x2B4078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4078u;
label_2b4078:
    // 0x2b4078: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2b4078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2b407c: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x2b407cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x2b4080: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x2b4080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2b4084: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2b4084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2b4088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b4088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b408c: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x2b408cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
label_2b4090:
    // 0x2b4090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b4090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b409c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B409Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B409Cu;
        // 0x2b40a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B409Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B40A4u;
}

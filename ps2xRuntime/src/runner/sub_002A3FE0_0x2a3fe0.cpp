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

// Function: sub_002A3FE0
// Address: 0x2a3fe0 - 0x2a4080
void sub_002A3FE0_0x2a3fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3FE0_0x2a3fe0");
#endif

    switch (ctx->pc) {
        case 0x2a4038u: goto label_2a4038;
        case 0x2a4064u: goto label_2a4064;
        default: break;
    }

    ctx->pc = 0x2a3fe0u;

    // 0x2a3fe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a3fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a3fe4: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x2a3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x2a3fe8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a3fec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a3fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ff0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a3ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a3ff4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a3ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ff8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a3ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a3ffc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a3ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4000: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a4000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a4004: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a4004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4008: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a400c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a400cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4010: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a4010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4014: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a4014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a4018: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a4018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a401c: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a401cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a4020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4024: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a4024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4028: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4028u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a402c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a402cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4030: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A4030u;
    SET_GPR_U32(ctx, 31, 0x2A4038u);
    ctx->pc = 0x2A4034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4030u;
    // 0x2a4034: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A4030u, 0x2A4038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4038u;
label_2a4038:
    // 0x2a4038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a403c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a403cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4040: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a4040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4044: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a4044u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a404c: 0x240509d8  addiu       $a1, $zero, 0x9D8
    ctx->pc = 0x2a404cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2520));
    // 0x2a4050: 0x240600a4  addiu       $a2, $zero, 0xA4
    ctx->pc = 0x2a4050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x2a4054: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4058: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4058u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a405c: 0xc097c20  jal         func_25F080
    ctx->pc = 0x2A405Cu;
    SET_GPR_U32(ctx, 31, 0x2A4064u);
    ctx->pc = 0x2A4060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A405Cu;
    // 0x2a4060: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F080u, 0x2A405Cu, 0x2A4064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4064u;
label_2a4064:
    // 0x2a4064: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a4064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4068: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a4068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a406c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a406cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4070: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a4070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4074: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a4074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4078: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4078u;
        // 0x2a407c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4080u;
}

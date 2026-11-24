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

// Function: sub_002A4120
// Address: 0x2a4120 - 0x2a41b0
void sub_002A4120_0x2a4120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4120_0x2a4120");
#endif

    switch (ctx->pc) {
        case 0x2a4170u: goto label_2a4170;
        case 0x2a4198u: goto label_2a4198;
        default: break;
    }

    ctx->pc = 0x2a4120u;

    // 0x2a4120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a4120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a4124: 0x3c022f00  lui         $v0, 0x2F00
    ctx->pc = 0x2a4124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12032 << 16));
    // 0x2a4128: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a4128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a412c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a412cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4130: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a4130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a4134: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a4134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a4138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a413c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a413cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4140: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a4140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a4144: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a4144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4148: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a4148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a414c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a414cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a4150: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a4150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a4154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4158: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a4158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a415c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a415cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4160: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4164: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a4164u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4168: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A4168u;
    SET_GPR_U32(ctx, 31, 0x2A4170u);
    ctx->pc = 0x2A416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4168u;
    // 0x2a416c: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A4168u, 0x2A4170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4170u;
label_2a4170:
    // 0x2a4170: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a4170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4174: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a4174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4178: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a4178u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a417c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a417cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4180: 0x24050b70  addiu       $a1, $zero, 0xB70
    ctx->pc = 0x2a4180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2928));
    // 0x2a4184: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x2a4184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2a4188: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a418c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a418cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4190: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A4190u;
    SET_GPR_U32(ctx, 31, 0x2A4198u);
    ctx->pc = 0x2A4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4190u;
    // 0x2a4194: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A4190u, 0x2A4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4198u;
label_2a4198:
    // 0x2a4198: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a4198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a419c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a419cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a41a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a41a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a41a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a41a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a41a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A41A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41A8u;
        // 0x2a41ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A41A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A41B0u;
}

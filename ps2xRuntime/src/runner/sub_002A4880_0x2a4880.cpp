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

// Function: sub_002A4880
// Address: 0x2a4880 - 0x2a4944
void sub_002A4880_0x2a4880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4880_0x2a4880");
#endif

    switch (ctx->pc) {
        case 0x2a48ccu: goto label_2a48cc;
        case 0x2a48f8u: goto label_2a48f8;
        case 0x2a4924u: goto label_2a4924;
        default: break;
    }

    ctx->pc = 0x2a4880u;

    // 0x2a4880: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a4884: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a4888: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a4888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a488c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a488cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a4890: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a4890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4894: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a4894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a4898: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a4898u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a489c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a48a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a48a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a48a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a48a8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a48a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48ac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a48acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a48b0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x2a48b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x2a48b4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a48b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48b8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a48b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a48bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a48bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a48c0: 0x24c6d210  addiu       $a2, $a2, -0x2DF0
    ctx->pc = 0x2a48c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955536));
    // 0x2a48c4: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x2A48C4u;
    SET_GPR_U32(ctx, 31, 0x2A48CCu);
    ctx->pc = 0x2A48C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A48C4u;
    // 0x2a48c8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x2A48C4u, 0x2A48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48CCu;
label_2a48cc:
    // 0x2a48cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a48d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a48d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48d4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a48d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a48d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a48d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a48dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a48e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a48e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a48e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a48ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48f0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A48F0u;
    SET_GPR_U32(ctx, 31, 0x2A48F8u);
    ctx->pc = 0x2A48F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A48F0u;
    // 0x2a48f4: 0xffb30000  sd          $s3, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A48F0u, 0x2A48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48F8u;
label_2a48f8:
    // 0x2a48f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a48fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a48fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4900: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a4900u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4904: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2a4904u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4908: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a4908u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a490c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4910: 0x24052754  addiu       $a1, $zero, 0x2754
    ctx->pc = 0x2a4910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10068));
    // 0x2a4914: 0x240600f4  addiu       $a2, $zero, 0xF4
    ctx->pc = 0x2a4914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x2a4918: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a491c: 0xc097c20  jal         func_25F080
    ctx->pc = 0x2A491Cu;
    SET_GPR_U32(ctx, 31, 0x2A4924u);
    ctx->pc = 0x2A4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A491Cu;
    // 0x2a4920: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F080u, 0x2A491Cu, 0x2A4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4924u;
label_2a4924:
    // 0x2a4924: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a4924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a4928: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a4928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a492c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a492cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4930: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a4930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4934: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a4934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a4938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a493c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A493Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A493Cu;
        // 0x2a4940: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A493Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4944u;
}

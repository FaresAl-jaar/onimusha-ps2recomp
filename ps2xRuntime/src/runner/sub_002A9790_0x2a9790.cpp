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

// Function: sub_002A9790
// Address: 0x2a9790 - 0x2a9834
void sub_002A9790_0x2a9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9790_0x2a9790");
#endif

    switch (ctx->pc) {
        case 0x2a97e8u: goto label_2a97e8;
        case 0x2a9818u: goto label_2a9818;
        default: break;
    }

    ctx->pc = 0x2a9790u;

    // 0x2a9790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a9794: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x2a9794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x2a9798: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a979c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a979cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a97a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a97a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a97a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a97a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a97ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a97acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a97b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a97b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a97b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a97b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a97bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a97bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a97c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97c4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a97c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a97c8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a97c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a97cc: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x2a97ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x2a97d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a97d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a97d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a97d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a97dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97e0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A97E0u;
    SET_GPR_U32(ctx, 31, 0x2A97E8u);
    ctx->pc = 0x2A97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A97E0u;
    // 0x2a97e4: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A97E0u, 0x2A97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97E8u;
label_2a97e8:
    // 0x2a97e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a97ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a97ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a97f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a97f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97f4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a97f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97f8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a97f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a97fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9800: 0x2406015c  addiu       $a2, $zero, 0x15C
    ctx->pc = 0x2a9800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2a9804: 0x34459e0c  ori         $a1, $v0, 0x9E0C
    ctx->pc = 0x2a9804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40460);
    // 0x2a9808: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a9808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a980c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a980cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9810: 0xc097cdc  jal         func_25F370
    ctx->pc = 0x2A9810u;
    SET_GPR_U32(ctx, 31, 0x2A9818u);
    ctx->pc = 0x2A9814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9810u;
    // 0x2a9814: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F370u, 0x2A9810u, 0x2A9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9818u;
label_2a9818:
    // 0x2a9818: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a9818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a981c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a981cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9820: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a9820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9824: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a9824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9828: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a982c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A982Cu;
        // 0x2a9830: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A982Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9834u;
}

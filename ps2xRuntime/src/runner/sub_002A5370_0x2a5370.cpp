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

// Function: sub_002A5370
// Address: 0x2a5370 - 0x2a5410
void sub_002A5370_0x2a5370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5370_0x2a5370");
#endif

    switch (ctx->pc) {
        case 0x2a53c8u: goto label_2a53c8;
        case 0x2a53f4u: goto label_2a53f4;
        default: break;
    }

    ctx->pc = 0x2a5370u;

    // 0x2a5370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a5370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a5374: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2a5374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2a5378: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a5378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a537c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a537cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5380: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a5380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a5384: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a5384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5388: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a5388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a538c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a538cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5390: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a5390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a5394: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a5394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5398: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a539c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a539cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53a0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a53a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a53a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a53a8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a53a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a53ac: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x2a53acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2a53b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a53b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a53b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a53b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a53bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A53C0u;
    SET_GPR_U32(ctx, 31, 0x2A53C8u);
    ctx->pc = 0x2A53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A53C0u;
    // 0x2a53c4: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A53C0u, 0x2A53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53C8u;
label_2a53c8:
    // 0x2a53c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a53c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a53cc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a53ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a53d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a53d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53d4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a53d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53d8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a53d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a53dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53e0: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a53e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a53e4: 0x240550c8  addiu       $a1, $zero, 0x50C8
    ctx->pc = 0x2a53e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20680));
    // 0x2a53e8: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x2a53e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2a53ec: 0xc0f8304  jal         func_3E0C10
    ctx->pc = 0x2A53ECu;
    SET_GPR_U32(ctx, 31, 0x2A53F4u);
    ctx->pc = 0x2A53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A53ECu;
    // 0x2a53f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0C10u, 0x2A53ECu, 0x2A53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53F4u;
label_2a53f4:
    // 0x2a53f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a53f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a53f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a53f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a53fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a53fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a5400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5408: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5408u;
        // 0x2a540c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5410u;
}

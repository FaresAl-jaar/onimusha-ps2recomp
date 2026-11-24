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

// Function: sub_002A4950
// Address: 0x2a4950 - 0x2a49f0
void sub_002A4950_0x2a4950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4950_0x2a4950");
#endif

    switch (ctx->pc) {
        case 0x2a49a8u: goto label_2a49a8;
        case 0x2a49d4u: goto label_2a49d4;
        default: break;
    }

    ctx->pc = 0x2a4950u;

    // 0x2a4950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a4950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a4954: 0x3c024e00  lui         $v0, 0x4E00
    ctx->pc = 0x2a4954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19968 << 16));
    // 0x2a4958: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a4958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a495c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a495cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4960: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a4960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a4964: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a4964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4968: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a4968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a496c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a496cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4970: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a4970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a4974: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a4974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4978: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a497c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a497cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4980: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a4980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4984: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a4984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a4988: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a4988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a498c: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a498cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a4990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4994: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a4994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4998: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4998u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a499c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a499cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49a0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A49A0u;
    SET_GPR_U32(ctx, 31, 0x2A49A8u);
    ctx->pc = 0x2A49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49A0u;
    // 0x2a49a4: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A49A0u, 0x2A49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49A8u;
label_2a49a8:
    // 0x2a49a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a49a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a49ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a49acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49b0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a49b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49b4: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a49b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a49b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49bc: 0x24052884  addiu       $a1, $zero, 0x2884
    ctx->pc = 0x2a49bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10372));
    // 0x2a49c0: 0x2406016c  addiu       $a2, $zero, 0x16C
    ctx->pc = 0x2a49c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    // 0x2a49c4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a49c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a49c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a49c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49cc: 0xc097c20  jal         func_25F080
    ctx->pc = 0x2A49CCu;
    SET_GPR_U32(ctx, 31, 0x2A49D4u);
    ctx->pc = 0x2A49D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49CCu;
    // 0x2a49d0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F080u, 0x2A49CCu, 0x2A49D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49D4u;
label_2a49d4:
    // 0x2a49d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a49d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a49d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a49d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a49dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a49dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a49e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a49e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a49e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a49e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a49e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A49E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49E8u;
        // 0x2a49ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A49E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A49F0u;
}

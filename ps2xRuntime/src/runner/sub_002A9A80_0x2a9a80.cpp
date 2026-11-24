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

// Function: sub_002A9A80
// Address: 0x2a9a80 - 0x2a9b10
void sub_002A9A80_0x2a9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9A80_0x2a9a80");
#endif

    switch (ctx->pc) {
        case 0x2a9ad8u: goto label_2a9ad8;
        case 0x2a9af4u: goto label_2a9af4;
        default: break;
    }

    ctx->pc = 0x2a9a80u;

    // 0x2a9a80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a9a84: 0x3c025300  lui         $v0, 0x5300
    ctx->pc = 0x2a9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21248 << 16));
    // 0x2a9a88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a9a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a9a8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a9a8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a9a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a9a94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a9a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a9a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a9a9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a9a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9aa0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a9aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a9aa4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a9aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9aa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9aac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a9aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ab0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a9ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ab4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a9ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a9ab8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a9ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a9abc: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a9abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a9ac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ac4: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x2a9ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2a9ac8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a9ac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9acc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a9accu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ad0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A9AD0u;
    SET_GPR_U32(ctx, 31, 0x2A9AD8u);
    ctx->pc = 0x2A9AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9AD0u;
    // 0x2a9ad4: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A9AD0u, 0x2A9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9AD8u;
label_2a9ad8:
    // 0x2a9ad8: 0x8e080190  lw          $t0, 0x190($s0)
    ctx->pc = 0x2a9ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2a9adc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a9adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ae0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a9ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ae4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a9ae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ae8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a9ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9aec: 0xc0b7544  jal         func_2DD510
    ctx->pc = 0x2A9AECu;
    SET_GPR_U32(ctx, 31, 0x2A9AF4u);
    ctx->pc = 0x2A9AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9AECu;
    // 0x2a9af0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD510u, 0x2A9AECu, 0x2A9AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9AF4u;
label_2a9af4:
    // 0x2a9af4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a9af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9af8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a9af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9afc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a9afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9b00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a9b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B08u;
        // 0x2a9b0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9B10u;
}

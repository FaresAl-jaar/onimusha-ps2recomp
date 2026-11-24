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

// Function: sub_002F16A0
// Address: 0x2f16a0 - 0x2f1708
void sub_002F16A0_0x2f16a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F16A0_0x2f16a0");
#endif

    switch (ctx->pc) {
        case 0x2f16d0u: goto label_2f16d0;
        case 0x2f16ecu: goto label_2f16ec;
        default: break;
    }

    ctx->pc = 0x2f16a0u;

    // 0x2f16a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f16a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f16a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f16a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f16a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f16a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f16ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f16acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f16b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f16b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f16b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f16b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f16b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f16bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f16c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f16c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16c4: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f16c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f16c8: 0xc0bc2dc  jal         func_2F0B70
    ctx->pc = 0x2F16C8u;
    SET_GPR_U32(ctx, 31, 0x2F16D0u);
    ctx->pc = 0x2F16CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16C8u;
    // 0x2f16cc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B70u, 0x2F16C8u, 0x2F16D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16D0u;
label_2f16d0:
    // 0x2f16d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f16d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f16d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f16d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16dc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f16dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f16e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16e4: 0xc0c22f8  jal         func_308BE0
    ctx->pc = 0x2F16E4u;
    SET_GPR_U32(ctx, 31, 0x2F16ECu);
    ctx->pc = 0x2F16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16E4u;
    // 0x2f16e8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308BE0u, 0x2F16E4u, 0x2F16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16ECu;
label_2f16ec:
    // 0x2f16ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f16ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f16f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f16f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f16f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f16f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f16f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f16f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f16fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f16fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1700: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1700u;
        // 0x2f1704: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1708u;
}

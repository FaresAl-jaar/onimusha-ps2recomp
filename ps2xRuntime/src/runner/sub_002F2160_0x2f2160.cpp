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

// Function: sub_002F2160
// Address: 0x2f2160 - 0x2f21d4
void sub_002F2160_0x2f2160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2160_0x2f2160");
#endif

    switch (ctx->pc) {
        case 0x2f2190u: goto label_2f2190;
        case 0x2f21b8u: goto label_2f21b8;
        default: break;
    }

    ctx->pc = 0x2f2160u;

    // 0x2f2160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f2160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f2164: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f2164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f2168: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f2168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f216c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f2170: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f2170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2174: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f2174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f2178: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f2178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f217c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f2180: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f2180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2184: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f2184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f2188: 0xc0bc2dc  jal         func_2F0B70
    ctx->pc = 0x2F2188u;
    SET_GPR_U32(ctx, 31, 0x2F2190u);
    ctx->pc = 0x2F218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2188u;
    // 0x2f218c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B70u, 0x2F2188u, 0x2F2190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2190u;
label_2f2190:
    // 0x2f2190: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x2f2190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f2194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2198: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f2198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f219c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f219cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f21a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f21a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f21a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21ac: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2f21acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21b0: 0xc0f45f0  jal         func_3D17C0
    ctx->pc = 0x2F21B0u;
    SET_GPR_U32(ctx, 31, 0x2F21B8u);
    ctx->pc = 0x2F21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21B0u;
    // 0x2f21b4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D17C0u, 0x2F21B0u, 0x2F21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21B8u;
label_2f21b8:
    // 0x2f21b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f21b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f21bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f21bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f21c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f21c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f21c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f21c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f21c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f21c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f21cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F21CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F21D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21CCu;
        // 0x2f21d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F21CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F21D4u;
}

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

// Function: sub_002F21E0
// Address: 0x2f21e0 - 0x2f2250
void sub_002F21E0_0x2f21e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F21E0_0x2f21e0");
#endif

    switch (ctx->pc) {
        case 0x2f2210u: goto label_2f2210;
        case 0x2f2234u: goto label_2f2234;
        default: break;
    }

    ctx->pc = 0x2f21e0u;

    // 0x2f21e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f21e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f21e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f21e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f21e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f21e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f21ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f21ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f21f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f21f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f21f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f21f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f21fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f2200: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f2200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2204: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f2204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f2208: 0xc0bc2dc  jal         func_2F0B70
    ctx->pc = 0x2F2208u;
    SET_GPR_U32(ctx, 31, 0x2F2210u);
    ctx->pc = 0x2F220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2208u;
    // 0x2f220c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B70u, 0x2F2208u, 0x2F2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2210u;
label_2f2210:
    // 0x2f2210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2214: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f2214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2218: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f2218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f221c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f221cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2224: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f2224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2228: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2f2228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f222c: 0xc0f4a30  jal         func_3D28C0
    ctx->pc = 0x2F222Cu;
    SET_GPR_U32(ctx, 31, 0x2F2234u);
    ctx->pc = 0x2F2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F222Cu;
    // 0x2f2230: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D28C0u, 0x2F222Cu, 0x2F2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2234u;
label_2f2234:
    // 0x2f2234: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f2234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2238: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f2238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f223c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f223cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2248: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2248u;
        // 0x2f224c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2250u;
}

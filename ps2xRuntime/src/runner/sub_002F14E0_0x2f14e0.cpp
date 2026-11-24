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

// Function: sub_002F14E0
// Address: 0x2f14e0 - 0x2f155c
void sub_002F14E0_0x2f14e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F14E0_0x2f14e0");
#endif

    switch (ctx->pc) {
        case 0x2f1518u: goto label_2f1518;
        case 0x2f153cu: goto label_2f153c;
        default: break;
    }

    ctx->pc = 0x2f14e0u;

    // 0x2f14e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f14e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f14e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f14e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f14e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f14e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f14ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f14ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f14f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f14f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f14f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f14f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f14f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1500: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f1500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1508: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f1508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f150c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f150cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1510: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F1510u;
    SET_GPR_U32(ctx, 31, 0x2F1518u);
    ctx->pc = 0x2F1514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1510u;
    // 0x2f1514: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F1510u, 0x2F1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1518u;
label_2f1518:
    // 0x2f1518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f1518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f151c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f151cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1520: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f1520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1524: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f1524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1528: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2f1528u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f152c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f152cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1530: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1534: 0xc0c9c68  jal         func_3271A0
    ctx->pc = 0x2F1534u;
    SET_GPR_U32(ctx, 31, 0x2F153Cu);
    ctx->pc = 0x2F1538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1534u;
    // 0x2f1538: 0x240a002e  addiu       $t2, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3271A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3271A0u, 0x2F1534u, 0x2F153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F153Cu;
label_2f153c:
    // 0x2f153c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f153cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1540: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f1540u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1544: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f1544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f1548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f154c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f154cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1554: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1554u;
        // 0x2f1558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F155Cu;
}

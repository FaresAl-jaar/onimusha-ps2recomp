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

// Function: sub_001D1530
// Address: 0x1d1530 - 0x1d15a0
void sub_001D1530_0x1d1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1530_0x1d1530");
#endif

    switch (ctx->pc) {
        case 0x1d1568u: goto label_1d1568;
        default: break;
    }

    ctx->pc = 0x1d1530u;

    // 0x1d1530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d1530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d1534: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d1534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d1538: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d1538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d153c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d1540: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d1540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1548: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d1548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d154c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1550: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d1550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1554: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1558: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d1558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d155c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1d155cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1560: 0xc0742b8  jal         func_1D0AE0
    ctx->pc = 0x1D1560u;
    SET_GPR_U32(ctx, 31, 0x1D1568u);
    ctx->pc = 0x1D1564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1560u;
    // 0x1d1564: 0x278487f4  addiu       $a0, $gp, -0x780C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0AE0u, 0x1D1560u, 0x1D1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1568u;
label_1d1568:
    // 0x1d1568: 0xa6930000  sh          $s3, 0x0($s4)
    ctx->pc = 0x1d1568u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x1d156c: 0xa6920002  sh          $s2, 0x2($s4)
    ctx->pc = 0x1d156cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x1d1570: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x1d1570u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x1d1574: 0xa6900006  sh          $s0, 0x6($s4)
    ctx->pc = 0x1d1574u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x1d1578: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1d1578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d157c: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1d157cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x1d1580: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d1580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d1584: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d1584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d1588: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d1588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d158c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d158cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1598: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1598u;
        // 0x1d159c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D15A0u;
}

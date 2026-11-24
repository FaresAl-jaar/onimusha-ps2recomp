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

// Function: sub_001D1620
// Address: 0x1d1620 - 0x1d16a4
void sub_001D1620_0x1d1620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1620_0x1d1620");
#endif

    switch (ctx->pc) {
        case 0x1d1650u: goto label_1d1650;
        case 0x1d168cu: goto label_1d168c;
        default: break;
    }

    ctx->pc = 0x1d1620u;

    // 0x1d1620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d1620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d1624: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d1624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d1628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d162c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1630: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d1630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1634: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1638: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d1638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d163c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1d163cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1d1640: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d1640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1644: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1d1644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1d1648: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1D1648u;
    SET_GPR_U32(ctx, 31, 0x1D1650u);
    ctx->pc = 0x1D164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1648u;
    // 0x1d164c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1D1648u, 0x1D1650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1650u;
label_1d1650:
    // 0x1d1650: 0x2e030400  sltiu       $v1, $s0, 0x400
    ctx->pc = 0x1d1650u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1d1654: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1654u;
    {
        const bool branch_taken_0x1d1654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1654) {
            ctx->pc = 0x1D1660u;
            goto label_1d1660;
        }
    }
    ctx->pc = 0x1D165Cu;
    // 0x1d165c: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1d165cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1d1660:
    // 0x1d1660: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1d1660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1d1664: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1d1664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1d1668: 0x3c030808  lui         $v1, 0x808
    ctx->pc = 0x1d1668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2056 << 16));
    // 0x1d166c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1d166cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1d1670: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1d1670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1d1674: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x1d1674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x1d1678: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d167c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1d167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1d1680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1684: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1D1684u;
    SET_GPR_U32(ctx, 31, 0x1D168Cu);
    ctx->pc = 0x1D1688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1684u;
    // 0x1d1688: 0xac51000c  sw          $s1, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1D1684u, 0x1D168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D168Cu;
label_1d168c:
    // 0x1d168c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d168cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1690: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d169c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D169Cu;
        // 0x1d16a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D169Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D16A4u;
}

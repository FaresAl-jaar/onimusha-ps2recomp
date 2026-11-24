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

// Function: sub_001D17F0
// Address: 0x1d17f0 - 0x1d186c
void sub_001D17F0_0x1d17f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D17F0_0x1d17f0");
#endif

    switch (ctx->pc) {
        case 0x1d185cu: goto label_1d185c;
        default: break;
    }

    ctx->pc = 0x1d17f0u;

    // 0x1d17f0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1d17f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d17f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d17f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d17f8: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x1d17f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d17fc: 0x10870018  beq         $a0, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D17FCu;
    {
        const bool branch_taken_0x1d17fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17FCu;
        // 0x1d1800: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17fc) {
            ctx->pc = 0x1D1860u;
            goto label_1d1860;
        }
    }
    ctx->pc = 0x1D1804u;
    // 0x1d1804: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1d1804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d1808: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d1808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d180c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d180cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1d1810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1d1814: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d1818: 0xfc83fff0  sd          $v1, -0x10($a0)
    ctx->pc = 0x1d1818u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U64(ctx, 3));
    // 0x1d181c: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x1d181cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x1d1820: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x1d1820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1d1824: 0xac80fff8  sw          $zero, -0x8($a0)
    ctx->pc = 0x1d1824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 0));
    // 0x1d1828: 0xac83fffc  sw          $v1, -0x4($a0)
    ctx->pc = 0x1d1828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 3));
    // 0x1d182c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d182cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1d1830: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1d1830u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x1d1834: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x1d1834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1d1838: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1d1838u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1d183c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d1840: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1d1840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d1844: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1d1844u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1d1848: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d1848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d184c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1d184cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1850: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x1d1850u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x1d1854: 0xc074588  jal         func_1D1620
    ctx->pc = 0x1D1854u;
    SET_GPR_U32(ctx, 31, 0x1D185Cu);
    ctx->pc = 0x1D1858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1854u;
    // 0x1d1858: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1620u, 0x1D1854u, 0x1D185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D185Cu;
label_1d185c:
    // 0x1d185c: 0x0  nop
    ctx->pc = 0x1d185cu;
    // NOP
label_1d1860:
    // 0x1d1860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1864: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1864u;
        // 0x1d1868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D186Cu;
}

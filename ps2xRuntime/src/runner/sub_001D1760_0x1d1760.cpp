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

// Function: sub_001D1760
// Address: 0x1d1760 - 0x1d17e4
void sub_001D1760_0x1d1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1760_0x1d1760");
#endif

    switch (ctx->pc) {
        case 0x1d17d4u: goto label_1d17d4;
        default: break;
    }

    ctx->pc = 0x1d1760u;

    // 0x1d1760: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d1760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1764: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1d1764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d1768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d176c: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1d176cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d1770: 0x10860019  beq         $a0, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1770u;
    {
        const bool branch_taken_0x1d1770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1770u;
        // 0x1d1774: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1770) {
            ctx->pc = 0x1D17D8u;
            goto label_1d17d8;
        }
    }
    ctx->pc = 0x1D1778u;
    // 0x1d1778: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1d1778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d177c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d1780: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1780u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1784: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1d1784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1d1788: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d178c: 0xfc83fff0  sd          $v1, -0x10($a0)
    ctx->pc = 0x1d178cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U64(ctx, 3));
    // 0x1d1790: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x1d1790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x1d1794: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x1d1794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1d1798: 0xac80fff8  sw          $zero, -0x8($a0)
    ctx->pc = 0x1d1798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 0));
    // 0x1d179c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1d17a0: 0xac83fffc  sw          $v1, -0x4($a0)
    ctx->pc = 0x1d17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 3));
    // 0x1d17a4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1d17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1d17a8: 0x2485fff0  addiu       $a1, $a0, -0x10
    ctx->pc = 0x1d17a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x1d17ac: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x1d17acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1d17b0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1d17b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1d17b4: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1d17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1d17b8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1d17b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1d17bc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1d17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d17c0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1d17c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1d17c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d17c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d17c8: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x1d17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x1d17cc: 0xc061c60  jal         func_187180
    ctx->pc = 0x1D17CCu;
    SET_GPR_U32(ctx, 31, 0x1D17D4u);
    ctx->pc = 0x1D17D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D17CCu;
    // 0x1d17d0: 0xac22fc90  sw          $v0, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x1D17CCu, 0x1D17D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17D4u;
label_1d17d4:
    // 0x1d17d4: 0x0  nop
    ctx->pc = 0x1d17d4u;
    // NOP
label_1d17d8:
    // 0x1d17d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d17d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d17dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D17DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17DCu;
        // 0x1d17e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D17DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D17E4u;
}

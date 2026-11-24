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

// Function: sub_001D1870
// Address: 0x1d1870 - 0x1d18ec
void sub_001D1870_0x1d1870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1870_0x1d1870");
#endif

    switch (ctx->pc) {
        case 0x1d18dcu: goto label_1d18dc;
        default: break;
    }

    ctx->pc = 0x1d1870u;

    // 0x1d1870: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1d1870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d1874: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1878: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x1d1878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d187c: 0x10870018  beq         $a0, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D187Cu;
    {
        const bool branch_taken_0x1d187c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D187Cu;
        // 0x1d1880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d187c) {
            ctx->pc = 0x1D18E0u;
            goto label_1d18e0;
        }
    }
    ctx->pc = 0x1D1884u;
    // 0x1d1884: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1d1884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d1888: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d1888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d188c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d188cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1890: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1d1890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1d1894: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d1898: 0xfc83fff0  sd          $v1, -0x10($a0)
    ctx->pc = 0x1d1898u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U64(ctx, 3));
    // 0x1d189c: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x1d189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x1d18a0: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x1d18a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1d18a4: 0xac80fff8  sw          $zero, -0x8($a0)
    ctx->pc = 0x1d18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 0));
    // 0x1d18a8: 0xac83fffc  sw          $v1, -0x4($a0)
    ctx->pc = 0x1d18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 3));
    // 0x1d18ac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d18acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1d18b0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1d18b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x1d18b4: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x1d18b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1d18b8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1d18b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1d18bc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d18c0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1d18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d18c4: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1d18c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1d18c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d18c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d18cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1d18ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18d0: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x1d18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x1d18d4: 0xc0745ac  jal         func_1D16B0
    ctx->pc = 0x1D18D4u;
    SET_GPR_U32(ctx, 31, 0x1D18DCu);
    ctx->pc = 0x1D18D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D18D4u;
    // 0x1d18d8: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D16B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D16B0u, 0x1D18D4u, 0x1D18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18DCu;
label_1d18dc:
    // 0x1d18dc: 0x0  nop
    ctx->pc = 0x1d18dcu;
    // NOP
label_1d18e0:
    // 0x1d18e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d18e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d18e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D18E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18E4u;
        // 0x1d18e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D18E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D18ECu;
}

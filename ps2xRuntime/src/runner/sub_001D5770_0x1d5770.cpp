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

// Function: sub_001D5770
// Address: 0x1d5770 - 0x1d5808
void sub_001D5770_0x1d5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5770_0x1d5770");
#endif

    ctx->pc = 0x1d5770u;

    // 0x1d5770: 0x8f838804  lw          $v1, -0x77FC($gp)
    ctx->pc = 0x1d5770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
    // 0x1d5774: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1d5774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x1d5778: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x1d5778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x1d577c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1d577cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d5780: 0x0  nop
    ctx->pc = 0x1d5780u;
    // NOP
    // 0x1d5784: 0x0  nop
    ctx->pc = 0x1d5784u;
    // NOP
    // 0x1d5788: 0x1010  mfhi        $v0
    ctx->pc = 0x1d5788u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d578c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1d578cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1d5790: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d5790u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d5794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5798: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5798u;
    {
        const bool branch_taken_0x1d5798 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1d5798) {
            ctx->pc = 0x1D57F0u;
            goto label_1d57f0;
        }
    }
    ctx->pc = 0x1D57A0u;
    // 0x1d57a0: 0x8f868800  lw          $a2, -0x7800($gp)
    ctx->pc = 0x1d57a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936576)));
    // 0x1d57a4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1d57a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d57a8: 0x3c0390aa  lui         $v1, 0x90AA
    ctx->pc = 0x1d57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37034 << 16));
    // 0x1d57ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d57acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d57b0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1d57b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d57b4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d57b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d57b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d57b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d57bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d57bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d57c0: 0x3c023535  lui         $v0, 0x3535
    ctx->pc = 0x1d57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13621 << 16));
    // 0x1d57c4: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x1d57c4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x1d57c8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1d57c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d57cc: 0x34423531  ori         $v0, $v0, 0x3531
    ctx->pc = 0x1d57ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13617);
    // 0x1d57d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d57d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d57d4: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1d57d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1d57d8: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x1d57d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x1d57dc: 0x8f828804  lw          $v0, -0x77FC($gp)
    ctx->pc = 0x1d57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
    // 0x1d57e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d57e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D57E4u;
    {
        const bool branch_taken_0x1d57e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57E4u;
        // 0x1d57e8: 0xaf828804  sw          $v0, -0x77FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57e4) {
            ctx->pc = 0x1D57F8u;
            goto label_1d57f8;
        }
    }
    ctx->pc = 0x1D57ECu;
    // 0x1d57ec: 0x0  nop
    ctx->pc = 0x1d57ecu;
    // NOP
label_1d57f0:
    // 0x1d57f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D57F0u;
    {
        const bool branch_taken_0x1d57f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57F0u;
        // 0x1d57f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57f0) {
            ctx->pc = 0x1D5800u;
            goto label_1d5800;
        }
    }
    ctx->pc = 0x1D57F8u;
label_1d57f8:
    // 0x1d57f8: 0x8f828804  lw          $v0, -0x77FC($gp)
    ctx->pc = 0x1d57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
    // 0x1d57fc: 0x0  nop
    ctx->pc = 0x1d57fcu;
    // NOP
label_1d5800:
    // 0x1d5800: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5808u;
}

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

// Function: sub_00132850
// Address: 0x132850 - 0x1328d8
void sub_00132850_0x132850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132850_0x132850");
#endif

    switch (ctx->pc) {
        case 0x132870u: goto label_132870;
        case 0x13289cu: goto label_13289c;
        case 0x1328b0u: goto label_1328b0;
        case 0x1328c0u: goto label_1328c0;
        default: break;
    }

    ctx->pc = 0x132850u;

    // 0x132850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x132854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x132858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x132858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13285c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132860: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132864: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x132864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132868: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x132868u;
    SET_GPR_U32(ctx, 31, 0x132870u);
    ctx->pc = 0x13286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132868u;
    // 0x13286c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x132868u, 0x132870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132870u;
label_132870:
    // 0x132870: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x132870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x132874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132878: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x132878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x13287c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132884: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x132884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x132888: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x132888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x13288c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x13288cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x132890: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x132890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x132894: 0xc04cedc  jal         func_133B70
    ctx->pc = 0x132894u;
    SET_GPR_U32(ctx, 31, 0x13289Cu);
    ctx->pc = 0x132898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132894u;
    // 0x132898: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133B70u, 0x132894u, 0x13289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13289Cu;
label_13289c:
    // 0x13289c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1328a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1328a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1328a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1328a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1328a8: 0xc04cf44  jal         func_133D10
    ctx->pc = 0x1328A8u;
    SET_GPR_U32(ctx, 31, 0x1328B0u);
    ctx->pc = 0x1328ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328A8u;
    // 0x1328ac: 0x24440930  addiu       $a0, $v0, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133D10u, 0x1328A8u, 0x1328B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328B0u;
label_1328b0:
    // 0x1328b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1328b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1328b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1328b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328b8: 0xc05e66c  jal         func_1799B0
    ctx->pc = 0x1328B8u;
    SET_GPR_U32(ctx, 31, 0x1328C0u);
    ctx->pc = 0x1328BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328B8u;
    // 0x1328bc: 0x2484cdb0  addiu       $a0, $a0, -0x3250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1799B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1799B0u, 0x1328B8u, 0x1328C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328C0u;
label_1328c0:
    // 0x1328c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1328c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1328c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1328c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1328c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1328c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1328cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1328ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1328d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1328D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1328D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328D0u;
        // 0x1328d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1328D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1328D8u;
}

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

// Function: sub_003D2730
// Address: 0x3d2730 - 0x3d27b0
void sub_003D2730_0x3d2730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2730_0x3d2730");
#endif

    switch (ctx->pc) {
        case 0x3d2744u: goto label_3d2744;
        case 0x3d275cu: goto label_3d275c;
        case 0x3d2788u: goto label_3d2788;
        case 0x3d2798u: goto label_3d2798;
        case 0x3d27a0u: goto label_3d27a0;
        default: break;
    }

    ctx->pc = 0x3d2730u;

    // 0x3d2730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d2730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d2734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d2734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d2738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d2738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d273c: 0xc0f4938  jal         func_3D24E0
    ctx->pc = 0x3D273Cu;
    SET_GPR_U32(ctx, 31, 0x3D2744u);
    ctx->pc = 0x3D2740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D273Cu;
    // 0x3d2740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D24E0u, 0x3D273Cu, 0x3D2744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2744u;
label_3d2744:
    // 0x3d2744: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x3d2744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3d2748: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d2748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d274c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D274Cu;
    {
        const bool branch_taken_0x3d274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D274Cu;
        // 0x3d2750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d274c) {
            ctx->pc = 0x3D2760u;
            goto label_3d2760;
        }
    }
    ctx->pc = 0x3D2754u;
    // 0x3d2754: 0xc0f4994  jal         func_3D2650
    ctx->pc = 0x3D2754u;
    SET_GPR_U32(ctx, 31, 0x3D275Cu);
    ctx->pc = 0x3D2650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2650u, 0x3D2754u, 0x3D275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D275Cu;
label_3d275c:
    // 0x3d275c: 0x0  nop
    ctx->pc = 0x3d275cu;
    // NOP
label_3d2760:
    // 0x3d2760: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3d2760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3d2764: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3d2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3d2768: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2768u;
    {
        const bool branch_taken_0x3d2768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2768u;
        // 0x3d276c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2768) {
            ctx->pc = 0x3D2790u;
            goto label_3d2790;
        }
    }
    ctx->pc = 0x3D2770u;
    // 0x3d2770: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2770u;
    {
        const bool branch_taken_0x3d2770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d2770) {
            ctx->pc = 0x3D2780u;
            goto label_3d2780;
        }
    }
    ctx->pc = 0x3D2778u;
    // 0x3d2778: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2778u;
    {
        const bool branch_taken_0x3d2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2778) {
            ctx->pc = 0x3D2798u;
            goto label_3d2798;
        }
    }
    ctx->pc = 0x3D2780u;
label_3d2780:
    // 0x3d2780: 0xc0f48cc  jal         func_3D2330
    ctx->pc = 0x3D2780u;
    SET_GPR_U32(ctx, 31, 0x3D2788u);
    ctx->pc = 0x3D2784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2780u;
    // 0x3d2784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2330u, 0x3D2780u, 0x3D2788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2788u;
label_3d2788:
    // 0x3d2788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2788u;
    {
        const bool branch_taken_0x3d2788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2788) {
            ctx->pc = 0x3D2798u;
            goto label_3d2798;
        }
    }
    ctx->pc = 0x3D2790u;
label_3d2790:
    // 0x3d2790: 0xc0f48fc  jal         func_3D23F0
    ctx->pc = 0x3D2790u;
    SET_GPR_U32(ctx, 31, 0x3D2798u);
    ctx->pc = 0x3D2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2790u;
    // 0x3d2794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D23F0u, 0x3D2790u, 0x3D2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2798u;
label_3d2798:
    // 0x3d2798: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3D2798u;
    SET_GPR_U32(ctx, 31, 0x3D27A0u);
    ctx->pc = 0x3D279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2798u;
    // 0x3d279c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3D2798u, 0x3D27A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D27A0u;
label_3d27a0:
    // 0x3d27a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d27a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d27a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d27a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d27a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D27A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27A8u;
        // 0x3d27ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D27A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D27B0u;
}

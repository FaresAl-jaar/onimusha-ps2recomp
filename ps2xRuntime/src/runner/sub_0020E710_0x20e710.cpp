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

// Function: sub_0020E710
// Address: 0x20e710 - 0x20e788
void sub_0020E710_0x20e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E710_0x20e710");
#endif

    switch (ctx->pc) {
        case 0x20e710u: goto label_20e710;
        case 0x20e714u: goto label_20e714;
        case 0x20e718u: goto label_20e718;
        case 0x20e71cu: goto label_20e71c;
        case 0x20e720u: goto label_20e720;
        case 0x20e724u: goto label_20e724;
        case 0x20e728u: goto label_20e728;
        case 0x20e72cu: goto label_20e72c;
        case 0x20e730u: goto label_20e730;
        case 0x20e734u: goto label_20e734;
        case 0x20e738u: goto label_20e738;
        case 0x20e73cu: goto label_20e73c;
        case 0x20e740u: goto label_20e740;
        case 0x20e744u: goto label_20e744;
        case 0x20e748u: goto label_20e748;
        case 0x20e74cu: goto label_20e74c;
        case 0x20e750u: goto label_20e750;
        case 0x20e754u: goto label_20e754;
        case 0x20e758u: goto label_20e758;
        case 0x20e75cu: goto label_20e75c;
        case 0x20e760u: goto label_20e760;
        case 0x20e764u: goto label_20e764;
        case 0x20e768u: goto label_20e768;
        case 0x20e76cu: goto label_20e76c;
        case 0x20e770u: goto label_20e770;
        case 0x20e774u: goto label_20e774;
        case 0x20e778u: goto label_20e778;
        case 0x20e77cu: goto label_20e77c;
        case 0x20e780u: goto label_20e780;
        case 0x20e784u: goto label_20e784;
        default: break;
    }

    ctx->pc = 0x20e710u;

label_20e710:
    // 0x20e710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20e714:
    // 0x20e714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20e718:
    // 0x20e718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e71c:
    // 0x20e71c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20e720:
    // 0x20e720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20e724:
    // 0x20e724: 0xc084968  jal         func_2125A0
label_20e728:
    if (ctx->pc == 0x20E728u) {
        ctx->pc = 0x20E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E724u;
        // 0x20e728: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E72Cu;
        goto label_20e72c;
    }
    ctx->pc = 0x20E724u;
    SET_GPR_U32(ctx, 31, 0x20E72Cu);
    ctx->pc = 0x20E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E724u;
    // 0x20e728: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x20E724u, 0x20E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E72Cu;
label_20e72c:
    // 0x20e72c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_20e730:
    // 0x20e730: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20e734:
    if (ctx->pc == 0x20E734u) {
        ctx->pc = 0x20E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E730u;
        // 0x20e734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E738u;
        goto label_20e738;
    }
    ctx->pc = 0x20E730u;
    {
        const bool branch_taken_0x20e730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E730u;
        // 0x20e734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e730) {
            ctx->pc = 0x20E750u;
            goto label_20e750;
        }
    }
    ctx->pc = 0x20E738u;
label_20e738:
    // 0x20e738: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e73c:
    // 0x20e73c: 0xc0848e0  jal         func_212380
label_20e740:
    if (ctx->pc == 0x20E740u) {
        ctx->pc = 0x20E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E73Cu;
        // 0x20e740: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E744u;
        goto label_20e744;
    }
    ctx->pc = 0x20E73Cu;
    SET_GPR_U32(ctx, 31, 0x20E744u);
    ctx->pc = 0x20E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E73Cu;
    // 0x20e740: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x20E73Cu, 0x20E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E744u;
label_20e744:
    // 0x20e744: 0x1000000b  b           . + 4 + (0xB << 2)
label_20e748:
    if (ctx->pc == 0x20E748u) {
        ctx->pc = 0x20E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E744u;
        // 0x20e748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E74Cu;
        goto label_20e74c;
    }
    ctx->pc = 0x20E744u;
    {
        const bool branch_taken_0x20e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E744u;
        // 0x20e748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e744) {
            ctx->pc = 0x20E774u;
            goto label_20e774;
        }
    }
    ctx->pc = 0x20E74Cu;
label_20e74c:
    // 0x20e74c: 0x0  nop
    ctx->pc = 0x20e74cu;
    // NOP
label_20e750:
    // 0x20e750: 0xc087ed0  jal         func_21FB40
label_20e754:
    if (ctx->pc == 0x20E754u) {
        ctx->pc = 0x20E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E750u;
        // 0x20e754: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E758u;
        goto label_20e758;
    }
    ctx->pc = 0x20E750u;
    SET_GPR_U32(ctx, 31, 0x20E758u);
    ctx->pc = 0x20E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E750u;
    // 0x20e754: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20E750u, 0x20E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E758u;
label_20e758:
    // 0x20e758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e75c:
    // 0x20e75c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20e760:
    if (ctx->pc == 0x20E760u) {
        ctx->pc = 0x20E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E75Cu;
        // 0x20e760: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E764u;
        goto label_20e764;
    }
    ctx->pc = 0x20E75Cu;
    {
        const bool branch_taken_0x20e75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E75Cu;
        // 0x20e760: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e75c) {
            ctx->pc = 0x20E774u;
            goto label_20e774;
        }
    }
    ctx->pc = 0x20E764u;
label_20e764:
    // 0x20e764: 0x8e032114  lw          $v1, 0x2114($s0)
    ctx->pc = 0x20e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8468)));
label_20e768:
    // 0x20e768: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20e768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20e76c:
    // 0x20e76c: 0x40f809  jalr        $v0
label_20e770:
    if (ctx->pc == 0x20E770u) {
        ctx->pc = 0x20E774u;
        goto label_20e774;
    }
    ctx->pc = 0x20E76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E774u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E76Cu, 0x20E774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E774u;
label_20e774:
    // 0x20e774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e778:
    // 0x20e778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e77c:
    // 0x20e77c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e780:
    // 0x20e780: 0x3e00008  jr          $ra
label_20e784:
    if (ctx->pc == 0x20E784u) {
        ctx->pc = 0x20E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E780u;
        // 0x20e784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E788u;
        goto label_fallthrough_0x20e780;
    }
    ctx->pc = 0x20E780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E780u;
        // 0x20e784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e780:
    ctx->pc = 0x20E788u;
}

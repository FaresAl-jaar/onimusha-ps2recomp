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

// Function: sub_00234708
// Address: 0x234708 - 0x2347d4
void sub_00234708_0x234708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234708_0x234708");
#endif

    switch (ctx->pc) {
        case 0x234758u: goto label_234758;
        case 0x234768u: goto label_234768;
        case 0x234770u: goto label_234770;
        case 0x234778u: goto label_234778;
        default: break;
    }

    ctx->pc = 0x234708u;

    // 0x234708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23470c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x23470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x234710: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x234710u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    // 0x234714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234718: 0x26c3fcd0  addiu       $v1, $s6, -0x330
    ctx->pc = 0x234718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966480));
    // 0x23471c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23471cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234720: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234724: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234728: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23472c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x234730: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x234730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x234734: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x234734u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4BFCD0u));
    // 0x234738: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x234738u;
    {
        const bool branch_taken_0x234738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234738u;
        // 0x23473c: 0x3c15004c  lui         $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234738) {
            ctx->pc = 0x234790u;
            goto label_234790;
        }
    }
    ctx->pc = 0x234740u;
    // 0x234740: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x234740u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x234744: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x234744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234748: 0x26b2fcc8  addiu       $s2, $s5, -0x338
    ctx->pc = 0x234748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966472));
    // 0x23474c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23474cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234750: 0x2690fca8  addiu       $s0, $s4, -0x358
    ctx->pc = 0x234750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966440));
    // 0x234754: 0x0  nop
    ctx->pc = 0x234754u;
    // NOP
label_234758:
    // 0x234758: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x234758u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x23475c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234760: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x234760u;
    SET_GPR_U32(ctx, 31, 0x234768u);
    ctx->pc = 0x234764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234760u;
    // 0x234764: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x234760u, 0x234768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234768u;
label_234768:
    // 0x234768: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x234768u;
    SET_GPR_U32(ctx, 31, 0x234770u);
    ctx->pc = 0x23476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234768u;
    // 0x23476c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x234768u, 0x234770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234770u;
label_234770:
    // 0x234770: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x234770u;
    SET_GPR_U32(ctx, 31, 0x234778u);
    ctx->pc = 0x234774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234770u;
    // 0x234774: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x234770u, 0x234778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234778u;
label_234778:
    // 0x234778: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x234778u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23477c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x23477Cu;
    {
        const bool branch_taken_0x23477c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23477Cu;
        // 0x234780: 0x26c2fcd0  addiu       $v0, $s6, -0x330 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23477c) {
            ctx->pc = 0x234758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234758;
        }
    }
    ctx->pc = 0x234784u;
    // 0x234784: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x234784u;
    {
        const bool branch_taken_0x234784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234784u;
        // 0x234788: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234784) {
            ctx->pc = 0x23479Cu;
            goto label_23479c;
        }
    }
    ctx->pc = 0x23478Cu;
    // 0x23478c: 0x0  nop
    ctx->pc = 0x23478cu;
    // NOP
label_234790:
    // 0x234790: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x234790u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x234794: 0x26c2fcd0  addiu       $v0, $s6, -0x330
    ctx->pc = 0x234794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966480));
    // 0x234798: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x234798u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23479c:
    // 0x23479c: 0x26a3fcc8  addiu       $v1, $s5, -0x338
    ctx->pc = 0x23479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966472));
    // 0x2347a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2347a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2347a4: 0x2684fca8  addiu       $a0, $s4, -0x358
    ctx->pc = 0x2347a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966440));
    // 0x2347a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2347a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2347ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2347acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2347b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2347b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2347b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2347b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2347b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2347b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2347bc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2347bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2347c0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2347c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2347c4: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2347c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2347c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2347c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2347cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2347CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2347D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347CCu;
        // 0x2347d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2347CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2347D4u;
}

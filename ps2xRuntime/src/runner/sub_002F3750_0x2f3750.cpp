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

// Function: sub_002F3750
// Address: 0x2f3750 - 0x2f37f4
void sub_002F3750_0x2f3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3750_0x2f3750");
#endif

    switch (ctx->pc) {
        case 0x2f377cu: goto label_2f377c;
        case 0x2f3790u: goto label_2f3790;
        case 0x2f379cu: goto label_2f379c;
        default: break;
    }

    ctx->pc = 0x2f3750u;

    // 0x2f3750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f3750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f3754: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f3754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3758: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f3758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f375c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2f375cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f3760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f3764: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x2f3764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2f3768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f376c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f376cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3770: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x2f3770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2f3774: 0xc0bcd80  jal         func_2F3600
    ctx->pc = 0x2F3774u;
    SET_GPR_U32(ctx, 31, 0x2F377Cu);
    ctx->pc = 0x2F3778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3774u;
    // 0x2f3778: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3600u, 0x2F3774u, 0x2F377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F377Cu;
label_2f377c:
    // 0x2f377c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f377cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3780: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f3780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f3784: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F3784u;
    {
        const bool branch_taken_0x2f3784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3784u;
        // 0x2f3788: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3784) {
            ctx->pc = 0x2F37D8u;
            goto label_2f37d8;
        }
    }
    ctx->pc = 0x2F378Cu;
    // 0x2f378c: 0x0  nop
    ctx->pc = 0x2f378cu;
    // NOP
label_2f3790:
    // 0x2f3790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3794: 0xc0bcd78  jal         func_2F35E0
    ctx->pc = 0x2F3794u;
    SET_GPR_U32(ctx, 31, 0x2F379Cu);
    ctx->pc = 0x2F3798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3794u;
    // 0x2f3798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F35E0u, 0x2F3794u, 0x2F379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F379Cu;
label_2f379c:
    // 0x2f379c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F379Cu;
    {
        const bool branch_taken_0x2f379c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f379c) {
            ctx->pc = 0x2F37B0u;
            goto label_2f37b0;
        }
    }
    ctx->pc = 0x2F37A4u;
    // 0x2f37a4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2f37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f37a8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2f37a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2f37ac: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2f37acu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_2f37b0:
    // 0x2f37b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f37b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f37b4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2f37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2f37b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f37bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f37c0: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x2f37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x2f37c4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2f37c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2f37c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f37cc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2F37CCu;
    {
        const bool branch_taken_0x2f37cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37CCu;
        // 0x2f37d0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37cc) {
            ctx->pc = 0x2F3790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3790;
        }
    }
    ctx->pc = 0x2F37D4u;
    // 0x2f37d4: 0x0  nop
    ctx->pc = 0x2f37d4u;
    // NOP
label_2f37d8:
    // 0x2f37d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f37d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f37dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f37dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f37e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f37e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f37e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f37e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f37e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f37e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f37ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F37ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37ECu;
        // 0x2f37f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F37ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F37F4u;
}

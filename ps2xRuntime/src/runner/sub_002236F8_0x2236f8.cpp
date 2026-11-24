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

// Function: sub_002236F8
// Address: 0x2236f8 - 0x223788
void sub_002236F8_0x2236f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002236F8_0x2236f8");
#endif

    switch (ctx->pc) {
        case 0x223738u: goto label_223738;
        case 0x223748u: goto label_223748;
        default: break;
    }

    ctx->pc = 0x2236f8u;

    // 0x2236f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2236f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2236fc: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2236fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x223700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223704: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x223704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223708: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x223708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22370c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22370cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223714: 0x24445a64  addiu       $a0, $v0, 0x5A64
    ctx->pc = 0x223714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23140));
    // 0x223718: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x223718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22371c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22371cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x885A64u));
    // 0x223720: 0x1c400013  bgtz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x223720u;
    {
        const bool branch_taken_0x223720 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x223724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223720u;
        // 0x223724: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223720) {
            ctx->pc = 0x223770u;
            goto label_223770;
        }
    }
    ctx->pc = 0x223728u;
    // 0x223728: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x223728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x22372c: 0x3c100088  lui         $s0, 0x88
    ctx->pc = 0x22372cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)136 << 16));
    // 0x223730: 0xc088db6  jal         func_2236D8
    ctx->pc = 0x223730u;
    SET_GPR_U32(ctx, 31, 0x223738u);
    ctx->pc = 0x223734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223730u;
    // 0x223734: 0x26105a50  addiu       $s0, $s0, 0x5A50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2236D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2236D8u, 0x223730u, 0x223738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223738u;
label_223738:
    // 0x223738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22373c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22373cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x223740: 0xc088e46  jal         func_223918
    ctx->pc = 0x223740u;
    SET_GPR_U32(ctx, 31, 0x223748u);
    ctx->pc = 0x223744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223740u;
    // 0x223744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223918u, 0x223740u, 0x223748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223748u;
label_223748:
    // 0x223748: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x223748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x22374c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22374cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223750: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223754: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x223754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22375c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22375cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223760: 0x24845a58  addiu       $a0, $a0, 0x5A58
    ctx->pc = 0x223760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23128));
    // 0x223764: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x223764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223768: 0x8088e36  j           func_2238D8
    ctx->pc = 0x223768u;
    ctx->pc = 0x22376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223768u;
    // 0x22376c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238D8u;
    sub_002238D8_0x2238d8(rdram, ctx, runtime); return;
    ctx->pc = 0x223770u;
label_223770:
    // 0x223770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22377c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22377cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223780: 0x3e00008  jr          $ra
    ctx->pc = 0x223780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223780u;
        // 0x223784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223788u;
}

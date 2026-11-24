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

// Function: sub_00126708
// Address: 0x126708 - 0x126778
void sub_00126708_0x126708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126708_0x126708");
#endif

    switch (ctx->pc) {
        case 0x126740u: goto label_126740;
        case 0x126758u: goto label_126758;
        case 0x126768u: goto label_126768;
        default: break;
    }

    ctx->pc = 0x126708u;

    // 0x126708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12670c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x12670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x126710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126714: 0x2153c  dsll32      $v0, $v0, 20
    ctx->pc = 0x126714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 20));
    // 0x126718: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x126718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12671c: 0x288f0018  slti        $t7, $a0, 0x18
    ctx->pc = 0x12671cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x126720: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x126720u;
    {
        const bool branch_taken_0x126720 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126720u;
        // 0x126724: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126720) {
            ctx->pc = 0x12674Cu;
            goto label_12674c;
        }
    }
    ctx->pc = 0x126728u;
    // 0x126728: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x126728u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12672c: 0x470c0  sll         $t6, $a0, 3
    ctx->pc = 0x12672cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x126730: 0x25ef3c40  addiu       $t7, $t7, 0x3C40
    ctx->pc = 0x126730u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15424));
    // 0x126734: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x126734u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x126738: 0xddc20000  ld          $v0, 0x0($t6)
    ctx->pc = 0x126738u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12673c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12673cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126740:
    // 0x126740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x126740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126744: 0x3e00008  jr          $ra
    ctx->pc = 0x126744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126744u;
        // 0x126748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12674Cu;
label_12674c:
    // 0x12674c: 0x5880fffc  blezl       $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12674Cu;
    {
        const bool branch_taken_0x12674c = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x12674c) {
            ctx->pc = 0x126750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12674Cu;
            // 0x126750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126740;
        }
    }
    ctx->pc = 0x126754u;
    // 0x126754: 0x24051009  addiu       $a1, $zero, 0x1009
    ctx->pc = 0x126754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
label_126758:
    // 0x126758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12675c: 0x52cbc  dsll32      $a1, $a1, 18
    ctx->pc = 0x12675cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
    // 0x126760: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x126760u;
    SET_GPR_U32(ctx, 31, 0x126768u);
    ctx->pc = 0x126764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126760u;
    // 0x126764: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x126760u, 0x126768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126768u;
label_126768:
    // 0x126768: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x126768u;
    {
        const bool branch_taken_0x126768 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x12676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126768u;
        // 0x12676c: 0x24051009  addiu       $a1, $zero, 0x1009 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126768) {
            ctx->pc = 0x126758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126758;
        }
    }
    ctx->pc = 0x126770u;
    // 0x126770: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x126770u;
    {
        const bool branch_taken_0x126770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126770u;
        // 0x126774: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126770) {
            ctx->pc = 0x126740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126740;
        }
    }
    ctx->pc = 0x126778u;
}

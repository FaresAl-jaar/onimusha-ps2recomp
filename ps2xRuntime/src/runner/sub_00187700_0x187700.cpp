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

// Function: sub_00187700
// Address: 0x187700 - 0x187790
void sub_00187700_0x187700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187700_0x187700");
#endif

    switch (ctx->pc) {
        case 0x187730u: goto label_187730;
        default: break;
    }

    ctx->pc = 0x187700u;

    // 0x187700: 0x8c830368  lw          $v1, 0x368($a0)
    ctx->pc = 0x187700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x187704: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187704u;
    {
        const bool branch_taken_0x187704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187704u;
        // 0x187708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187704) {
            ctx->pc = 0x187718u;
            goto label_187718;
        }
    }
    ctx->pc = 0x18770Cu;
    // 0x18770c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18770Cu;
    {
        const bool branch_taken_0x18770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18770c) {
            ctx->pc = 0x187788u;
            goto label_187788;
        }
    }
    ctx->pc = 0x187714u;
    // 0x187714: 0x0  nop
    ctx->pc = 0x187714u;
    // NOP
label_187718:
    // 0x187718: 0x8c880314  lw          $t0, 0x314($a0)
    ctx->pc = 0x187718u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 788)));
    // 0x18771c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x187720: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x187720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187724: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x187724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x187728: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x187728u;
    {
        const bool branch_taken_0x187728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187728u;
        // 0x18772c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187728) {
            ctx->pc = 0x187770u;
            goto label_187770;
        }
    }
    ctx->pc = 0x187730u;
label_187730:
    // 0x187730: 0x10e6000b  beq         $a3, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x187730u;
    {
        const bool branch_taken_0x187730 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x187730) {
            ctx->pc = 0x187760u;
            goto label_187760;
        }
    }
    ctx->pc = 0x187738u;
    // 0x187738: 0x10e50009  beq         $a3, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x187738u;
    {
        const bool branch_taken_0x187738 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x187738) {
            ctx->pc = 0x187760u;
            goto label_187760;
        }
    }
    ctx->pc = 0x187740u;
    // 0x187740: 0x10e40005  beq         $a3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187740u;
    {
        const bool branch_taken_0x187740 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x187740) {
            ctx->pc = 0x187758u;
            goto label_187758;
        }
    }
    ctx->pc = 0x187748u;
    // 0x187748: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187748u;
    {
        const bool branch_taken_0x187748 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x187748) {
            ctx->pc = 0x187758u;
            goto label_187758;
        }
    }
    ctx->pc = 0x187750u;
    // 0x187750: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187750u;
    {
        const bool branch_taken_0x187750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187750) {
            ctx->pc = 0x187768u;
            goto label_187768;
        }
    }
    ctx->pc = 0x187758u;
label_187758:
    // 0x187758: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187758u;
    {
        const bool branch_taken_0x187758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187758u;
        // 0x18775c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187758) {
            ctx->pc = 0x187768u;
            goto label_187768;
        }
    }
    ctx->pc = 0x187760u;
label_187760:
    // 0x187760: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187764: 0x0  nop
    ctx->pc = 0x187764u;
    // NOP
label_187768:
    // 0x187768: 0x25080038  addiu       $t0, $t0, 0x38
    ctx->pc = 0x187768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 56));
    // 0x18776c: 0x0  nop
    ctx->pc = 0x18776cu;
    // NOP
label_187770:
    // 0x187770: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187770u;
    {
        const bool branch_taken_0x187770 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x187770) {
            ctx->pc = 0x187788u;
            goto label_187788;
        }
    }
    ctx->pc = 0x187778u;
    // 0x187778: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x187778u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18777c: 0x14e0ffec  bnez        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18777Cu;
    {
        const bool branch_taken_0x18777c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x18777c) {
            ctx->pc = 0x187730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187730;
        }
    }
    ctx->pc = 0x187784u;
    // 0x187784: 0x0  nop
    ctx->pc = 0x187784u;
    // NOP
label_187788:
    // 0x187788: 0x3e00008  jr          $ra
    ctx->pc = 0x187788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187790u;
}

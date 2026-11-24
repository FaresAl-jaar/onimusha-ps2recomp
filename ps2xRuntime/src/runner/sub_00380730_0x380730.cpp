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

// Function: sub_00380730
// Address: 0x380730 - 0x3807b0
void sub_00380730_0x380730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380730_0x380730");
#endif

    switch (ctx->pc) {
        case 0x380748u: goto label_380748;
        default: break;
    }

    ctx->pc = 0x380730u;

    // 0x380730: 0x8c8801ec  lw          $t0, 0x1EC($a0)
    ctx->pc = 0x380730u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x380734: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x380734u;
    {
        const bool branch_taken_0x380734 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x380738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380734u;
        // 0x380738: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x380734) {
            ctx->pc = 0x3807A0u;
            goto label_3807a0;
        }
    }
    ctx->pc = 0x38073Cu;
    // 0x38073c: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x38073cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x380740: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x380740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x380744: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x380744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
label_380748:
    // 0x380748: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x380748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38074c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x380750: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x380750u;
    {
        const bool branch_taken_0x380750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380750) {
            ctx->pc = 0x380790u;
            goto label_380790;
        }
    }
    ctx->pc = 0x380758u;
    // 0x380758: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x380758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x38075c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x38075cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x380760: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x380760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x380764: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x380764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x380768: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x380768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38076c: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x38076cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x380770: 0x14e20007  bne         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x380770u;
    {
        const bool branch_taken_0x380770 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x380770) {
            ctx->pc = 0x380790u;
            goto label_380790;
        }
    }
    ctx->pc = 0x380778u;
    // 0x380778: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x380778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38077c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38077Cu;
    {
        const bool branch_taken_0x38077c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x380780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38077Cu;
        // 0x380780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38077c) {
            ctx->pc = 0x380790u;
            goto label_380790;
        }
    }
    ctx->pc = 0x380784u;
    // 0x380784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x380784u;
    {
        const bool branch_taken_0x380784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380784) {
            ctx->pc = 0x3807A8u;
            goto label_3807a8;
        }
    }
    ctx->pc = 0x38078Cu;
    // 0x38078c: 0x0  nop
    ctx->pc = 0x38078cu;
    // NOP
label_380790:
    // 0x380790: 0x8d08000c  lw          $t0, 0xC($t0)
    ctx->pc = 0x380790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x380794: 0x1500ffec  bnez        $t0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x380794u;
    {
        const bool branch_taken_0x380794 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x380794) {
            ctx->pc = 0x380748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380748;
        }
    }
    ctx->pc = 0x38079Cu;
    // 0x38079c: 0x0  nop
    ctx->pc = 0x38079cu;
    // NOP
label_3807a0:
    // 0x3807a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3807a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3807a4: 0x0  nop
    ctx->pc = 0x3807a4u;
    // NOP
label_3807a8:
    // 0x3807a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3807A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3807A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3807B0u;
}

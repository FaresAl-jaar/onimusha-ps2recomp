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

// Function: sub_00350D10
// Address: 0x350d10 - 0x350d50
void sub_00350D10_0x350d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350D10_0x350d10");
#endif

    ctx->pc = 0x350d10u;

    // 0x350d10: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x350d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x350d14: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x350d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x350d18: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x350D18u;
    {
        const bool branch_taken_0x350d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D18u;
        // 0x350d1c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d18) {
            ctx->pc = 0x350D48u;
            goto label_350d48;
        }
    }
    ctx->pc = 0x350D20u;
    // 0x350d20: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x350d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x350d24: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x350d24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x350d28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x350d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x350d2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x350d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x350d30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x350d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350d34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350D34u;
    {
        const bool branch_taken_0x350d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D34u;
        // 0x350d38: 0x3c03c6ea  lui         $v1, 0xC6EA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d34) {
            ctx->pc = 0x350D48u;
            goto label_350d48;
        }
    }
    ctx->pc = 0x350D3Cu;
    // 0x350d3c: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x350d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x350d40: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x350d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x350d44: 0xac8028f4  sw          $zero, 0x28F4($a0)
    ctx->pc = 0x350d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10484), GPR_U32(ctx, 0));
label_350d48:
    // 0x350d48: 0x3e00008  jr          $ra
    ctx->pc = 0x350D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D50u;
}

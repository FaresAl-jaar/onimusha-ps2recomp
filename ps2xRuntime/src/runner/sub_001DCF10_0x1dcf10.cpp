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

// Function: sub_001DCF10
// Address: 0x1dcf10 - 0x1dcf64
void sub_001DCF10_0x1dcf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCF10_0x1dcf10");
#endif

    switch (ctx->pc) {
        case 0x1dcf10u: goto label_1dcf10;
        case 0x1dcf14u: goto label_1dcf14;
        case 0x1dcf18u: goto label_1dcf18;
        case 0x1dcf1cu: goto label_1dcf1c;
        case 0x1dcf20u: goto label_1dcf20;
        case 0x1dcf24u: goto label_1dcf24;
        case 0x1dcf28u: goto label_1dcf28;
        case 0x1dcf2cu: goto label_1dcf2c;
        case 0x1dcf30u: goto label_1dcf30;
        case 0x1dcf34u: goto label_1dcf34;
        case 0x1dcf38u: goto label_1dcf38;
        case 0x1dcf3cu: goto label_1dcf3c;
        case 0x1dcf40u: goto label_1dcf40;
        case 0x1dcf44u: goto label_1dcf44;
        case 0x1dcf48u: goto label_1dcf48;
        case 0x1dcf4cu: goto label_1dcf4c;
        case 0x1dcf50u: goto label_1dcf50;
        case 0x1dcf54u: goto label_1dcf54;
        case 0x1dcf58u: goto label_1dcf58;
        case 0x1dcf5cu: goto label_1dcf5c;
        case 0x1dcf60u: goto label_1dcf60;
        default: break;
    }

    ctx->pc = 0x1dcf10u;

label_1dcf10:
    // 0x1dcf10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dcf14:
    // 0x1dcf14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dcf18:
    // 0x1dcf18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dcf1c:
    // 0x1dcf1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcf1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcf20:
    // 0x1dcf20: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1dcf24:
    if (ctx->pc == 0x1DCF24u) {
        ctx->pc = 0x1DCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF20u;
        // 0x1dcf24: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF28u;
        goto label_1dcf28;
    }
    ctx->pc = 0x1DCF20u;
    {
        const bool branch_taken_0x1dcf20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF20u;
        // 0x1dcf24: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf20) {
            ctx->pc = 0x1DCF50u;
            goto label_1dcf50;
        }
    }
    ctx->pc = 0x1DCF28u;
label_1dcf28:
    // 0x1dcf28: 0x244261f0  addiu       $v0, $v0, 0x61F0
    ctx->pc = 0x1dcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25072));
label_1dcf2c:
    // 0x1dcf2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dcf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dcf30:
    // 0x1dcf30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dcf30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dcf34:
    // 0x1dcf34: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dcf34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dcf38:
    // 0x1dcf38: 0x320f809  jalr        $t9
label_1dcf3c:
    if (ctx->pc == 0x1DCF3Cu) {
        ctx->pc = 0x1DCF40u;
        goto label_1dcf40;
    }
    ctx->pc = 0x1DCF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCF40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF38u, 0x1DCF40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCF40u;
label_1dcf40:
    // 0x1dcf40: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1dcf44:
    if (ctx->pc == 0x1DCF44u) {
        ctx->pc = 0x1DCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF40u;
        // 0x1dcf44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF48u;
        goto label_1dcf48;
    }
    ctx->pc = 0x1DCF40u;
    {
        const bool branch_taken_0x1dcf40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF40u;
        // 0x1dcf44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf40) {
            ctx->pc = 0x1DCF50u;
            goto label_1dcf50;
        }
    }
    ctx->pc = 0x1DCF48u;
label_1dcf48:
    // 0x1dcf48: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1dcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1dcf4c:
    // 0x1dcf4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dcf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dcf50:
    // 0x1dcf50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dcf50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dcf54:
    // 0x1dcf54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcf58:
    // 0x1dcf58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcf5c:
    // 0x1dcf5c: 0x3e00008  jr          $ra
label_1dcf60:
    if (ctx->pc == 0x1DCF60u) {
        ctx->pc = 0x1DCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF5Cu;
        // 0x1dcf60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF64u;
        goto label_fallthrough_0x1dcf5c;
    }
    ctx->pc = 0x1DCF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF5Cu;
        // 0x1dcf60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dcf5c:
    ctx->pc = 0x1DCF64u;
}

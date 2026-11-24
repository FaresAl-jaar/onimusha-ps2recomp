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

// Function: sub_001DDB30
// Address: 0x1ddb30 - 0x1ddb84
void sub_001DDB30_0x1ddb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDB30_0x1ddb30");
#endif

    switch (ctx->pc) {
        case 0x1ddb30u: goto label_1ddb30;
        case 0x1ddb34u: goto label_1ddb34;
        case 0x1ddb38u: goto label_1ddb38;
        case 0x1ddb3cu: goto label_1ddb3c;
        case 0x1ddb40u: goto label_1ddb40;
        case 0x1ddb44u: goto label_1ddb44;
        case 0x1ddb48u: goto label_1ddb48;
        case 0x1ddb4cu: goto label_1ddb4c;
        case 0x1ddb50u: goto label_1ddb50;
        case 0x1ddb54u: goto label_1ddb54;
        case 0x1ddb58u: goto label_1ddb58;
        case 0x1ddb5cu: goto label_1ddb5c;
        case 0x1ddb60u: goto label_1ddb60;
        case 0x1ddb64u: goto label_1ddb64;
        case 0x1ddb68u: goto label_1ddb68;
        case 0x1ddb6cu: goto label_1ddb6c;
        case 0x1ddb70u: goto label_1ddb70;
        case 0x1ddb74u: goto label_1ddb74;
        case 0x1ddb78u: goto label_1ddb78;
        case 0x1ddb7cu: goto label_1ddb7c;
        case 0x1ddb80u: goto label_1ddb80;
        default: break;
    }

    ctx->pc = 0x1ddb30u;

label_1ddb30:
    // 0x1ddb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ddb34:
    // 0x1ddb34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ddb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ddb38:
    // 0x1ddb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ddb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ddb3c:
    // 0x1ddb3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ddb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb40:
    // 0x1ddb40: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1ddb44:
    if (ctx->pc == 0x1DDB44u) {
        ctx->pc = 0x1DDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB40u;
        // 0x1ddb44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB48u;
        goto label_1ddb48;
    }
    ctx->pc = 0x1DDB40u;
    {
        const bool branch_taken_0x1ddb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB40u;
        // 0x1ddb44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb40) {
            ctx->pc = 0x1DDB70u;
            goto label_1ddb70;
        }
    }
    ctx->pc = 0x1DDB48u;
label_1ddb48:
    // 0x1ddb48: 0x244262b0  addiu       $v0, $v0, 0x62B0
    ctx->pc = 0x1ddb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
label_1ddb4c:
    // 0x1ddb4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ddb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ddb50:
    // 0x1ddb50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ddb50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ddb54:
    // 0x1ddb54: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1ddb54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1ddb58:
    // 0x1ddb58: 0x320f809  jalr        $t9
label_1ddb5c:
    if (ctx->pc == 0x1DDB5Cu) {
        ctx->pc = 0x1DDB60u;
        goto label_1ddb60;
    }
    ctx->pc = 0x1DDB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DDB60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDB58u, 0x1DDB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDB60u;
label_1ddb60:
    // 0x1ddb60: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ddb64:
    if (ctx->pc == 0x1DDB64u) {
        ctx->pc = 0x1DDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB60u;
        // 0x1ddb64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB68u;
        goto label_1ddb68;
    }
    ctx->pc = 0x1DDB60u;
    {
        const bool branch_taken_0x1ddb60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB60u;
        // 0x1ddb64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb60) {
            ctx->pc = 0x1DDB70u;
            goto label_1ddb70;
        }
    }
    ctx->pc = 0x1DDB68u;
label_1ddb68:
    // 0x1ddb68: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1ddb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1ddb6c:
    // 0x1ddb6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ddb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ddb70:
    // 0x1ddb70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ddb70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb74:
    // 0x1ddb74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ddb78:
    // 0x1ddb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ddb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ddb7c:
    // 0x1ddb7c: 0x3e00008  jr          $ra
label_1ddb80:
    if (ctx->pc == 0x1DDB80u) {
        ctx->pc = 0x1DDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB7Cu;
        // 0x1ddb80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB84u;
        goto label_fallthrough_0x1ddb7c;
    }
    ctx->pc = 0x1DDB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB7Cu;
        // 0x1ddb80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ddb7c:
    ctx->pc = 0x1DDB84u;
}

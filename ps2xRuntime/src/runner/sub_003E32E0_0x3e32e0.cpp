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

// Function: sub_003E32E0
// Address: 0x3e32e0 - 0x3e3330
void sub_003E32E0_0x3e32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E32E0_0x3e32e0");
#endif

    ctx->pc = 0x3e32e0u;

    // 0x3e32e0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3e32e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3e32e4: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x3e32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x3e32e8: 0x24633468  addiu       $v1, $v1, 0x3468
    ctx->pc = 0x3e32e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13416));
    // 0x3e32ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3e32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e32f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e32f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3e32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e32f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E32F8u;
    {
        const bool branch_taken_0x3e32f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e32f8) {
            ctx->pc = 0x3E3320u;
            goto label_3e3320;
        }
    }
    ctx->pc = 0x3E3300u;
    // 0x3e3300: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e3300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3304: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e3304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3308: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x3e3308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x3e330c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e3310: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3e3310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3e3314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3314u;
    {
        const bool branch_taken_0x3e3314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3314u;
        // 0x3e3318: 0xa3100a  movz        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3314) {
            ctx->pc = 0x3E3328u;
            goto label_3e3328;
        }
    }
    ctx->pc = 0x3E331Cu;
    // 0x3e331c: 0x0  nop
    ctx->pc = 0x3e331cu;
    // NOP
label_3e3320:
    // 0x3e3320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e3320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3324: 0x0  nop
    ctx->pc = 0x3e3324u;
    // NOP
label_3e3328:
    // 0x3e3328: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3330u;
}

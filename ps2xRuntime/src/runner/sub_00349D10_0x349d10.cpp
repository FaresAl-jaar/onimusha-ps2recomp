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

// Function: sub_00349D10
// Address: 0x349d10 - 0x349d80
void sub_00349D10_0x349d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349D10_0x349d10");
#endif

    ctx->pc = 0x349d10u;

    // 0x349d10: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x349d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349d14: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x349d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x349d18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x349d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x349d1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x349d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x349d20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x349d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x349d24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x349d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x349d28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x349d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x349d2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x349d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x349d30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x349d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x349d34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349D34u;
    {
        const bool branch_taken_0x349d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D34u;
        // 0x349d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349d34) {
            ctx->pc = 0x349D48u;
            goto label_349d48;
        }
    }
    ctx->pc = 0x349D3Cu;
    // 0x349d3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x349D3Cu;
    {
        const bool branch_taken_0x349d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349d3c) {
            ctx->pc = 0x349D78u;
            goto label_349d78;
        }
    }
    ctx->pc = 0x349D44u;
    // 0x349d44: 0x0  nop
    ctx->pc = 0x349d44u;
    // NOP
label_349d48:
    // 0x349d48: 0x9085005f  lbu         $a1, 0x5F($a0)
    ctx->pc = 0x349d48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
    // 0x349d4c: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x349d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x349d50: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x349d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x349d54: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x349d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x349d58: 0x52240  sll         $a0, $a1, 9
    ctx->pc = 0x349d58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x349d5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x349d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x349d60: 0x946301d0  lhu         $v1, 0x1D0($v1)
    ctx->pc = 0x349d60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x349d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x349d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x349d68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x349d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x349d6c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x349D6Cu;
    {
        const bool branch_taken_0x349d6c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x349d6c) {
            ctx->pc = 0x349D78u;
            goto label_349d78;
        }
    }
    ctx->pc = 0x349D74u;
    // 0x349d74: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x349d74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_349d78:
    // 0x349d78: 0x3e00008  jr          $ra
    ctx->pc = 0x349D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349D80u;
}

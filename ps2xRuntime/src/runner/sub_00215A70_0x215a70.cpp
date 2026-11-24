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

// Function: sub_00215A70
// Address: 0x215a70 - 0x215ad4
void sub_00215A70_0x215a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215A70_0x215a70");
#endif

    ctx->pc = 0x215a70u;

    // 0x215a70: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x215a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x215a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a78: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x215a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x215a7c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x215a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x215a80: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215A80u;
    {
        const bool branch_taken_0x215a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A80u;
        // 0x215a84: 0xc32023  subu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a80) {
            ctx->pc = 0x215A9Cu;
            goto label_215a9c;
        }
    }
    ctx->pc = 0x215A88u;
    // 0x215a88: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x215a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x215a8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x215a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215a90: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x215a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x215a94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x215A94u;
    {
        const bool branch_taken_0x215a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215a94) {
            ctx->pc = 0x215ACCu;
            goto label_215acc;
        }
    }
    ctx->pc = 0x215A9Cu;
label_215a9c:
    // 0x215a9c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x215a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x215aa0: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x215aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x215aa4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x215AA4u;
    {
        const bool branch_taken_0x215aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AA4u;
        // 0x215aa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215aa4) {
            ctx->pc = 0x215ACCu;
            goto label_215acc;
        }
    }
    ctx->pc = 0x215AACu;
    // 0x215aac: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x215aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x215ab0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x215ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x215ab4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x215ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x215ab8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215AB8u;
    {
        const bool branch_taken_0x215ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ab8) {
            ctx->pc = 0x215ACCu;
            goto label_215acc;
        }
    }
    ctx->pc = 0x215AC0u;
    // 0x215ac0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x215ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x215ac4: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x215ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215ac8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x215ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_215acc:
    // 0x215acc: 0x3e00008  jr          $ra
    ctx->pc = 0x215ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ACCu;
        // 0x215ad0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215AD4u;
}

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

// Function: sub_003C10B0
// Address: 0x3c10b0 - 0x3c1110
void sub_003C10B0_0x3c10b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C10B0_0x3c10b0");
#endif

    switch (ctx->pc) {
        case 0x3c10e0u: goto label_3c10e0;
        default: break;
    }

    ctx->pc = 0x3c10b0u;

    // 0x3c10b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3c10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3c10b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C10B4u;
    {
        const bool branch_taken_0x3c10b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c10b4) {
            ctx->pc = 0x3C10C8u;
            goto label_3c10c8;
        }
    }
    ctx->pc = 0x3C10BCu;
    // 0x3c10bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C10BCu;
    {
        const bool branch_taken_0x3c10bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10BCu;
        // 0x3c10c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10bc) {
            ctx->pc = 0x3C1108u;
            goto label_3c1108;
        }
    }
    ctx->pc = 0x3C10C4u;
    // 0x3c10c4: 0x0  nop
    ctx->pc = 0x3c10c4u;
    // NOP
label_3c10c8:
    // 0x3c10c8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x3c10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x3c10cc: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x3c10ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c10d0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x3C10D0u;
    {
        const bool branch_taken_0x3c10d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10D0u;
        // 0x3c10d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10d0) {
            ctx->pc = 0x3C1100u;
            goto label_3c1100;
        }
    }
    ctx->pc = 0x3C10D8u;
    // 0x3c10d8: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x3c10d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x3c10dc: 0x0  nop
    ctx->pc = 0x3c10dcu;
    // NOP
label_3c10e0:
    // 0x3c10e0: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C10E0u;
    {
        const bool branch_taken_0x3c10e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3C10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10E0u;
        // 0x3c10e4: 0x6143c  dsll32      $v0, $a2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10e0) {
            ctx->pc = 0x3C10F0u;
            goto label_3c10f0;
        }
    }
    ctx->pc = 0x3C10E8u;
    // 0x3c10e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C10E8u;
    {
        const bool branch_taken_0x3c10e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10E8u;
        // 0x3c10ec: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10e8) {
            ctx->pc = 0x3C1108u;
            goto label_3c1108;
        }
    }
    ctx->pc = 0x3C10F0u;
label_3c10f0:
    // 0x3c10f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c10f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3c10f4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x3c10f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c10f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C10F8u;
    {
        const bool branch_taken_0x3c10f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10F8u;
        // 0x3c10fc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10f8) {
            ctx->pc = 0x3C10E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c10e0;
        }
    }
    ctx->pc = 0x3C1100u;
label_3c1100:
    // 0x3c1100: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c1100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c1104: 0x0  nop
    ctx->pc = 0x3c1104u;
    // NOP
label_3c1108:
    // 0x3c1108: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1110u;
}

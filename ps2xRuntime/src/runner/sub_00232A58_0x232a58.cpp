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

// Function: sub_00232A58
// Address: 0x232a58 - 0x232ac8
void sub_00232A58_0x232a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232A58_0x232a58");
#endif

    switch (ctx->pc) {
        case 0x232aa0u: goto label_232aa0;
        case 0x232ab8u: goto label_232ab8;
        default: break;
    }

    ctx->pc = 0x232a58u;

    // 0x232a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232a5c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x232a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232a64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x232a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x232a6c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x232a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x232a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a78: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232A78u;
    {
        const bool branch_taken_0x232a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x232A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A78u;
        // 0x232a7c: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a78) {
            ctx->pc = 0x232A98u;
            goto label_232a98;
        }
    }
    ctx->pc = 0x232A80u;
    // 0x232a80: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x232a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232a88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232a8c: 0x2484aba8  addiu       $a0, $a0, -0x5458
    ctx->pc = 0x232a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945704));
    // 0x232a90: 0x808baa4  j           func_22EA90
    ctx->pc = 0x232A90u;
    ctx->pc = 0x232A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A90u;
    // 0x232a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x232A98u;
label_232a98:
    // 0x232a98: 0xc092d28  jal         func_24B4A0
    ctx->pc = 0x232A98u;
    SET_GPR_U32(ctx, 31, 0x232AA0u);
    ctx->pc = 0x232A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A98u;
    // 0x232a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B4A0u, 0x232A98u, 0x232AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AA0u;
label_232aa0:
    // 0x232aa0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x232aa4: 0x2484abd8  addiu       $a0, $a0, -0x5428
    ctx->pc = 0x232aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945752));
    // 0x232aa8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232AA8u;
    {
        const bool branch_taken_0x232aa8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x232AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AA8u;
        // 0x232aac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232aa8) {
            ctx->pc = 0x232AB8u;
            goto label_232ab8;
        }
    }
    ctx->pc = 0x232AB0u;
    // 0x232ab0: 0xc08bac2  jal         func_22EB08
    ctx->pc = 0x232AB0u;
    SET_GPR_U32(ctx, 31, 0x232AB8u);
    ctx->pc = 0x22EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB08u, 0x232AB0u, 0x232AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AB8u;
label_232ab8:
    // 0x232ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232abc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x232AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AC0u;
        // 0x232ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232AC8u;
}

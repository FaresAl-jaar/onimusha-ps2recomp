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

// Function: sub_00255F80
// Address: 0x255f80 - 0x255fd0
void sub_00255F80_0x255f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255F80_0x255f80");
#endif

    ctx->pc = 0x255f80u;

    // 0x255f80: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x255f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x255f84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255f88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x255f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x255f8c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x255f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x255f90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x255F90u;
    {
        const bool branch_taken_0x255f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x255F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F90u;
        // 0x255f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f90) {
            ctx->pc = 0x255FA0u;
            goto label_255fa0;
        }
    }
    ctx->pc = 0x255F98u;
    // 0x255f98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x255F98u;
    {
        const bool branch_taken_0x255f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f98) {
            ctx->pc = 0x255FC8u;
            goto label_255fc8;
        }
    }
    ctx->pc = 0x255FA0u;
label_255fa0:
    // 0x255fa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x255fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255fa4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x255fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x255fa8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x255fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x255fac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255FACu;
    {
        const bool branch_taken_0x255fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FACu;
        // 0x255fb0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fac) {
            ctx->pc = 0x255FBCu;
            goto label_255fbc;
        }
    }
    ctx->pc = 0x255FB4u;
    // 0x255fb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x255FB4u;
    {
        const bool branch_taken_0x255fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FB4u;
        // 0x255fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fb4) {
            ctx->pc = 0x255FC8u;
            goto label_255fc8;
        }
    }
    ctx->pc = 0x255FBCu;
label_255fbc:
    // 0x255fbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x255fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255fc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255fc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x255fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_255fc8:
    // 0x255fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x255FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255FD0u;
}

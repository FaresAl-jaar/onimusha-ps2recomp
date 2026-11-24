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

// Function: sub_00201980
// Address: 0x201980 - 0x2019e8
void sub_00201980_0x201980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201980_0x201980");
#endif

    switch (ctx->pc) {
        case 0x201990u: goto label_201990;
        default: break;
    }

    ctx->pc = 0x201980u;

    // 0x201980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201988: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x201988u;
    SET_GPR_U32(ctx, 31, 0x201990u);
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x201988u, 0x201990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201990u;
label_201990:
    // 0x201990: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x201990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201994: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x201994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x201998: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x201998u;
    {
        const bool branch_taken_0x201998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201998u;
        // 0x20199c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201998) {
            ctx->pc = 0x2019DCu;
            goto label_2019dc;
        }
    }
    ctx->pc = 0x2019A0u;
    // 0x2019a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2019a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2019a4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2019a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x2019a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2019a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2019ac: 0x8c6363f0  lw          $v1, 0x63F0($v1)
    ctx->pc = 0x2019acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25584)));
    // 0x2019b0: 0x600008  jr          $v1
    ctx->pc = 0x2019B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2019B8u: goto label_2019b8;
            case 0x2019C0u: goto label_2019c0;
            case 0x2019C8u: goto label_2019c8;
            case 0x2019D0u: goto label_2019d0;
            case 0x2019D8u: goto label_2019d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2019B8u;
label_2019b8:
    // 0x2019b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2019B8u;
    {
        const bool branch_taken_0x2019b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2019BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019B8u;
        // 0x2019bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019b8) {
            ctx->pc = 0x2019DCu;
            goto label_2019dc;
        }
    }
    ctx->pc = 0x2019C0u;
label_2019c0:
    // 0x2019c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2019C0u;
    {
        const bool branch_taken_0x2019c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2019C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019C0u;
        // 0x2019c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019c0) {
            ctx->pc = 0x2019DCu;
            goto label_2019dc;
        }
    }
    ctx->pc = 0x2019C8u;
label_2019c8:
    // 0x2019c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2019C8u;
    {
        const bool branch_taken_0x2019c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2019CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019C8u;
        // 0x2019cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019c8) {
            ctx->pc = 0x2019DCu;
            goto label_2019dc;
        }
    }
    ctx->pc = 0x2019D0u;
label_2019d0:
    // 0x2019d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2019D0u;
    {
        const bool branch_taken_0x2019d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019D0u;
        // 0x2019d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019d0) {
            ctx->pc = 0x2019DCu;
            goto label_2019dc;
        }
    }
    ctx->pc = 0x2019D8u;
label_2019d8:
    // 0x2019d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2019d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2019dc:
    // 0x2019dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2019dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2019e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2019E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019E0u;
        // 0x2019e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2019E8u;
}

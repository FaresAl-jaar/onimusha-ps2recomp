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

// Function: sub_00328B70
// Address: 0x328b70 - 0x328c14
void sub_00328B70_0x328b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328B70_0x328b70");
#endif

    switch (ctx->pc) {
        case 0x328ba8u: goto label_328ba8;
        case 0x328bb8u: goto label_328bb8;
        case 0x328bc8u: goto label_328bc8;
        case 0x328bd8u: goto label_328bd8;
        case 0x328be8u: goto label_328be8;
        case 0x328bf8u: goto label_328bf8;
        case 0x328c08u: goto label_328c08;
        default: break;
    }

    ctx->pc = 0x328b70u;

    // 0x328b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328b78: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x328b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328b7c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x328b7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x328b80: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x328B80u;
    {
        const bool branch_taken_0x328b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B80u;
        // 0x328b84: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b80) {
            ctx->pc = 0x328C08u;
            goto label_328c08;
        }
    }
    ctx->pc = 0x328B88u;
    // 0x328b88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x328b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x328b8c: 0x24a5cd20  addiu       $a1, $a1, -0x32E0
    ctx->pc = 0x328b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954272));
    // 0x328b90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x328b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x328b94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x328b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328b98: 0x600008  jr          $v1
    ctx->pc = 0x328B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x328BA0u: goto label_328ba0;
            case 0x328BB0u: goto label_328bb0;
            case 0x328BC0u: goto label_328bc0;
            case 0x328BD0u: goto label_328bd0;
            case 0x328BE0u: goto label_328be0;
            case 0x328BF0u: goto label_328bf0;
            case 0x328C00u: goto label_328c00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328B98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x328BA0u;
label_328ba0:
    // 0x328ba0: 0xc0ca30c  jal         func_328C30
    ctx->pc = 0x328BA0u;
    SET_GPR_U32(ctx, 31, 0x328BA8u);
    ctx->pc = 0x328C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C30u, 0x328BA0u, 0x328BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BA8u;
label_328ba8:
    // 0x328ba8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x328BA8u;
    {
        const bool branch_taken_0x328ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ba8) {
            ctx->pc = 0x328C08u;
            goto label_328c08;
        }
    }
    ctx->pc = 0x328BB0u;
label_328bb0:
    // 0x328bb0: 0xc0ca3b4  jal         func_328ED0
    ctx->pc = 0x328BB0u;
    SET_GPR_U32(ctx, 31, 0x328BB8u);
    ctx->pc = 0x328ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328ED0u, 0x328BB0u, 0x328BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BB8u;
label_328bb8:
    // 0x328bb8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x328BB8u;
    {
        const bool branch_taken_0x328bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328bb8) {
            ctx->pc = 0x328C08u;
            goto label_328c08;
        }
    }
    ctx->pc = 0x328BC0u;
label_328bc0:
    // 0x328bc0: 0xc0ca508  jal         func_329420
    ctx->pc = 0x328BC0u;
    SET_GPR_U32(ctx, 31, 0x328BC8u);
    ctx->pc = 0x329420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329420u, 0x328BC0u, 0x328BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BC8u;
label_328bc8:
    // 0x328bc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x328BC8u;
    {
        const bool branch_taken_0x328bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328bc8) {
            ctx->pc = 0x328C08u;
            goto label_328c08;
        }
    }
    ctx->pc = 0x328BD0u;
label_328bd0:
    // 0x328bd0: 0xc0e0f64  jal         func_383D90
    ctx->pc = 0x328BD0u;
    SET_GPR_U32(ctx, 31, 0x328BD8u);
    ctx->pc = 0x383D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383D90u, 0x328BD0u, 0x328BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BD8u;
label_328bd8:
    // 0x328bd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x328BD8u;
    {
        const bool branch_taken_0x328bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328bd8) {
            ctx->pc = 0x328C08u;
            goto label_328c08;
        }
    }
    ctx->pc = 0x328BE0u;
label_328be0:
    // 0x328be0: 0xc0ca410  jal         func_329040
    ctx->pc = 0x328BE0u;
    SET_GPR_U32(ctx, 31, 0x328BE8u);
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328BE0u, 0x328BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BE8u;
label_328be8:
    // 0x328be8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x328BE8u;
    {
        const bool branch_taken_0x328be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328be8) {
            ctx->pc = 0x328C08u;
            goto label_328c08;
        }
    }
    ctx->pc = 0x328BF0u;
label_328bf0:
    // 0x328bf0: 0xc0ca444  jal         func_329110
    ctx->pc = 0x328BF0u;
    SET_GPR_U32(ctx, 31, 0x328BF8u);
    ctx->pc = 0x329110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329110u, 0x328BF0u, 0x328BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BF8u;
label_328bf8:
    // 0x328bf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x328BF8u;
    {
        const bool branch_taken_0x328bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328bf8) {
            ctx->pc = 0x328C08u;
            goto label_328c08;
        }
    }
    ctx->pc = 0x328C00u;
label_328c00:
    // 0x328c00: 0xc0ca4a8  jal         func_3292A0
    ctx->pc = 0x328C00u;
    SET_GPR_U32(ctx, 31, 0x328C08u);
    ctx->pc = 0x3292A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3292A0u, 0x328C00u, 0x328C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C08u;
label_328c08:
    // 0x328c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x328C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C0Cu;
        // 0x328c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328C14u;
}

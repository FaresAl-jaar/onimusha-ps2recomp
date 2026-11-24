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

// Function: sub_00392AA0
// Address: 0x392aa0 - 0x392b24
void sub_00392AA0_0x392aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392AA0_0x392aa0");
#endif

    switch (ctx->pc) {
        case 0x392ad8u: goto label_392ad8;
        case 0x392ae8u: goto label_392ae8;
        case 0x392af8u: goto label_392af8;
        case 0x392b08u: goto label_392b08;
        case 0x392b18u: goto label_392b18;
        default: break;
    }

    ctx->pc = 0x392aa0u;

    // 0x392aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x392aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x392aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x392aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x392aa8: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x392aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x392aac: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x392aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x392ab0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x392AB0u;
    {
        const bool branch_taken_0x392ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x392AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AB0u;
        // 0x392ab4: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ab0) {
            ctx->pc = 0x392B18u;
            goto label_392b18;
        }
    }
    ctx->pc = 0x392AB8u;
    // 0x392ab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x392ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x392abc: 0x24a52250  addiu       $a1, $a1, 0x2250
    ctx->pc = 0x392abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8784));
    // 0x392ac0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x392ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x392ac4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x392ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x392ac8: 0x600008  jr          $v1
    ctx->pc = 0x392AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x392AD0u: goto label_392ad0;
            case 0x392AE0u: goto label_392ae0;
            case 0x392AF0u: goto label_392af0;
            case 0x392B00u: goto label_392b00;
            case 0x392B10u: goto label_392b10;
            case 0x392B18u: goto label_392b18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392AC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x392AD0u;
label_392ad0:
    // 0x392ad0: 0xc0e4ad0  jal         func_392B40
    ctx->pc = 0x392AD0u;
    SET_GPR_U32(ctx, 31, 0x392AD8u);
    ctx->pc = 0x392B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392B40u, 0x392AD0u, 0x392AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392AD8u;
label_392ad8:
    // 0x392ad8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x392AD8u;
    {
        const bool branch_taken_0x392ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392ad8) {
            ctx->pc = 0x392B18u;
            goto label_392b18;
        }
    }
    ctx->pc = 0x392AE0u;
label_392ae0:
    // 0x392ae0: 0xc0e4b44  jal         func_392D10
    ctx->pc = 0x392AE0u;
    SET_GPR_U32(ctx, 31, 0x392AE8u);
    ctx->pc = 0x392D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392D10u, 0x392AE0u, 0x392AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392AE8u;
label_392ae8:
    // 0x392ae8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x392AE8u;
    {
        const bool branch_taken_0x392ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392ae8) {
            ctx->pc = 0x392B18u;
            goto label_392b18;
        }
    }
    ctx->pc = 0x392AF0u;
label_392af0:
    // 0x392af0: 0xc0e4c2c  jal         func_3930B0
    ctx->pc = 0x392AF0u;
    SET_GPR_U32(ctx, 31, 0x392AF8u);
    ctx->pc = 0x3930B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3930B0u, 0x392AF0u, 0x392AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392AF8u;
label_392af8:
    // 0x392af8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392AF8u;
    {
        const bool branch_taken_0x392af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392af8) {
            ctx->pc = 0x392B18u;
            goto label_392b18;
        }
    }
    ctx->pc = 0x392B00u;
label_392b00:
    // 0x392b00: 0xc0e4c7c  jal         func_3931F0
    ctx->pc = 0x392B00u;
    SET_GPR_U32(ctx, 31, 0x392B08u);
    ctx->pc = 0x3931F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3931F0u, 0x392B00u, 0x392B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392B08u;
label_392b08:
    // 0x392b08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x392B08u;
    {
        const bool branch_taken_0x392b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392b08) {
            ctx->pc = 0x392B18u;
            goto label_392b18;
        }
    }
    ctx->pc = 0x392B10u;
label_392b10:
    // 0x392b10: 0xc0e4bb8  jal         func_392EE0
    ctx->pc = 0x392B10u;
    SET_GPR_U32(ctx, 31, 0x392B18u);
    ctx->pc = 0x392EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392EE0u, 0x392B10u, 0x392B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392B18u;
label_392b18:
    // 0x392b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x392b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x392B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B1Cu;
        // 0x392b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392B24u;
}

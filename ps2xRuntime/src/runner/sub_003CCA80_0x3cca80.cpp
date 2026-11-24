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

// Function: sub_003CCA80
// Address: 0x3cca80 - 0x3ccaec
void sub_003CCA80_0x3cca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCA80_0x3cca80");
#endif

    switch (ctx->pc) {
        case 0x3ccac0u: goto label_3ccac0;
        case 0x3ccad0u: goto label_3ccad0;
        case 0x3ccae0u: goto label_3ccae0;
        default: break;
    }

    ctx->pc = 0x3cca80u;

    // 0x3cca80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3cca84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cca88: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x3cca88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3cca8c: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x3cca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x3cca90: 0x2c410016  sltiu       $at, $v0, 0x16
    ctx->pc = 0x3cca90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x3cca94: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CCA94u;
    {
        const bool branch_taken_0x3cca94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA94u;
        // 0x3cca98: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cca94) {
            ctx->pc = 0x3CCAD8u;
            goto label_3ccad8;
        }
    }
    ctx->pc = 0x3CCA9Cu;
    // 0x3cca9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ccaa0: 0x24632fb0  addiu       $v1, $v1, 0x2FB0
    ctx->pc = 0x3ccaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12208));
    // 0x3ccaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ccaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ccaa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3ccaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ccaac: 0x400008  jr          $v0
    ctx->pc = 0x3CCAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CCAB8u: goto label_3ccab8;
            case 0x3CCAC8u: goto label_3ccac8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCAACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CCAB4u;
    // 0x3ccab4: 0x0  nop
    ctx->pc = 0x3ccab4u;
    // NOP
label_3ccab8:
    // 0x3ccab8: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3CCAB8u;
    SET_GPR_U32(ctx, 31, 0x3CCAC0u);
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3CCAB8u, 0x3CCAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCAC0u;
label_3ccac0:
    // 0x3ccac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CCAC0u;
    {
        const bool branch_taken_0x3ccac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccac0) {
            ctx->pc = 0x3CCAE0u;
            goto label_3ccae0;
        }
    }
    ctx->pc = 0x3CCAC8u;
label_3ccac8:
    // 0x3ccac8: 0xc0f3234  jal         func_3CC8D0
    ctx->pc = 0x3CCAC8u;
    SET_GPR_U32(ctx, 31, 0x3CCAD0u);
    ctx->pc = 0x3CC8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC8D0u, 0x3CCAC8u, 0x3CCAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCAD0u;
label_3ccad0:
    // 0x3ccad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3CCAD0u;
    {
        const bool branch_taken_0x3ccad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccad0) {
            ctx->pc = 0x3CCAE0u;
            goto label_3ccae0;
        }
    }
    ctx->pc = 0x3CCAD8u;
label_3ccad8:
    // 0x3ccad8: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x3CCAD8u;
    SET_GPR_U32(ctx, 31, 0x3CCAE0u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x3CCAD8u, 0x3CCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCAE0u;
label_3ccae0:
    // 0x3ccae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ccae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ccae4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCAE4u;
        // 0x3ccae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCAECu;
}

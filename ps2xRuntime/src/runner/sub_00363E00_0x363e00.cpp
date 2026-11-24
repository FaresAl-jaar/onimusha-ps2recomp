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

// Function: sub_00363E00
// Address: 0x363e00 - 0x363e7c
void sub_00363E00_0x363e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363E00_0x363e00");
#endif

    switch (ctx->pc) {
        case 0x363e30u: goto label_363e30;
        default: break;
    }

    ctx->pc = 0x363e00u;

    // 0x363e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363e04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x363e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x363e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363e0c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x363e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x363e10: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x363e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x363e14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x363E14u;
    {
        const bool branch_taken_0x363e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363E14u;
        // 0x363e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363e14) {
            ctx->pc = 0x363E28u;
            goto label_363e28;
        }
    }
    ctx->pc = 0x363E1Cu;
    // 0x363e1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x363E1Cu;
    {
        const bool branch_taken_0x363e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363e1c) {
            ctx->pc = 0x363E70u;
            goto label_363e70;
        }
    }
    ctx->pc = 0x363E24u;
    // 0x363e24: 0x0  nop
    ctx->pc = 0x363e24u;
    // NOP
label_363e28:
    // 0x363e28: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x363E28u;
    SET_GPR_U32(ctx, 31, 0x363E30u);
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x363E28u, 0x363E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E30u;
label_363e30:
    // 0x363e30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x363E30u;
    {
        const bool branch_taken_0x363e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363e30) {
            ctx->pc = 0x363E68u;
            goto label_363e68;
        }
    }
    ctx->pc = 0x363E38u;
    // 0x363e38: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x363e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x363e3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x363e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x363e40: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x363e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x363e44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x363e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x363e48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x363e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x363e4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x363e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x363e50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x363e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x363e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x363E54u;
    {
        const bool branch_taken_0x363e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363e54) {
            ctx->pc = 0x363E68u;
            goto label_363e68;
        }
    }
    ctx->pc = 0x363E5Cu;
    // 0x363e5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x363E5Cu;
    {
        const bool branch_taken_0x363e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363E5Cu;
        // 0x363e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363e5c) {
            ctx->pc = 0x363E70u;
            goto label_363e70;
        }
    }
    ctx->pc = 0x363E64u;
    // 0x363e64: 0x0  nop
    ctx->pc = 0x363e64u;
    // NOP
label_363e68:
    // 0x363e68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363e6c: 0x0  nop
    ctx->pc = 0x363e6cu;
    // NOP
label_363e70:
    // 0x363e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363e74: 0x3e00008  jr          $ra
    ctx->pc = 0x363E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363E74u;
        // 0x363e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363E7Cu;
}

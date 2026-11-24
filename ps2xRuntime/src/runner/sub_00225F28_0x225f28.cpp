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

// Function: sub_00225F28
// Address: 0x225f28 - 0x225f98
void sub_00225F28_0x225f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225F28_0x225f28");
#endif

    switch (ctx->pc) {
        case 0x225f4cu: goto label_225f4c;
        case 0x225f5cu: goto label_225f5c;
        case 0x225f64u: goto label_225f64;
        case 0x225f6cu: goto label_225f6c;
        case 0x225f74u: goto label_225f74;
        default: break;
    }

    ctx->pc = 0x225f28u;

    // 0x225f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225f2c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x225f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x225f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225f34: 0x2450a370  addiu       $s0, $v0, -0x5C90
    ctx->pc = 0x225f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943600));
    // 0x225f38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x225f38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BA370u));
    // 0x225f3c: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x225F3Cu;
    {
        const bool branch_taken_0x225f3c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x225F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F3Cu;
        // 0x225f40: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f3c) {
            ctx->pc = 0x225F88u;
            goto label_225f88;
        }
    }
    ctx->pc = 0x225F44u;
    // 0x225f44: 0xc0897e6  jal         func_225F98
    ctx->pc = 0x225F44u;
    SET_GPR_U32(ctx, 31, 0x225F4Cu);
    ctx->pc = 0x225F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F98u, 0x225F44u, 0x225F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F4Cu;
label_225f4c:
    // 0x225f4c: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x225f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x225f50: 0x24635a68  addiu       $v1, $v1, 0x5A68
    ctx->pc = 0x225f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23144));
    // 0x225f54: 0xc0897ea  jal         func_225FA8
    ctx->pc = 0x225F54u;
    SET_GPR_U32(ctx, 31, 0x225F5Cu);
    ctx->pc = 0x225F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F54u;
    // 0x225f58: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FA8u, 0x225F54u, 0x225F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F5Cu;
label_225f5c:
    // 0x225f5c: 0xc0899fc  jal         func_2267F0
    ctx->pc = 0x225F5Cu;
    SET_GPR_U32(ctx, 31, 0x225F64u);
    ctx->pc = 0x2267F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267F0u, 0x225F5Cu, 0x225F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F64u;
label_225f64:
    // 0x225f64: 0xc089a08  jal         func_226820
    ctx->pc = 0x225F64u;
    SET_GPR_U32(ctx, 31, 0x225F6Cu);
    ctx->pc = 0x226820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226820u, 0x225F64u, 0x225F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F6Cu;
label_225f6c:
    // 0x225f6c: 0xc0893b8  jal         func_224EE0
    ctx->pc = 0x225F6Cu;
    SET_GPR_U32(ctx, 31, 0x225F74u);
    ctx->pc = 0x224EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224EE0u, 0x225F6Cu, 0x225F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F74u;
label_225f74:
    // 0x225f74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225f78: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x225f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x225f7c: 0xac60a374  sw          $zero, -0x5C8C($v1)
    ctx->pc = 0x225f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BA374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA374u, _value); } while (0);
    // 0x225f80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x225f84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x225f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_225f88:
    // 0x225f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225f8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x225f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225f90: 0x3e00008  jr          $ra
    ctx->pc = 0x225F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F90u;
        // 0x225f94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F98u;
}

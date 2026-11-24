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

// Function: sub_0036BB40
// Address: 0x36bb40 - 0x36bb7c
void sub_0036BB40_0x36bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BB40_0x36bb40");
#endif

    switch (ctx->pc) {
        case 0x36bb68u: goto label_36bb68;
        default: break;
    }

    ctx->pc = 0x36bb40u;

    // 0x36bb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36bb44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x36bb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36bb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36bb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36bb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36bb50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36bb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb54: 0x9084053b  lbu         $a0, 0x53B($a0)
    ctx->pc = 0x36bb54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1339)));
    // 0x36bb58: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x36bb58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x36bb5c: 0x920705d4  lbu         $a3, 0x5D4($s0)
    ctx->pc = 0x36bb5cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1492)));
    // 0x36bb60: 0xc0a9e74  jal         func_2A79D0
    ctx->pc = 0x36BB60u;
    SET_GPR_U32(ctx, 31, 0x36BB68u);
    ctx->pc = 0x36BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB60u;
    // 0x36bb64: 0x26080590  addiu       $t0, $s0, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A79D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A79D0u, 0x36BB60u, 0x36BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB68u;
label_36bb68:
    // 0x36bb68: 0xae0205c0  sw          $v0, 0x5C0($s0)
    ctx->pc = 0x36bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1472), GPR_U32(ctx, 2));
    // 0x36bb6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36bb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bb70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36bb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bb74: 0x3e00008  jr          $ra
    ctx->pc = 0x36BB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB74u;
        // 0x36bb78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BB7Cu;
}

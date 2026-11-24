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

// Function: sub_00245D48
// Address: 0x245d48 - 0x245d9c
void sub_00245D48_0x245d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245D48_0x245d48");
#endif

    switch (ctx->pc) {
        case 0x245d6cu: goto label_245d6c;
        case 0x245d74u: goto label_245d74;
        case 0x245d88u: goto label_245d88;
        default: break;
    }

    ctx->pc = 0x245d48u;

    // 0x245d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x245d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245d50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245d54: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x245d54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x245d58: 0x2610ea00  addiu       $s0, $s0, -0x1600
    ctx->pc = 0x245d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961664));
    // 0x245d5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x245d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x245d60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x245d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4CEA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CEA00u, _value); } while (0);
    // 0x245d64: 0xc091a44  jal         func_246910
    ctx->pc = 0x245D64u;
    SET_GPR_U32(ctx, 31, 0x245D6Cu);
    ctx->pc = 0x245D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D64u;
    // 0x245d68: 0x24042600  addiu       $a0, $zero, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245D64u, 0x245D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D6Cu;
label_245d6c:
    // 0x245d6c: 0xc0481fc  jal         func_1207F0
    ctx->pc = 0x245D6Cu;
    SET_GPR_U32(ctx, 31, 0x245D74u);
    ctx->pc = 0x1207F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1207F0u, 0x245D6Cu, 0x245D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D74u;
label_245d74:
    // 0x245d74: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x245d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x245d78: 0x24042601  addiu       $a0, $zero, 0x2601
    ctx->pc = 0x245d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9729));
    // 0x245d7c: 0x2463e9fc  addiu       $v1, $v1, -0x1604
    ctx->pc = 0x245d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961660));
    // 0x245d80: 0xc091a44  jal         func_246910
    ctx->pc = 0x245D80u;
    SET_GPR_U32(ctx, 31, 0x245D88u);
    ctx->pc = 0x245D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D80u;
    // 0x245d84: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x245D80u, 0x245D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D88u;
label_245d88:
    // 0x245d88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x245d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x245d8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x245d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245d90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245d94: 0x3e00008  jr          $ra
    ctx->pc = 0x245D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D94u;
        // 0x245d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245D9Cu;
}

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

// Function: sub_00255860
// Address: 0x255860 - 0x2558b8
void sub_00255860_0x255860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255860_0x255860");
#endif

    switch (ctx->pc) {
        case 0x255878u: goto label_255878;
        default: break;
    }

    ctx->pc = 0x255860u;

    // 0x255860: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x255860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x255864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255868: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x255868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x25586c: 0x24a5e5f0  addiu       $a1, $a1, -0x1A10
    ctx->pc = 0x25586cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960624));
    // 0x255870: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x255870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x255874: 0x0  nop
    ctx->pc = 0x255874u;
    // NOP
label_255878:
    // 0x255878: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x255878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x25587c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25587Cu;
    {
        const bool branch_taken_0x25587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x25587c) {
            ctx->pc = 0x255898u;
            goto label_255898;
        }
    }
    ctx->pc = 0x255884u;
    // 0x255884: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255884u;
    {
        const bool branch_taken_0x255884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x255884) {
            ctx->pc = 0x255898u;
            goto label_255898;
        }
    }
    ctx->pc = 0x25588Cu;
    // 0x25588c: 0x24c27fff  addiu       $v0, $a2, 0x7FFF
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x255890: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x255890u;
    {
        const bool branch_taken_0x255890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255890u;
        // 0x255894: 0x24426001  addiu       $v0, $v0, 0x6001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24577));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255890) {
            ctx->pc = 0x2558B0u;
            goto label_2558b0;
        }
    }
    ctx->pc = 0x255898u;
label_255898:
    // 0x255898: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x255898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25589c: 0x2cc20200  sltiu       $v0, $a2, 0x200
    ctx->pc = 0x25589cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x2558a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2558A0u;
    {
        const bool branch_taken_0x2558a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2558A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558A0u;
        // 0x2558a4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558a0) {
            ctx->pc = 0x255878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255878;
        }
    }
    ctx->pc = 0x2558A8u;
    // 0x2558a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2558a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2558ac: 0x0  nop
    ctx->pc = 0x2558acu;
    // NOP
label_2558b0:
    // 0x2558b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2558B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2558B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2558B8u;
}

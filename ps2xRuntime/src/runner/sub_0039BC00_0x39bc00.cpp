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

// Function: sub_0039BC00
// Address: 0x39bc00 - 0x39bc40
void sub_0039BC00_0x39bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BC00_0x39bc00");
#endif

    switch (ctx->pc) {
        case 0x39bc20u: goto label_39bc20;
        case 0x39bc30u: goto label_39bc30;
        default: break;
    }

    ctx->pc = 0x39bc00u;

    // 0x39bc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39bc04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39bc08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39bc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39bc0c: 0x90822b58  lbu         $v0, 0x2B58($a0)
    ctx->pc = 0x39bc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11096)));
    // 0x39bc10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39BC10u;
    {
        const bool branch_taken_0x39bc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC10u;
        // 0x39bc14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc10) {
            ctx->pc = 0x39BC28u;
            goto label_39bc28;
        }
    }
    ctx->pc = 0x39BC18u;
    // 0x39bc18: 0xc0e68fc  jal         func_39A3F0
    ctx->pc = 0x39BC18u;
    SET_GPR_U32(ctx, 31, 0x39BC20u);
    ctx->pc = 0x39BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC18u;
    // 0x39bc1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A3F0u, 0x39BC18u, 0x39BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC20u;
label_39bc20:
    // 0x39bc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39bc24: 0xa2022b58  sb          $v0, 0x2B58($s0)
    ctx->pc = 0x39bc24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11096), (uint8_t)GPR_U32(ctx, 2));
label_39bc28:
    // 0x39bc28: 0xc0a4d18  jal         func_293460
    ctx->pc = 0x39BC28u;
    SET_GPR_U32(ctx, 31, 0x39BC30u);
    ctx->pc = 0x39BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC28u;
    // 0x39bc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293460u, 0x39BC28u, 0x39BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC30u;
label_39bc30:
    // 0x39bc30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39bc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bc34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39bc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bc38: 0x3e00008  jr          $ra
    ctx->pc = 0x39BC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC38u;
        // 0x39bc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BC40u;
}

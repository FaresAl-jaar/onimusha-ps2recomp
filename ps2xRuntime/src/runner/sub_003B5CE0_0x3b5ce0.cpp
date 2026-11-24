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

// Function: sub_003B5CE0
// Address: 0x3b5ce0 - 0x3b5d28
void sub_003B5CE0_0x3b5ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5CE0_0x3b5ce0");
#endif

    switch (ctx->pc) {
        case 0x3b5d1cu: goto label_3b5d1c;
        default: break;
    }

    ctx->pc = 0x3b5ce0u;

    // 0x3b5ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b5ce4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3b5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3b5ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b5cec: 0xa7a5001a  sh          $a1, 0x1A($sp)
    ctx->pc = 0x3b5cecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b5cf0: 0xa3a2001d  sb          $v0, 0x1D($sp)
    ctx->pc = 0x3b5cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b5cf4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3b5cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5cf8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3b5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b5cfc: 0xa7a40018  sh          $a0, 0x18($sp)
    ctx->pc = 0x3b5cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b5d00: 0xa3a6001c  sb          $a2, 0x1C($sp)
    ctx->pc = 0x3b5d00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 6));
    // 0x3b5d04: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x3b5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x3b5d08: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3b5d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d0c: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x3b5d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b5d10: 0xa3a2001f  sb          $v0, 0x1F($sp)
    ctx->pc = 0x3b5d10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b5d14: 0xc0ed754  jal         func_3B5D50
    ctx->pc = 0x3B5D14u;
    SET_GPR_U32(ctx, 31, 0x3B5D1Cu);
    ctx->pc = 0x3B5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5D14u;
    // 0x3b5d18: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5D50u, 0x3B5D14u, 0x3B5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5D1Cu;
label_3b5d1c:
    // 0x3b5d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5d20: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5D20u;
        // 0x3b5d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5D28u;
}

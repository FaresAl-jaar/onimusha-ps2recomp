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

// Function: sub_0025ED10
// Address: 0x25ed10 - 0x25ed48
void sub_0025ED10_0x25ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ED10_0x25ed10");
#endif

    switch (ctx->pc) {
        case 0x25ed24u: goto label_25ed24;
        default: break;
    }

    ctx->pc = 0x25ed10u;

    // 0x25ed10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ed14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ed18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ed1c: 0xc096b00  jal         func_25AC00
    ctx->pc = 0x25ED1Cu;
    SET_GPR_U32(ctx, 31, 0x25ED24u);
    ctx->pc = 0x25ED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED1Cu;
    // 0x25ed20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x25ED1Cu, 0x25ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED24u;
label_25ed24:
    // 0x25ed24: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x25ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x25ed28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25ed28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed2c: 0x246373d0  addiu       $v1, $v1, 0x73D0
    ctx->pc = 0x25ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29648));
    // 0x25ed30: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x25ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x25ed34: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x25ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x25ed38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ed38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ed3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ed3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ed40: 0x3e00008  jr          $ra
    ctx->pc = 0x25ED40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED40u;
        // 0x25ed44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ED40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ED48u;
}

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

// Function: sub_00275A10
// Address: 0x275a10 - 0x275a44
void sub_00275A10_0x275a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275A10_0x275a10");
#endif

    switch (ctx->pc) {
        case 0x275a28u: goto label_275a28;
        default: break;
    }

    ctx->pc = 0x275a10u;

    // 0x275a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275a1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a20: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x275A20u;
    SET_GPR_U32(ctx, 31, 0x275A28u);
    ctx->pc = 0x275A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A20u;
    // 0x275a24: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x275A20u, 0x275A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A28u;
label_275a28:
    // 0x275a28: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x275a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x275a2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x275a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275a30: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x275a30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x275a34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x275A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A3Cu;
        // 0x275a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275A44u;
}

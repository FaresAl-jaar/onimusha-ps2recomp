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

// Function: sub_003400C0
// Address: 0x3400c0 - 0x340108
void sub_003400C0_0x3400c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003400C0_0x3400c0");
#endif

    switch (ctx->pc) {
        case 0x3400d8u: goto label_3400d8;
        case 0x3400f8u: goto label_3400f8;
        default: break;
    }

    ctx->pc = 0x3400c0u;

    // 0x3400c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3400c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3400c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3400c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3400c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3400c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3400cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3400ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400d0: 0xc06039c  jal         func_180E70
    ctx->pc = 0x3400D0u;
    SET_GPR_U32(ctx, 31, 0x3400D8u);
    ctx->pc = 0x3400D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3400D0u;
    // 0x3400d4: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x3400D0u, 0x3400D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3400D8u;
label_3400d8:
    // 0x3400d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3400d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3400dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3400dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400e0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3400e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3400e4: 0x2442f230  addiu       $v0, $v0, -0xDD0
    ctx->pc = 0x3400e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963760));
    // 0x3400e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3400e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3400ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3400ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3400f0: 0xc098770  jal         func_261DC0
    ctx->pc = 0x3400F0u;
    SET_GPR_U32(ctx, 31, 0x3400F8u);
    ctx->pc = 0x3400F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3400F0u;
    // 0x3400f4: 0xa2020924  sb          $v0, 0x924($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2340), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DC0u, 0x3400F0u, 0x3400F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3400F8u;
label_3400f8:
    // 0x3400f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3400f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3400fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3400fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340100: 0x3e00008  jr          $ra
    ctx->pc = 0x340100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340100u;
        // 0x340104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340108u;
}

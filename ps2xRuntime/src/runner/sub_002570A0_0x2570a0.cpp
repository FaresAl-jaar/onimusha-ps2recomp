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

// Function: sub_002570A0
// Address: 0x2570a0 - 0x2570f8
void sub_002570A0_0x2570a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002570A0_0x2570a0");
#endif

    switch (ctx->pc) {
        case 0x2570c4u: goto label_2570c4;
        default: break;
    }

    ctx->pc = 0x2570a0u;

    // 0x2570a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2570a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2570a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2570a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2570a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2570a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2570ac: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2570acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2570b0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2570b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2570b4: 0x84660024  lh          $a2, 0x24($v1)
    ctx->pc = 0x2570b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2570b8: 0x80450002  lb          $a1, 0x2($v0)
    ctx->pc = 0x2570b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2570bc: 0xc095c40  jal         func_257100
    ctx->pc = 0x2570BCu;
    SET_GPR_U32(ctx, 31, 0x2570C4u);
    ctx->pc = 0x2570C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2570BCu;
    // 0x2570c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257100u, 0x2570BCu, 0x2570C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570C4u;
label_2570c4:
    // 0x2570c4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2570c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2570c8: 0x8483001e  lh          $v1, 0x1E($a0)
    ctx->pc = 0x2570c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x2570cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2570ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2570d0: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x2570d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x2570d4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2570d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2570d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2570d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2570dc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2570dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2570e0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2570e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2570e4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2570e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2570e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2570e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2570ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2570ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2570f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2570F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2570F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570F0u;
        // 0x2570f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2570F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2570F8u;
}

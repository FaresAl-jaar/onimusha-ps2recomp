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

// Function: sub_002575D0
// Address: 0x2575d0 - 0x257618
void sub_002575D0_0x2575d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002575D0_0x2575d0");
#endif

    switch (ctx->pc) {
        case 0x2575f4u: goto label_2575f4;
        default: break;
    }

    ctx->pc = 0x2575d0u;

    // 0x2575d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2575d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2575d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2575d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2575d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2575d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2575dc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2575dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2575e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2575e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2575e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2575e8: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x2575e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2575ec: 0xc0b789c  jal         func_2DE270
    ctx->pc = 0x2575ECu;
    SET_GPR_U32(ctx, 31, 0x2575F4u);
    ctx->pc = 0x2575F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2575ECu;
    // 0x2575f0: 0x24640030  addiu       $a0, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE270u, 0x2575ECu, 0x2575F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2575F4u;
label_2575f4:
    // 0x2575f4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2575f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2575f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2575f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2575fc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2575fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x257600: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x257600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x257604: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x257604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x257608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25760c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25760cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257610: 0x3e00008  jr          $ra
    ctx->pc = 0x257610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257610u;
        // 0x257614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257618u;
}

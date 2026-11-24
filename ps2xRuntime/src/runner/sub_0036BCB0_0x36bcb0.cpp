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

// Function: sub_0036BCB0
// Address: 0x36bcb0 - 0x36bce4
void sub_0036BCB0_0x36bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BCB0_0x36bcb0");
#endif

    switch (ctx->pc) {
        case 0x36bcd0u: goto label_36bcd0;
        default: break;
    }

    ctx->pc = 0x36bcb0u;

    // 0x36bcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36bcb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36bcb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36bcbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36bcbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bcc0: 0x9084053b  lbu         $a0, 0x53B($a0)
    ctx->pc = 0x36bcc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1339)));
    // 0x36bcc4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x36bcc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x36bcc8: 0xc0a9e88  jal         func_2A7A20
    ctx->pc = 0x36BCC8u;
    SET_GPR_U32(ctx, 31, 0x36BCD0u);
    ctx->pc = 0x36BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BCC8u;
    // 0x36bccc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7A20u, 0x36BCC8u, 0x36BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BCD0u;
label_36bcd0:
    // 0x36bcd0: 0xae0205c4  sw          $v0, 0x5C4($s0)
    ctx->pc = 0x36bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1476), GPR_U32(ctx, 2));
    // 0x36bcd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36bcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bcd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36bcd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x36BCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCDCu;
        // 0x36bce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BCE4u;
}

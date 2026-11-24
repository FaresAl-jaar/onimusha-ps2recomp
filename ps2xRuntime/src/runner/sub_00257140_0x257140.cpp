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

// Function: sub_00257140
// Address: 0x257140 - 0x257198
void sub_00257140_0x257140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257140_0x257140");
#endif

    switch (ctx->pc) {
        case 0x257160u: goto label_257160;
        default: break;
    }

    ctx->pc = 0x257140u;

    // 0x257140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25714c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x25714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257154: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x257154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x257158: 0xc095f80  jal         func_257E00
    ctx->pc = 0x257158u;
    SET_GPR_U32(ctx, 31, 0x257160u);
    ctx->pc = 0x25715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257158u;
    // 0x25715c: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E00u, 0x257158u, 0x257160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257160u;
label_257160:
    // 0x257160: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x257160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x257164: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x257164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x257168: 0xa062002e  sb          $v0, 0x2E($v1)
    ctx->pc = 0x257168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x25716c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x25716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x257170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257174: 0xa464002c  sh          $a0, 0x2C($v1)
    ctx->pc = 0x257174u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x257178: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x257178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25717c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x25717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x257180: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x257180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x257184: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x257184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x257188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25718c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25718cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257190: 0x3e00008  jr          $ra
    ctx->pc = 0x257190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257190u;
        // 0x257194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257198u;
}

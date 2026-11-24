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

// Function: sub_00257580
// Address: 0x257580 - 0x2575c8
void sub_00257580_0x257580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257580_0x257580");
#endif

    switch (ctx->pc) {
        case 0x2575a4u: goto label_2575a4;
        default: break;
    }

    ctx->pc = 0x257580u;

    // 0x257580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25758c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x25758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257594: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x257594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x257598: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x257598u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x25759c: 0xc0b7884  jal         func_2DE210
    ctx->pc = 0x25759Cu;
    SET_GPR_U32(ctx, 31, 0x2575A4u);
    ctx->pc = 0x2575A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25759Cu;
    // 0x2575a0: 0x24640030  addiu       $a0, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE210u, 0x25759Cu, 0x2575A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2575A4u;
label_2575a4:
    // 0x2575a4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2575a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2575a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2575a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2575ac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2575acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2575b0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2575b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2575b4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2575b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2575b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2575b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2575bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2575bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2575c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2575C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2575C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575C0u;
        // 0x2575c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2575C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2575C8u;
}

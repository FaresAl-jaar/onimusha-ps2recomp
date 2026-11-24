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

// Function: sub_003CF4E0
// Address: 0x3cf4e0 - 0x3cf514
void sub_003CF4E0_0x3cf4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF4E0_0x3cf4e0");
#endif

    switch (ctx->pc) {
        case 0x3cf500u: goto label_3cf500;
        default: break;
    }

    ctx->pc = 0x3cf4e0u;

    // 0x3cf4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cf4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3cf4e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cf4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cf4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cf4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cf4ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cf4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf4f0: 0x9084053b  lbu         $a0, 0x53B($a0)
    ctx->pc = 0x3cf4f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1339)));
    // 0x3cf4f4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3cf4f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3cf4f8: 0xc0aaaa4  jal         func_2AAA90
    ctx->pc = 0x3CF4F8u;
    SET_GPR_U32(ctx, 31, 0x3CF500u);
    ctx->pc = 0x3CF4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF4F8u;
    // 0x3cf4fc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA90u, 0x3CF4F8u, 0x3CF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF500u;
label_3cf500:
    // 0x3cf500: 0xae0205c4  sw          $v0, 0x5C4($s0)
    ctx->pc = 0x3cf500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1476), GPR_U32(ctx, 2));
    // 0x3cf504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cf504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cf508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cf508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cf50c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF50Cu;
        // 0x3cf510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF514u;
}

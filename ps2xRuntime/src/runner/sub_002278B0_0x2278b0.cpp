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

// Function: sub_002278B0
// Address: 0x2278b0 - 0x2278f4
void sub_002278B0_0x2278b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002278B0_0x2278b0");
#endif

    switch (ctx->pc) {
        case 0x2278e8u: goto label_2278e8;
        default: break;
    }

    ctx->pc = 0x2278b0u;

    // 0x2278b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2278b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2278b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2278b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2278B8u;
    {
        const bool branch_taken_0x2278b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278B8u;
        // 0x2278bc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278b8) {
            ctx->pc = 0x2278C8u;
            goto label_2278c8;
        }
    }
    ctx->pc = 0x2278C0u;
    // 0x2278c0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2278C0u;
    {
        const bool branch_taken_0x2278c0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x2278c0) {
            ctx->pc = 0x2278D0u;
            goto label_2278d0;
        }
    }
    ctx->pc = 0x2278C8u;
label_2278c8:
    // 0x2278c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2278C8u;
    {
        const bool branch_taken_0x2278c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278C8u;
        // 0x2278cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278c8) {
            ctx->pc = 0x2278E8u;
            goto label_2278e8;
        }
    }
    ctx->pc = 0x2278D0u;
label_2278d0:
    // 0x2278d0: 0x80430010  lb          $v1, 0x10($v0)
    ctx->pc = 0x2278d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2278d4: 0x80450011  lb          $a1, 0x11($v0)
    ctx->pc = 0x2278d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x2278d8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2278d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2278dc: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x2278dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2278e0: 0xc0488e8  jal         func_1223A0
    ctx->pc = 0x2278E0u;
    SET_GPR_U32(ctx, 31, 0x2278E8u);
    ctx->pc = 0x2278E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2278E0u;
    // 0x2278e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1223A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223A0u, 0x2278E0u, 0x2278E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278E8u;
label_2278e8:
    // 0x2278e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2278e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2278ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278ECu;
        // 0x2278f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2278ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278F4u;
}

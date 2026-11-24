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

// Function: sub_0037C1D0
// Address: 0x37c1d0 - 0x37c218
void sub_0037C1D0_0x37c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C1D0_0x37c1d0");
#endif

    switch (ctx->pc) {
        case 0x37c1e4u: goto label_37c1e4;
        case 0x37c1fcu: goto label_37c1fc;
        case 0x37c204u: goto label_37c204;
        default: break;
    }

    ctx->pc = 0x37c1d0u;

    // 0x37c1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37c1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37c1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37c1dc: 0xc0a4e20  jal         func_293880
    ctx->pc = 0x37C1DCu;
    SET_GPR_U32(ctx, 31, 0x37C1E4u);
    ctx->pc = 0x37C1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C1DCu;
    // 0x37c1e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293880u, 0x37C1DCu, 0x37C1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C1E4u;
label_37c1e4:
    // 0x37c1e4: 0x92032b40  lbu         $v1, 0x2B40($s0)
    ctx->pc = 0x37c1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11072)));
    // 0x37c1e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37c1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37c1ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37C1ECu;
    {
        const bool branch_taken_0x37c1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1ECu;
        // 0x37c1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c1ec) {
            ctx->pc = 0x37C208u;
            goto label_37c208;
        }
    }
    ctx->pc = 0x37C1F4u;
    // 0x37c1f4: 0xc0e04a0  jal         func_381280
    ctx->pc = 0x37C1F4u;
    SET_GPR_U32(ctx, 31, 0x37C1FCu);
    ctx->pc = 0x381280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381280u, 0x37C1F4u, 0x37C1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C1FCu;
label_37c1fc:
    // 0x37c1fc: 0xc0e05c0  jal         func_381700
    ctx->pc = 0x37C1FCu;
    SET_GPR_U32(ctx, 31, 0x37C204u);
    ctx->pc = 0x37C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C1FCu;
    // 0x37c200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381700u, 0x37C1FCu, 0x37C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C204u;
label_37c204:
    // 0x37c204: 0x0  nop
    ctx->pc = 0x37c204u;
    // NOP
label_37c208:
    // 0x37c208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37c208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c210: 0x3e00008  jr          $ra
    ctx->pc = 0x37C210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C210u;
        // 0x37c214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C218u;
}

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

// Function: sub_00232998
// Address: 0x232998 - 0x2329d4
void sub_00232998_0x232998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232998_0x232998");
#endif

    switch (ctx->pc) {
        case 0x2329b4u: goto label_2329b4;
        case 0x2329c0u: goto label_2329c0;
        default: break;
    }

    ctx->pc = 0x232998u;

    // 0x232998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23299c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2329a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2329a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2329a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2329a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2329a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2329ac: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x2329ACu;
    SET_GPR_U32(ctx, 31, 0x2329B4u);
    ctx->pc = 0x2329B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329ACu;
    // 0x2329b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x2329ACu, 0x2329B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329B4u;
label_2329b4:
    // 0x2329b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2329b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329b8: 0xc08ca76  jal         func_2329D8
    ctx->pc = 0x2329B8u;
    SET_GPR_U32(ctx, 31, 0x2329C0u);
    ctx->pc = 0x2329BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329B8u;
    // 0x2329bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2329D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2329D8u, 0x2329B8u, 0x2329C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329C0u;
label_2329c0:
    // 0x2329c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2329c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2329c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2329c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2329c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2329c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2329cc: 0x808b536  j           func_22D4D8
    ctx->pc = 0x2329CCu;
    ctx->pc = 0x2329D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329CCu;
    // 0x2329d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2329D4u;
}

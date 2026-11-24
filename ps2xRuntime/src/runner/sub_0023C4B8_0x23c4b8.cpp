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

// Function: sub_0023C4B8
// Address: 0x23c4b8 - 0x23c4f4
void sub_0023C4B8_0x23c4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C4B8_0x23c4b8");
#endif

    switch (ctx->pc) {
        case 0x23c4d4u: goto label_23c4d4;
        case 0x23c4e0u: goto label_23c4e0;
        default: break;
    }

    ctx->pc = 0x23c4b8u;

    // 0x23c4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c4c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c4c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c4cc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23C4CCu;
    SET_GPR_U32(ctx, 31, 0x23C4D4u);
    ctx->pc = 0x23C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4CCu;
    // 0x23c4d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23C4CCu, 0x23C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4D4u;
label_23c4d4:
    // 0x23c4d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4d8: 0xc08f13e  jal         func_23C4F8
    ctx->pc = 0x23C4D8u;
    SET_GPR_U32(ctx, 31, 0x23C4E0u);
    ctx->pc = 0x23C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4D8u;
    // 0x23c4dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C4F8u, 0x23C4D8u, 0x23C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4E0u;
label_23c4e0:
    // 0x23c4e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c4e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c4e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c4ec: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23C4ECu;
    ctx->pc = 0x23C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4ECu;
    // 0x23c4f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23C4F4u;
}

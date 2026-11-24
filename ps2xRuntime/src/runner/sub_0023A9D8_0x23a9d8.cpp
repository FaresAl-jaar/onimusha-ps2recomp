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

// Function: sub_0023A9D8
// Address: 0x23a9d8 - 0x23aa14
void sub_0023A9D8_0x23a9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A9D8_0x23a9d8");
#endif

    switch (ctx->pc) {
        case 0x23a9f4u: goto label_23a9f4;
        case 0x23aa00u: goto label_23aa00;
        default: break;
    }

    ctx->pc = 0x23a9d8u;

    // 0x23a9d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a9dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a9e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a9ec: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23A9ECu;
    SET_GPR_U32(ctx, 31, 0x23A9F4u);
    ctx->pc = 0x23A9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9ECu;
    // 0x23a9f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23A9ECu, 0x23A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A9F4u;
label_23a9f4:
    // 0x23a9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9f8: 0xc08ea86  jal         func_23AA18
    ctx->pc = 0x23A9F8u;
    SET_GPR_U32(ctx, 31, 0x23AA00u);
    ctx->pc = 0x23A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9F8u;
    // 0x23a9fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AA18u, 0x23A9F8u, 0x23AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA00u;
label_23aa00:
    // 0x23aa00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aa00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aa04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23aa04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23aa08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23aa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aa0c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23AA0Cu;
    ctx->pc = 0x23AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA0Cu;
    // 0x23aa10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23AA14u;
}

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

// Function: sub_00205E88
// Address: 0x205e88 - 0x205ebc
void sub_00205E88_0x205e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205E88_0x205e88");
#endif

    switch (ctx->pc) {
        case 0x205e9cu: goto label_205e9c;
        default: break;
    }

    ctx->pc = 0x205e88u;

    // 0x205e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205e8c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x205E8Cu;
    {
        const bool branch_taken_0x205e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E8Cu;
        // 0x205e90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e8c) {
            ctx->pc = 0x205EB0u;
            goto label_205eb0;
        }
    }
    ctx->pc = 0x205E94u;
    // 0x205e94: 0xc081c12  jal         func_207048
    ctx->pc = 0x205E94u;
    SET_GPR_U32(ctx, 31, 0x205E9Cu);
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x205E94u, 0x205E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E9Cu;
label_205e9c:
    // 0x205e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ea4: 0x808838a  j           func_220E28
    ctx->pc = 0x205EA4u;
    ctx->pc = 0x205EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EA4u;
    // 0x205ea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220E28u;
    sub_00220E28_0x220e28(rdram, ctx, runtime); return;
    ctx->pc = 0x205EACu;
    // 0x205eac: 0x0  nop
    ctx->pc = 0x205eacu;
    // NOP
label_205eb0:
    // 0x205eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205eb4: 0x808838a  j           func_220E28
    ctx->pc = 0x205EB4u;
    ctx->pc = 0x205EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EB4u;
    // 0x205eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220E28u;
    sub_00220E28_0x220e28(rdram, ctx, runtime); return;
    ctx->pc = 0x205EBCu;
}

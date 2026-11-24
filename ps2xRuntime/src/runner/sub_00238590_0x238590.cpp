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

// Function: sub_00238590
// Address: 0x238590 - 0x2385cc
void sub_00238590_0x238590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238590_0x238590");
#endif

    switch (ctx->pc) {
        case 0x2385acu: goto label_2385ac;
        case 0x2385b8u: goto label_2385b8;
        default: break;
    }

    ctx->pc = 0x238590u;

    // 0x238590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23859c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2385a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2385a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2385a4: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2385A4u;
    SET_GPR_U32(ctx, 31, 0x2385ACu);
    ctx->pc = 0x2385A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385A4u;
    // 0x2385a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2385A4u, 0x2385ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385ACu;
label_2385ac:
    // 0x2385ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2385acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385b0: 0xc08e174  jal         func_2385D0
    ctx->pc = 0x2385B0u;
    SET_GPR_U32(ctx, 31, 0x2385B8u);
    ctx->pc = 0x2385B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385B0u;
    // 0x2385b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2385D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2385D0u, 0x2385B0u, 0x2385B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385B8u;
label_2385b8:
    // 0x2385b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2385b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2385bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2385bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2385c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2385c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2385c4: 0x808e2c2  j           func_238B08
    ctx->pc = 0x2385C4u;
    ctx->pc = 0x2385C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385C4u;
    // 0x2385c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x2385CCu;
}

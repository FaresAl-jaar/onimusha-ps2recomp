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

// Function: sub_00238880
// Address: 0x238880 - 0x2388bc
void sub_00238880_0x238880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238880_0x238880");
#endif

    switch (ctx->pc) {
        case 0x23889cu: goto label_23889c;
        case 0x2388a8u: goto label_2388a8;
        default: break;
    }

    ctx->pc = 0x238880u;

    // 0x238880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23888c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238890: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238894: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x238894u;
    SET_GPR_U32(ctx, 31, 0x23889Cu);
    ctx->pc = 0x238898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238894u;
    // 0x238898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x238894u, 0x23889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23889Cu;
label_23889c:
    // 0x23889c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388a0: 0xc08e230  jal         func_2388C0
    ctx->pc = 0x2388A0u;
    SET_GPR_U32(ctx, 31, 0x2388A8u);
    ctx->pc = 0x2388A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388A0u;
    // 0x2388a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388C0u, 0x2388A0u, 0x2388A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388A8u;
label_2388a8:
    // 0x2388a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2388a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2388ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2388acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2388b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2388b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2388b4: 0x808e2c2  j           func_238B08
    ctx->pc = 0x2388B4u;
    ctx->pc = 0x2388B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388B4u;
    // 0x2388b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x2388BCu;
}

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

// Function: sub_002379C0
// Address: 0x2379c0 - 0x2379fc
void sub_002379C0_0x2379c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002379C0_0x2379c0");
#endif

    switch (ctx->pc) {
        case 0x2379dcu: goto label_2379dc;
        case 0x2379e8u: goto label_2379e8;
        default: break;
    }

    ctx->pc = 0x2379c0u;

    // 0x2379c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2379c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2379c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2379c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2379c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2379c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2379ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2379d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2379d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2379d4: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2379D4u;
    SET_GPR_U32(ctx, 31, 0x2379DCu);
    ctx->pc = 0x2379D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379D4u;
    // 0x2379d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2379D4u, 0x2379DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379DCu;
label_2379dc:
    // 0x2379dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2379dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379e0: 0xc08de80  jal         func_237A00
    ctx->pc = 0x2379E0u;
    SET_GPR_U32(ctx, 31, 0x2379E8u);
    ctx->pc = 0x2379E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379E0u;
    // 0x2379e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237A00u, 0x2379E0u, 0x2379E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379E8u;
label_2379e8:
    // 0x2379e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2379e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2379ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2379ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2379f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2379f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2379f4: 0x808e2c2  j           func_238B08
    ctx->pc = 0x2379F4u;
    ctx->pc = 0x2379F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379F4u;
    // 0x2379f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x2379FCu;
}

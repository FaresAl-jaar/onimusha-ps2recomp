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

// Function: sub_00238770
// Address: 0x238770 - 0x2387ac
void sub_00238770_0x238770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238770_0x238770");
#endif

    switch (ctx->pc) {
        case 0x23878cu: goto label_23878c;
        case 0x238798u: goto label_238798;
        default: break;
    }

    ctx->pc = 0x238770u;

    // 0x238770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23877c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238784: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x238784u;
    SET_GPR_U32(ctx, 31, 0x23878Cu);
    ctx->pc = 0x238788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238784u;
    // 0x238788: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x238784u, 0x23878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23878Cu;
label_23878c:
    // 0x23878c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238790: 0xc08e1ec  jal         func_2387B0
    ctx->pc = 0x238790u;
    SET_GPR_U32(ctx, 31, 0x238798u);
    ctx->pc = 0x238794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238790u;
    // 0x238794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2387B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2387B0u, 0x238790u, 0x238798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238798u;
label_238798:
    // 0x238798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23879c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23879cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2387a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2387a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2387a4: 0x808e2c2  j           func_238B08
    ctx->pc = 0x2387A4u;
    ctx->pc = 0x2387A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387A4u;
    // 0x2387a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x2387ACu;
}

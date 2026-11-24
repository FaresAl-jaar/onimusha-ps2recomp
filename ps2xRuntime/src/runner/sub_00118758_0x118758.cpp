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

// Function: sub_00118758
// Address: 0x118758 - 0x118780
void sub_00118758_0x118758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118758_0x118758");
#endif

    switch (ctx->pc) {
        case 0x11876cu: goto label_11876c;
        default: break;
    }

    ctx->pc = 0x118758u;

    // 0x118758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11875c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118764: 0xc0461a6  jal         func_118698
    ctx->pc = 0x118764u;
    SET_GPR_U32(ctx, 31, 0x11876Cu);
    ctx->pc = 0x118768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118764u;
    // 0x118768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118698u, 0x118764u, 0x11876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11876Cu;
label_11876c:
    // 0x11876c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118778: 0x8043700  j           func_10DC00
    ctx->pc = 0x118778u;
    ctx->pc = 0x11877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118778u;
    // 0x11877c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC00u;
    sub_0010DC00_0x10dc00(rdram, ctx, runtime); return;
    ctx->pc = 0x118780u;
}

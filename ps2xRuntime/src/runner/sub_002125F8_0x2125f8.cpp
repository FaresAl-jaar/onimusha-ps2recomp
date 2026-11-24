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

// Function: sub_002125F8
// Address: 0x2125f8 - 0x212614
void sub_002125F8_0x2125f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002125F8_0x2125f8");
#endif

    switch (ctx->pc) {
        case 0x212608u: goto label_212608;
        default: break;
    }

    ctx->pc = 0x2125f8u;

    // 0x2125f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2125f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2125fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2125fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212600: 0xc087058  jal         func_21C160
    ctx->pc = 0x212600u;
    SET_GPR_U32(ctx, 31, 0x212608u);
    ctx->pc = 0x21C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C160u, 0x212600u, 0x212608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212608u;
label_212608:
    // 0x212608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21260c: 0x8084592  j           func_211648
    ctx->pc = 0x21260Cu;
    ctx->pc = 0x212610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21260Cu;
    // 0x212610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211648u;
    sub_00211648_0x211648(rdram, ctx, runtime); return;
    ctx->pc = 0x212614u;
}

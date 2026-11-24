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

// Function: sub_00207568
// Address: 0x207568 - 0x2075a4
void sub_00207568_0x207568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207568_0x207568");
#endif

    switch (ctx->pc) {
        case 0x207588u: goto label_207588;
        default: break;
    }

    ctx->pc = 0x207568u;

    // 0x207568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20756c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207578: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x207578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20757c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20757cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207580: 0xc083250  jal         func_20C940
    ctx->pc = 0x207580u;
    SET_GPR_U32(ctx, 31, 0x207588u);
    ctx->pc = 0x207584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207580u;
    // 0x207584: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C940u, 0x207580u, 0x207588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207588u;
label_207588:
    // 0x207588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20758c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20759c: 0x80829d2  j           func_20A748
    ctx->pc = 0x20759Cu;
    ctx->pc = 0x2075A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20759Cu;
    // 0x2075a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A748u;
    sub_0020A748_0x20a748(rdram, ctx, runtime); return;
    ctx->pc = 0x2075A4u;
}

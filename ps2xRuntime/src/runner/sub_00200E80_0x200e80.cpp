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

// Function: sub_00200E80
// Address: 0x200e80 - 0x200ea8
void sub_00200E80_0x200e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200E80_0x200e80");
#endif

    switch (ctx->pc) {
        case 0x200e90u: goto label_200e90;
        default: break;
    }

    ctx->pc = 0x200e80u;

    // 0x200e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200e88: 0xc0804b2  jal         func_2012C8
    ctx->pc = 0x200E88u;
    SET_GPR_U32(ctx, 31, 0x200E90u);
    ctx->pc = 0x2012C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2012C8u, 0x200E88u, 0x200E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E90u;
label_200e90:
    // 0x200e90: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x200e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x200e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200e98: 0x8c443f90  lw          $a0, 0x3F90($v0)
    ctx->pc = 0x200e98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x873F90u));
    // 0x200e9c: 0x24051be0  addiu       $a1, $zero, 0x1BE0
    ctx->pc = 0x200e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7136));
    // 0x200ea0: 0x8080428  j           func_2010A0
    ctx->pc = 0x200EA0u;
    ctx->pc = 0x200EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EA0u;
    // 0x200ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010A0u;
    sub_002010A0_0x2010a0(rdram, ctx, runtime); return;
    ctx->pc = 0x200EA8u;
}

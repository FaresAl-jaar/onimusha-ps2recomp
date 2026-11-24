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

// Function: sub_00201298
// Address: 0x201298 - 0x2012c4
void sub_00201298_0x201298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201298_0x201298");
#endif

    switch (ctx->pc) {
        case 0x2012a8u: goto label_2012a8;
        default: break;
    }

    ctx->pc = 0x201298u;

    // 0x201298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20129c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2012a0: 0xc07e988  jal         func_1FA620
    ctx->pc = 0x2012A0u;
    SET_GPR_U32(ctx, 31, 0x2012A8u);
    ctx->pc = 0x1FA620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA620u, 0x2012A0u, 0x2012A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2012A8u;
label_2012a8:
    // 0x2012a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2012a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2012ac: 0x3c050087  lui         $a1, 0x87
    ctx->pc = 0x2012acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)135 << 16));
    // 0x2012b0: 0x24a53fa0  addiu       $a1, $a1, 0x3FA0
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16288));
    // 0x2012b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2012b8: 0x24063840  addiu       $a2, $zero, 0x3840
    ctx->pc = 0x2012b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14400));
    // 0x2012bc: 0x807d39c  j           func_1F4E70
    ctx->pc = 0x2012BCu;
    ctx->pc = 0x2012C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2012BCu;
    // 0x2012c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E70u;
    sub_001F4E70_0x1f4e70(rdram, ctx, runtime); return;
    ctx->pc = 0x2012C4u;
}

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

// Function: sub_00201EB0
// Address: 0x201eb0 - 0x201ec4
void sub_00201EB0_0x201eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201EB0_0x201eb0");
#endif

    ctx->pc = 0x201eb0u;

    // 0x201eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ebc: 0x80807b2  j           func_201EC8
    ctx->pc = 0x201EBCu;
    ctx->pc = 0x201EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201EBCu;
    // 0x201ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EC8u;
    sub_00201EC8_0x201ec8(rdram, ctx, runtime); return;
    ctx->pc = 0x201EC4u;
}

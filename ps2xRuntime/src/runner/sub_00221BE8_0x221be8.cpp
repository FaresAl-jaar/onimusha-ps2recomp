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

// Function: sub_00221BE8
// Address: 0x221be8 - 0x221c24
void sub_00221BE8_0x221be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221BE8_0x221be8");
#endif

    ctx->pc = 0x221be8u;

    // 0x221be8: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x221be8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x221bec: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x221becu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x221bf0: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x221bf0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x221bf4: 0xa7482a  slt         $t1, $a1, $a3
    ctx->pc = 0x221bf4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x221bf8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x221bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x221bfc: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x221bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x221c00: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x221c00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x221c04: 0xc5302d  daddu       $a2, $a2, $a1
    ctx->pc = 0x221c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x221c08: 0xa9380b  movn        $a3, $a1, $t1
    ctx->pc = 0x221c08u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x221c0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x221c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x221c10: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x221c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x221c14: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x221c14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x221c18: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x221c18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x221c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x221C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C1Cu;
        // 0x221c20: 0xfc880010  sd          $t0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221C24u;
}

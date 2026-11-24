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

// Function: sub_002985E0
// Address: 0x2985e0 - 0x29861c
void sub_002985E0_0x2985e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002985E0_0x2985e0");
#endif

    ctx->pc = 0x2985e0u;

    // 0x2985e0: 0x908606d8  lbu         $a2, 0x6D8($a0)
    ctx->pc = 0x2985e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1752)));
    // 0x2985e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2985e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2985e8: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2985E8u;
    {
        const bool branch_taken_0x2985e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2985ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985E8u;
        // 0x2985ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985e8) {
            ctx->pc = 0x2985F8u;
            goto label_2985f8;
        }
    }
    ctx->pc = 0x2985F0u;
    // 0x2985f0: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2985F0u;
    {
        const bool branch_taken_0x2985f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2985f0) {
            ctx->pc = 0x298600u;
            goto label_298600;
        }
    }
    ctx->pc = 0x2985F8u;
label_2985f8:
    // 0x2985f8: 0xfc8006e0  sd          $zero, 0x6E0($a0)
    ctx->pc = 0x2985f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1760), GPR_U64(ctx, 0));
    // 0x2985fc: 0x0  nop
    ctx->pc = 0x2985fcu;
    // NOP
label_298600:
    // 0x298600: 0xfc8506e8  sd          $a1, 0x6E8($a0)
    ctx->pc = 0x298600u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1768), GPR_U64(ctx, 5));
    // 0x298604: 0xdc8606e0  ld          $a2, 0x6E0($a0)
    ctx->pc = 0x298604u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 1760)));
    // 0x298608: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x298608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29860c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x29860cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x298610: 0xfc8506e0  sd          $a1, 0x6E0($a0)
    ctx->pc = 0x298610u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1760), GPR_U64(ctx, 5));
    // 0x298614: 0x3e00008  jr          $ra
    ctx->pc = 0x298614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298614u;
        // 0x298618: 0xa08306d8  sb          $v1, 0x6D8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1752), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29861Cu;
}

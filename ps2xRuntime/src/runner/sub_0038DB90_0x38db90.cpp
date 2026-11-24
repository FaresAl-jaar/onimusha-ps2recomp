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

// Function: sub_0038DB90
// Address: 0x38db90 - 0x38dbd0
void sub_0038DB90_0x38db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DB90_0x38db90");
#endif

    switch (ctx->pc) {
        case 0x38db98u: goto label_38db98;
        default: break;
    }

    ctx->pc = 0x38db90u;

    // 0x38db90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38db90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db94: 0x0  nop
    ctx->pc = 0x38db94u;
    // NOP
label_38db98:
    // 0x38db98: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38db98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x38db9c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x38db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x38dba0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x38dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x38dba4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x38dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x38dba8: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x38dba8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x38dbac: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x38dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x38dbb0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x38dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x38dbb4: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x38dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x38dbb8: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x38dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x38dbbc: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x38dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x38dbc0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x38DBC0u;
    {
        const bool branch_taken_0x38dbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBC0u;
        // 0x38dbc4: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbc0) {
            ctx->pc = 0x38DB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38db98;
        }
    }
    ctx->pc = 0x38DBC8u;
    // 0x38dbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x38DBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DBD0u;
}

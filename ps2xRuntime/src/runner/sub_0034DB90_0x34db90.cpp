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

// Function: sub_0034DB90
// Address: 0x34db90 - 0x34dbc4
void sub_0034DB90_0x34db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DB90_0x34db90");
#endif

    switch (ctx->pc) {
        case 0x34dbb4u: goto label_34dbb4;
        default: break;
    }

    ctx->pc = 0x34db90u;

    // 0x34db90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34db94: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x34db94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x34db98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34db98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34db9c: 0x8c23a09c  lw          $v1, -0x5F64($at)
    ctx->pc = 0x34db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x91A09Cu));
    // 0x34dba0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x34dba0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34dba4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34DBA4u;
    {
        const bool branch_taken_0x34dba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DBA4u;
        // 0x34dba8: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dba4) {
            ctx->pc = 0x34DBB8u;
            goto label_34dbb8;
        }
    }
    ctx->pc = 0x34DBACu;
    // 0x34dbac: 0xc0d3d3c  jal         func_34F4F0
    ctx->pc = 0x34DBACu;
    SET_GPR_U32(ctx, 31, 0x34DBB4u);
    ctx->pc = 0x34DBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DBACu;
    // 0x34dbb0: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F4F0u, 0x34DBACu, 0x34DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DBB4u;
label_34dbb4:
    // 0x34dbb4: 0x0  nop
    ctx->pc = 0x34dbb4u;
    // NOP
label_34dbb8:
    // 0x34dbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34dbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x34DBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DBBCu;
        // 0x34dbc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DBC4u;
}

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

// Function: sub_0024CDA0
// Address: 0x24cda0 - 0x24cdd8
void sub_0024CDA0_0x24cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CDA0_0x24cda0");
#endif

    switch (ctx->pc) {
        case 0x24cdbcu: goto label_24cdbc;
        default: break;
    }

    ctx->pc = 0x24cda0u;

    // 0x24cda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24cda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24cda4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24cda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cda8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CDA8u;
    {
        const bool branch_taken_0x24cda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDA8u;
        // 0x24cdac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cda8) {
            ctx->pc = 0x24CDC8u;
            goto label_24cdc8;
        }
    }
    ctx->pc = 0x24CDB0u;
    // 0x24cdb0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24cdb4: 0xc093184  jal         func_24C610
    ctx->pc = 0x24CDB4u;
    SET_GPR_U32(ctx, 31, 0x24CDBCu);
    ctx->pc = 0x24CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDB4u;
    // 0x24cdb8: 0x24a5dd38  addiu       $a1, $a1, -0x22C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C610u, 0x24CDB4u, 0x24CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDBCu;
label_24cdbc:
    // 0x24cdbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24CDBCu;
    {
        const bool branch_taken_0x24cdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDBCu;
        // 0x24cdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdbc) {
            ctx->pc = 0x24CDCCu;
            goto label_24cdcc;
        }
    }
    ctx->pc = 0x24CDC4u;
    // 0x24cdc4: 0x0  nop
    ctx->pc = 0x24cdc4u;
    // NOP
label_24cdc8:
    // 0x24cdc8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x24cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_24cdcc:
    // 0x24cdcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x24CDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDD0u;
        // 0x24cdd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CDD8u;
}

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

// Function: sub_002CACF0
// Address: 0x2cacf0 - 0x2cad2c
void sub_002CACF0_0x2cacf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CACF0_0x2cacf0");
#endif

    switch (ctx->pc) {
        case 0x2cad1cu: goto label_2cad1c;
        default: break;
    }

    ctx->pc = 0x2cacf0u;

    // 0x2cacf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cacf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cacf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cacf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cacf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cacf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cacfc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CACFCu;
    {
        const bool branch_taken_0x2cacfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cacfc) {
            ctx->pc = 0x2CAD20u;
            goto label_2cad20;
        }
    }
    ctx->pc = 0x2CAD04u;
    // 0x2cad04: 0x90a60640  lbu         $a2, 0x640($a1)
    ctx->pc = 0x2cad04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x2cad08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cad0c: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAD0Cu;
    {
        const bool branch_taken_0x2cad0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cad0c) {
            ctx->pc = 0x2CAD20u;
            goto label_2cad20;
        }
    }
    ctx->pc = 0x2CAD14u;
    // 0x2cad14: 0xc0b226c  jal         func_2C89B0
    ctx->pc = 0x2CAD14u;
    SET_GPR_U32(ctx, 31, 0x2CAD1Cu);
    ctx->pc = 0x2C89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C89B0u, 0x2CAD14u, 0x2CAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD1Cu;
label_2cad1c:
    // 0x2cad1c: 0x0  nop
    ctx->pc = 0x2cad1cu;
    // NOP
label_2cad20:
    // 0x2cad20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cad20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cad24: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD24u;
        // 0x2cad28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAD2Cu;
}

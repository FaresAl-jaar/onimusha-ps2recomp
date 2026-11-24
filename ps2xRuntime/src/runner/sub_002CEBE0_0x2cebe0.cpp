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

// Function: sub_002CEBE0
// Address: 0x2cebe0 - 0x2cec18
void sub_002CEBE0_0x2cebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEBE0_0x2cebe0");
#endif

    switch (ctx->pc) {
        case 0x2cebe0u: goto label_2cebe0;
        case 0x2cebe4u: goto label_2cebe4;
        case 0x2cebe8u: goto label_2cebe8;
        case 0x2cebecu: goto label_2cebec;
        case 0x2cebf0u: goto label_2cebf0;
        case 0x2cebf4u: goto label_2cebf4;
        case 0x2cebf8u: goto label_2cebf8;
        case 0x2cebfcu: goto label_2cebfc;
        case 0x2cec00u: goto label_2cec00;
        case 0x2cec04u: goto label_2cec04;
        case 0x2cec08u: goto label_2cec08;
        case 0x2cec0cu: goto label_2cec0c;
        case 0x2cec10u: goto label_2cec10;
        case 0x2cec14u: goto label_2cec14;
        default: break;
    }

    ctx->pc = 0x2cebe0u;

label_2cebe0:
    // 0x2cebe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cebe4:
    // 0x2cebe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cebe8:
    // 0x2cebe8: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x2cebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2cebec:
    // 0x2cebec: 0xdf828280  ld          $v0, -0x7D80($gp)
    ctx->pc = 0x2cebecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935168)));
label_2cebf0:
    // 0x2cebf0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2cebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2cebf4:
    // 0x2cebf4: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x2cebf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_2cebf8:
    // 0x2cebf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cebfc:
    // 0x2cebfc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2cebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2cec00:
    // 0x2cec00: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2cec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2cec04:
    // 0x2cec04: 0x40f809  jalr        $v0
label_2cec08:
    if (ctx->pc == 0x2CEC08u) {
        ctx->pc = 0x2CEC0Cu;
        goto label_2cec0c;
    }
    ctx->pc = 0x2CEC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CEC0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEC04u, 0x2CEC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CEC0Cu;
label_2cec0c:
    // 0x2cec0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cec0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cec10:
    // 0x2cec10: 0x3e00008  jr          $ra
label_2cec14:
    if (ctx->pc == 0x2CEC14u) {
        ctx->pc = 0x2CEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC10u;
        // 0x2cec14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEC18u;
        goto label_fallthrough_0x2cec10;
    }
    ctx->pc = 0x2CEC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC10u;
        // 0x2cec14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cec10:
    ctx->pc = 0x2CEC18u;
}

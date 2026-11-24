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

// Function: sub_002919E0
// Address: 0x2919e0 - 0x291a18
void sub_002919E0_0x2919e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002919E0_0x2919e0");
#endif

    switch (ctx->pc) {
        case 0x2919e0u: goto label_2919e0;
        case 0x2919e4u: goto label_2919e4;
        case 0x2919e8u: goto label_2919e8;
        case 0x2919ecu: goto label_2919ec;
        case 0x2919f0u: goto label_2919f0;
        case 0x2919f4u: goto label_2919f4;
        case 0x2919f8u: goto label_2919f8;
        case 0x2919fcu: goto label_2919fc;
        case 0x291a00u: goto label_291a00;
        case 0x291a04u: goto label_291a04;
        case 0x291a08u: goto label_291a08;
        case 0x291a0cu: goto label_291a0c;
        case 0x291a10u: goto label_291a10;
        case 0x291a14u: goto label_291a14;
        default: break;
    }

    ctx->pc = 0x2919e0u;

label_2919e0:
    // 0x2919e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2919e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2919e4:
    // 0x2919e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2919e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2919e8:
    // 0x2919e8: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x2919e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2919ec:
    // 0x2919ec: 0xdf8281f8  ld          $v0, -0x7E08($gp)
    ctx->pc = 0x2919ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935032)));
label_2919f0:
    // 0x2919f0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2919f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2919f4:
    // 0x2919f4: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x2919f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_2919f8:
    // 0x2919f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2919f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2919fc:
    // 0x2919fc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2919fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_291a00:
    // 0x291a00: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x291a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_291a04:
    // 0x291a04: 0x40f809  jalr        $v0
label_291a08:
    if (ctx->pc == 0x291A08u) {
        ctx->pc = 0x291A0Cu;
        goto label_291a0c;
    }
    ctx->pc = 0x291A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291A0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291A04u, 0x291A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291A0Cu;
label_291a0c:
    // 0x291a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291a10:
    // 0x291a10: 0x3e00008  jr          $ra
label_291a14:
    if (ctx->pc == 0x291A14u) {
        ctx->pc = 0x291A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A10u;
        // 0x291a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A18u;
        goto label_fallthrough_0x291a10;
    }
    ctx->pc = 0x291A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A10u;
        // 0x291a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291a10:
    ctx->pc = 0x291A18u;
}

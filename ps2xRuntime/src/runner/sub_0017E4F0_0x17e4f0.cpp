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

// Function: sub_0017E4F0
// Address: 0x17e4f0 - 0x17e528
void sub_0017E4F0_0x17e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E4F0_0x17e4f0");
#endif

    switch (ctx->pc) {
        case 0x17e4f0u: goto label_17e4f0;
        case 0x17e4f4u: goto label_17e4f4;
        case 0x17e4f8u: goto label_17e4f8;
        case 0x17e4fcu: goto label_17e4fc;
        case 0x17e500u: goto label_17e500;
        case 0x17e504u: goto label_17e504;
        case 0x17e508u: goto label_17e508;
        case 0x17e50cu: goto label_17e50c;
        case 0x17e510u: goto label_17e510;
        case 0x17e514u: goto label_17e514;
        case 0x17e518u: goto label_17e518;
        case 0x17e51cu: goto label_17e51c;
        case 0x17e520u: goto label_17e520;
        case 0x17e524u: goto label_17e524;
        default: break;
    }

    ctx->pc = 0x17e4f0u;

label_17e4f0:
    // 0x17e4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17e4f4:
    // 0x17e4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17e4f8:
    // 0x17e4f8: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x17e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_17e4fc:
    // 0x17e4fc: 0xdf8280a8  ld          $v0, -0x7F58($gp)
    ctx->pc = 0x17e4fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934696)));
label_17e500:
    // 0x17e500: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x17e500u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_17e504:
    // 0x17e504: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x17e504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_17e508:
    // 0x17e508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17e50c:
    // 0x17e50c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_17e510:
    // 0x17e510: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x17e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_17e514:
    // 0x17e514: 0x40f809  jalr        $v0
label_17e518:
    if (ctx->pc == 0x17E518u) {
        ctx->pc = 0x17E51Cu;
        goto label_17e51c;
    }
    ctx->pc = 0x17E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17E51Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E514u, 0x17E51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E51Cu;
label_17e51c:
    // 0x17e51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e520:
    // 0x17e520: 0x3e00008  jr          $ra
label_17e524:
    if (ctx->pc == 0x17E524u) {
        ctx->pc = 0x17E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E520u;
        // 0x17e524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E528u;
        goto label_fallthrough_0x17e520;
    }
    ctx->pc = 0x17E520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E520u;
        // 0x17e524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e520:
    ctx->pc = 0x17E528u;
}

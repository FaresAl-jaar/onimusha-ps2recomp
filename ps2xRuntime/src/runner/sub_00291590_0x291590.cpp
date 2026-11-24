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

// Function: sub_00291590
// Address: 0x291590 - 0x2915c8
void sub_00291590_0x291590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291590_0x291590");
#endif

    switch (ctx->pc) {
        case 0x291590u: goto label_291590;
        case 0x291594u: goto label_291594;
        case 0x291598u: goto label_291598;
        case 0x29159cu: goto label_29159c;
        case 0x2915a0u: goto label_2915a0;
        case 0x2915a4u: goto label_2915a4;
        case 0x2915a8u: goto label_2915a8;
        case 0x2915acu: goto label_2915ac;
        case 0x2915b0u: goto label_2915b0;
        case 0x2915b4u: goto label_2915b4;
        case 0x2915b8u: goto label_2915b8;
        case 0x2915bcu: goto label_2915bc;
        case 0x2915c0u: goto label_2915c0;
        case 0x2915c4u: goto label_2915c4;
        default: break;
    }

    ctx->pc = 0x291590u;

label_291590:
    // 0x291590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_291594:
    // 0x291594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_291598:
    // 0x291598: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x291598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_29159c:
    // 0x29159c: 0xdf8281e0  ld          $v0, -0x7E20($gp)
    ctx->pc = 0x29159cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935008)));
label_2915a0:
    // 0x2915a0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2915a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2915a4:
    // 0x2915a4: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x2915a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_2915a8:
    // 0x2915a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2915a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2915ac:
    // 0x2915ac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2915acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2915b0:
    // 0x2915b0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2915b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2915b4:
    // 0x2915b4: 0x40f809  jalr        $v0
label_2915b8:
    if (ctx->pc == 0x2915B8u) {
        ctx->pc = 0x2915BCu;
        goto label_2915bc;
    }
    ctx->pc = 0x2915B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2915BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2915B4u, 0x2915BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2915BCu;
label_2915bc:
    // 0x2915bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2915bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2915c0:
    // 0x2915c0: 0x3e00008  jr          $ra
label_2915c4:
    if (ctx->pc == 0x2915C4u) {
        ctx->pc = 0x2915C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915C0u;
        // 0x2915c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2915C8u;
        goto label_fallthrough_0x2915c0;
    }
    ctx->pc = 0x2915C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2915C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915C0u;
        // 0x2915c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2915C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2915c0:
    ctx->pc = 0x2915C8u;
}

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

// Function: sub_00239568
// Address: 0x239568 - 0x239590
void sub_00239568_0x239568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239568_0x239568");
#endif

    switch (ctx->pc) {
        case 0x239568u: goto label_239568;
        case 0x23956cu: goto label_23956c;
        case 0x239570u: goto label_239570;
        case 0x239574u: goto label_239574;
        case 0x239578u: goto label_239578;
        case 0x23957cu: goto label_23957c;
        case 0x239580u: goto label_239580;
        case 0x239584u: goto label_239584;
        case 0x239588u: goto label_239588;
        case 0x23958cu: goto label_23958c;
        default: break;
    }

    ctx->pc = 0x239568u;

label_239568:
    // 0x239568: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x239568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_23956c:
    // 0x23956c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23956cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_239570:
    // 0x239570: 0x8c428fa0  lw          $v0, -0x7060($v0)
    ctx->pc = 0x239570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938528)));
label_239574:
    // 0x239574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_239578:
    if (ctx->pc == 0x239578u) {
        ctx->pc = 0x239578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239574u;
        // 0x239578: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23957Cu;
        goto label_23957c;
    }
    ctx->pc = 0x239574u;
    {
        const bool branch_taken_0x239574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239574u;
        // 0x239578: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239574) {
            ctx->pc = 0x239584u;
            goto label_239584;
        }
    }
    ctx->pc = 0x23957Cu;
label_23957c:
    // 0x23957c: 0x40f809  jalr        $v0
label_239580:
    if (ctx->pc == 0x239580u) {
        ctx->pc = 0x239584u;
        goto label_239584;
    }
    ctx->pc = 0x23957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239584u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23957Cu, 0x239584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239584u;
label_239584:
    // 0x239584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239588:
    // 0x239588: 0x3e00008  jr          $ra
label_23958c:
    if (ctx->pc == 0x23958Cu) {
        ctx->pc = 0x23958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239588u;
        // 0x23958c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239590u;
        goto label_fallthrough_0x239588;
    }
    ctx->pc = 0x239588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239588u;
        // 0x23958c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x239588:
    ctx->pc = 0x239590u;
}

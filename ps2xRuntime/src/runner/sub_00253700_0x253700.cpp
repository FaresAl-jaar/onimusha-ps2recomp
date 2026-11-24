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

// Function: sub_00253700
// Address: 0x253700 - 0x25373c
void sub_00253700_0x253700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253700_0x253700");
#endif

    switch (ctx->pc) {
        case 0x253700u: goto label_253700;
        case 0x253704u: goto label_253704;
        case 0x253708u: goto label_253708;
        case 0x25370cu: goto label_25370c;
        case 0x253710u: goto label_253710;
        case 0x253714u: goto label_253714;
        case 0x253718u: goto label_253718;
        case 0x25371cu: goto label_25371c;
        case 0x253720u: goto label_253720;
        case 0x253724u: goto label_253724;
        case 0x253728u: goto label_253728;
        case 0x25372cu: goto label_25372c;
        case 0x253730u: goto label_253730;
        case 0x253734u: goto label_253734;
        case 0x253738u: goto label_253738;
        default: break;
    }

    ctx->pc = 0x253700u;

label_253700:
    // 0x253700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_253704:
    // 0x253704: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x253704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_253708:
    // 0x253708: 0x24428920  addiu       $v0, $v0, -0x76E0
    ctx->pc = 0x253708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936864));
label_25370c:
    // 0x25370c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x25370cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_253710:
    // 0x253710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_253714:
    // 0x253714: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x253714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_253718:
    // 0x253718: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x253718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25371c:
    // 0x25371c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_253720:
    // 0x253720: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_253724:
    if (ctx->pc == 0x253724u) {
        ctx->pc = 0x253724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253720u;
        // 0x253724: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253728u;
        goto label_253728;
    }
    ctx->pc = 0x253720u;
    {
        const bool branch_taken_0x253720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253720) {
            ctx->pc = 0x253724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253720u;
            // 0x253724: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253734u;
            goto label_253734;
        }
    }
    ctx->pc = 0x253728u;
label_253728:
    // 0x253728: 0x40f809  jalr        $v0
label_25372c:
    if (ctx->pc == 0x25372Cu) {
        ctx->pc = 0x25372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253728u;
        // 0x25372c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253730u;
        goto label_253730;
    }
    ctx->pc = 0x253728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x253730u);
        ctx->pc = 0x25372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253728u;
        // 0x25372c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253728u, 0x253730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253730u;
label_253730:
    // 0x253730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253734:
    // 0x253734: 0x3e00008  jr          $ra
label_253738:
    if (ctx->pc == 0x253738u) {
        ctx->pc = 0x253738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253734u;
        // 0x253738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25373Cu;
        goto label_fallthrough_0x253734;
    }
    ctx->pc = 0x253734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253734u;
        // 0x253738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x253734:
    ctx->pc = 0x25373Cu;
}

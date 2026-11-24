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

// Function: sub_00271860
// Address: 0x271860 - 0x2718a4
void sub_00271860_0x271860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271860_0x271860");
#endif

    switch (ctx->pc) {
        case 0x271898u: goto label_271898;
        default: break;
    }

    ctx->pc = 0x271860u;

    // 0x271860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271864: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x271864u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27186c: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x27186cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x271870: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x271870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x271874: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271874u;
    {
        const bool branch_taken_0x271874 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x271878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271874u;
        // 0x271878: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271874) {
            ctx->pc = 0x271884u;
            goto label_271884;
        }
    }
    ctx->pc = 0x27187Cu;
    // 0x27187c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x271880: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x271880u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_271884:
    // 0x271884: 0x84890008  lh          $t1, 0x8($a0)
    ctx->pc = 0x271884u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x271888: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x271888u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x27188c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x27188cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x271890: 0xc09c540  jal         func_271500
    ctx->pc = 0x271890u;
    SET_GPR_U32(ctx, 31, 0x271898u);
    ctx->pc = 0x271894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271890u;
    // 0x271894: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271500u, 0x271890u, 0x271898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271898u;
label_271898:
    // 0x271898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27189c: 0x3e00008  jr          $ra
    ctx->pc = 0x27189Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2718A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27189Cu;
        // 0x2718a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27189Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2718A4u;
}

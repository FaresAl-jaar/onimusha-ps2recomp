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

// Function: sub_003F5300
// Address: 0x3f5300 - 0x3f5334
void sub_003F5300_0x3f5300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5300_0x3f5300");
#endif

    switch (ctx->pc) {
        case 0x3f531cu: goto label_3f531c;
        case 0x3f5328u: goto label_3f5328;
        default: break;
    }

    ctx->pc = 0x3f5300u;

    // 0x3f5300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f5304: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3f5304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3f5308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f530c: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x3f530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x3f5310: 0x24050248  addiu       $a1, $zero, 0x248
    ctx->pc = 0x3f5310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
    // 0x3f5314: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x3F5314u;
    SET_GPR_U32(ctx, 31, 0x3F531Cu);
    ctx->pc = 0x3F5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5314u;
    // 0x3f5318: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x3F5314u, 0x3F531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F531Cu;
label_3f531c:
    // 0x3f531c: 0xaf828d4c  sw          $v0, -0x72B4($gp)
    ctx->pc = 0x3f531cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 2));
    // 0x3f5320: 0xc0fd584  jal         func_3F5610
    ctx->pc = 0x3F5320u;
    SET_GPR_U32(ctx, 31, 0x3F5328u);
    ctx->pc = 0x3F5324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5320u;
    // 0x3f5324: 0x8f848d4c  lw          $a0, -0x72B4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937932)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5610u, 0x3F5320u, 0x3F5328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5328u;
label_3f5328:
    // 0x3f5328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f5328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f532c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F532Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F532Cu;
        // 0x3f5330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F532Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5334u;
}

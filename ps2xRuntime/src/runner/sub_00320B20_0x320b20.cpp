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

// Function: sub_00320B20
// Address: 0x320b20 - 0x320b74
void sub_00320B20_0x320b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320B20_0x320b20");
#endif

    switch (ctx->pc) {
        case 0x320b44u: goto label_320b44;
        case 0x320b64u: goto label_320b64;
        default: break;
    }

    ctx->pc = 0x320b20u;

    // 0x320b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320b24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x320b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320b2c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x320b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x320b30: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x320B30u;
    {
        const bool branch_taken_0x320b30 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x320b30) {
            ctx->pc = 0x320B50u;
            goto label_320b50;
        }
    }
    ctx->pc = 0x320B38u;
    // 0x320b38: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x320b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x320b3c: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x320B3Cu;
    SET_GPR_U32(ctx, 31, 0x320B44u);
    ctx->pc = 0x320B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B3Cu;
    // 0x320b40: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x320B3Cu, 0x320B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B44u;
label_320b44:
    // 0x320b44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x320B44u;
    {
        const bool branch_taken_0x320b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b44) {
            ctx->pc = 0x320B68u;
            goto label_320b68;
        }
    }
    ctx->pc = 0x320B4Cu;
    // 0x320b4c: 0x0  nop
    ctx->pc = 0x320b4cu;
    // NOP
label_320b50:
    // 0x320b50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x320B50u;
    {
        const bool branch_taken_0x320b50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b50) {
            ctx->pc = 0x320B68u;
            goto label_320b68;
        }
    }
    ctx->pc = 0x320B58u;
    // 0x320b58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x320b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b5c: 0xc0d0ac8  jal         func_342B20
    ctx->pc = 0x320B5Cu;
    SET_GPR_U32(ctx, 31, 0x320B64u);
    ctx->pc = 0x320B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B5Cu;
    // 0x320b60: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B20u, 0x320B5Cu, 0x320B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B64u;
label_320b64:
    // 0x320b64: 0x0  nop
    ctx->pc = 0x320b64u;
    // NOP
label_320b68:
    // 0x320b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x320B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B6Cu;
        // 0x320b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320B74u;
}

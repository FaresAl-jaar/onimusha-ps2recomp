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

// Function: sub_003E3230
// Address: 0x3e3230 - 0x3e3274
void sub_003E3230_0x3e3230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3230_0x3e3230");
#endif

    switch (ctx->pc) {
        case 0x3e3264u: goto label_3e3264;
        default: break;
    }

    ctx->pc = 0x3e3230u;

    // 0x3e3230: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e3230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3234: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e3234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e3238: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3e3238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3e323c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3e323cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3e3240: 0x24843468  addiu       $a0, $a0, 0x3468
    ctx->pc = 0x3e3240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13416));
    // 0x3e3244: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e3244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e3248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e324c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e324cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e3250: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3e3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3e3254: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3254u;
    {
        const bool branch_taken_0x3e3254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3254) {
            ctx->pc = 0x3E3268u;
            goto label_3e3268;
        }
    }
    ctx->pc = 0x3E325Cu;
    // 0x3e325c: 0xc0f8bd8  jal         func_3E2F60
    ctx->pc = 0x3E325Cu;
    SET_GPR_U32(ctx, 31, 0x3E3264u);
    ctx->pc = 0x3E2F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2F60u, 0x3E325Cu, 0x3E3264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3264u;
label_3e3264:
    // 0x3e3264: 0x0  nop
    ctx->pc = 0x3e3264u;
    // NOP
label_3e3268:
    // 0x3e3268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e3268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e326c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E326Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E326Cu;
        // 0x3e3270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E326Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3274u;
}

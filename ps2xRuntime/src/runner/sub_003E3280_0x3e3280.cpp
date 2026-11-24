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

// Function: sub_003E3280
// Address: 0x3e3280 - 0x3e32d4
void sub_003E3280_0x3e3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3280_0x3e3280");
#endif

    switch (ctx->pc) {
        case 0x3e32c8u: goto label_3e32c8;
        default: break;
    }

    ctx->pc = 0x3e3280u;

    // 0x3e3280: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e3280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3284: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e3284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e3288: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3e3288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3e328c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e3290: 0x24843468  addiu       $a0, $a0, 0x3468
    ctx->pc = 0x3e3290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13416));
    // 0x3e3294: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x3e3294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3e3298: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3e3298u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x923468u));
    // 0x3e329c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e32a0: 0x1033804  sllv        $a3, $v1, $t0
    ctx->pc = 0x3e32a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e32a4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x3e32a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3e32a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e32ac: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x3e32acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3e32b0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3e32b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x3e32b4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3e32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3e32b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E32B8u;
    {
        const bool branch_taken_0x3e32b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e32b8) {
            ctx->pc = 0x3E32C8u;
            goto label_3e32c8;
        }
    }
    ctx->pc = 0x3E32C0u;
    // 0x3e32c0: 0xc0f8bd8  jal         func_3E2F60
    ctx->pc = 0x3E32C0u;
    SET_GPR_U32(ctx, 31, 0x3E32C8u);
    ctx->pc = 0x3E2F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2F60u, 0x3E32C0u, 0x3E32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E32C8u;
label_3e32c8:
    // 0x3e32c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e32c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e32cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E32CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32CCu;
        // 0x3e32d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E32CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E32D4u;
}

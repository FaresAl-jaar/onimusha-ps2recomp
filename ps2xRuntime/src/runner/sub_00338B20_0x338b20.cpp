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

// Function: sub_00338B20
// Address: 0x338b20 - 0x338b64
void sub_00338B20_0x338b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338B20_0x338b20");
#endif

    switch (ctx->pc) {
        case 0x338b40u: goto label_338b40;
        default: break;
    }

    ctx->pc = 0x338b20u;

    // 0x338b20: 0x8263c  dsll32      $a0, $t0, 24
    ctx->pc = 0x338b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 24));
    // 0x338b24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338b28: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x338b28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x338b2c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x338B2Cu;
    {
        const bool branch_taken_0x338b2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x338B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B2Cu;
        // 0x338b30: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b2c) {
            ctx->pc = 0x338B50u;
            goto label_338b50;
        }
    }
    ctx->pc = 0x338B34u;
    // 0x338b34: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x338b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338b38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x338B38u;
    {
        const bool branch_taken_0x338b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B38u;
        // 0x338b3c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b38) {
            ctx->pc = 0x338B50u;
            goto label_338b50;
        }
    }
    ctx->pc = 0x338B40u;
label_338b40:
    // 0x338b40: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x338b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x338b44: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x338b44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x338b48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x338b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x338b4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x338b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_338b50:
    // 0x338b50: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x338b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338b54: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x338B54u;
    {
        const bool branch_taken_0x338b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B54u;
        // 0x338b58: 0x2467ffff  addiu       $a3, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b54) {
            ctx->pc = 0x338B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338b40;
        }
    }
    ctx->pc = 0x338B5Cu;
    // 0x338b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x338B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338B64u;
}

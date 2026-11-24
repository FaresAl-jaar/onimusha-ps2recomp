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

// Function: sub_00370110
// Address: 0x370110 - 0x370140
void sub_00370110_0x370110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370110_0x370110");
#endif

    ctx->pc = 0x370110u;

    // 0x370110: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x370110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x370114: 0x8c231284  lw          $v1, 0x1284($at)
    ctx->pc = 0x370114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x911284u));
    // 0x370118: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x370118u;
    {
        const bool branch_taken_0x370118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x370118) {
            ctx->pc = 0x370130u;
            goto label_370130;
        }
    }
    ctx->pc = 0x370120u;
    // 0x370120: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x370120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370124: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x370124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x370128: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x370128u;
    {
        const bool branch_taken_0x370128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370128u;
        // 0x37012c: 0xa4830012  sh          $v1, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370128) {
            ctx->pc = 0x370138u;
            goto label_370138;
        }
    }
    ctx->pc = 0x370130u;
label_370130:
    // 0x370130: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x370130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370134: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x370134u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
label_370138:
    // 0x370138: 0x3e00008  jr          $ra
    ctx->pc = 0x370138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370140u;
}

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

// Function: sub_00152FD0
// Address: 0x152fd0 - 0x153038
void sub_00152FD0_0x152fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152FD0_0x152fd0");
#endif

    switch (ctx->pc) {
        case 0x152fe0u: goto label_152fe0;
        case 0x153010u: goto label_153010;
        default: break;
    }

    ctx->pc = 0x152fd0u;

    // 0x152fd0: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x152fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x152fd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fd8: 0x24a5f090  addiu       $a1, $a1, -0xF70
    ctx->pc = 0x152fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963344));
    // 0x152fdc: 0x0  nop
    ctx->pc = 0x152fdcu;
    // NOP
label_152fe0:
    // 0x152fe0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x152fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152fe4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x152FE4u;
    {
        const bool branch_taken_0x152fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FE4u;
        // 0x152fe8: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fe4) {
            ctx->pc = 0x153000u;
            goto label_153000;
        }
    }
    ctx->pc = 0x152FECu;
    // 0x152fec: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x152fecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x152ff0: 0x2463f090  addiu       $v1, $v1, -0xF70
    ctx->pc = 0x152ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963344));
    // 0x152ff4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x152ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x152ff8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x152FF8u;
    {
        const bool branch_taken_0x152ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FF8u;
        // 0x152ffc: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ff8) {
            ctx->pc = 0x153030u;
            goto label_153030;
        }
    }
    ctx->pc = 0x153000u;
label_153000:
    // 0x153000: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x153000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x153004: 0x2cc30024  sltiu       $v1, $a2, 0x24
    ctx->pc = 0x153004u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x153008: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x153008u;
    {
        const bool branch_taken_0x153008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153008u;
        // 0x15300c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153008) {
            ctx->pc = 0x152FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152fe0;
        }
    }
    ctx->pc = 0x153010u;
label_153010:
    // 0x153010: 0x0  nop
    ctx->pc = 0x153010u;
    // NOP
    // 0x153014: 0x0  nop
    ctx->pc = 0x153014u;
    // NOP
    // 0x153018: 0x0  nop
    ctx->pc = 0x153018u;
    // NOP
    // 0x15301c: 0x0  nop
    ctx->pc = 0x15301cu;
    // NOP
    // 0x153020: 0x0  nop
    ctx->pc = 0x153020u;
    // NOP
    // 0x153024: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x153024u;
    {
        const bool branch_taken_0x153024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153024) {
            ctx->pc = 0x153010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153010;
        }
    }
    ctx->pc = 0x15302Cu;
    // 0x15302c: 0x0  nop
    ctx->pc = 0x15302cu;
    // NOP
label_153030:
    // 0x153030: 0x3e00008  jr          $ra
    ctx->pc = 0x153030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153038u;
}

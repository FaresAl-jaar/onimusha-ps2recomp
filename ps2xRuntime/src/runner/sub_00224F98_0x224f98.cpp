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

// Function: sub_00224F98
// Address: 0x224f98 - 0x224fe8
void sub_00224F98_0x224f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224F98_0x224f98");
#endif

    switch (ctx->pc) {
        case 0x224fb8u: goto label_224fb8;
        default: break;
    }

    ctx->pc = 0x224f98u;

    // 0x224f98: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x224f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x224f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fa0: 0x2442a248  addiu       $v0, $v0, -0x5DB8
    ctx->pc = 0x224fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943304));
    // 0x224fa4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x224fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BA24Cu));
    // 0x224fa8: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x224FA8u;
    {
        const bool branch_taken_0x224fa8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x224FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FA8u;
        // 0x224fac: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fa8) {
            ctx->pc = 0x224FDCu;
            goto label_224fdc;
        }
    }
    ctx->pc = 0x224FB0u;
    // 0x224fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x224fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fb4: 0x0  nop
    ctx->pc = 0x224fb4u;
    // NOP
label_224fb8:
    // 0x224fb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x224fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224fbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x224fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fc0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x224FC0u;
    {
        const bool branch_taken_0x224fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FC0u;
        // 0x224fc4: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fc0) {
            ctx->pc = 0x224FE0u;
            goto label_224fe0;
        }
    }
    ctx->pc = 0x224FC8u;
    // 0x224fc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x224fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x224fcc: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x224fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x224fd0: 0x0  nop
    ctx->pc = 0x224fd0u;
    // NOP
    // 0x224fd4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x224FD4u;
    {
        const bool branch_taken_0x224fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224fd4) {
            ctx->pc = 0x224FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224fb8;
        }
    }
    ctx->pc = 0x224FDCu;
label_224fdc:
    // 0x224fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224fe0:
    // 0x224fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x224FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224FE8u;
}

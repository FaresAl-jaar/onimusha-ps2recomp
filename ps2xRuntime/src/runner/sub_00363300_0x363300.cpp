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

// Function: sub_00363300
// Address: 0x363300 - 0x363360
void sub_00363300_0x363300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363300_0x363300");
#endif

    switch (ctx->pc) {
        case 0x363328u: goto label_363328;
        default: break;
    }

    ctx->pc = 0x363300u;

    // 0x363300: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x363300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x363304: 0x28a1010e  slti        $at, $a1, 0x10E
    ctx->pc = 0x363304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)270) ? 1 : 0);
    // 0x363308: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x363308u;
    {
        const bool branch_taken_0x363308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363308u;
        // 0x36330c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363308) {
            ctx->pc = 0x363350u;
            goto label_363350;
        }
    }
    ctx->pc = 0x363310u;
    // 0x363310: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x363310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363314: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x363314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x363318: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x363318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36331c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36331cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x363320: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x363320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x363324: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x363324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_363328:
    // 0x363328: 0x80620006  lb          $v0, 0x6($v1)
    ctx->pc = 0x363328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x36332c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36332Cu;
    {
        const bool branch_taken_0x36332c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x363330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36332Cu;
        // 0x363330: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36332c) {
            ctx->pc = 0x363340u;
            goto label_363340;
        }
    }
    ctx->pc = 0x363334u;
    // 0x363334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x363334u;
    {
        const bool branch_taken_0x363334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363334u;
        // 0x363338: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363334) {
            ctx->pc = 0x363358u;
            goto label_363358;
        }
    }
    ctx->pc = 0x36333Cu;
    // 0x36333c: 0x0  nop
    ctx->pc = 0x36333cu;
    // NOP
label_363340:
    // 0x363340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x363340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x363344: 0x28a2010e  slti        $v0, $a1, 0x10E
    ctx->pc = 0x363344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)270) ? 1 : 0);
    // 0x363348: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x363348u;
    {
        const bool branch_taken_0x363348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363348u;
        // 0x36334c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363348) {
            ctx->pc = 0x363328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363328;
        }
    }
    ctx->pc = 0x363350u;
label_363350:
    // 0x363350: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x363350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x363354: 0x0  nop
    ctx->pc = 0x363354u;
    // NOP
label_363358:
    // 0x363358: 0x3e00008  jr          $ra
    ctx->pc = 0x363358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363360u;
}

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

// Function: sub_003CD720
// Address: 0x3cd720 - 0x3cd780
void sub_003CD720_0x3cd720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD720_0x3cd720");
#endif

    switch (ctx->pc) {
        case 0x3cd730u: goto label_3cd730;
        case 0x3cd738u: goto label_3cd738;
        default: break;
    }

    ctx->pc = 0x3cd720u;

    // 0x3cd720: 0x248601c4  addiu       $a2, $a0, 0x1C4
    ctx->pc = 0x3cd720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 452));
    // 0x3cd724: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd728: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x3cd728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3cd72c: 0x0  nop
    ctx->pc = 0x3cd72cu;
    // NOP
label_3cd730:
    // 0x3cd730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cd730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd734: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3cd734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cd738:
    // 0x3cd738: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3cd738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cd73c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CD73Cu;
    {
        const bool branch_taken_0x3cd73c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD73Cu;
        // 0x3cd740: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd73c) {
            ctx->pc = 0x3CD750u;
            goto label_3cd750;
        }
    }
    ctx->pc = 0x3CD744u;
    // 0x3cd744: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CD744u;
    {
        const bool branch_taken_0x3cd744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd744) {
            ctx->pc = 0x3CD778u;
            goto label_3cd778;
        }
    }
    ctx->pc = 0x3CD74Cu;
    // 0x3cd74c: 0x0  nop
    ctx->pc = 0x3cd74cu;
    // NOP
label_3cd750:
    // 0x3cd750: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3cd750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3cd754: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x3cd754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd758: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3CD758u;
    {
        const bool branch_taken_0x3cd758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD758u;
        // 0x3cd75c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd758) {
            ctx->pc = 0x3CD738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd738;
        }
    }
    ctx->pc = 0x3CD760u;
    // 0x3cd760: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3cd760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3cd764: 0x2ce20005  sltiu       $v0, $a3, 0x5
    ctx->pc = 0x3cd764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd768: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3CD768u;
    {
        const bool branch_taken_0x3cd768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD768u;
        // 0x3cd76c: 0x24c60024  addiu       $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd768) {
            ctx->pc = 0x3CD730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd730;
        }
    }
    ctx->pc = 0x3CD770u;
    // 0x3cd770: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3cd770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3cd774: 0x0  nop
    ctx->pc = 0x3cd774u;
    // NOP
label_3cd778:
    // 0x3cd778: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD780u;
}

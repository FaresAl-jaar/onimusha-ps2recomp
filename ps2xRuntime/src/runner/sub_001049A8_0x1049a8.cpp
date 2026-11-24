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

// Function: sub_001049A8
// Address: 0x1049a8 - 0x104a00
void sub_001049A8_0x1049a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001049A8_0x1049a8");
#endif

    switch (ctx->pc) {
        case 0x1049b8u: goto label_1049b8;
        default: break;
    }

    ctx->pc = 0x1049a8u;

    // 0x1049a8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1049a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1049ac: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x1049acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1049b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1049B0u;
    {
        const bool branch_taken_0x1049b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049B0u;
        // 0x1049b4: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049b0) {
            ctx->pc = 0x1049D4u;
            goto label_1049d4;
        }
    }
    ctx->pc = 0x1049B8u;
label_1049b8:
    // 0x1049b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1049b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1049bc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1049bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1049c0: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x1049c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1049c4: 0x0  nop
    ctx->pc = 0x1049c4u;
    // NOP
    // 0x1049c8: 0x0  nop
    ctx->pc = 0x1049c8u;
    // NOP
    // 0x1049cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1049CCu;
    {
        const bool branch_taken_0x1049cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1049cc) {
            ctx->pc = 0x1049B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1049b8;
        }
    }
    ctx->pc = 0x1049D4u;
label_1049d4:
    // 0x1049d4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1049D4u;
    {
        const bool branch_taken_0x1049d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049D4u;
        // 0x1049d8: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049d4) {
            ctx->pc = 0x1049F0u;
            goto label_1049f0;
        }
    }
    ctx->pc = 0x1049DCu;
    // 0x1049dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1049dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1049e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1049e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1049e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1049e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1049e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1049e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1049ec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1049ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1049f0:
    // 0x1049f0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1049f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1049f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1049f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1049F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1049FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049F8u;
        // 0x1049fc: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1049F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104A00u;
}

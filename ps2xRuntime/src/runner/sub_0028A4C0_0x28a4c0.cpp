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

// Function: sub_0028A4C0
// Address: 0x28a4c0 - 0x28a534
void sub_0028A4C0_0x28a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A4C0_0x28a4c0");
#endif

    switch (ctx->pc) {
        case 0x28a4d8u: goto label_28a4d8;
        default: break;
    }

    ctx->pc = 0x28a4c0u;

    // 0x28a4c0: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a4c4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x28a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x28a4c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4cc: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x28a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
    // 0x28a4d0: 0x2484a0b0  addiu       $a0, $a0, -0x5F50
    ctx->pc = 0x28a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942896));
    // 0x28a4d4: 0x0  nop
    ctx->pc = 0x28a4d4u;
    // NOP
label_28a4d8:
    // 0x28a4d8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28a4dc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x28a4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a4e0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x28a4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x28a4e4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x28a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x28a4e8: 0x28c30100  slti        $v1, $a2, 0x100
    ctx->pc = 0x28a4e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x28a4ec: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x28a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a4f0: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x28a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x28a4f4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x28a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a4f8: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x28a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x28a4fc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x28a4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a500: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x28a500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x28a504: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x28a504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a508: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x28a508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x28a50c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x28a50cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a510: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x28a510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x28a514: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x28a514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a518: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x28a518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x28a51c: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x28a51cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a520: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x28a520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x28a524: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28A524u;
    {
        const bool branch_taken_0x28a524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A524u;
        // 0x28a528: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a524) {
            ctx->pc = 0x28A4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a4d8;
        }
    }
    ctx->pc = 0x28A52Cu;
    // 0x28a52c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A534u;
}

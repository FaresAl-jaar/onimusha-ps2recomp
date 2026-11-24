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

// Function: sub_0028A540
// Address: 0x28a540 - 0x28a584
void sub_0028A540_0x28a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A540_0x28a540");
#endif

    switch (ctx->pc) {
        case 0x28a558u: goto label_28a558;
        default: break;
    }

    ctx->pc = 0x28a540u;

    // 0x28a540: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x28a540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x28a544: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a548: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x28a548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28a54c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a54cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a550: 0x24c6a0b0  addiu       $a2, $a2, -0x5F50
    ctx->pc = 0x28a550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942896));
    // 0x28a554: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x28a554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
label_28a558:
    // 0x28a558: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x28a558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a55c: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28A55Cu;
    {
        const bool branch_taken_0x28a55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x28a55c) {
            ctx->pc = 0x28A568u;
            goto label_28a568;
        }
    }
    ctx->pc = 0x28A564u;
    // 0x28a564: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28a564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_28a568:
    // 0x28a568: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28a568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x28a56c: 0x28e30100  slti        $v1, $a3, 0x100
    ctx->pc = 0x28a56cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x28a570: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28a570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28a574: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28A574u;
    {
        const bool branch_taken_0x28a574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A574u;
        // 0x28a578: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a574) {
            ctx->pc = 0x28A558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a558;
        }
    }
    ctx->pc = 0x28A57Cu;
    // 0x28a57c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A584u;
}

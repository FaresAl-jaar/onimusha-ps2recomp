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

// Function: sub_0036B380
// Address: 0x36b380 - 0x36b3d8
void sub_0036B380_0x36b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B380_0x36b380");
#endif

    switch (ctx->pc) {
        case 0x36b3a0u: goto label_36b3a0;
        default: break;
    }

    ctx->pc = 0x36b380u;

    // 0x36b380: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x36b380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36b384: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x36b384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x36b388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36b388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b38c: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x36b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x36b390: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x36b390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x36b394: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x36b394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x36b398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b39c: 0x0  nop
    ctx->pc = 0x36b39cu;
    // NOP
label_36b3a0:
    // 0x36b3a0: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x36b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x36b3a4: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36B3A4u;
    {
        const bool branch_taken_0x36b3a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x36b3a4) {
            ctx->pc = 0x36B3C0u;
            goto label_36b3c0;
        }
    }
    ctx->pc = 0x36B3ACu;
    // 0x36b3ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36B3ACu;
    {
        const bool branch_taken_0x36b3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b3ac) {
            ctx->pc = 0x36B3C0u;
            goto label_36b3c0;
        }
    }
    ctx->pc = 0x36B3B4u;
    // 0x36b3b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36b3b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b3bc: 0x0  nop
    ctx->pc = 0x36b3bcu;
    // NOP
label_36b3c0:
    // 0x36b3c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36b3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36b3c4: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x36b3c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x36b3c8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x36B3C8u;
    {
        const bool branch_taken_0x36b3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3C8u;
        // 0x36b3cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b3c8) {
            ctx->pc = 0x36B3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b3a0;
        }
    }
    ctx->pc = 0x36B3D0u;
    // 0x36b3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x36B3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B3D8u;
}

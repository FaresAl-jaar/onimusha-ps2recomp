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

// Function: sub_002B2D30
// Address: 0x2b2d30 - 0x2b2dac
void sub_002B2D30_0x2b2d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2D30_0x2b2d30");
#endif

    switch (ctx->pc) {
        case 0x2b2d4cu: goto label_2b2d4c;
        default: break;
    }

    ctx->pc = 0x2b2d30u;

    // 0x2b2d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2d34: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2d3c: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b2d40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2d44: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B2D44u;
    SET_GPR_U32(ctx, 31, 0x2B2D4Cu);
    ctx->pc = 0x2B2D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2D44u;
    // 0x2b2d48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B2D44u, 0x2B2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D4Cu;
label_2b2d4c:
    // 0x2b2d4c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B2D4Cu;
    {
        const bool branch_taken_0x2b2d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2d4c) {
            ctx->pc = 0x2B2DA0u;
            goto label_2b2da0;
        }
    }
    ctx->pc = 0x2B2D54u;
    // 0x2b2d54: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x2b2d54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2b2d58: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b2d5c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x2b2d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2b2d60: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x2b2d60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2d64: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2b2d68: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2b2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2b2d6c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2b2d70: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2b2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2b2d74: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2b2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2b2d78: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2b2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2b2d7c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2b2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2b2d80: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2b2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2b2d84: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x2b2d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x2b2d88: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2b2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2b2d8c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x2b2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x2b2d90: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2b2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2b2d94: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x2b2d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2b2d98: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2b2d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2b2d9c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x2b2d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_2b2da0:
    // 0x2b2da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2da4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DA4u;
        // 0x2b2da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2DACu;
}

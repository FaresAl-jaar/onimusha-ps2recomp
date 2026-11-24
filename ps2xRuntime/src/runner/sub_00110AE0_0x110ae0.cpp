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

// Function: sub_00110AE0
// Address: 0x110ae0 - 0x110b38
void sub_00110AE0_0x110ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110AE0_0x110ae0");
#endif

    ctx->pc = 0x110ae0u;

    // 0x110ae0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x110ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x110ae4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x110AE4u;
    {
        const bool branch_taken_0x110ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AE4u;
        // 0x110ae8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ae4) {
            ctx->pc = 0x110AF4u;
            goto label_110af4;
        }
    }
    ctx->pc = 0x110AECu;
    // 0x110aec: 0x3e00008  jr          $ra
    ctx->pc = 0x110AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AECu;
        // 0x110af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110AF4u;
label_110af4:
    // 0x110af4: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x110af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x110af8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x110AF8u;
    {
        const bool branch_taken_0x110af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110af8) {
            ctx->pc = 0x110AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110AF8u;
            // 0x110afc: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110B2Cu;
            goto label_110b2c;
        }
    }
    ctx->pc = 0x110B00u;
    // 0x110b00: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x110b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x110b04: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x110b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x110b08: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x110b08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x110b0c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x110b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x110b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110b14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x110b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x110b18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x110b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x110b1c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x110b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x110b20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x110b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x110b24: 0x3e00008  jr          $ra
    ctx->pc = 0x110B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B24u;
        // 0x110b28: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110B2Cu;
label_110b2c:
    // 0x110b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b30: 0x3e00008  jr          $ra
    ctx->pc = 0x110B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B30u;
        // 0x110b34: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110B38u;
}

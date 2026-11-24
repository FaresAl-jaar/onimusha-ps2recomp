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

// Function: sub_00247B20
// Address: 0x247b20 - 0x247b98
void sub_00247B20_0x247b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247B20_0x247b20");
#endif

    switch (ctx->pc) {
        case 0x247b60u: goto label_247b60;
        case 0x247b74u: goto label_247b74;
        default: break;
    }

    ctx->pc = 0x247b20u;

    // 0x247b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247b24: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x247b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x247b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247b2c: 0x2463f23c  addiu       $v1, $v1, -0xDC4
    ctx->pc = 0x247b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963772));
    // 0x247b30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247b38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x247b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x247b3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CF23Cu));
    // 0x247b40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x247b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x247b44: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247B44u;
    {
        const bool branch_taken_0x247b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B44u;
        // 0x247b48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b44) {
            ctx->pc = 0x247B80u;
            goto label_247b80;
        }
    }
    ctx->pc = 0x247B4Cu;
    // 0x247b4c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x247b50: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x247b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247b54: 0x2450f240  addiu       $s0, $v0, -0xDC0
    ctx->pc = 0x247b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x247b58: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x247b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x247b5c: 0x0  nop
    ctx->pc = 0x247b5cu;
    // NOP
label_247b60:
    // 0x247b60: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x247b60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247b64: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x247B64u;
    {
        const bool branch_taken_0x247b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x247b64) {
            ctx->pc = 0x247B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247B64u;
            // 0x247b68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247B78u;
            goto label_247b78;
        }
    }
    ctx->pc = 0x247B6Cu;
    // 0x247b6c: 0xc091e0e  jal         func_247838
    ctx->pc = 0x247B6Cu;
    SET_GPR_U32(ctx, 31, 0x247B74u);
    ctx->pc = 0x247B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B6Cu;
    // 0x247b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247838u, 0x247B6Cu, 0x247B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B74u;
label_247b74:
    // 0x247b74: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x247b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_247b78:
    // 0x247b78: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x247B78u;
    {
        const bool branch_taken_0x247b78 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x247B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B78u;
        // 0x247b7c: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b78) {
            ctx->pc = 0x247B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247b60;
        }
    }
    ctx->pc = 0x247B80u;
label_247b80:
    // 0x247b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247b88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247b8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x247b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247b90: 0x3e00008  jr          $ra
    ctx->pc = 0x247B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B90u;
        // 0x247b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247B98u;
}

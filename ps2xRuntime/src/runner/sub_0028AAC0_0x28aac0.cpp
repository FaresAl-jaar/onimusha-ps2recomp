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

// Function: sub_0028AAC0
// Address: 0x28aac0 - 0x28ab68
void sub_0028AAC0_0x28aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AAC0_0x28aac0");
#endif

    switch (ctx->pc) {
        case 0x28ab00u: goto label_28ab00;
        default: break;
    }

    ctx->pc = 0x28aac0u;

    // 0x28aac0: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x28aac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x28aac4: 0x24600  sll         $t0, $v0, 24
    ctx->pc = 0x28aac4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28aac8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x28aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x28aacc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28aad0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x28aad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28aad4: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x28aad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x28aad8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x28aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x28aadc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28aadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aae0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28aae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28aae4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x28aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x28aae8: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x28aae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28aaec: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28aaf0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x28aaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28aaf4: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x28aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
    // 0x28aaf8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x28aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x28aafc: 0x2484a0b0  addiu       $a0, $a0, -0x5F50
    ctx->pc = 0x28aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942896));
label_28ab00:
    // 0x28ab00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28ab04: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28AB04u;
    {
        const bool branch_taken_0x28ab04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ab04) {
            ctx->pc = 0x28AB48u;
            goto label_28ab48;
        }
    }
    ctx->pc = 0x28AB0Cu;
    // 0x28ab0c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28ab10: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28AB10u;
    {
        const bool branch_taken_0x28ab10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ab10) {
            ctx->pc = 0x28AB48u;
            goto label_28ab48;
        }
    }
    ctx->pc = 0x28AB18u;
    // 0x28ab18: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x28ab18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28ab1c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28AB1Cu;
    {
        const bool branch_taken_0x28ab1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB1Cu;
        // 0x28ab20: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab1c) {
            ctx->pc = 0x28AB48u;
            goto label_28ab48;
        }
    }
    ctx->pc = 0x28AB24u;
    // 0x28ab24: 0xaf868940  sw          $a2, -0x76C0($gp)
    ctx->pc = 0x28ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 6));
    // 0x28ab28: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x28ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28ab2c: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x28ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x28ab30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28ab34: 0x244294b0  addiu       $v0, $v0, -0x6B50
    ctx->pc = 0x28ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939824));
    // 0x28ab38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ab3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28AB3Cu;
    {
        const bool branch_taken_0x28ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB3Cu;
        // 0x28ab40: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab3c) {
            ctx->pc = 0x28AB60u;
            goto label_28ab60;
        }
    }
    ctx->pc = 0x28AB44u;
    // 0x28ab44: 0x0  nop
    ctx->pc = 0x28ab44u;
    // NOP
label_28ab48:
    // 0x28ab48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28ab48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28ab4c: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x28ab4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x28ab50: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x28ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x28ab54: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28AB54u;
    {
        const bool branch_taken_0x28ab54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB54u;
        // 0x28ab58: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab54) {
            ctx->pc = 0x28AB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ab00;
        }
    }
    ctx->pc = 0x28AB5Cu;
    // 0x28ab5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ab5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ab60:
    // 0x28ab60: 0x3e00008  jr          $ra
    ctx->pc = 0x28AB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AB68u;
}

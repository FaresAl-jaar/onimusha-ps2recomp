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

// Function: sub_00118C80
// Address: 0x118c80 - 0x118cfc
void sub_00118C80_0x118c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118C80_0x118c80");
#endif

    switch (ctx->pc) {
        case 0x118c94u: goto label_118c94;
        case 0x118cc0u: goto label_118cc0;
        case 0x118cd8u: goto label_118cd8;
        case 0x118ce8u: goto label_118ce8;
        default: break;
    }

    ctx->pc = 0x118c80u;

    // 0x118c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118c8c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x118C8Cu;
    SET_GPR_U32(ctx, 31, 0x118C94u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x118C8Cu, 0x118C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C94u;
label_118c94:
    // 0x118c94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x118c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x118c9c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x118c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x118ca0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x118ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x118ca4: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x118ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x118ca8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x118CA8u;
    {
        const bool branch_taken_0x118ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x118ca8) {
            ctx->pc = 0x118CC8u;
            goto label_118cc8;
        }
    }
    ctx->pc = 0x118CB0u;
    // 0x118cb0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x118CB0u;
    {
        const bool branch_taken_0x118cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CB0u;
        // 0x118cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cb0) {
            ctx->pc = 0x118CECu;
            goto label_118cec;
        }
    }
    ctx->pc = 0x118CB8u;
    // 0x118cb8: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x118CB8u;
    SET_GPR_U32(ctx, 31, 0x118CC0u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x118CB8u, 0x118CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CC0u;
label_118cc0:
    // 0x118cc0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118CC0u;
    {
        const bool branch_taken_0x118cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CC0u;
        // 0x118cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cc0) {
            ctx->pc = 0x118CECu;
            goto label_118cec;
        }
    }
    ctx->pc = 0x118CC8u;
label_118cc8:
    // 0x118cc8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x118cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x118ccc: 0x3484f37f  ori         $a0, $a0, 0xF37F
    ctx->pc = 0x118cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62335);
    // 0x118cd0: 0xc046264  jal         func_118990
    ctx->pc = 0x118CD0u;
    SET_GPR_U32(ctx, 31, 0x118CD8u);
    ctx->pc = 0x118CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118CD0u;
    // 0x118cd4: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118990u, 0x118CD0u, 0x118CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CD8u;
label_118cd8:
    // 0x118cd8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118CD8u;
    {
        const bool branch_taken_0x118cd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CD8u;
        // 0x118cdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cd8) {
            ctx->pc = 0x118CECu;
            goto label_118cec;
        }
    }
    ctx->pc = 0x118CE0u;
    // 0x118ce0: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x118CE0u;
    SET_GPR_U32(ctx, 31, 0x118CE8u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x118CE0u, 0x118CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CE8u;
label_118ce8:
    // 0x118ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_118cec:
    // 0x118cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x118CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CF4u;
        // 0x118cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CFCu;
}

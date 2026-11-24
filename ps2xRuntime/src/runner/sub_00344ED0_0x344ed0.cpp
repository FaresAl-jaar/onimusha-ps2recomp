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

// Function: sub_00344ED0
// Address: 0x344ed0 - 0x344f58
void sub_00344ED0_0x344ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344ED0_0x344ed0");
#endif

    switch (ctx->pc) {
        case 0x344ef0u: goto label_344ef0;
        default: break;
    }

    ctx->pc = 0x344ed0u;

    // 0x344ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x344edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ee0: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x344ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x344ee4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x344ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x344ee8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x344EE8u;
    SET_GPR_U32(ctx, 31, 0x344EF0u);
    ctx->pc = 0x344EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344EE8u;
    // 0x344eec: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x344EE8u, 0x344EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344EF0u;
label_344ef0:
    // 0x344ef0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x344EF0u;
    {
        const bool branch_taken_0x344ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344ef0) {
            ctx->pc = 0x344F38u;
            goto label_344f38;
        }
    }
    ctx->pc = 0x344EF8u;
    // 0x344ef8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x344ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x344efc: 0xae030518  sw          $v1, 0x518($s0)
    ctx->pc = 0x344efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 3));
    // 0x344f00: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x344f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x344f04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x344F04u;
    {
        const bool branch_taken_0x344f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344f04) {
            ctx->pc = 0x344F18u;
            goto label_344f18;
        }
    }
    ctx->pc = 0x344F0Cu;
    // 0x344f0c: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x344f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x344f10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x344F10u;
    {
        const bool branch_taken_0x344f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F10u;
        // 0x344f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f10) {
            ctx->pc = 0x344F48u;
            goto label_344f48;
        }
    }
    ctx->pc = 0x344F18u;
label_344f18:
    // 0x344f18: 0x9203058e  lbu         $v1, 0x58E($s0)
    ctx->pc = 0x344f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1422)));
    // 0x344f1c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x344f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x344f20: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x344f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x344f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x344f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x344f28: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x344f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x344f2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x344F2Cu;
    {
        const bool branch_taken_0x344f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F2Cu;
        // 0x344f30: 0x7e020550  sq          $v0, 0x550($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f2c) {
            ctx->pc = 0x344F40u;
            goto label_344f40;
        }
    }
    ctx->pc = 0x344F34u;
    // 0x344f34: 0x0  nop
    ctx->pc = 0x344f34u;
    // NOP
label_344f38:
    // 0x344f38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x344F38u;
    {
        const bool branch_taken_0x344f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F38u;
        // 0x344f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f38) {
            ctx->pc = 0x344F48u;
            goto label_344f48;
        }
    }
    ctx->pc = 0x344F40u;
label_344f40:
    // 0x344f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344f44: 0x0  nop
    ctx->pc = 0x344f44u;
    // NOP
label_344f48:
    // 0x344f48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344f50: 0x3e00008  jr          $ra
    ctx->pc = 0x344F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F50u;
        // 0x344f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344F58u;
}

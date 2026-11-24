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

// Function: sub_00350B00
// Address: 0x350b00 - 0x350b58
void sub_00350B00_0x350b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350B00_0x350b00");
#endif

    switch (ctx->pc) {
        case 0x350b40u: goto label_350b40;
        default: break;
    }

    ctx->pc = 0x350b00u;

    // 0x350b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x350b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350b0c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x350b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x350b10: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x350B10u;
    {
        const bool branch_taken_0x350b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B10u;
        // 0x350b14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b10) {
            ctx->pc = 0x350B48u;
            goto label_350b48;
        }
    }
    ctx->pc = 0x350B18u;
    // 0x350b18: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x350b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x350b1c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x350b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x350b20: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x350b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x350b24: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x350b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x350b28: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x350b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x350b2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x350b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x350b30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350b34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x350b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350b38: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x350B38u;
    SET_GPR_U32(ctx, 31, 0x350B40u);
    ctx->pc = 0x350B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B38u;
    // 0x350b3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x350B38u, 0x350B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B40u;
label_350b40:
    // 0x350b40: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x350b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x350b44: 0x0  nop
    ctx->pc = 0x350b44u;
    // NOP
label_350b48:
    // 0x350b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350b50: 0x3e00008  jr          $ra
    ctx->pc = 0x350B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B50u;
        // 0x350b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350B58u;
}

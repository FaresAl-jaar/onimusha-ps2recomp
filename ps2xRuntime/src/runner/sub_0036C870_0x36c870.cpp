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

// Function: sub_0036C870
// Address: 0x36c870 - 0x36c8d0
void sub_0036C870_0x36c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C870_0x36c870");
#endif

    switch (ctx->pc) {
        case 0x36c890u: goto label_36c890;
        default: break;
    }

    ctx->pc = 0x36c870u;

    // 0x36c870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c874: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x36c874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x36c878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c880: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36C880u;
    {
        const bool branch_taken_0x36c880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C880u;
        // 0x36c884: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c880) {
            ctx->pc = 0x36C8A0u;
            goto label_36c8a0;
        }
    }
    ctx->pc = 0x36C888u;
    // 0x36c888: 0xc0db150  jal         func_36C540
    ctx->pc = 0x36C888u;
    SET_GPR_U32(ctx, 31, 0x36C890u);
    ctx->pc = 0x36C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C888u;
    // 0x36c88c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C540u, 0x36C888u, 0x36C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C890u;
label_36c890:
    // 0x36c890: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c894: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x36C894u;
    {
        const bool branch_taken_0x36c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C894u;
        // 0x36c898: 0xa0702399  sb          $s0, 0x2399($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9113), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c894) {
            ctx->pc = 0x36C8C0u;
            goto label_36c8c0;
        }
    }
    ctx->pc = 0x36C89Cu;
    // 0x36c89c: 0x0  nop
    ctx->pc = 0x36c89cu;
    // NOP
label_36c8a0:
    // 0x36c8a0: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c8a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36c8a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c8ac: 0xa0651c10  sb          $a1, 0x1C10($v1)
    ctx->pc = 0x36c8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7184), (uint8_t)GPR_U32(ctx, 5));
    // 0x36c8b0: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c8b4: 0xa0602398  sb          $zero, 0x2398($v1)
    ctx->pc = 0x36c8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9112), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c8b8: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c8bc: 0xa0642399  sb          $a0, 0x2399($v1)
    ctx->pc = 0x36c8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9113), (uint8_t)GPR_U32(ctx, 4));
label_36c8c0:
    // 0x36c8c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c8c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C8C8u;
        // 0x36c8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C8D0u;
}

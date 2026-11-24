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

// Function: sub_0039C880
// Address: 0x39c880 - 0x39c91c
void sub_0039C880_0x39c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C880_0x39c880");
#endif

    switch (ctx->pc) {
        case 0x39c8b8u: goto label_39c8b8;
        case 0x39c8c8u: goto label_39c8c8;
        default: break;
    }

    ctx->pc = 0x39c880u;

    // 0x39c880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39c884: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x39c884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39c888: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x39c88c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39c890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39c890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39c894: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39c894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39c898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39c89c: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x39c89cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39c8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39c8a4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x39c8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39c8ac: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x39c8acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x39c8b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39c8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c8b4: 0x0  nop
    ctx->pc = 0x39c8b4u;
    // NOP
label_39c8b8:
    // 0x39c8b8: 0x8e652b20  lw          $a1, 0x2B20($s3)
    ctx->pc = 0x39c8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x39c8bc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39c8c0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39C8C0u;
    SET_GPR_U32(ctx, 31, 0x39C8C8u);
    ctx->pc = 0x39C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C8C0u;
    // 0x39c8c4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39C8C0u, 0x39C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C8C8u;
label_39c8c8:
    // 0x39c8c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39C8C8u;
    {
        const bool branch_taken_0x39c8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c8c8) {
            ctx->pc = 0x39C8E8u;
            goto label_39c8e8;
        }
    }
    ctx->pc = 0x39C8D0u;
    // 0x39c8d0: 0x92422b2f  lbu         $v0, 0x2B2F($s2)
    ctx->pc = 0x39c8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11055)));
    // 0x39c8d4: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C8D4u;
    {
        const bool branch_taken_0x39c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x39C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8D4u;
        // 0x39c8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c8d4) {
            ctx->pc = 0x39C8E8u;
            goto label_39c8e8;
        }
    }
    ctx->pc = 0x39C8DCu;
    // 0x39c8dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39C8DCu;
    {
        const bool branch_taken_0x39c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c8dc) {
            ctx->pc = 0x39C900u;
            goto label_39c900;
        }
    }
    ctx->pc = 0x39C8E4u;
    // 0x39c8e4: 0x0  nop
    ctx->pc = 0x39c8e4u;
    // NOP
label_39c8e8:
    // 0x39c8e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39c8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x39c8ec: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x39c8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x39c8f0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x39c8f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x39c8f4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x39C8F4u;
    {
        const bool branch_taken_0x39c8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8F4u;
        // 0x39c8f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c8f4) {
            ctx->pc = 0x39C8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c8b8;
        }
    }
    ctx->pc = 0x39C8FCu;
    // 0x39c8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c900:
    // 0x39c900: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39c900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39c904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39c904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39c908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39c908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c914: 0x3e00008  jr          $ra
    ctx->pc = 0x39C914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C914u;
        // 0x39c918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C91Cu;
}

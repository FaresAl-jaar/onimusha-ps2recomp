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

// Function: sub_001E75D0
// Address: 0x1e75d0 - 0x1e7630
void sub_001E75D0_0x1e75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E75D0_0x1e75d0");
#endif

    switch (ctx->pc) {
        case 0x1e7600u: goto label_1e7600;
        case 0x1e7614u: goto label_1e7614;
        default: break;
    }

    ctx->pc = 0x1e75d0u;

    // 0x1e75d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e75d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e75d4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e75d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e75d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e75dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e75dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e75e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e75e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75e4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e75e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e75e8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E75E8u;
    {
        const bool branch_taken_0x1e75e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e75e8) {
            ctx->pc = 0x1E7620u;
            goto label_1e7620;
        }
    }
    ctx->pc = 0x1E75F0u;
    // 0x1e75f0: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x1e75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1e75f4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1e75f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1e75f8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x1E75F8u;
    SET_GPR_U32(ctx, 31, 0x1E7600u);
    ctx->pc = 0x1E75FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75F8u;
    // 0x1e75fc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1E75F8u, 0x1E7600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7600u;
label_1e7600:
    // 0x1e7600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e7600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7604: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7604u;
    {
        const bool branch_taken_0x1e7604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7604) {
            ctx->pc = 0x1E7618u;
            goto label_1e7618;
        }
    }
    ctx->pc = 0x1E760Cu;
    // 0x1e760c: 0xc0b30a0  jal         func_2CC280
    ctx->pc = 0x1E760Cu;
    SET_GPR_U32(ctx, 31, 0x1E7614u);
    ctx->pc = 0x2CC280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC280u, 0x1E760Cu, 0x1E7614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7614u;
label_1e7614:
    // 0x1e7614: 0x0  nop
    ctx->pc = 0x1e7614u;
    // NOP
label_1e7618:
    // 0x1e7618: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e7618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e761c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e761cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e7620:
    // 0x1e7620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7628: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7628u;
        // 0x1e762c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7630u;
}

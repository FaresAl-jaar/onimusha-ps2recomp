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

// Function: sub_0021B838
// Address: 0x21b838 - 0x21b890
void sub_0021B838_0x21b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B838_0x21b838");
#endif

    switch (ctx->pc) {
        case 0x21b870u: goto label_21b870;
        default: break;
    }

    ctx->pc = 0x21b838u;

    // 0x21b838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21b83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b844: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21b844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b848: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b84c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21b84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b850: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21b850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21b854: 0x8c841fc0  lw          $a0, 0x1FC0($a0)
    ctx->pc = 0x21b854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x21b858: 0x24901128  addiu       $s0, $a0, 0x1128
    ctx->pc = 0x21b858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x21b85c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x21b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21b860: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B860u;
    {
        const bool branch_taken_0x21b860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x21B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B860u;
        // 0x21b864: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b860) {
            ctx->pc = 0x21B878u;
            goto label_21b878;
        }
    }
    ctx->pc = 0x21B868u;
    // 0x21b868: 0xc086c52  jal         func_21B148
    ctx->pc = 0x21B868u;
    SET_GPR_U32(ctx, 31, 0x21B870u);
    ctx->pc = 0x21B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B148u, 0x21B868u, 0x21B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B870u;
label_21b870:
    // 0x21b870: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x21b870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x21b874: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x21b874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_21b878:
    // 0x21b878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b87c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b880: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b884: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21b884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b888: 0x3e00008  jr          $ra
    ctx->pc = 0x21B888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B888u;
        // 0x21b88c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B890u;
}

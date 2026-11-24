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

// Function: sub_00351800
// Address: 0x351800 - 0x351870
void sub_00351800_0x351800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351800_0x351800");
#endif

    switch (ctx->pc) {
        case 0x351820u: goto label_351820;
        case 0x351854u: goto label_351854;
        default: break;
    }

    ctx->pc = 0x351800u;

    // 0x351800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x351808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35180c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x35180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x351810: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x351810u;
    {
        const bool branch_taken_0x351810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351810u;
        // 0x351814: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351810) {
            ctx->pc = 0x351840u;
            goto label_351840;
        }
    }
    ctx->pc = 0x351818u;
    // 0x351818: 0xc09a4f0  jal         func_2693C0
    ctx->pc = 0x351818u;
    SET_GPR_U32(ctx, 31, 0x351820u);
    ctx->pc = 0x35181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351818u;
    // 0x35181c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2693C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2693C0u, 0x351818u, 0x351820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351820u;
label_351820:
    // 0x351820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x351820u;
    {
        const bool branch_taken_0x351820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351820) {
            ctx->pc = 0x351830u;
            goto label_351830;
        }
    }
    ctx->pc = 0x351828u;
    // 0x351828: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x351828u;
    {
        const bool branch_taken_0x351828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351828u;
        // 0x35182c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351828) {
            ctx->pc = 0x351860u;
            goto label_351860;
        }
    }
    ctx->pc = 0x351830u;
label_351830:
    // 0x351830: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x351830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x351834: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x351834u;
    {
        const bool branch_taken_0x351834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351834u;
        // 0x351838: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351834) {
            ctx->pc = 0x351860u;
            goto label_351860;
        }
    }
    ctx->pc = 0x35183Cu;
    // 0x35183c: 0x0  nop
    ctx->pc = 0x35183cu;
    // NOP
label_351840:
    // 0x351840: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x351840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x351844: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x351844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x351848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x351848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35184c: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x35184Cu;
    SET_GPR_U32(ctx, 31, 0x351854u);
    ctx->pc = 0x351850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35184Cu;
    // 0x351850: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x35184Cu, 0x351854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351854u;
label_351854:
    // 0x351854: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x351854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x351858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x351858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35185c: 0x0  nop
    ctx->pc = 0x35185cu;
    // NOP
label_351860:
    // 0x351860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x351860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351868: 0x3e00008  jr          $ra
    ctx->pc = 0x351868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351868u;
        // 0x35186c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351870u;
}

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

// Function: sub_002EC610
// Address: 0x2ec610 - 0x2ec648
void sub_002EC610_0x2ec610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC610_0x2ec610");
#endif

    switch (ctx->pc) {
        case 0x2ec624u: goto label_2ec624;
        default: break;
    }

    ctx->pc = 0x2ec610u;

    // 0x2ec610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ec61c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x2EC61Cu;
    SET_GPR_U32(ctx, 31, 0x2EC624u);
    ctx->pc = 0x2EC620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC61Cu;
    // 0x2ec620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x2EC61Cu, 0x2EC624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC624u;
label_2ec624:
    // 0x2ec624: 0x920307d8  lbu         $v1, 0x7D8($s0)
    ctx->pc = 0x2ec624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x2ec628: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC628u;
    {
        const bool branch_taken_0x2ec628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC628u;
        // 0x2ec62c: 0x240300c2  addiu       $v1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec628) {
            ctx->pc = 0x2EC638u;
            goto label_2ec638;
        }
    }
    ctx->pc = 0x2EC630u;
    // 0x2ec630: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2ec630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec634: 0x0  nop
    ctx->pc = 0x2ec634u;
    // NOP
label_2ec638:
    // 0x2ec638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec63c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec640: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC640u;
        // 0x2ec644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC648u;
}

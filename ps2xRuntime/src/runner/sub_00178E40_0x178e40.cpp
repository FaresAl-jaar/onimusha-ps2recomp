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

// Function: sub_00178E40
// Address: 0x178e40 - 0x178e88
void sub_00178E40_0x178e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178E40_0x178e40");
#endif

    switch (ctx->pc) {
        case 0x178e6cu: goto label_178e6c;
        default: break;
    }

    ctx->pc = 0x178e40u;

    // 0x178e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178e50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e54: 0x8c852df8  lw          $a1, 0x2DF8($a0)
    ctx->pc = 0x178e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11768)));
    // 0x178e58: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x178e58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x178e5c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178E5Cu;
    {
        const bool branch_taken_0x178e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E5Cu;
        // 0x178e60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e5c) {
            ctx->pc = 0x178E70u;
            goto label_178e70;
        }
    }
    ctx->pc = 0x178E64u;
    // 0x178e64: 0xc05e3a4  jal         func_178E90
    ctx->pc = 0x178E64u;
    SET_GPR_U32(ctx, 31, 0x178E6Cu);
    ctx->pc = 0x178E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E64u;
    // 0x178e68: 0x2052823  subu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E90u, 0x178E64u, 0x178E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E6Cu;
label_178e6c:
    // 0x178e6c: 0x0  nop
    ctx->pc = 0x178e6cu;
    // NOP
label_178e70:
    // 0x178e70: 0xae302df8  sw          $s0, 0x2DF8($s1)
    ctx->pc = 0x178e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11768), GPR_U32(ctx, 16));
    // 0x178e74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178e80: 0x3e00008  jr          $ra
    ctx->pc = 0x178E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E80u;
        // 0x178e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178E88u;
}

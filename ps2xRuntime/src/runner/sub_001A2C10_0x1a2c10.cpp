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

// Function: sub_001A2C10
// Address: 0x1a2c10 - 0x1a2c80
void sub_001A2C10_0x1a2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2C10_0x1a2c10");
#endif

    switch (ctx->pc) {
        case 0x1a2c30u: goto label_1a2c30;
        case 0x1a2c3cu: goto label_1a2c3c;
        default: break;
    }

    ctx->pc = 0x1a2c10u;

    // 0x1a2c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a2c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a2c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a2c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a2c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a2c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a2c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2c20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a2c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2c28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a2c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c2c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1a2c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c30:
    // 0x1a2c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c34: 0xc068b20  jal         func_1A2C80
    ctx->pc = 0x1A2C34u;
    SET_GPR_U32(ctx, 31, 0x1A2C3Cu);
    ctx->pc = 0x1A2C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C34u;
    // 0x1a2c38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C80u, 0x1A2C34u, 0x1A2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C3Cu;
label_1a2c3c:
    // 0x1a2c3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a2c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a2c40: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x1a2c40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a2c44: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2C44u;
    {
        const bool branch_taken_0x1a2c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C44u;
        // 0x1a2c48: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c44) {
            ctx->pc = 0x1A2C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2c30;
        }
    }
    ctx->pc = 0x1A2C4Cu;
    // 0x1a2c4c: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x1a2c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x1a2c50: 0x26430104  addiu       $v1, $s2, 0x104
    ctx->pc = 0x1a2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1a2c54: 0xa2400108  sb          $zero, 0x108($s2)
    ctx->pc = 0x1a2c54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2c58: 0xa2400109  sb          $zero, 0x109($s2)
    ctx->pc = 0x1a2c58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 265), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2c5c: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x1a2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
    // 0x1a2c60: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x1a2c60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x1a2c64: 0xae430100  sw          $v1, 0x100($s2)
    ctx->pc = 0x1a2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 3));
    // 0x1a2c68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a2c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2c6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2c78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C78u;
        // 0x1a2c7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C80u;
}

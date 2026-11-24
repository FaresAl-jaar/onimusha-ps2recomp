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

// Function: sub_0030C930
// Address: 0x30c930 - 0x30c9c8
void sub_0030C930_0x30c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C930_0x30c930");
#endif

    switch (ctx->pc) {
        case 0x30c960u: goto label_30c960;
        default: break;
    }

    ctx->pc = 0x30c930u;

    // 0x30c930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c934: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30c934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30c938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c940: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x30c940u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x30c944: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x30c944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x30c948: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C948u;
    {
        const bool branch_taken_0x30c948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C948u;
        // 0x30c94c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c948) {
            ctx->pc = 0x30C958u;
            goto label_30c958;
        }
    }
    ctx->pc = 0x30C950u;
    // 0x30c950: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x30C950u;
    {
        const bool branch_taken_0x30c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C950u;
        // 0x30c954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c950) {
            ctx->pc = 0x30C9B8u;
            goto label_30c9b8;
        }
    }
    ctx->pc = 0x30C958u;
label_30c958:
    // 0x30c958: 0xc0d8f58  jal         func_363D60
    ctx->pc = 0x30C958u;
    SET_GPR_U32(ctx, 31, 0x30C960u);
    ctx->pc = 0x30C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C958u;
    // 0x30c95c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D60u, 0x30C958u, 0x30C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C960u;
label_30c960:
    // 0x30c960: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C960u;
    {
        const bool branch_taken_0x30c960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c960) {
            ctx->pc = 0x30C970u;
            goto label_30c970;
        }
    }
    ctx->pc = 0x30C968u;
    // 0x30c968: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30C968u;
    {
        const bool branch_taken_0x30c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C968u;
        // 0x30c96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c968) {
            ctx->pc = 0x30C9B8u;
            goto label_30c9b8;
        }
    }
    ctx->pc = 0x30C970u;
label_30c970:
    // 0x30c970: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x30c970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x30c974: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30c974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c978: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C978u;
    {
        const bool branch_taken_0x30c978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C978u;
        // 0x30c97c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c978) {
            ctx->pc = 0x30C9A0u;
            goto label_30c9a0;
        }
    }
    ctx->pc = 0x30C980u;
    // 0x30c980: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C980u;
    {
        const bool branch_taken_0x30c980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c980) {
            ctx->pc = 0x30C990u;
            goto label_30c990;
        }
    }
    ctx->pc = 0x30C988u;
    // 0x30c988: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30C988u;
    {
        const bool branch_taken_0x30c988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c988) {
            ctx->pc = 0x30C9B0u;
            goto label_30c9b0;
        }
    }
    ctx->pc = 0x30C990u;
label_30c990:
    // 0x30c990: 0x944329de  lhu         $v1, 0x29DE($v0)
    ctx->pc = 0x30c990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x30c994: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x30c994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x30c998: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30C998u;
    {
        const bool branch_taken_0x30c998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C998u;
        // 0x30c99c: 0xa44329de  sh          $v1, 0x29DE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c998) {
            ctx->pc = 0x30C9B0u;
            goto label_30c9b0;
        }
    }
    ctx->pc = 0x30C9A0u;
label_30c9a0:
    // 0x30c9a0: 0x944329de  lhu         $v1, 0x29DE($v0)
    ctx->pc = 0x30c9a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x30c9a4: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x30c9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x30c9a8: 0xa44329de  sh          $v1, 0x29DE($v0)
    ctx->pc = 0x30c9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x30c9ac: 0x0  nop
    ctx->pc = 0x30c9acu;
    // NOP
label_30c9b0:
    // 0x30c9b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c9b4: 0x0  nop
    ctx->pc = 0x30c9b4u;
    // NOP
label_30c9b8:
    // 0x30c9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9C0u;
        // 0x30c9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C9C8u;
}

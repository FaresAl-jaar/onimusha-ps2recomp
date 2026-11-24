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

// Function: sub_003A30C0
// Address: 0x3a30c0 - 0x3a3130
void sub_003A30C0_0x3a30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A30C0_0x3a30c0");
#endif

    switch (ctx->pc) {
        case 0x3a30f4u: goto label_3a30f4;
        case 0x3a30fcu: goto label_3a30fc;
        default: break;
    }

    ctx->pc = 0x3a30c0u;

    // 0x3a30c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a30c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a30c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a30c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a30c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a30c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a30cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a30ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a30d0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A30D0u;
    {
        const bool branch_taken_0x3a30d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30D0u;
        // 0x3a30d4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30d0) {
            ctx->pc = 0x3A3120u;
            goto label_3a3120;
        }
    }
    ctx->pc = 0x3A30D8u;
    // 0x3a30d8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3a30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3a30dc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3a30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3a30e0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3a30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3a30e4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3a30e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3a30e8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3a30e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3a30ec: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3A30ECu;
    SET_GPR_U32(ctx, 31, 0x3A30F4u);
    ctx->pc = 0x3A30F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A30ECu;
    // 0x3a30f0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3A30ECu, 0x3A30F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A30F4u;
label_3a30f4:
    // 0x3a30f4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3A30F4u;
    SET_GPR_U32(ctx, 31, 0x3A30FCu);
    ctx->pc = 0x3A30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A30F4u;
    // 0x3a30f8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3A30F4u, 0x3A30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A30FCu;
label_3a30fc:
    // 0x3a30fc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3a30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3a3100: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a3100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3104: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3a3104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3a3108: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3a3108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3a310c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3a310cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3a3110: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3a3110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3114: 0x2463a1e0  addiu       $v1, $v1, -0x5E20
    ctx->pc = 0x3a3114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943200));
    // 0x3a3118: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3a3118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3a311c: 0x0  nop
    ctx->pc = 0x3a311cu;
    // NOP
label_3a3120:
    // 0x3a3120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a3120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a3124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3128: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3128u;
        // 0x3a312c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3130u;
}

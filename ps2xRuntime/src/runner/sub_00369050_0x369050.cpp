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

// Function: sub_00369050
// Address: 0x369050 - 0x3690c0
void sub_00369050_0x369050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369050_0x369050");
#endif

    switch (ctx->pc) {
        case 0x369084u: goto label_369084;
        case 0x36908cu: goto label_36908c;
        default: break;
    }

    ctx->pc = 0x369050u;

    // 0x369050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x369050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x369054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x369054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x369058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36905c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36905cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369060: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x369060u;
    {
        const bool branch_taken_0x369060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x369064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369060u;
        // 0x369064: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369060) {
            ctx->pc = 0x3690B0u;
            goto label_3690b0;
        }
    }
    ctx->pc = 0x369068u;
    // 0x369068: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x369068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36906c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x36906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x369070: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x369070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x369074: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x369074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x369078: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x369078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x36907c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x36907Cu;
    SET_GPR_U32(ctx, 31, 0x369084u);
    ctx->pc = 0x369080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36907Cu;
    // 0x369080: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x36907Cu, 0x369084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369084u;
label_369084:
    // 0x369084: 0xc09d694  jal         func_275A50
    ctx->pc = 0x369084u;
    SET_GPR_U32(ctx, 31, 0x36908Cu);
    ctx->pc = 0x369088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369084u;
    // 0x369088: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x369084u, 0x36908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36908Cu;
label_36908c:
    // 0x36908c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x36908cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x369090: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x369090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x369094: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x369094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x369098: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x369098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x36909c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x36909cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3690a0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3690a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3690a4: 0x246394f0  addiu       $v1, $v1, -0x6B10
    ctx->pc = 0x3690a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939888));
    // 0x3690a8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3690a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3690ac: 0x0  nop
    ctx->pc = 0x3690acu;
    // NOP
label_3690b0:
    // 0x3690b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3690b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3690b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3690b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3690b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3690B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3690BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3690B8u;
        // 0x3690bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3690B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3690C0u;
}

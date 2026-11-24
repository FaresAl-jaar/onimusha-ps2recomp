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

// Function: sub_003CA5D0
// Address: 0x3ca5d0 - 0x3ca640
void sub_003CA5D0_0x3ca5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA5D0_0x3ca5d0");
#endif

    switch (ctx->pc) {
        case 0x3ca604u: goto label_3ca604;
        case 0x3ca60cu: goto label_3ca60c;
        default: break;
    }

    ctx->pc = 0x3ca5d0u;

    // 0x3ca5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ca5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ca5d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ca5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ca5d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ca5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ca5dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ca5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca5e0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3CA5E0u;
    {
        const bool branch_taken_0x3ca5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5E0u;
        // 0x3ca5e4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca5e0) {
            ctx->pc = 0x3CA630u;
            goto label_3ca630;
        }
    }
    ctx->pc = 0x3CA5E8u;
    // 0x3ca5e8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ca5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ca5ec: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3ca5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3ca5f0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3ca5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3ca5f4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3ca5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3ca5f8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3ca5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3ca5fc: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3CA5FCu;
    SET_GPR_U32(ctx, 31, 0x3CA604u);
    ctx->pc = 0x3CA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA5FCu;
    // 0x3ca600: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3CA5FCu, 0x3CA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA604u;
label_3ca604:
    // 0x3ca604: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3CA604u;
    SET_GPR_U32(ctx, 31, 0x3CA60Cu);
    ctx->pc = 0x3CA608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA604u;
    // 0x3ca608: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3CA604u, 0x3CA60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA60Cu;
label_3ca60c:
    // 0x3ca60c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ca60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ca610: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ca610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ca614: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3ca614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3ca618: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3ca618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3ca61c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3ca61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3ca620: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3ca620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ca624: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x3ca624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
    // 0x3ca628: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3ca628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3ca62c: 0x0  nop
    ctx->pc = 0x3ca62cu;
    // NOP
label_3ca630:
    // 0x3ca630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ca630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca638: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA638u;
        // 0x3ca63c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA640u;
}

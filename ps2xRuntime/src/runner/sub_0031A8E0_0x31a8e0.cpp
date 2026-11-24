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

// Function: sub_0031A8E0
// Address: 0x31a8e0 - 0x31a950
void sub_0031A8E0_0x31a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A8E0_0x31a8e0");
#endif

    switch (ctx->pc) {
        case 0x31a914u: goto label_31a914;
        case 0x31a91cu: goto label_31a91c;
        default: break;
    }

    ctx->pc = 0x31a8e0u;

    // 0x31a8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a8e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a8e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a8ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8f0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31A8F0u;
    {
        const bool branch_taken_0x31a8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8F0u;
        // 0x31a8f4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8f0) {
            ctx->pc = 0x31A940u;
            goto label_31a940;
        }
    }
    ctx->pc = 0x31A8F8u;
    // 0x31a8f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31a8fc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x31a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x31a900: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x31a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x31a904: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x31a904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x31a908: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x31a908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x31a90c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x31A90Cu;
    SET_GPR_U32(ctx, 31, 0x31A914u);
    ctx->pc = 0x31A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A90Cu;
    // 0x31a910: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x31A90Cu, 0x31A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A914u;
label_31a914:
    // 0x31a914: 0xc09d694  jal         func_275A50
    ctx->pc = 0x31A914u;
    SET_GPR_U32(ctx, 31, 0x31A91Cu);
    ctx->pc = 0x31A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A914u;
    // 0x31a918: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x31A914u, 0x31A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A91Cu;
label_31a91c:
    // 0x31a91c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31a920: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a924: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x31a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x31a928: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x31a928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x31a92c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x31a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x31a930: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x31a930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31a934: 0x246383e0  addiu       $v1, $v1, -0x7C20
    ctx->pc = 0x31a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935520));
    // 0x31a938: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x31a938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x31a93c: 0x0  nop
    ctx->pc = 0x31a93cu;
    // NOP
label_31a940:
    // 0x31a940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a948: 0x3e00008  jr          $ra
    ctx->pc = 0x31A948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A948u;
        // 0x31a94c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A950u;
}

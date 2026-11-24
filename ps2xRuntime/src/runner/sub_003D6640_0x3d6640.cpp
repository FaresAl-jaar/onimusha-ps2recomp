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

// Function: sub_003D6640
// Address: 0x3d6640 - 0x3d66b0
void sub_003D6640_0x3d6640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6640_0x3d6640");
#endif

    switch (ctx->pc) {
        case 0x3d6674u: goto label_3d6674;
        case 0x3d667cu: goto label_3d667c;
        default: break;
    }

    ctx->pc = 0x3d6640u;

    // 0x3d6640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d6640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d6644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d6644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d6648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d6648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d664c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d664cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6650: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D6650u;
    {
        const bool branch_taken_0x3d6650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6650u;
        // 0x3d6654: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6650) {
            ctx->pc = 0x3D66A0u;
            goto label_3d66a0;
        }
    }
    ctx->pc = 0x3D6658u;
    // 0x3d6658: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d6658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d665c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3d665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3d6660: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3d6660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3d6664: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d6664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d6668: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3d6668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3d666c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3D666Cu;
    SET_GPR_U32(ctx, 31, 0x3D6674u);
    ctx->pc = 0x3D6670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D666Cu;
    // 0x3d6670: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3D666Cu, 0x3D6674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6674u;
label_3d6674:
    // 0x3d6674: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3D6674u;
    SET_GPR_U32(ctx, 31, 0x3D667Cu);
    ctx->pc = 0x3D6678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6674u;
    // 0x3d6678: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3D6674u, 0x3D667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D667Cu;
label_3d667c:
    // 0x3d667c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d667cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3d6680: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3d6680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d6684: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3d6684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3d6688: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d6688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d668c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d668cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d6690: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3d6690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d6694: 0x2463ad80  addiu       $v1, $v1, -0x5280
    ctx->pc = 0x3d6694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946176));
    // 0x3d6698: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d6698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d669c: 0x0  nop
    ctx->pc = 0x3d669cu;
    // NOP
label_3d66a0:
    // 0x3d66a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d66a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d66a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d66a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d66a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D66A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66A8u;
        // 0x3d66ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D66A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D66B0u;
}

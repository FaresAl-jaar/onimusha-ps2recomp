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

// Function: sub_003D52D0
// Address: 0x3d52d0 - 0x3d5340
void sub_003D52D0_0x3d52d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D52D0_0x3d52d0");
#endif

    switch (ctx->pc) {
        case 0x3d5304u: goto label_3d5304;
        case 0x3d530cu: goto label_3d530c;
        default: break;
    }

    ctx->pc = 0x3d52d0u;

    // 0x3d52d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d52d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d52d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d52d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d52d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d52d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d52dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d52dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d52e0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D52E0u;
    {
        const bool branch_taken_0x3d52e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52E0u;
        // 0x3d52e4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d52e0) {
            ctx->pc = 0x3D5330u;
            goto label_3d5330;
        }
    }
    ctx->pc = 0x3D52E8u;
    // 0x3d52e8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d52ec: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3d52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3d52f0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3d52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3d52f4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d52f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d52f8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3d52f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3d52fc: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3D52FCu;
    SET_GPR_U32(ctx, 31, 0x3D5304u);
    ctx->pc = 0x3D5300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D52FCu;
    // 0x3d5300: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3D52FCu, 0x3D5304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5304u;
label_3d5304:
    // 0x3d5304: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3D5304u;
    SET_GPR_U32(ctx, 31, 0x3D530Cu);
    ctx->pc = 0x3D5308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5304u;
    // 0x3d5308: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3D5304u, 0x3D530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D530Cu;
label_3d530c:
    // 0x3d530c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d530cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3d5310: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3d5310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d5314: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3d5314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3d5318: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d5318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d531c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d531cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d5320: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3d5320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d5324: 0x2463acf0  addiu       $v1, $v1, -0x5310
    ctx->pc = 0x3d5324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946032));
    // 0x3d5328: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d5328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d532c: 0x0  nop
    ctx->pc = 0x3d532cu;
    // NOP
label_3d5330:
    // 0x3d5330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d5330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d5334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5338: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5338u;
        // 0x3d533c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5340u;
}

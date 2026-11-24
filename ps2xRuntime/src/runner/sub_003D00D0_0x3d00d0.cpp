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

// Function: sub_003D00D0
// Address: 0x3d00d0 - 0x3d0138
void sub_003D00D0_0x3d00d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D00D0_0x3d00d0");
#endif

    switch (ctx->pc) {
        case 0x3d0104u: goto label_3d0104;
        default: break;
    }

    ctx->pc = 0x3d00d0u;

    // 0x3d00d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d00d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d00d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d00d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d00d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d00d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d00dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d00dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d00e0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D00E0u;
    {
        const bool branch_taken_0x3d00e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D00E0u;
        // 0x3d00e4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d00e0) {
            ctx->pc = 0x3D0128u;
            goto label_3d0128;
        }
    }
    ctx->pc = 0x3D00E8u;
    // 0x3d00e8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d00ec: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3d00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3d00f0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3d00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3d00f4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d00f8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3d00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3d00fc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3D00FCu;
    SET_GPR_U32(ctx, 31, 0x3D0104u);
    ctx->pc = 0x3D0100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D00FCu;
    // 0x3d0100: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3D00FCu, 0x3D0104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0104u;
label_3d0104:
    // 0x3d0104: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d0104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d0108: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3d0108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3d010c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3d010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3d0110: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3d0110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3d0114: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d0114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d0118: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d0118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d011c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3d011cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3d0120: 0x2463a9c0  addiu       $v1, $v1, -0x5640
    ctx->pc = 0x3d0120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945216));
    // 0x3d0124: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d0124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3d0128:
    // 0x3d0128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d0128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d012c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d012cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0130: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0130u;
        // 0x3d0134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0138u;
}

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

// Function: sub_003D34F0
// Address: 0x3d34f0 - 0x3d3560
void sub_003D34F0_0x3d34f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D34F0_0x3d34f0");
#endif

    switch (ctx->pc) {
        case 0x3d3524u: goto label_3d3524;
        case 0x3d352cu: goto label_3d352c;
        default: break;
    }

    ctx->pc = 0x3d34f0u;

    // 0x3d34f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d34f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d34f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d34f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d34f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d34f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d34fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d34fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3500: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D3500u;
    {
        const bool branch_taken_0x3d3500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3500u;
        // 0x3d3504: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3500) {
            ctx->pc = 0x3D3550u;
            goto label_3d3550;
        }
    }
    ctx->pc = 0x3D3508u;
    // 0x3d3508: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d3508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d350c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3d350cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3d3510: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3d3510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3d3514: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d3514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d3518: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3d3518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3d351c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3D351Cu;
    SET_GPR_U32(ctx, 31, 0x3D3524u);
    ctx->pc = 0x3D3520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D351Cu;
    // 0x3d3520: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3D351Cu, 0x3D3524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3524u;
label_3d3524:
    // 0x3d3524: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3D3524u;
    SET_GPR_U32(ctx, 31, 0x3D352Cu);
    ctx->pc = 0x3D3528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3524u;
    // 0x3d3528: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3D3524u, 0x3D352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D352Cu;
label_3d352c:
    // 0x3d352c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d352cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3d3530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3d3530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d3534: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3d3534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3d3538: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d3538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d353c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d353cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d3540: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3d3540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d3544: 0x2463aba0  addiu       $v1, $v1, -0x5460
    ctx->pc = 0x3d3544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945696));
    // 0x3d3548: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d3548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d354c: 0x0  nop
    ctx->pc = 0x3d354cu;
    // NOP
label_3d3550:
    // 0x3d3550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d3550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d3554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d3554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d3558: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3558u;
        // 0x3d355c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3560u;
}

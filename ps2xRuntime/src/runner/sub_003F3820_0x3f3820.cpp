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

// Function: sub_003F3820
// Address: 0x3f3820 - 0x3f38fc
void sub_003F3820_0x3f3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3820_0x3f3820");
#endif

    switch (ctx->pc) {
        case 0x3f38c4u: goto label_3f38c4;
        default: break;
    }

    ctx->pc = 0x3f3820u;

    // 0x3f3820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f3820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f3824: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f3824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f3828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f382c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3f382cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3f3830: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3f3830u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3f3834: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f3834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f3838: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F3838u;
    {
        const bool branch_taken_0x3f3838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3838u;
        // 0x3f383c: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3838) {
            ctx->pc = 0x3F38F0u;
            goto label_3f38f0;
        }
    }
    ctx->pc = 0x3F3840u;
    // 0x3f3840: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f3840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f3844: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3F3844u;
    {
        const bool branch_taken_0x3f3844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3844) {
            ctx->pc = 0x3F38F0u;
            goto label_3f38f0;
        }
    }
    ctx->pc = 0x3F384Cu;
    // 0x3f384c: 0x8f858d3c  lw          $a1, -0x72C4($gp)
    ctx->pc = 0x3f384cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f3850: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f3850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f3854: 0x80a401d0  lb          $a0, 0x1D0($a1)
    ctx->pc = 0x3f3854u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x3f3858: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F3858u;
    {
        const bool branch_taken_0x3f3858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3858u;
        // 0x3f385c: 0x24a601d0  addiu       $a2, $a1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3858) {
            ctx->pc = 0x3F3880u;
            goto label_3f3880;
        }
    }
    ctx->pc = 0x3F3860u;
    // 0x3f3860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f3860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3864: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3864u;
    {
        const bool branch_taken_0x3f3864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3864) {
            ctx->pc = 0x3F3880u;
            goto label_3f3880;
        }
    }
    ctx->pc = 0x3F386Cu;
    // 0x3f386c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F386Cu;
    {
        const bool branch_taken_0x3f386c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f386c) {
            ctx->pc = 0x3F38F0u;
            goto label_3f38f0;
        }
    }
    ctx->pc = 0x3F3874u;
    // 0x3f3874: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3F3874u;
    {
        const bool branch_taken_0x3f3874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3874) {
            ctx->pc = 0x3F38F0u;
            goto label_3f38f0;
        }
    }
    ctx->pc = 0x3F387Cu;
    // 0x3f387c: 0x0  nop
    ctx->pc = 0x3f387cu;
    // NOP
label_3f3880:
    // 0x3f3880: 0x80a401d1  lb          $a0, 0x1D1($a1)
    ctx->pc = 0x3f3880u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 465)));
    // 0x3f3884: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f3884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f3888: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F3888u;
    {
        const bool branch_taken_0x3f3888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3888u;
        // 0x3f388c: 0x24a701d1  addiu       $a3, $a1, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3888) {
            ctx->pc = 0x3F38E8u;
            goto label_3f38e8;
        }
    }
    ctx->pc = 0x3F3890u;
    // 0x3f3890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f3890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3894: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3894u;
    {
        const bool branch_taken_0x3f3894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3894) {
            ctx->pc = 0x3F38B8u;
            goto label_3f38b8;
        }
    }
    ctx->pc = 0x3F389Cu;
    // 0x3f389c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F389Cu;
    {
        const bool branch_taken_0x3f389c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f389c) {
            ctx->pc = 0x3F38B0u;
            goto label_3f38b0;
        }
    }
    ctx->pc = 0x3F38A4u;
    // 0x3f38a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3F38A4u;
    {
        const bool branch_taken_0x3f38a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f38a4) {
            ctx->pc = 0x3F38F0u;
            goto label_3f38f0;
        }
    }
    ctx->pc = 0x3F38ACu;
    // 0x3f38ac: 0x0  nop
    ctx->pc = 0x3f38acu;
    // NOP
label_3f38b0:
    // 0x3f38b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3f38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f38b4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f38b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_3f38b8:
    // 0x3f38b8: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x3f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f38bc: 0xc0fc714  jal         func_3F1C50
    ctx->pc = 0x3F38BCu;
    SET_GPR_U32(ctx, 31, 0x3F38C4u);
    ctx->pc = 0x3F38C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F38BCu;
    // 0x3f38c0: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C50u, 0x3F38BCu, 0x3F38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F38C4u;
label_3f38c4:
    // 0x3f38c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f38c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f38c8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F38C8u;
    {
        const bool branch_taken_0x3f38c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f38c8) {
            ctx->pc = 0x3F38F0u;
            goto label_3f38f0;
        }
    }
    ctx->pc = 0x3F38D0u;
    // 0x3f38d0: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x3f38d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x3f38d4: 0x808301d1  lb          $v1, 0x1D1($a0)
    ctx->pc = 0x3f38d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 465)));
    // 0x3f38d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f38d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f38dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F38DCu;
    {
        const bool branch_taken_0x3f38dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F38DCu;
        // 0x3f38e0: 0xa08301d1  sb          $v1, 0x1D1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 465), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f38dc) {
            ctx->pc = 0x3F38F0u;
            goto label_3f38f0;
        }
    }
    ctx->pc = 0x3F38E4u;
    // 0x3f38e4: 0x0  nop
    ctx->pc = 0x3f38e4u;
    // NOP
label_3f38e8:
    // 0x3f38e8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3f38e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f38ec: 0x0  nop
    ctx->pc = 0x3f38ecu;
    // NOP
label_3f38f0:
    // 0x3f38f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f38f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f38f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F38F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F38F4u;
        // 0x3f38f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F38F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F38FCu;
}

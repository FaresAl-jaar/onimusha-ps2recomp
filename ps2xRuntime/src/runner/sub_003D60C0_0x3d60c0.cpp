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

// Function: sub_003D60C0
// Address: 0x3d60c0 - 0x3d6148
void sub_003D60C0_0x3d60c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D60C0_0x3d60c0");
#endif

    switch (ctx->pc) {
        case 0x3d60dcu: goto label_3d60dc;
        case 0x3d6100u: goto label_3d6100;
        default: break;
    }

    ctx->pc = 0x3d60c0u;

    // 0x3d60c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d60c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3d60c4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3d60c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d60c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d60c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d60cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3d60d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d60d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d60d4: 0xc097080  jal         func_25C200
    ctx->pc = 0x3D60D4u;
    SET_GPR_U32(ctx, 31, 0x3D60DCu);
    ctx->pc = 0x3D60D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D60D4u;
    // 0x3d60d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C200u, 0x3D60D4u, 0x3D60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D60DCu;
label_3d60dc:
    // 0x3d60dc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3d60dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3d60e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d60e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d60e4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D60E4u;
    {
        const bool branch_taken_0x3d60e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D60E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60E4u;
        // 0x3d60e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d60e4) {
            ctx->pc = 0x3D6138u;
            goto label_3d6138;
        }
    }
    ctx->pc = 0x3D60ECu;
    // 0x3d60ec: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x3d60ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3d60f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3d60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d60f4: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x3d60f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x3d60f8: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x3d60f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3d60fc: 0x0  nop
    ctx->pc = 0x3d60fcu;
    // NOP
label_3d6100:
    // 0x3d6100: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x3d6100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3d6104: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x3d6104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3d6108: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D6108u;
    {
        const bool branch_taken_0x3d6108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3d6108) {
            ctx->pc = 0x3D6128u;
            goto label_3d6128;
        }
    }
    ctx->pc = 0x3D6110u;
    // 0x3d6110: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D6110u;
    {
        const bool branch_taken_0x3d6110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3d6110) {
            ctx->pc = 0x3D6128u;
            goto label_3d6128;
        }
    }
    ctx->pc = 0x3D6118u;
    // 0x3d6118: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3d6118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3d611c: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D611Cu;
    {
        const bool branch_taken_0x3d611c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3d611c) {
            ctx->pc = 0x3D6128u;
            goto label_3d6128;
        }
    }
    ctx->pc = 0x3D6124u;
    // 0x3d6124: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3d6124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3d6128:
    // 0x3d6128: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3d6128u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3d612c: 0x122182a  slt         $v1, $t1, $v0
    ctx->pc = 0x3d612cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3d6130: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3D6130u;
    {
        const bool branch_taken_0x3d6130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6130u;
        // 0x3d6134: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6130) {
            ctx->pc = 0x3D6100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6100;
        }
    }
    ctx->pc = 0x3D6138u;
label_3d6138:
    // 0x3d6138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d6138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d613c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x3d613cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6140: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6140u;
        // 0x3d6144: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6148u;
}

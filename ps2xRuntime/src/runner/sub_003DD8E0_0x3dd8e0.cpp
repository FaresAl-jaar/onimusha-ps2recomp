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

// Function: sub_003DD8E0
// Address: 0x3dd8e0 - 0x3dd9d4
void sub_003DD8E0_0x3dd8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD8E0_0x3dd8e0");
#endif

    switch (ctx->pc) {
        case 0x3dd910u: goto label_3dd910;
        case 0x3dd958u: goto label_3dd958;
        case 0x3dd980u: goto label_3dd980;
        case 0x3dd9a0u: goto label_3dd9a0;
        default: break;
    }

    ctx->pc = 0x3dd8e0u;

    // 0x3dd8e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dd8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3dd8e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dd8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3dd8e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dd8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3dd8ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dd8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dd8f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dd8f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd8f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dd8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dd8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dd8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dd8fc: 0x9083001e  lbu         $v1, 0x1E($a0)
    ctx->pc = 0x3dd8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x3dd900: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3dd900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3dd904: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x3DD904u;
    {
        const bool branch_taken_0x3dd904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD904u;
        // 0x3dd908: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd904) {
            ctx->pc = 0x3DD9B8u;
            goto label_3dd9b8;
        }
    }
    ctx->pc = 0x3DD90Cu;
    // 0x3dd90c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3dd90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd910:
    // 0x3dd910: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3dd910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3dd914: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dd914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3dd918: 0x908821  addu        $s1, $a0, $s0
    ctx->pc = 0x3dd918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3dd91c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3dd91cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd920: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3DD920u;
    {
        const bool branch_taken_0x3dd920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD920u;
        // 0x3dd924: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd920) {
            ctx->pc = 0x3DD960u;
            goto label_3dd960;
        }
    }
    ctx->pc = 0x3DD928u;
    // 0x3dd928: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD928u;
    {
        const bool branch_taken_0x3dd928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dd928) {
            ctx->pc = 0x3DD938u;
            goto label_3dd938;
        }
    }
    ctx->pc = 0x3DD930u;
    // 0x3dd930: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3DD930u;
    {
        const bool branch_taken_0x3dd930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd930) {
            ctx->pc = 0x3DD9A0u;
            goto label_3dd9a0;
        }
    }
    ctx->pc = 0x3DD938u;
label_3dd938:
    // 0x3dd938: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3dd938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3dd93c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3dd93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3dd940: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x3dd940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3dd944: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3dd944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3dd948: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dd948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dd94c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3dd94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3dd950: 0xc041442  jal         func_105108
    ctx->pc = 0x3DD950u;
    SET_GPR_U32(ctx, 31, 0x3DD958u);
    ctx->pc = 0x3DD954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD950u;
    // 0x3dd954: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3DD950u, 0x3DD958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD958u;
label_3dd958:
    // 0x3dd958: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3DD958u;
    {
        const bool branch_taken_0x3dd958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd958) {
            ctx->pc = 0x3DD9A0u;
            goto label_3dd9a0;
        }
    }
    ctx->pc = 0x3DD960u;
label_3dd960:
    // 0x3dd960: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3dd960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3dd964: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3dd964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3dd968: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x3dd968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3dd96c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3dd96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3dd970: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dd970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dd974: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3dd974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3dd978: 0xc041442  jal         func_105108
    ctx->pc = 0x3DD978u;
    SET_GPR_U32(ctx, 31, 0x3DD980u);
    ctx->pc = 0x3DD97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD978u;
    // 0x3dd97c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3DD978u, 0x3DD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD980u;
label_3dd980:
    // 0x3dd980: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3dd980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3dd984: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3dd984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3dd988: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3dd988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3dd98c: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3dd98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3dd990: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dd990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dd994: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3dd994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3dd998: 0xc041442  jal         func_105108
    ctx->pc = 0x3DD998u;
    SET_GPR_U32(ctx, 31, 0x3DD9A0u);
    ctx->pc = 0x3DD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD998u;
    // 0x3dd99c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3DD998u, 0x3DD9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD9A0u;
label_3dd9a0:
    // 0x3dd9a0: 0x9263001e  lbu         $v1, 0x1E($s3)
    ctx->pc = 0x3dd9a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x3dd9a4: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x3dd9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3dd9a8: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x3dd9a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3dd9ac: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x3dd9acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3dd9b0: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3DD9B0u;
    {
        const bool branch_taken_0x3dd9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9B0u;
        // 0x3dd9b4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd9b0) {
            ctx->pc = 0x3DD910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd910;
        }
    }
    ctx->pc = 0x3DD9B8u;
label_3dd9b8:
    // 0x3dd9b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dd9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dd9bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dd9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dd9c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dd9c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd9c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dd9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dd9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9CCu;
        // 0x3dd9d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD9D4u;
}

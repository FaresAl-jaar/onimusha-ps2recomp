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

// Function: sub_002DB370
// Address: 0x2db370 - 0x2db3f8
void sub_002DB370_0x2db370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB370_0x2db370");
#endif

    switch (ctx->pc) {
        case 0x2db398u: goto label_2db398;
        case 0x2db3c8u: goto label_2db3c8;
        default: break;
    }

    ctx->pc = 0x2db370u;

    // 0x2db370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2db374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2db374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2db378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db37c: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2db37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2db380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db384: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x2db384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db388: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2db388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2db38c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2db38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db390: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x2DB390u;
    SET_GPR_U32(ctx, 31, 0x2DB398u);
    ctx->pc = 0x2DB394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB390u;
    // 0x2db394: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2DB390u, 0x2DB398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB398u;
label_2db398:
    // 0x2db398: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB398u;
    {
        const bool branch_taken_0x2db398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db398) {
            ctx->pc = 0x2DB3A8u;
            goto label_2db3a8;
        }
    }
    ctx->pc = 0x2DB3A0u;
    // 0x2db3a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DB3A0u;
    {
        const bool branch_taken_0x2db3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3A0u;
        // 0x2db3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3a0) {
            ctx->pc = 0x2DB3E8u;
            goto label_2db3e8;
        }
    }
    ctx->pc = 0x2DB3A8u;
label_2db3a8:
    // 0x2db3a8: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2db3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2db3ac: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2db3acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db3b0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2db3b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2db3b4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB3B4u;
    {
        const bool branch_taken_0x2db3b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3B4u;
        // 0x2db3b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3b4) {
            ctx->pc = 0x2DB3E8u;
            goto label_2db3e8;
        }
    }
    ctx->pc = 0x2DB3BCu;
    // 0x2db3bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db3c0: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x2db3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2db3c4: 0x0  nop
    ctx->pc = 0x2db3c4u;
    // NOP
label_2db3c8:
    // 0x2db3c8: 0xa4a40020  sh          $a0, 0x20($a1)
    ctx->pc = 0x2db3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x2db3cc: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2db3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2db3d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2db3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2db3d4: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2db3d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db3d8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2db3d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2db3dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB3DCu;
    {
        const bool branch_taken_0x2db3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3DCu;
        // 0x2db3e0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3dc) {
            ctx->pc = 0x2DB3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db3c8;
        }
    }
    ctx->pc = 0x2DB3E4u;
    // 0x2db3e4: 0x0  nop
    ctx->pc = 0x2db3e4u;
    // NOP
label_2db3e8:
    // 0x2db3e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2db3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db3ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3F0u;
        // 0x2db3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB3F8u;
}

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

// Function: sub_002DB4C0
// Address: 0x2db4c0 - 0x2db598
void sub_002DB4C0_0x2db4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB4C0_0x2db4c0");
#endif

    switch (ctx->pc) {
        case 0x2db508u: goto label_2db508;
        case 0x2db520u: goto label_2db520;
        case 0x2db54cu: goto label_2db54c;
        default: break;
    }

    ctx->pc = 0x2db4c0u;

    // 0x2db4c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2db4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2db4c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2db4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2db4c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2db4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2db4cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2db4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2db4d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2db4d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2db4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2db4d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2db4d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2db4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2db4e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2db4e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db4ec: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2db4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2db4f0: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2db4f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db4f4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2db4f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2db4f8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DB4F8u;
    {
        const bool branch_taken_0x2db4f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4F8u;
        // 0x2db4fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4f8) {
            ctx->pc = 0x2DB570u;
            goto label_2db570;
        }
    }
    ctx->pc = 0x2DB500u;
    // 0x2db500: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2db500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db504: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2db504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db508:
    // 0x2db508: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x2db508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2db50c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x2db50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2db510: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB510u;
    {
        const bool branch_taken_0x2db510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB510u;
        // 0x2db514: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db510) {
            ctx->pc = 0x2DB550u;
            goto label_2db550;
        }
    }
    ctx->pc = 0x2DB518u;
    // 0x2db518: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x2DB518u;
    SET_GPR_U32(ctx, 31, 0x2DB520u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x2DB518u, 0x2DB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB520u;
label_2db520:
    // 0x2db520: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB520u;
    {
        const bool branch_taken_0x2db520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db520) {
            ctx->pc = 0x2DB538u;
            goto label_2db538;
        }
    }
    ctx->pc = 0x2DB528u;
    // 0x2db528: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x2db528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2db52c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB52Cu;
    {
        const bool branch_taken_0x2db52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB52Cu;
        // 0x2db530: 0xa6220020  sh          $v0, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db52c) {
            ctx->pc = 0x2DB550u;
            goto label_2db550;
        }
    }
    ctx->pc = 0x2DB534u;
    // 0x2db534: 0x0  nop
    ctx->pc = 0x2db534u;
    // NOP
label_2db538:
    // 0x2db538: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x2db538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2db53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db540: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2db540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db544: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x2DB544u;
    SET_GPR_U32(ctx, 31, 0x2DB54Cu);
    ctx->pc = 0x2DB548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB544u;
    // 0x2db548: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x2DB544u, 0x2DB54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB54Cu;
label_2db54c:
    // 0x2db54c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2db54cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2db550:
    // 0x2db550: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2db550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2db554: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2db554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2db558: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2db558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2db55c: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2db55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db560: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2db560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2db564: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2DB564u;
    {
        const bool branch_taken_0x2db564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB564u;
        // 0x2db568: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db564) {
            ctx->pc = 0x2DB508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db508;
        }
    }
    ctx->pc = 0x2DB56Cu;
    // 0x2db56c: 0x0  nop
    ctx->pc = 0x2db56cu;
    // NOP
label_2db570:
    // 0x2db570: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2db570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db574: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2db574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2db578: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2db578u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2db57c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2db57cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db580: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2db580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2db584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db58c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db590: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB590u;
        // 0x2db594: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB598u;
}

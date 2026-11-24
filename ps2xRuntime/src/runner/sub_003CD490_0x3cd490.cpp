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

// Function: sub_003CD490
// Address: 0x3cd490 - 0x3cd58c
void sub_003CD490_0x3cd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD490_0x3cd490");
#endif

    switch (ctx->pc) {
        case 0x3cd4b8u: goto label_3cd4b8;
        case 0x3cd4c0u: goto label_3cd4c0;
        case 0x3cd508u: goto label_3cd508;
        case 0x3cd520u: goto label_3cd520;
        default: break;
    }

    ctx->pc = 0x3cd490u;

    // 0x3cd490: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3cd490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3cd494: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3cd494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3cd498: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3cd498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3cd49c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3cd49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3cd4a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3cd4a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd4a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3cd4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3cd4a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cd4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3cd4ac: 0x249301c4  addiu       $s3, $a0, 0x1C4
    ctx->pc = 0x3cd4acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 452));
    // 0x3cd4b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cd4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cd4b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cd4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cd4b8:
    // 0x3cd4b8: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x3CD4B8u;
    SET_GPR_U32(ctx, 31, 0x3CD4C0u);
    ctx->pc = 0x3CD4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD4B8u;
    // 0x3cd4bc: 0x32a4ffff  andi        $a0, $s5, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x3CD4B8u, 0x3CD4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD4C0u;
label_3cd4c0:
    // 0x3cd4c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cd4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd4c4: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x3CD4C4u;
    {
        const bool branch_taken_0x3cd4c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd4c4) {
            ctx->pc = 0x3CD558u;
            goto label_3cd558;
        }
    }
    ctx->pc = 0x3CD4CCu;
    // 0x3cd4cc: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x3cd4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x3cd4d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3cd4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3cd4d4: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x3cd4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cd4d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3cd4d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd4dc: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3cd4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x3cd4e0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3cd4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd4e4: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x3cd4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cd4e8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3cd4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd4ec: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3cd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x3cd4f0: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x3cd4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cd4f4: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3cd4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x3cd4f8: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x3cd4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cd4fc: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x3cd4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x3cd500: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x3cd500u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cd504: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x3cd504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_3cd508:
    // 0x3cd508: 0x96420044  lhu         $v0, 0x44($s2)
    ctx->pc = 0x3cd508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x3cd50c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3cd50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3cd510: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x3cd510u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cd514: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x3cd514u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3cd518: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x3CD518u;
    SET_GPR_U32(ctx, 31, 0x3CD520u);
    ctx->pc = 0x3CD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD518u;
    // 0x3cd51c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x3CD518u, 0x3CD520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD520u;
label_3cd520:
    // 0x3cd520: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3cd520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3cd524: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3cd524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3cd528: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CD528u;
    {
        const bool branch_taken_0x3cd528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd528) {
            ctx->pc = 0x3CD540u;
            goto label_3cd540;
        }
    }
    ctx->pc = 0x3CD530u;
    // 0x3cd530: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x3cd530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3cd534: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cd534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3cd538: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x3cd538u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x3cd53c: 0x0  nop
    ctx->pc = 0x3cd53cu;
    // NOP
label_3cd540:
    // 0x3cd540: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3cd540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3cd544: 0x2a830005  slti        $v1, $s4, 0x5
    ctx->pc = 0x3cd544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd548: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3cd548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3cd54c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3cd54cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3cd550: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3CD550u;
    {
        const bool branch_taken_0x3cd550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD550u;
        // 0x3cd554: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd550) {
            ctx->pc = 0x3CD508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd508;
        }
    }
    ctx->pc = 0x3CD558u;
label_3cd558:
    // 0x3cd558: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3cd558u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3cd55c: 0x2ea30005  sltiu       $v1, $s5, 0x5
    ctx->pc = 0x3cd55cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd560: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3CD560u;
    {
        const bool branch_taken_0x3cd560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD560u;
        // 0x3cd564: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd560) {
            ctx->pc = 0x3CD4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd4b8;
        }
    }
    ctx->pc = 0x3CD568u;
    // 0x3cd568: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3cd568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cd56c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3cd56cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cd570: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3cd570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cd574: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cd574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cd578: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cd578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd57c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd57cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd584: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD584u;
        // 0x3cd588: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD58Cu;
}

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

// Function: sub_00153800
// Address: 0x153800 - 0x1538c4
void sub_00153800_0x153800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153800_0x153800");
#endif

    switch (ctx->pc) {
        case 0x153830u: goto label_153830;
        case 0x15383cu: goto label_15383c;
        case 0x153858u: goto label_153858;
        case 0x153860u: goto label_153860;
        default: break;
    }

    ctx->pc = 0x153800u;

    // 0x153800: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x153800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x153804: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x153804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x153808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x153808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15380c: 0x27828050  addiu       $v0, $gp, -0x7FB0
    ctx->pc = 0x15380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934608));
    // 0x153810: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x153814: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15381c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15381cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153824: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x153824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153828: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x153828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15382c: 0x0  nop
    ctx->pc = 0x15382cu;
    // NOP
label_153830:
    // 0x153830: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x153830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x153834: 0xc047de8  jal         func_11F7A0
    ctx->pc = 0x153834u;
    SET_GPR_U32(ctx, 31, 0x15383Cu);
    ctx->pc = 0x153838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153834u;
    // 0x153838: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F7A0u, 0x153834u, 0x15383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15383Cu;
label_15383c:
    // 0x15383c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15383cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153840: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x153840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x153844: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x153844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x153848: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x153848u;
    {
        const bool branch_taken_0x153848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153848u;
        // 0x15384c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153848) {
            ctx->pc = 0x153890u;
            goto label_153890;
        }
    }
    ctx->pc = 0x153850u;
    // 0x153850: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x153850u;
    SET_GPR_U32(ctx, 31, 0x153858u);
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x153850u, 0x153858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153858u;
label_153858:
    // 0x153858: 0xc0481d6  jal         func_120758
    ctx->pc = 0x153858u;
    SET_GPR_U32(ctx, 31, 0x153860u);
    ctx->pc = 0x120758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120758u, 0x153858u, 0x153860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153860u;
label_153860:
    // 0x153860: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x153860u;
    {
        const bool branch_taken_0x153860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153860u;
        // 0x153864: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153860) {
            ctx->pc = 0x153890u;
            goto label_153890;
        }
    }
    ctx->pc = 0x153868u;
    // 0x153868: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153868u;
    {
        const bool branch_taken_0x153868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x153868) {
            ctx->pc = 0x153878u;
            goto label_153878;
        }
    }
    ctx->pc = 0x153870u;
    // 0x153870: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x153870u;
    {
        const bool branch_taken_0x153870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153870u;
        // 0x153874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153870) {
            ctx->pc = 0x1538A8u;
            goto label_1538a8;
        }
    }
    ctx->pc = 0x153878u;
label_153878:
    // 0x153878: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x153878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15387c: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15387Cu;
    {
        const bool branch_taken_0x15387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15387c) {
            ctx->pc = 0x153830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153830;
        }
    }
    ctx->pc = 0x153884u;
    // 0x153884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x153884u;
    {
        const bool branch_taken_0x153884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153884u;
        // 0x153888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153884) {
            ctx->pc = 0x1538A8u;
            goto label_1538a8;
        }
    }
    ctx->pc = 0x15388Cu;
    // 0x15388c: 0x0  nop
    ctx->pc = 0x15388cu;
    // NOP
label_153890:
    // 0x153890: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x153890u;
    {
        const bool branch_taken_0x153890 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x153890) {
            ctx->pc = 0x1538A0u;
            goto label_1538a0;
        }
    }
    ctx->pc = 0x153898u;
    // 0x153898: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x153898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x15389c: 0x0  nop
    ctx->pc = 0x15389cu;
    // NOP
label_1538a0:
    // 0x1538a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1538a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1538a4: 0x0  nop
    ctx->pc = 0x1538a4u;
    // NOP
label_1538a8:
    // 0x1538a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1538a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1538ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1538acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1538b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1538b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1538b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1538b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1538b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1538b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1538bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1538BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1538C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1538BCu;
        // 0x1538c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1538BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1538C4u;
}

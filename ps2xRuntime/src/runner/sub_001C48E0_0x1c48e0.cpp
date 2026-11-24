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

// Function: sub_001C48E0
// Address: 0x1c48e0 - 0x1c49f4
void sub_001C48E0_0x1c48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C48E0_0x1c48e0");
#endif

    switch (ctx->pc) {
        case 0x1c4918u: goto label_1c4918;
        case 0x1c4998u: goto label_1c4998;
        case 0x1c49a4u: goto label_1c49a4;
        default: break;
    }

    ctx->pc = 0x1c48e0u;

    // 0x1c48e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c48e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c48e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c48e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c48ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c48ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c48f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c48f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c48f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c48f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c48f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c48fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4900: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x1c4900u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1c4904: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1c4904u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c4908: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1C4908u;
    {
        const bool branch_taken_0x1c4908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4908u;
        // 0x1c490c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4908) {
            ctx->pc = 0x1C4948u;
            goto label_1c4948;
        }
    }
    ctx->pc = 0x1C4910u;
    // 0x1c4910: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x1c4910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1c4914: 0x0  nop
    ctx->pc = 0x1c4914u;
    // NOP
label_1c4918:
    // 0x1c4918: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x1c4918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1c491c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c4920: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c4920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c4924: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c4924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c4928: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4928u;
    {
        const bool branch_taken_0x1c4928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4928) {
            ctx->pc = 0x1C4938u;
            goto label_1c4938;
        }
    }
    ctx->pc = 0x1C4930u;
    // 0x1c4930: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4930u;
    {
        const bool branch_taken_0x1c4930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4930u;
        // 0x1c4934: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4930) {
            ctx->pc = 0x1C4948u;
            goto label_1c4948;
        }
    }
    ctx->pc = 0x1C4938u;
label_1c4938:
    // 0x1c4938: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c4938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c493c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1c493cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c4940: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C4940u;
    {
        const bool branch_taken_0x1c4940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4940u;
        // 0x1c4944: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4940) {
            ctx->pc = 0x1C4918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4918;
        }
    }
    ctx->pc = 0x1C4948u;
label_1c4948:
    // 0x1c4948: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C4948u;
    {
        const bool branch_taken_0x1c4948 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4948) {
            ctx->pc = 0x1C49D8u;
            goto label_1c49d8;
        }
    }
    ctx->pc = 0x1C4950u;
    // 0x1c4950: 0x9645006a  lhu         $a1, 0x6A($s2)
    ctx->pc = 0x1c4950u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
    // 0x1c4954: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1c4954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c4958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c4958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c495c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1c495cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c4960: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1c4960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1c4964: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1c4964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c4968: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c4968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c496c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1c496cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c4970: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c4970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4974: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1c4974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1c4978: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x1c4978u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c497c: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x1c497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1c4980: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c4980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4984: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c4984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c4988: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x1c4988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1c498c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C498Cu;
    {
        const bool branch_taken_0x1c498c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C498Cu;
        // 0x1c4990: 0x438024  and         $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c498c) {
            ctx->pc = 0x1C49D0u;
            goto label_1c49d0;
        }
    }
    ctx->pc = 0x1C4994u;
    // 0x1c4994: 0x0  nop
    ctx->pc = 0x1c4994u;
    // NOP
label_1c4998:
    // 0x1c4998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c499c: 0xc071280  jal         func_1C4A00
    ctx->pc = 0x1C499Cu;
    SET_GPR_U32(ctx, 31, 0x1C49A4u);
    ctx->pc = 0x1C49A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C499Cu;
    // 0x1c49a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A00u, 0x1C499Cu, 0x1C49A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49A4u;
label_1c49a4:
    // 0x1c49a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C49A4u;
    {
        const bool branch_taken_0x1c49a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c49a4) {
            ctx->pc = 0x1C49B0u;
            goto label_1c49b0;
        }
    }
    ctx->pc = 0x1C49ACu;
    // 0x1c49ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c49acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c49b0:
    // 0x1c49b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c49b4: 0x9642006a  lhu         $v0, 0x6A($s2)
    ctx->pc = 0x1c49b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
    // 0x1c49b8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1c49b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c49bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c49bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c49c0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1c49c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c49c4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1c49c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c49c8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C49C8u;
    {
        const bool branch_taken_0x1c49c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49C8u;
        // 0x1c49cc: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49c8) {
            ctx->pc = 0x1C4998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4998;
        }
    }
    ctx->pc = 0x1C49D0u;
label_1c49d0:
    // 0x1c49d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1c49d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c49d4: 0x0  nop
    ctx->pc = 0x1c49d4u;
    // NOP
label_1c49d8:
    // 0x1c49d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c49d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c49dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c49e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c49e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c49e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c49e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c49e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c49e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c49ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C49ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49ECu;
        // 0x1c49f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C49ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C49F4u;
}

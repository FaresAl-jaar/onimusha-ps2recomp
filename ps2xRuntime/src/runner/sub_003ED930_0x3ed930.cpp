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

// Function: sub_003ED930
// Address: 0x3ed930 - 0x3eda5c
void sub_003ED930_0x3ed930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED930_0x3ed930");
#endif

    switch (ctx->pc) {
        case 0x3ed954u: goto label_3ed954;
        case 0x3ed990u: goto label_3ed990;
        case 0x3ed9e8u: goto label_3ed9e8;
        default: break;
    }

    ctx->pc = 0x3ed930u;

    // 0x3ed930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ed930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ed934: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ed934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ed938: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ed938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ed93c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ed93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ed940: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ed940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed944: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ed944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ed948: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ed948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed94c: 0xc0fb638  jal         func_3ED8E0
    ctx->pc = 0x3ED94Cu;
    SET_GPR_U32(ctx, 31, 0x3ED954u);
    ctx->pc = 0x3ED950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED94Cu;
    // 0x3ed950: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED8E0u, 0x3ED94Cu, 0x3ED954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED954u;
label_3ed954:
    // 0x3ed954: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ed954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed958: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ed958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ed95c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED95Cu;
    {
        const bool branch_taken_0x3ed95c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ed95c) {
            ctx->pc = 0x3ED970u;
            goto label_3ed970;
        }
    }
    ctx->pc = 0x3ED964u;
    // 0x3ed964: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3ED964u;
    {
        const bool branch_taken_0x3ed964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed964) {
            ctx->pc = 0x3EDA40u;
            goto label_3eda40;
        }
    }
    ctx->pc = 0x3ED96Cu;
    // 0x3ed96c: 0x0  nop
    ctx->pc = 0x3ed96cu;
    // NOP
label_3ed970:
    // 0x3ed970: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3ed970u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3ed974: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x3ed974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3ed978: 0x24c65960  addiu       $a2, $a2, 0x5960
    ctx->pc = 0x3ed978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22880));
    // 0x3ed97c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ed97cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed980: 0x27888d20  addiu       $t0, $gp, -0x72E0
    ctx->pc = 0x3ed980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937888));
    // 0x3ed984: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x3ed984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3ed988: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3ed988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3ed98c: 0x24a55970  addiu       $a1, $a1, 0x5970
    ctx->pc = 0x3ed98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22896));
label_3ed990:
    // 0x3ed990: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x3ed990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ed994: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3ED994u;
    {
        const bool branch_taken_0x3ed994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED994u;
        // 0x3ed998: 0xc32021  addu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed994) {
            ctx->pc = 0x3ED9C8u;
            goto label_3ed9c8;
        }
    }
    ctx->pc = 0x3ED99Cu;
    // 0x3ed99c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3ed99cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ed9a0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3ed9a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ed9a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3ed9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3ed9a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3ed9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3ed9ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ed9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ed9b0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3ed9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ed9b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED9B4u;
    {
        const bool branch_taken_0x3ed9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed9b4) {
            ctx->pc = 0x3ED9C8u;
            goto label_3ed9c8;
        }
    }
    ctx->pc = 0x3ED9BCu;
    // 0x3ed9bc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3ED9BCu;
    {
        const bool branch_taken_0x3ed9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed9bc) {
            ctx->pc = 0x3EDA40u;
            goto label_3eda40;
        }
    }
    ctx->pc = 0x3ED9C4u;
    // 0x3ed9c4: 0x0  nop
    ctx->pc = 0x3ed9c4u;
    // NOP
label_3ed9c8:
    // 0x3ed9c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ed9c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ed9cc: 0x29230004  slti        $v1, $t1, 0x4
    ctx->pc = 0x3ed9ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3ed9d0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3ED9D0u;
    {
        const bool branch_taken_0x3ed9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9D0u;
        // 0x3ed9d4: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed9d0) {
            ctx->pc = 0x3ED990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed990;
        }
    }
    ctx->pc = 0x3ED9D8u;
    // 0x3ed9d8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x3ED9D8u;
    {
        const bool branch_taken_0x3ed9d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9D8u;
        // 0x3ed9dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed9d8) {
            ctx->pc = 0x3EDA28u;
            goto label_3eda28;
        }
    }
    ctx->pc = 0x3ED9E0u;
    // 0x3ed9e0: 0xc0fa638  jal         func_3E98E0
    ctx->pc = 0x3ED9E0u;
    SET_GPR_U32(ctx, 31, 0x3ED9E8u);
    ctx->pc = 0x3E98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98E0u, 0x3ED9E0u, 0x3ED9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED9E8u;
label_3ed9e8:
    // 0x3ed9e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ed9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ed9ec: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ed9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ed9f0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3ed9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ed9f4: 0x24635980  addiu       $v1, $v1, 0x5980
    ctx->pc = 0x3ed9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22912));
    // 0x3ed9f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ed9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ed9fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ed9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3eda00: 0x24425960  addiu       $v0, $v0, 0x5960
    ctx->pc = 0x3eda00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22880));
    // 0x3eda04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3eda04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3eda08: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3eda08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eda0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3eda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3eda10: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3eda10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eda14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EDA14u;
    {
        const bool branch_taken_0x3eda14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eda14) {
            ctx->pc = 0x3EDA28u;
            goto label_3eda28;
        }
    }
    ctx->pc = 0x3EDA1Cu;
    // 0x3eda1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EDA1Cu;
    {
        const bool branch_taken_0x3eda1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA1Cu;
        // 0x3eda20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eda1c) {
            ctx->pc = 0x3EDA40u;
            goto label_3eda40;
        }
    }
    ctx->pc = 0x3EDA24u;
    // 0x3eda24: 0x0  nop
    ctx->pc = 0x3eda24u;
    // NOP
label_3eda28:
    // 0x3eda28: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x3eda28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3eda2c: 0x27838d20  addiu       $v1, $gp, -0x72E0
    ctx->pc = 0x3eda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937888));
    // 0x3eda30: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x3eda30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3eda34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3eda34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3eda38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3eda38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda3c: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x3eda3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_3eda40:
    // 0x3eda40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3eda40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3eda44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3eda44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3eda48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3eda48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eda4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3eda4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eda50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3eda50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eda54: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA54u;
        // 0x3eda58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDA5Cu;
}

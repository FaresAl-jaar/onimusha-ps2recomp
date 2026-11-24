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

// Function: sub_0030ABA0
// Address: 0x30aba0 - 0x30ac94
void sub_0030ABA0_0x30aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ABA0_0x30aba0");
#endif

    switch (ctx->pc) {
        case 0x30abd8u: goto label_30abd8;
        case 0x30ac50u: goto label_30ac50;
        default: break;
    }

    ctx->pc = 0x30aba0u;

    // 0x30aba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30aba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30aba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30abac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30abb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30abb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30abb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30ABB8u;
    {
        const bool branch_taken_0x30abb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ABB8u;
        // 0x30abbc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30abb8) {
            ctx->pc = 0x30ABC8u;
            goto label_30abc8;
        }
    }
    ctx->pc = 0x30ABC0u;
    // 0x30abc0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x30ABC0u;
    {
        const bool branch_taken_0x30abc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ABC0u;
        // 0x30abc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30abc0) {
            ctx->pc = 0x30AC80u;
            goto label_30ac80;
        }
    }
    ctx->pc = 0x30ABC8u;
label_30abc8:
    // 0x30abc8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x30abc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x30abcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30abccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abd0: 0xc049e80  jal         func_127A00
    ctx->pc = 0x30ABD0u;
    SET_GPR_U32(ctx, 31, 0x30ABD8u);
    ctx->pc = 0x30ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ABD0u;
    // 0x30abd4: 0x24a5c940  addiu       $a1, $a1, -0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A00u, 0x30ABD0u, 0x30ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABD8u;
label_30abd8:
    // 0x30abd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30ABD8u;
    {
        const bool branch_taken_0x30abd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30abd8) {
            ctx->pc = 0x30ABE8u;
            goto label_30abe8;
        }
    }
    ctx->pc = 0x30ABE0u;
    // 0x30abe0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x30ABE0u;
    {
        const bool branch_taken_0x30abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ABE0u;
        // 0x30abe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30abe0) {
            ctx->pc = 0x30AC80u;
            goto label_30ac80;
        }
    }
    ctx->pc = 0x30ABE8u;
label_30abe8:
    // 0x30abe8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x30abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30abec: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x30abecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30abf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30ABF0u;
    {
        const bool branch_taken_0x30abf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ABF0u;
        // 0x30abf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30abf0) {
            ctx->pc = 0x30AC00u;
            goto label_30ac00;
        }
    }
    ctx->pc = 0x30ABF8u;
    // 0x30abf8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x30ABF8u;
    {
        const bool branch_taken_0x30abf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30abf8) {
            ctx->pc = 0x30AC80u;
            goto label_30ac80;
        }
    }
    ctx->pc = 0x30AC00u;
label_30ac00:
    // 0x30ac00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x30ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ac04: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x30ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30ac08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x30ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30ac0c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AC0Cu;
    {
        const bool branch_taken_0x30ac0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC0Cu;
        // 0x30ac10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac0c) {
            ctx->pc = 0x30AC20u;
            goto label_30ac20;
        }
    }
    ctx->pc = 0x30AC14u;
    // 0x30ac14: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x30AC14u;
    {
        const bool branch_taken_0x30ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ac14) {
            ctx->pc = 0x30AC80u;
            goto label_30ac80;
        }
    }
    ctx->pc = 0x30AC1Cu;
    // 0x30ac1c: 0x0  nop
    ctx->pc = 0x30ac1cu;
    // NOP
label_30ac20:
    // 0x30ac20: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x30ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30ac24: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x30ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x30ac28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ac30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30ac34: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x30ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x30ac38: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x30ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30ac3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x30ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30ac40: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x30ac40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ac44: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x30AC44u;
    {
        const bool branch_taken_0x30ac44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC44u;
        // 0x30ac48: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac44) {
            ctx->pc = 0x30AC78u;
            goto label_30ac78;
        }
    }
    ctx->pc = 0x30AC4Cu;
    // 0x30ac4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ac50:
    // 0x30ac50: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x30ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30ac54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30ac58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30ac5c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x30ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30ac60: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x30ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30ac64: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x30ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x30ac68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x30ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30ac6c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x30ac6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ac70: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30AC70u;
    {
        const bool branch_taken_0x30ac70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC70u;
        // 0x30ac74: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac70) {
            ctx->pc = 0x30AC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ac50;
        }
    }
    ctx->pc = 0x30AC78u;
label_30ac78:
    // 0x30ac78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ac7c: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x30ac7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_30ac80:
    // 0x30ac80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30ac80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ac84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ac84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ac88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ac88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ac8c: 0x3e00008  jr          $ra
    ctx->pc = 0x30AC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC8Cu;
        // 0x30ac90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AC94u;
}

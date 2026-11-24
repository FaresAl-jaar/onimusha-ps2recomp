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

// Function: sub_0028AB70
// Address: 0x28ab70 - 0x28ac60
void sub_0028AB70_0x28ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AB70_0x28ab70");
#endif

    switch (ctx->pc) {
        case 0x28abb8u: goto label_28abb8;
        default: break;
    }

    ctx->pc = 0x28ab70u;

    // 0x28ab70: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x28ab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28ab74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x28ab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x28ab78: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x28ab78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28ab7c: 0x3c08008d  lui         $t0, 0x8D
    ctx->pc = 0x28ab7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)141 << 16));
    // 0x28ab80: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x28ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x28ab84: 0x9027fc8e  lbu         $a3, -0x372($at)
    ctx->pc = 0x28ab84u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966414)));
    // 0x28ab88: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28ab8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28ab8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab90: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x28ab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28ab94: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x28ab94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x28ab98: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x28ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x28ab9c: 0x250894b0  addiu       $t0, $t0, -0x6B50
    ctx->pc = 0x28ab9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939824));
    // 0x28aba0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28aba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28aba4: 0x344a0001  ori         $t2, $v0, 0x1
    ctx->pc = 0x28aba4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28aba8: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x28aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28abac: 0x240300c7  addiu       $v1, $zero, 0xC7
    ctx->pc = 0x28abacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x28abb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28abb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28abb4: 0x0  nop
    ctx->pc = 0x28abb4u;
    // NOP
label_28abb8:
    // 0x28abb8: 0x10e60011  beq         $a3, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x28ABB8u;
    {
        const bool branch_taken_0x28abb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x28abb8) {
            ctx->pc = 0x28AC00u;
            goto label_28ac00;
        }
    }
    ctx->pc = 0x28ABC0u;
    // 0x28abc0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x28abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28abc4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x28ABC4u;
    {
        const bool branch_taken_0x28abc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28abc4) {
            ctx->pc = 0x28AC00u;
            goto label_28ac00;
        }
    }
    ctx->pc = 0x28ABCCu;
    // 0x28abcc: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x28abccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28abd0: 0x1445000b  bne         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x28ABD0u;
    {
        const bool branch_taken_0x28abd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x28abd0) {
            ctx->pc = 0x28AC00u;
            goto label_28ac00;
        }
    }
    ctx->pc = 0x28ABD8u;
    // 0x28abd8: 0x15440009  bne         $t2, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28ABD8u;
    {
        const bool branch_taken_0x28abd8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        ctx->pc = 0x28ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABD8u;
        // 0x28abdc: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abd8) {
            ctx->pc = 0x28AC00u;
            goto label_28ac00;
        }
    }
    ctx->pc = 0x28ABE0u;
    // 0x28abe0: 0xaf898940  sw          $t1, -0x76C0($gp)
    ctx->pc = 0x28abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 9));
    // 0x28abe4: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x28abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x28abe8: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x28abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x28abec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28abecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28abf0: 0x244294b0  addiu       $v0, $v0, -0x6B50
    ctx->pc = 0x28abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939824));
    // 0x28abf4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28ABF4u;
    {
        const bool branch_taken_0x28abf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABF4u;
        // 0x28abf8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abf4) {
            ctx->pc = 0x28AC58u;
            goto label_28ac58;
        }
    }
    ctx->pc = 0x28ABFCu;
    // 0x28abfc: 0x0  nop
    ctx->pc = 0x28abfcu;
    // NOP
label_28ac00:
    // 0x28ac00: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x28ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28ac04: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x28AC04u;
    {
        const bool branch_taken_0x28ac04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ac04) {
            ctx->pc = 0x28AC40u;
            goto label_28ac40;
        }
    }
    ctx->pc = 0x28AC0Cu;
    // 0x28ac0c: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x28ac0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28ac10: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28AC10u;
    {
        const bool branch_taken_0x28ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28ac10) {
            ctx->pc = 0x28AC40u;
            goto label_28ac40;
        }
    }
    ctx->pc = 0x28AC18u;
    // 0x28ac18: 0x15440009  bne         $t2, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28AC18u;
    {
        const bool branch_taken_0x28ac18 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        ctx->pc = 0x28AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC18u;
        // 0x28ac1c: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac18) {
            ctx->pc = 0x28AC40u;
            goto label_28ac40;
        }
    }
    ctx->pc = 0x28AC20u;
    // 0x28ac20: 0xaf898940  sw          $t1, -0x76C0($gp)
    ctx->pc = 0x28ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 9));
    // 0x28ac24: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x28ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x28ac28: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x28ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x28ac2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28ac30: 0x244294b0  addiu       $v0, $v0, -0x6B50
    ctx->pc = 0x28ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939824));
    // 0x28ac34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28AC34u;
    {
        const bool branch_taken_0x28ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC34u;
        // 0x28ac38: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac34) {
            ctx->pc = 0x28AC58u;
            goto label_28ac58;
        }
    }
    ctx->pc = 0x28AC3Cu;
    // 0x28ac3c: 0x0  nop
    ctx->pc = 0x28ac3cu;
    // NOP
label_28ac40:
    // 0x28ac40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x28ac40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x28ac44: 0x29220100  slti        $v0, $t1, 0x100
    ctx->pc = 0x28ac44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x28ac48: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x28AC48u;
    {
        const bool branch_taken_0x28ac48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC48u;
        // 0x28ac4c: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac48) {
            ctx->pc = 0x28ABB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28abb8;
        }
    }
    ctx->pc = 0x28AC50u;
    // 0x28ac50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ac50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac54: 0x0  nop
    ctx->pc = 0x28ac54u;
    // NOP
label_28ac58:
    // 0x28ac58: 0x3e00008  jr          $ra
    ctx->pc = 0x28AC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AC60u;
}

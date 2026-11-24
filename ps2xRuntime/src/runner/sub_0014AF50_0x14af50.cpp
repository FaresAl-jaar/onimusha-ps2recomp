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

// Function: sub_0014AF50
// Address: 0x14af50 - 0x14b048
void sub_0014AF50_0x14af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AF50_0x14af50");
#endif

    switch (ctx->pc) {
        case 0x14af70u: goto label_14af70;
        case 0x14af88u: goto label_14af88;
        case 0x14b000u: goto label_14b000;
        default: break;
    }

    ctx->pc = 0x14af50u;

    // 0x14af50: 0xa4800056  sh          $zero, 0x56($a0)
    ctx->pc = 0x14af50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x14af54: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x14af54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x14af58: 0xa0830055  sb          $v1, 0x55($a0)
    ctx->pc = 0x14af58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x14af5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14af5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14af60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af64: 0xa0830054  sb          $v1, 0x54($a0)
    ctx->pc = 0x14af64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x14af68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14af68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af6c: 0x0  nop
    ctx->pc = 0x14af6cu;
    // NOP
label_14af70:
    // 0x14af70: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x14af70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x14af74: 0xacc00458  sw          $zero, 0x458($a2)
    ctx->pc = 0x14af74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1112), GPR_U32(ctx, 0));
    // 0x14af78: 0x24aa085c  addiu       $t2, $a1, 0x85C
    ctx->pc = 0x14af78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 2140));
    // 0x14af7c: 0x24a9245c  addiu       $t1, $a1, 0x245C
    ctx->pc = 0x14af7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 9308));
    // 0x14af80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14af80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af84: 0x0  nop
    ctx->pc = 0x14af84u;
    // NOP
label_14af88:
    // 0x14af88: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x14af88u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14af8c: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x14af8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14af90: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x14af90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x14af94: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x14af94u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14af98: 0x2ce30014  sltiu       $v1, $a3, 0x14
    ctx->pc = 0x14af98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x14af9c: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x14af9cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afa0: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x14afa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x14afa4: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x14afa4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afa8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x14afa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x14afac: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x14afacu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afb0: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x14afb0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afb4: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x14afb4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afb8: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x14afb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x14afbc: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x14afbcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afc0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x14afc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x14afc4: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x14afc4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afc8: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x14afc8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afcc: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x14afccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afd0: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x14afd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x14afd4: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x14afd4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afd8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x14afd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x14afdc: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x14afdcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afe0: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x14afe0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afe4: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x14afe4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14afe8: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x14afe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x14afec: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14AFECu;
    {
        const bool branch_taken_0x14afec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFECu;
        // 0x14aff0: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afec) {
            ctx->pc = 0x14AF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14af88;
        }
    }
    ctx->pc = 0x14AFF4u;
    // 0x14aff4: 0x2ce1001c  sltiu       $at, $a3, 0x1C
    ctx->pc = 0x14aff4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x14aff8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AFF8u;
    {
        const bool branch_taken_0x14aff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aff8) {
            ctx->pc = 0x14B020u;
            goto label_14b020;
        }
    }
    ctx->pc = 0x14B000u;
label_14b000:
    // 0x14b000: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x14b000u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b004: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14b004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14b008: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x14b008u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b00c: 0x2ce3001c  sltiu       $v1, $a3, 0x1C
    ctx->pc = 0x14b00cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x14b010: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x14b010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x14b014: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14B014u;
    {
        const bool branch_taken_0x14b014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B014u;
        // 0x14b018: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b014) {
            ctx->pc = 0x14B000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b000;
        }
    }
    ctx->pc = 0x14B01Cu;
    // 0x14b01c: 0x0  nop
    ctx->pc = 0x14b01cu;
    // NOP
label_14b020:
    // 0x14b020: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14b020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14b024: 0x29030100  slti        $v1, $t0, 0x100
    ctx->pc = 0x14b024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x14b028: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x14b028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14b02c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x14B02Cu;
    {
        const bool branch_taken_0x14b02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B02Cu;
        // 0x14b030: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b02c) {
            ctx->pc = 0x14AF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14af70;
        }
    }
    ctx->pc = 0x14B034u;
    // 0x14b034: 0xa480085a  sh          $zero, 0x85A($a0)
    ctx->pc = 0x14b034u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2138), (uint16_t)GPR_U32(ctx, 0));
    // 0x14b038: 0xa4800858  sh          $zero, 0x858($a0)
    ctx->pc = 0x14b038u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2136), (uint16_t)GPR_U32(ctx, 0));
    // 0x14b03c: 0xa4804062  sh          $zero, 0x4062($a0)
    ctx->pc = 0x14b03cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16482), (uint16_t)GPR_U32(ctx, 0));
    // 0x14b040: 0x3e00008  jr          $ra
    ctx->pc = 0x14B040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B040u;
        // 0x14b044: 0xa4804060  sh          $zero, 0x4060($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16480), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B048u;
}

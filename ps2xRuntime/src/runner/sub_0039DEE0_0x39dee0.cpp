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

// Function: sub_0039DEE0
// Address: 0x39dee0 - 0x39dfa8
void sub_0039DEE0_0x39dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DEE0_0x39dee0");
#endif

    switch (ctx->pc) {
        case 0x39df08u: goto label_39df08;
        default: break;
    }

    ctx->pc = 0x39dee0u;

    // 0x39dee0: 0x640c0001  daddiu      $t4, $zero, 0x1
    ctx->pc = 0x39dee0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x39dee4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x39dee8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x39dee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39deec: 0x34a70dcd  ori         $a3, $a1, 0xDCD
    ctx->pc = 0x39deecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3533);
    // 0x39def0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x39def0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39def4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x39def4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x39def8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x39def8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x39defc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x39defcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39df00: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x39df00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39df04: 0x0  nop
    ctx->pc = 0x39df04u;
    // NOP
label_39df08:
    // 0x39df08: 0x90862bed  lbu         $a2, 0x2BED($a0)
    ctx->pc = 0x39df08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11245)));
    // 0x39df0c: 0x10cb0012  beq         $a2, $t3, . + 4 + (0x12 << 2)
    ctx->pc = 0x39DF0Cu;
    {
        const bool branch_taken_0x39df0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x39df0c) {
            ctx->pc = 0x39DF58u;
            goto label_39df58;
        }
    }
    ctx->pc = 0x39DF14u;
    // 0x39df14: 0x10ca000e  beq         $a2, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x39DF14u;
    {
        const bool branch_taken_0x39df14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x39df14) {
            ctx->pc = 0x39DF50u;
            goto label_39df50;
        }
    }
    ctx->pc = 0x39DF1Cu;
    // 0x39df1c: 0x10c90008  beq         $a2, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x39DF1Cu;
    {
        const bool branch_taken_0x39df1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x39df1c) {
            ctx->pc = 0x39DF40u;
            goto label_39df40;
        }
    }
    ctx->pc = 0x39DF24u;
    // 0x39df24: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39DF24u;
    {
        const bool branch_taken_0x39df24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39df24) {
            ctx->pc = 0x39DF38u;
            goto label_39df38;
        }
    }
    ctx->pc = 0x39DF2Cu;
    // 0x39df2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x39DF2Cu;
    {
        const bool branch_taken_0x39df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39df2c) {
            ctx->pc = 0x39DF98u;
            goto label_39df98;
        }
    }
    ctx->pc = 0x39DF34u;
    // 0x39df34: 0x0  nop
    ctx->pc = 0x39df34u;
    // NOP
label_39df38:
    // 0x39df38: 0xa0892bed  sb          $t1, 0x2BED($a0)
    ctx->pc = 0x39df38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11245), (uint8_t)GPR_U32(ctx, 9));
    // 0x39df3c: 0x0  nop
    ctx->pc = 0x39df3cu;
    // NOP
label_39df40:
    // 0x39df40: 0xa0880780  sb          $t0, 0x780($a0)
    ctx->pc = 0x39df40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 8));
    // 0x39df44: 0xa08a2bed  sb          $t2, 0x2BED($a0)
    ctx->pc = 0x39df44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11245), (uint8_t)GPR_U32(ctx, 10));
    // 0x39df48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x39DF48u;
    {
        const bool branch_taken_0x39df48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF48u;
        // 0x39df4c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39df48) {
            ctx->pc = 0x39DF98u;
            goto label_39df98;
        }
    }
    ctx->pc = 0x39DF50u;
label_39df50:
    // 0x39df50: 0xa08b2bed  sb          $t3, 0x2BED($a0)
    ctx->pc = 0x39df50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11245), (uint8_t)GPR_U32(ctx, 11));
    // 0x39df54: 0x0  nop
    ctx->pc = 0x39df54u;
    // NOP
label_39df58:
    // 0x39df58: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x39df58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39df5c: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x39df5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x39df60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39df60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x39df64: 0xaf8680e0  sw          $a2, -0x7F20($gp)
    ctx->pc = 0x39df64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 6));
    // 0x39df68: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x39df68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39df6c: 0x63302  srl         $a2, $a2, 12
    ctx->pc = 0x39df6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x39df70: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x39df70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x39df74: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39DF74u;
    {
        const bool branch_taken_0x39df74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39df74) {
            ctx->pc = 0x39DF88u;
            goto label_39df88;
        }
    }
    ctx->pc = 0x39DF7Cu;
    // 0x39df7c: 0xa0850780  sb          $a1, 0x780($a0)
    ctx->pc = 0x39df7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x39df80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39DF80u;
    {
        const bool branch_taken_0x39df80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DF80u;
        // 0x39df84: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39df80) {
            ctx->pc = 0x39DF90u;
            goto label_39df90;
        }
    }
    ctx->pc = 0x39DF88u;
label_39df88:
    // 0x39df88: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x39df88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x39df8c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x39df8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39df90:
    // 0x39df90: 0xa0802bed  sb          $zero, 0x2BED($a0)
    ctx->pc = 0x39df90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11245), (uint8_t)GPR_U32(ctx, 0));
    // 0x39df94: 0x0  nop
    ctx->pc = 0x39df94u;
    // NOP
label_39df98:
    // 0x39df98: 0x1580ffdb  bnez        $t4, . + 4 + (-0x25 << 2)
    ctx->pc = 0x39DF98u;
    {
        const bool branch_taken_0x39df98 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x39df98) {
            ctx->pc = 0x39DF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39df08;
        }
    }
    ctx->pc = 0x39DFA0u;
    // 0x39dfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x39DFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DFA8u;
}

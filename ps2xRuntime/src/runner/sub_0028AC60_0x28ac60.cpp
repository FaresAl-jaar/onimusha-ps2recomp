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

// Function: sub_0028AC60
// Address: 0x28ac60 - 0x28ada0
void sub_0028AC60_0x28ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AC60_0x28ac60");
#endif

    switch (ctx->pc) {
        case 0x28ac80u: goto label_28ac80;
        case 0x28ace0u: goto label_28ace0;
        case 0x28ad20u: goto label_28ad20;
        default: break;
    }

    ctx->pc = 0x28ac60u;

    // 0x28ac60: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x28ac60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x28ac64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28ac64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac68: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x28AC68u;
    {
        const bool branch_taken_0x28ac68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC68u;
        // 0x28ac6c: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac68) {
            ctx->pc = 0x28AD00u;
            goto label_28ad00;
        }
    }
    ctx->pc = 0x28AC70u;
    // 0x28ac70: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x28ac70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x28ac74: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x28AC74u;
    {
        const bool branch_taken_0x28ac74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC74u;
        // 0x28ac78: 0x24cffff8  addiu       $t7, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac74) {
            ctx->pc = 0x28ACD0u;
            goto label_28acd0;
        }
    }
    ctx->pc = 0x28AC7Cu;
    // 0x28ac7c: 0x0  nop
    ctx->pc = 0x28ac7cu;
    // NOP
label_28ac80:
    // 0x28ac80: 0xb87021  addu        $t6, $a1, $t8
    ctx->pc = 0x28ac80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x28ac84: 0x91c90000  lbu         $t1, 0x0($t6)
    ctx->pc = 0x28ac84u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x28ac88: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x28ac88u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x28ac8c: 0x91c80001  lbu         $t0, 0x1($t6)
    ctx->pc = 0x28ac8cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x28ac90: 0x30f382b  sltu        $a3, $t8, $t7
    ctx->pc = 0x28ac90u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x28ac94: 0x91cd0002  lbu         $t5, 0x2($t6)
    ctx->pc = 0x28ac94u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x28ac98: 0x91cc0003  lbu         $t4, 0x3($t6)
    ctx->pc = 0x28ac98u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x28ac9c: 0x91cb0004  lbu         $t3, 0x4($t6)
    ctx->pc = 0x28ac9cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x28aca0: 0x91ca0005  lbu         $t2, 0x5($t6)
    ctx->pc = 0x28aca0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x28aca4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x28aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x28aca8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28acac: 0x91c90006  lbu         $t1, 0x6($t6)
    ctx->pc = 0x28acacu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x28acb0: 0x91c80007  lbu         $t0, 0x7($t6)
    ctx->pc = 0x28acb0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
    // 0x28acb4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x28acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x28acb8: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x28acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x28acbc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x28acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x28acc0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x28acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x28acc4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x28acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x28acc8: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28ACC8u;
    {
        const bool branch_taken_0x28acc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACC8u;
        // 0x28accc: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acc8) {
            ctx->pc = 0x28AC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ac80;
        }
    }
    ctx->pc = 0x28ACD0u;
label_28acd0:
    // 0x28acd0: 0x306082b  sltu        $at, $t8, $a2
    ctx->pc = 0x28acd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x28acd4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x28ACD4u;
    {
        const bool branch_taken_0x28acd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28acd4) {
            ctx->pc = 0x28AD00u;
            goto label_28ad00;
        }
    }
    ctx->pc = 0x28ACDCu;
    // 0x28acdc: 0x0  nop
    ctx->pc = 0x28acdcu;
    // NOP
label_28ace0:
    // 0x28ace0: 0xb83821  addu        $a3, $a1, $t8
    ctx->pc = 0x28ace0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x28ace4: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x28ace4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28ace8: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x28ace8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x28acec: 0x306382b  sltu        $a3, $t8, $a2
    ctx->pc = 0x28acecu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x28acf0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28acf4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28ACF4u;
    {
        const bool branch_taken_0x28acf4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28acf4) {
            ctx->pc = 0x28ACE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ace0;
        }
    }
    ctx->pc = 0x28ACFCu;
    // 0x28acfc: 0x0  nop
    ctx->pc = 0x28acfcu;
    // NOP
label_28ad00:
    // 0x28ad00: 0x8f878944  lw          $a3, -0x76BC($gp)
    ctx->pc = 0x28ad00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936900)));
    // 0x28ad04: 0x7082b  sltu        $at, $zero, $a3
    ctx->pc = 0x28ad04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x28ad08: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x28AD08u;
    {
        const bool branch_taken_0x28ad08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD08u;
        // 0x28ad0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad08) {
            ctx->pc = 0x28AD50u;
            goto label_28ad50;
        }
    }
    ctx->pc = 0x28AD10u;
    // 0x28ad10: 0x3c09008d  lui         $t1, 0x8D
    ctx->pc = 0x28ad10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)141 << 16));
    // 0x28ad14: 0x3c08008d  lui         $t0, 0x8D
    ctx->pc = 0x28ad14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)141 << 16));
    // 0x28ad18: 0x2529a1b0  addiu       $t1, $t1, -0x5E50
    ctx->pc = 0x28ad18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943152));
    // 0x28ad1c: 0x2508e1b0  addiu       $t0, $t0, -0x1E50
    ctx->pc = 0x28ad1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959536));
label_28ad20:
    // 0x28ad20: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x28ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28ad24: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28AD24u;
    {
        const bool branch_taken_0x28ad24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x28ad24) {
            ctx->pc = 0x28AD38u;
            goto label_28ad38;
        }
    }
    ctx->pc = 0x28AD2Cu;
    // 0x28ad2c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x28ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28ad30: 0x14650019  bne         $v1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x28AD30u;
    {
        const bool branch_taken_0x28ad30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x28ad30) {
            ctx->pc = 0x28AD98u;
            goto label_28ad98;
        }
    }
    ctx->pc = 0x28AD38u;
label_28ad38:
    // 0x28ad38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28ad38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28ad3c: 0xc7282b  sltu        $a1, $a2, $a3
    ctx->pc = 0x28ad3cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x28ad40: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x28ad40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x28ad44: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x28AD44u;
    {
        const bool branch_taken_0x28ad44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD44u;
        // 0x28ad48: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad44) {
            ctx->pc = 0x28AD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ad20;
        }
    }
    ctx->pc = 0x28AD4Cu;
    // 0x28ad4c: 0x0  nop
    ctx->pc = 0x28ad4cu;
    // NOP
label_28ad50:
    // 0x28ad50: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x28ad50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x28ad54: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28ad58: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x28ad58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28ad5c: 0x24c6a1b0  addiu       $a2, $a2, -0x5E50
    ctx->pc = 0x28ad5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943152));
    // 0x28ad60: 0x24a5e1b0  addiu       $a1, $a1, -0x1E50
    ctx->pc = 0x28ad60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959536));
    // 0x28ad64: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x28ad64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28ad68: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x28ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x28ad6c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x28ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x28ad70: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x28ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x28ad74: 0x8f838944  lw          $v1, -0x76BC($gp)
    ctx->pc = 0x28ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936900)));
    // 0x28ad78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ad7c: 0xaf838944  sw          $v1, -0x76BC($gp)
    ctx->pc = 0x28ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 3));
    // 0x28ad80: 0x8f838944  lw          $v1, -0x76BC($gp)
    ctx->pc = 0x28ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936900)));
    // 0x28ad84: 0x2c631000  sltiu       $v1, $v1, 0x1000
    ctx->pc = 0x28ad84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x28ad88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28AD88u;
    {
        const bool branch_taken_0x28ad88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ad88) {
            ctx->pc = 0x28AD98u;
            goto label_28ad98;
        }
    }
    ctx->pc = 0x28AD90u;
    // 0x28ad90: 0xaf808944  sw          $zero, -0x76BC($gp)
    ctx->pc = 0x28ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 0));
    // 0x28ad94: 0x0  nop
    ctx->pc = 0x28ad94u;
    // NOP
label_28ad98:
    // 0x28ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x28AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ADA0u;
}

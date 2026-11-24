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

// Function: sub_002BD9F0
// Address: 0x2bd9f0 - 0x2bdb14
void sub_002BD9F0_0x2bd9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD9F0_0x2bd9f0");
#endif

    switch (ctx->pc) {
        case 0x2bdaa0u: goto label_2bdaa0;
        case 0x2bdabcu: goto label_2bdabc;
        default: break;
    }

    ctx->pc = 0x2bd9f0u;

    // 0x2bd9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bd9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bd9f4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2bd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bd9f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bd9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bd9fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bd9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bda00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bda00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bda04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bda04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bda08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bda0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bda0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda10: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2bda10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bda14: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BDA14u;
    {
        const bool branch_taken_0x2bda14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA14u;
        // 0x2bda18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda14) {
            ctx->pc = 0x2BDAA8u;
            goto label_2bdaa8;
        }
    }
    ctx->pc = 0x2BDA1Cu;
    // 0x2bda1c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2bda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bda20: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BDA20u;
    {
        const bool branch_taken_0x2bda20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA20u;
        // 0x2bda24: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda20) {
            ctx->pc = 0x2BDA90u;
            goto label_2bda90;
        }
    }
    ctx->pc = 0x2BDA28u;
    // 0x2bda28: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BDA28u;
    {
        const bool branch_taken_0x2bda28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bda28) {
            ctx->pc = 0x2BDA70u;
            goto label_2bda70;
        }
    }
    ctx->pc = 0x2BDA30u;
    // 0x2bda30: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2bda30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2bda34: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDA34u;
    {
        const bool branch_taken_0x2bda34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA34u;
        // 0x2bda38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda34) {
            ctx->pc = 0x2BDA50u;
            goto label_2bda50;
        }
    }
    ctx->pc = 0x2BDA3Cu;
    // 0x2bda3c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDA3Cu;
    {
        const bool branch_taken_0x2bda3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bda3c) {
            ctx->pc = 0x2BDA50u;
            goto label_2bda50;
        }
    }
    ctx->pc = 0x2BDA44u;
    // 0x2bda44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BDA44u;
    {
        const bool branch_taken_0x2bda44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bda44) {
            ctx->pc = 0x2BDAB0u;
            goto label_2bdab0;
        }
    }
    ctx->pc = 0x2BDA4Cu;
    // 0x2bda4c: 0x0  nop
    ctx->pc = 0x2bda4cu;
    // NOP
label_2bda50:
    // 0x2bda50: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2bda50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2bda54: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2bda54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2bda58: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2bda58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2bda5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bda5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bda60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bda60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bda64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BDA64u;
    {
        const bool branch_taken_0x2bda64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA64u;
        // 0x2bda68: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda64) {
            ctx->pc = 0x2BDAB0u;
            goto label_2bdab0;
        }
    }
    ctx->pc = 0x2BDA6Cu;
    // 0x2bda6c: 0x0  nop
    ctx->pc = 0x2bda6cu;
    // NOP
label_2bda70:
    // 0x2bda70: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2bda70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2bda74: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2bda74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2bda78: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2bda78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2bda7c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2bda7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2bda80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bda80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bda84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bda84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bda88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BDA88u;
    {
        const bool branch_taken_0x2bda88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA88u;
        // 0x2bda8c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda88) {
            ctx->pc = 0x2BDAB0u;
            goto label_2bdab0;
        }
    }
    ctx->pc = 0x2BDA90u;
label_2bda90:
    // 0x2bda90: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x2bda90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2bda94: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2bda94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2bda98: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2BDA98u;
    SET_GPR_U32(ctx, 31, 0x2BDAA0u);
    ctx->pc = 0x2BDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA98u;
    // 0x2bda9c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2BDA98u, 0x2BDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAA0u;
label_2bdaa0:
    // 0x2bdaa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDAA0u;
    {
        const bool branch_taken_0x2bdaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAA0u;
        // 0x2bdaa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdaa0) {
            ctx->pc = 0x2BDAB0u;
            goto label_2bdab0;
        }
    }
    ctx->pc = 0x2BDAA8u;
label_2bdaa8:
    // 0x2bdaa8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bdaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdaac: 0x0  nop
    ctx->pc = 0x2bdaacu;
    // NOP
label_2bdab0:
    // 0x2bdab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bdab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdab4: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2BDAB4u;
    SET_GPR_U32(ctx, 31, 0x2BDABCu);
    ctx->pc = 0x2BDAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDAB4u;
    // 0x2bdab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2BDAB4u, 0x2BDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDABCu;
label_2bdabc:
    // 0x2bdabc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BDABCu;
    {
        const bool branch_taken_0x2bdabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdabc) {
            ctx->pc = 0x2BDAE0u;
            goto label_2bdae0;
        }
    }
    ctx->pc = 0x2BDAC4u;
    // 0x2bdac4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2bdac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2bdac8: 0x920329d1  lbu         $v1, 0x29D1($s0)
    ctx->pc = 0x2bdac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10705)));
    // 0x2bdacc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bdaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bdad0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2bdad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2bdad4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BDAD4u;
    {
        const bool branch_taken_0x2bdad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAD4u;
        // 0x2bdad8: 0xa443003e  sh          $v1, 0x3E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdad4) {
            ctx->pc = 0x2BDAF8u;
            goto label_2bdaf8;
        }
    }
    ctx->pc = 0x2BDADCu;
    // 0x2bdadc: 0x0  nop
    ctx->pc = 0x2bdadcu;
    // NOP
label_2bdae0:
    // 0x2bdae0: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2bdae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2bdae4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bdae8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bdae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bdaec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2bdaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2bdaf0: 0xa443003e  sh          $v1, 0x3E($v0)
    ctx->pc = 0x2bdaf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bdaf4: 0x0  nop
    ctx->pc = 0x2bdaf4u;
    // NOP
label_2bdaf8:
    // 0x2bdaf8: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2bdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2bdafc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bdafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdb00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bdb00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdb04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bdb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdb08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bdb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB0Cu;
        // 0x2bdb10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDB14u;
}

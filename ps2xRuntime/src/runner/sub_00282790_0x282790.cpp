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

// Function: sub_00282790
// Address: 0x282790 - 0x2828d0
void sub_00282790_0x282790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282790_0x282790");
#endif

    switch (ctx->pc) {
        case 0x282848u: goto label_282848;
        default: break;
    }

    ctx->pc = 0x282790u;

    // 0x282790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x282798: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x282798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x28279c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2827a0: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x2827a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2827a4: 0x87828190  lh          $v0, -0x7E70($gp)
    ctx->pc = 0x2827a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934928)));
    // 0x2827a8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2827a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2827ac: 0x87828194  lh          $v0, -0x7E6C($gp)
    ctx->pc = 0x2827acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x2827b0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2827b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2827b4: 0x9083083b  lbu         $v1, 0x83B($a0)
    ctx->pc = 0x2827b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2107)));
    // 0x2827b8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2827B8u;
    {
        const bool branch_taken_0x2827b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2827BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827B8u;
        // 0x2827bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827b8) {
            ctx->pc = 0x2827D0u;
            goto label_2827d0;
        }
    }
    ctx->pc = 0x2827C0u;
    // 0x2827c0: 0x9202083c  lbu         $v0, 0x83C($s0)
    ctx->pc = 0x2827c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2108)));
    // 0x2827c4: 0xa203083c  sb          $v1, 0x83C($s0)
    ctx->pc = 0x2827c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 3));
    // 0x2827c8: 0xa202083b  sb          $v0, 0x83B($s0)
    ctx->pc = 0x2827c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 2));
    // 0x2827cc: 0x0  nop
    ctx->pc = 0x2827ccu;
    // NOP
label_2827d0:
    // 0x2827d0: 0x9202083b  lbu         $v0, 0x83B($s0)
    ctx->pc = 0x2827d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2827d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2827D4u;
    {
        const bool branch_taken_0x2827d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2827d4) {
            ctx->pc = 0x2827E8u;
            goto label_2827e8;
        }
    }
    ctx->pc = 0x2827DCu;
    // 0x2827dc: 0xa202083c  sb          $v0, 0x83C($s0)
    ctx->pc = 0x2827dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 2));
    // 0x2827e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2827e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2827e4: 0xa202083b  sb          $v0, 0x83B($s0)
    ctx->pc = 0x2827e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 2));
label_2827e8:
    // 0x2827e8: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2827e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2827ec: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2827ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2827f0: 0x24420b9a  addiu       $v0, $v0, 0xB9A
    ctx->pc = 0x2827f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2970));
    // 0x2827f4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2827f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2827f8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2827f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2827fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2827fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x282800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282804: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x282804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282808: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x282808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28280c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x28280Cu;
    {
        const bool branch_taken_0x28280c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28280c) {
            ctx->pc = 0x282828u;
            goto label_282828;
        }
    }
    ctx->pc = 0x282814u;
    // 0x282814: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x282814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x282818: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x282818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x28281c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28281Cu;
    {
        const bool branch_taken_0x28281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28281Cu;
        // 0x282820: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28281c) {
            ctx->pc = 0x282838u;
            goto label_282838;
        }
    }
    ctx->pc = 0x282824u;
    // 0x282824: 0x0  nop
    ctx->pc = 0x282824u;
    // NOP
label_282828:
    // 0x282828: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x282828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x28282c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x28282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x282830: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x282830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x282834: 0xae0206cc  sw          $v0, 0x6CC($s0)
    ctx->pc = 0x282834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
label_282838:
    // 0x282838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28283c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28283cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282840: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x282840u;
    SET_GPR_U32(ctx, 31, 0x282848u);
    ctx->pc = 0x282844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282840u;
    // 0x282844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x282840u, 0x282848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282848u;
label_282848:
    // 0x282848: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x282848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x28284c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282850: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x282850u;
    {
        const bool branch_taken_0x282850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x282850) {
            ctx->pc = 0x282898u;
            goto label_282898;
        }
    }
    ctx->pc = 0x282858u;
    // 0x282858: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282858u;
    {
        const bool branch_taken_0x282858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282858) {
            ctx->pc = 0x282868u;
            goto label_282868;
        }
    }
    ctx->pc = 0x282860u;
    // 0x282860: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x282860u;
    {
        const bool branch_taken_0x282860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282860) {
            ctx->pc = 0x2828C0u;
            goto label_2828c0;
        }
    }
    ctx->pc = 0x282868u;
label_282868:
    // 0x282868: 0x9204083b  lbu         $a0, 0x83B($s0)
    ctx->pc = 0x282868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x28286c: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x28286cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x282870: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x282870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x282874: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x282874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x282878: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x282878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x28287c: 0x9084002c  lbu         $a0, 0x2C($a0)
    ctx->pc = 0x28287cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x282880: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x282880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x282884: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x282884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x282888: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x282888u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x28288c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x28288cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x282890: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x282890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x282894: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x282894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
label_282898:
    // 0x282898: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x282898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x28289c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28289Cu;
    {
        const bool branch_taken_0x28289c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28289c) {
            ctx->pc = 0x2828C0u;
            goto label_2828c0;
        }
    }
    ctx->pc = 0x2828A4u;
    // 0x2828a4: 0x9203083b  lbu         $v1, 0x83B($s0)
    ctx->pc = 0x2828a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2828a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2828a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2828ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2828acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2828b0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2828b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2828b4: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x2828b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2828b8: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2828b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x2828bc: 0x0  nop
    ctx->pc = 0x2828bcu;
    // NOP
label_2828c0:
    // 0x2828c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2828c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2828c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2828c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2828c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2828C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2828CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828C8u;
        // 0x2828cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2828C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2828D0u;
}

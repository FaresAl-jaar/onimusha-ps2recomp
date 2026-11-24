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

// Function: sub_0031A400
// Address: 0x31a400 - 0x31a550
void sub_0031A400_0x31a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A400_0x31a400");
#endif

    switch (ctx->pc) {
        case 0x31a4b8u: goto label_31a4b8;
        default: break;
    }

    ctx->pc = 0x31a400u;

    // 0x31a400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31a404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a408: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x31a408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x31a40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a410: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x31a410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x31a414: 0x878282c0  lh          $v0, -0x7D40($gp)
    ctx->pc = 0x31a414u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935232)));
    // 0x31a418: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x31a418u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a41c: 0x878282c4  lh          $v0, -0x7D3C($gp)
    ctx->pc = 0x31a41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935236)));
    // 0x31a420: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x31a420u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a424: 0x9083083b  lbu         $v1, 0x83B($a0)
    ctx->pc = 0x31a424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2107)));
    // 0x31a428: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A428u;
    {
        const bool branch_taken_0x31a428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A428u;
        // 0x31a42c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a428) {
            ctx->pc = 0x31A440u;
            goto label_31a440;
        }
    }
    ctx->pc = 0x31A430u;
    // 0x31a430: 0x9202083c  lbu         $v0, 0x83C($s0)
    ctx->pc = 0x31a430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2108)));
    // 0x31a434: 0xa203083c  sb          $v1, 0x83C($s0)
    ctx->pc = 0x31a434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a438: 0xa202083b  sb          $v0, 0x83B($s0)
    ctx->pc = 0x31a438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a43c: 0x0  nop
    ctx->pc = 0x31a43cu;
    // NOP
label_31a440:
    // 0x31a440: 0x9202083b  lbu         $v0, 0x83B($s0)
    ctx->pc = 0x31a440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x31a444: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A444u;
    {
        const bool branch_taken_0x31a444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a444) {
            ctx->pc = 0x31A458u;
            goto label_31a458;
        }
    }
    ctx->pc = 0x31A44Cu;
    // 0x31a44c: 0xa202083c  sb          $v0, 0x83C($s0)
    ctx->pc = 0x31a44cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a454: 0xa202083b  sb          $v0, 0x83B($s0)
    ctx->pc = 0x31a454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 2));
label_31a458:
    // 0x31a458: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x31a458u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31a45c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x31a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x31a460: 0x24420b9a  addiu       $v0, $v0, 0xB9A
    ctx->pc = 0x31a460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2970));
    // 0x31a464: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x31a464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x31a468: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31a468u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a46c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31a470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31a470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31a474: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31a474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a478: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x31a478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31a47c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x31A47Cu;
    {
        const bool branch_taken_0x31a47c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a47c) {
            ctx->pc = 0x31A498u;
            goto label_31a498;
        }
    }
    ctx->pc = 0x31A484u;
    // 0x31a484: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x31a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x31a488: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x31a488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x31a48c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31A48Cu;
    {
        const bool branch_taken_0x31a48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A48Cu;
        // 0x31a490: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a48c) {
            ctx->pc = 0x31A4A8u;
            goto label_31a4a8;
        }
    }
    ctx->pc = 0x31A494u;
    // 0x31a494: 0x0  nop
    ctx->pc = 0x31a494u;
    // NOP
label_31a498:
    // 0x31a498: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x31a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x31a49c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x31a4a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31a4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31a4a4: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x31a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_31a4a8:
    // 0x31a4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4b0: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x31A4B0u;
    SET_GPR_U32(ctx, 31, 0x31A4B8u);
    ctx->pc = 0x31A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4B0u;
    // 0x31a4b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x31A4B0u, 0x31A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4B8u;
label_31a4b8:
    // 0x31a4b8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x31a4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x31a4bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a4c0: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x31A4C0u;
    {
        const bool branch_taken_0x31a4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x31a4c0) {
            ctx->pc = 0x31A508u;
            goto label_31a508;
        }
    }
    ctx->pc = 0x31A4C8u;
    // 0x31a4c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A4C8u;
    {
        const bool branch_taken_0x31a4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a4c8) {
            ctx->pc = 0x31A4D8u;
            goto label_31a4d8;
        }
    }
    ctx->pc = 0x31A4D0u;
    // 0x31a4d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31A4D0u;
    {
        const bool branch_taken_0x31a4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a4d0) {
            ctx->pc = 0x31A540u;
            goto label_31a540;
        }
    }
    ctx->pc = 0x31A4D8u;
label_31a4d8:
    // 0x31a4d8: 0x9204083b  lbu         $a0, 0x83B($s0)
    ctx->pc = 0x31a4d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x31a4dc: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x31a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x31a4e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31a4e4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x31a4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x31a4e8: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x31a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x31a4ec: 0x9084002c  lbu         $a0, 0x2C($a0)
    ctx->pc = 0x31a4ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x31a4f0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x31a4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a4f4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x31a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a4f8: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x31a4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x31a4fc: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x31a4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a500: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x31a500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x31a504: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x31a504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
label_31a508:
    // 0x31a508: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x31a508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x31a50c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31A50Cu;
    {
        const bool branch_taken_0x31a50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a50c) {
            ctx->pc = 0x31A540u;
            goto label_31a540;
        }
    }
    ctx->pc = 0x31A514u;
    // 0x31a514: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x31a514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x31a518: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31a518u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a51c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31A51Cu;
    {
        const bool branch_taken_0x31a51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a51c) {
            ctx->pc = 0x31A528u;
            goto label_31a528;
        }
    }
    ctx->pc = 0x31A524u;
    // 0x31a524: 0xa6000784  sh          $zero, 0x784($s0)
    ctx->pc = 0x31a524u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 0));
label_31a528:
    // 0x31a528: 0x9203083b  lbu         $v1, 0x83B($s0)
    ctx->pc = 0x31a528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x31a52c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31a530: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31a530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31a534: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x31a534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x31a538: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x31a538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x31a53c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x31a53cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_31a540:
    // 0x31a540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a548: 0x3e00008  jr          $ra
    ctx->pc = 0x31A548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A548u;
        // 0x31a54c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A550u;
}

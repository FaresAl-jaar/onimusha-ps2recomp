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

// Function: sub_002925E0
// Address: 0x2925e0 - 0x29286c
void sub_002925E0_0x2925e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002925E0_0x2925e0");
#endif

    switch (ctx->pc) {
        case 0x292638u: goto label_292638;
        case 0x292690u: goto label_292690;
        case 0x2926b0u: goto label_2926b0;
        case 0x2926c4u: goto label_2926c4;
        case 0x292774u: goto label_292774;
        case 0x2927d4u: goto label_2927d4;
        case 0x292808u: goto label_292808;
        default: break;
    }

    ctx->pc = 0x2925e0u;

    // 0x2925e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2925e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2925e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2925e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2925e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2925e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2925ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2925ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2925f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2925f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925f4: 0x908500f0  lbu         $a1, 0xF0($a0)
    ctx->pc = 0x2925f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2925f8: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x2925f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2925fc: 0x10200094  beqz        $at, . + 4 + (0x94 << 2)
    ctx->pc = 0x2925FCu;
    {
        const bool branch_taken_0x2925fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x292600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925FCu;
        // 0x292600: 0x263000f0  addiu       $s0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925fc) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x292604u;
    // 0x292604: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x292604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x292608: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x292608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29260c: 0x24636dc0  addiu       $v1, $v1, 0x6DC0
    ctx->pc = 0x29260cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28096));
    // 0x292610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292614: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x292614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292618: 0x400008  jr          $v0
    ctx->pc = 0x292618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292620u: goto label_292620;
            case 0x292630u: goto label_292630;
            case 0x292688u: goto label_292688;
            case 0x2926A8u: goto label_2926a8;
            case 0x2926E8u: goto label_2926e8;
            case 0x292720u: goto label_292720;
            case 0x2927E0u: goto label_2927e0;
            case 0x292800u: goto label_292800;
            case 0x292810u: goto label_292810;
            case 0x292850u: goto label_292850;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292618u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x292620u;
label_292620:
    // 0x292620: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x292620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x292624: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x292624u;
    {
        const bool branch_taken_0x292624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292624u;
        // 0x292628: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292624) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x29262Cu;
    // 0x29262c: 0x0  nop
    ctx->pc = 0x29262cu;
    // NOP
label_292630:
    // 0x292630: 0xc0cbb44  jal         func_32ED10
    ctx->pc = 0x292630u;
    SET_GPR_U32(ctx, 31, 0x292638u);
    ctx->pc = 0x32ED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED10u, 0x292630u, 0x292638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292638u;
label_292638:
    // 0x292638: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x292638u;
    {
        const bool branch_taken_0x292638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292638) {
            ctx->pc = 0x292678u;
            goto label_292678;
        }
    }
    ctx->pc = 0x292640u;
    // 0x292640: 0x82020019  lb          $v0, 0x19($s0)
    ctx->pc = 0x292640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x292644: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x292644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x292648: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x292648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x29264c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x29264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x292650: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x292650u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x292654: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292654u;
    {
        const bool branch_taken_0x292654 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x292654) {
            ctx->pc = 0x292670u;
            goto label_292670;
        }
    }
    ctx->pc = 0x29265Cu;
    // 0x29265c: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x29265cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x292660: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x292660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292664: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x292664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x292668: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x292668u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x29266c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x29266cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_292670:
    // 0x292670: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x292670u;
    {
        const bool branch_taken_0x292670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292670u;
        // 0x292674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292670) {
            ctx->pc = 0x292858u;
            goto label_292858;
        }
    }
    ctx->pc = 0x292678u;
label_292678:
    // 0x292678: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x292678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29267c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292680: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x292680u;
    {
        const bool branch_taken_0x292680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292680u;
        // 0x292684: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292680) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x292688u;
label_292688:
    // 0x292688: 0xc0cbc48  jal         func_32F120
    ctx->pc = 0x292688u;
    SET_GPR_U32(ctx, 31, 0x292690u);
    ctx->pc = 0x32F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F120u, 0x292688u, 0x292690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292690u;
label_292690:
    // 0x292690: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x292690u;
    {
        const bool branch_taken_0x292690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292690) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x292698u;
    // 0x292698: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x292698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29269c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2926a0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2926A0u;
    {
        const bool branch_taken_0x2926a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926A0u;
        // 0x2926a4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926a0) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x2926A8u;
label_2926a8:
    // 0x2926a8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2926A8u;
    SET_GPR_U32(ctx, 31, 0x2926B0u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2926A8u, 0x2926B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926B0u;
label_2926b0:
    // 0x2926b0: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x2926b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x2926b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2926b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926b8: 0x92262b0a  lbu         $a2, 0x2B0A($s1)
    ctx->pc = 0x2926b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11018)));
    // 0x2926bc: 0xc0a90cc  jal         func_2A4330
    ctx->pc = 0x2926BCu;
    SET_GPR_U32(ctx, 31, 0x2926C4u);
    ctx->pc = 0x2926C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2926BCu;
    // 0x2926c0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4330u, 0x2926BCu, 0x2926C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926C4u;
label_2926c4:
    // 0x2926c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2926C4u;
    {
        const bool branch_taken_0x2926c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2926c4) {
            ctx->pc = 0x2926D8u;
            goto label_2926d8;
        }
    }
    ctx->pc = 0x2926CCu;
    // 0x2926cc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2926CCu;
    {
        const bool branch_taken_0x2926cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926CCu;
        // 0x2926d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926cc) {
            ctx->pc = 0x292858u;
            goto label_292858;
        }
    }
    ctx->pc = 0x2926D4u;
    // 0x2926d4: 0x0  nop
    ctx->pc = 0x2926d4u;
    // NOP
label_2926d8:
    // 0x2926d8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2926d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2926dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2926dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2926e0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2926e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2926e4: 0x0  nop
    ctx->pc = 0x2926e4u;
    // NOP
label_2926e8:
    // 0x2926e8: 0x82020019  lb          $v0, 0x19($s0)
    ctx->pc = 0x2926e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x2926ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2926ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2926f0: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x2926f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x2926f4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2926f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2926f8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2926f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2926fc: 0x1c400054  bgtz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2926FCu;
    {
        const bool branch_taken_0x2926fc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2926fc) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x292704u;
    // 0x292704: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x292704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x292708: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x292708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29270c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x29270cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x292710: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x292710u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x292714: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x292714u;
    {
        const bool branch_taken_0x292714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292714u;
        // 0x292718: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292714) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x29271Cu;
    // 0x29271c: 0x0  nop
    ctx->pc = 0x29271cu;
    // NOP
label_292720:
    // 0x292720: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x292720u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x292724: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x292724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x292728: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x292728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29272c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x29272Cu;
    {
        const bool branch_taken_0x29272c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29272c) {
            ctx->pc = 0x292780u;
            goto label_292780;
        }
    }
    ctx->pc = 0x292734u;
    // 0x292734: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x292734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292738: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x292738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29273c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29273cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292740: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x292740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x292744: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x292744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x292748: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x292748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x29274c: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x29274cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x292750: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x292750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x292754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x292754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292758: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x292758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29275c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29275cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x292760: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x292760u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x292764: 0x0  nop
    ctx->pc = 0x292764u;
    // NOP
    // 0x292768: 0x0  nop
    ctx->pc = 0x292768u;
    // NOP
    // 0x29276c: 0xc0cbc80  jal         func_32F200
    ctx->pc = 0x29276Cu;
    SET_GPR_U32(ctx, 31, 0x292774u);
    ctx->pc = 0x292770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29276Cu;
    // 0x292770: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F200u, 0x29276Cu, 0x292774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292774u;
label_292774:
    // 0x292774: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x292774u;
    {
        const bool branch_taken_0x292774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292774) {
            ctx->pc = 0x2927B0u;
            goto label_2927b0;
        }
    }
    ctx->pc = 0x29277Cu;
    // 0x29277c: 0x0  nop
    ctx->pc = 0x29277cu;
    // NOP
label_292780:
    // 0x292780: 0x92220114  lbu         $v0, 0x114($s1)
    ctx->pc = 0x292780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x292784: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x292784u;
    {
        const bool branch_taken_0x292784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292784) {
            ctx->pc = 0x2927B0u;
            goto label_2927b0;
        }
    }
    ctx->pc = 0x29278Cu;
    // 0x29278c: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x29278cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x292790: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x292790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x292794: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x292794u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x292798: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x292798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x29279c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x29279cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2927a0: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x2927a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2927a4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2927a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2927a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2927a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2927ac: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2927acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2927b0:
    // 0x2927b0: 0x92220114  lbu         $v0, 0x114($s1)
    ctx->pc = 0x2927b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2927b4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2927B4u;
    {
        const bool branch_taken_0x2927b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2927b4) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x2927BCu;
    // 0x2927bc: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2927bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2927c0: 0x28420028  slti        $v0, $v0, 0x28
    ctx->pc = 0x2927c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2927c4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2927C4u;
    {
        const bool branch_taken_0x2927c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2927C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927C4u;
        // 0x2927c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927c4) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x2927CCu;
    // 0x2927cc: 0xc0a4854  jal         func_292150
    ctx->pc = 0x2927CCu;
    SET_GPR_U32(ctx, 31, 0x2927D4u);
    ctx->pc = 0x292150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292150u, 0x2927CCu, 0x2927D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927D4u;
label_2927d4:
    // 0x2927d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2927d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2927d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2927D8u;
    {
        const bool branch_taken_0x2927d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2927DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927D8u;
        // 0x2927dc: 0xa2220114  sb          $v0, 0x114($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 276), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927d8) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x2927E0u;
label_2927e0:
    // 0x2927e0: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x2927e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2927e4: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2927e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2927e8: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x2927e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2927ec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2927ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2927f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2927f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2927f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2927F4u;
    {
        const bool branch_taken_0x2927f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2927F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927F4u;
        // 0x2927f8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927f4) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x2927FCu;
    // 0x2927fc: 0x0  nop
    ctx->pc = 0x2927fcu;
    // NOP
label_292800:
    // 0x292800: 0xc0cbc70  jal         func_32F1C0
    ctx->pc = 0x292800u;
    SET_GPR_U32(ctx, 31, 0x292808u);
    ctx->pc = 0x32F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F1C0u, 0x292800u, 0x292808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292808u;
label_292808:
    // 0x292808: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x292808u;
    {
        const bool branch_taken_0x292808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292808u;
        // 0x29280c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292808) {
            ctx->pc = 0x292858u;
            goto label_292858;
        }
    }
    ctx->pc = 0x292810u;
label_292810:
    // 0x292810: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x292810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x292814: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x292814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x292818: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x292818u;
    {
        const bool branch_taken_0x292818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x292818) {
            ctx->pc = 0x292838u;
            goto label_292838;
        }
    }
    ctx->pc = 0x292820u;
    // 0x292820: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x292820u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x292824: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x292824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292828: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x292828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x29282c: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x29282cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x292830: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x292830u;
    {
        const bool branch_taken_0x292830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292830u;
        // 0x292834: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292830) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x292838u;
label_292838:
    // 0x292838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29283c: 0xa2220114  sb          $v0, 0x114($s1)
    ctx->pc = 0x29283cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 276), (uint8_t)GPR_U32(ctx, 2));
    // 0x292840: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x292840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x292844: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x292844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x292848: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x292848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x29284c: 0x0  nop
    ctx->pc = 0x29284cu;
    // NOP
label_292850:
    // 0x292850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x292850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292854: 0x0  nop
    ctx->pc = 0x292854u;
    // NOP
label_292858:
    // 0x292858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x292858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29285c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29285cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292864: 0x3e00008  jr          $ra
    ctx->pc = 0x292864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292864u;
        // 0x292868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29286Cu;
}

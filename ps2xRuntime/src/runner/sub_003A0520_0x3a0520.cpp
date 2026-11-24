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

// Function: sub_003A0520
// Address: 0x3a0520 - 0x3a0654
void sub_003A0520_0x3a0520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0520_0x3a0520");
#endif

    switch (ctx->pc) {
        case 0x3a0538u: goto label_3a0538;
        case 0x3a0644u: goto label_3a0644;
        default: break;
    }

    ctx->pc = 0x3a0520u;

    // 0x3a0520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a0520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a0524: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a0524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a0528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a052c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3a052cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3a0530: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3A0530u;
    SET_GPR_U32(ctx, 31, 0x3A0538u);
    ctx->pc = 0x3A0534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0530u;
    // 0x3a0534: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3A0530u, 0x3A0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0538u;
label_3a0538:
    // 0x3a0538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a0538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a053c: 0x10a00042  beqz        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3A053Cu;
    {
        const bool branch_taken_0x3a053c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A053Cu;
        // 0x3a0540: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a053c) {
            ctx->pc = 0x3A0648u;
            goto label_3a0648;
        }
    }
    ctx->pc = 0x3A0544u;
    // 0x3a0544: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a0544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0548: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3a0548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x3a054c: 0x2406013e  addiu       $a2, $zero, 0x13E
    ctx->pc = 0x3a054cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x3a0550: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A0550u;
    {
        const bool branch_taken_0x3a0550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0550u;
        // 0x3a0554: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0550) {
            ctx->pc = 0x3A0578u;
            goto label_3a0578;
        }
    }
    ctx->pc = 0x3A0558u;
    // 0x3a0558: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a0558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a055c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3a055cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a0560: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a0560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3a0564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0564u;
    {
        const bool branch_taken_0x3a0564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0564) {
            ctx->pc = 0x3A0578u;
            goto label_3a0578;
        }
    }
    ctx->pc = 0x3A056Cu;
    // 0x3a056c: 0x2406017e  addiu       $a2, $zero, 0x17E
    ctx->pc = 0x3a056cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    // 0x3a0570: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x3a0570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3a0574: 0x0  nop
    ctx->pc = 0x3a0574u;
    // NOP
label_3a0578:
    // 0x3a0578: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x3a0578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3a057c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a057cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a0580: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3a0580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3a0584: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x3a0584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x3a0588: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x3a0588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3a058c: 0x26cc0  sll         $t5, $v0, 19
    ctx->pc = 0x3a058cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x3a0590: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3a0590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3a0594: 0x3c027030  lui         $v0, 0x7030
    ctx->pc = 0x3a0594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28720 << 16));
    // 0x3a0598: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x3a0598u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x3a059c: 0x3443004c  ori         $v1, $v0, 0x4C
    ctx->pc = 0x3a059cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x3a05a0: 0x340bfffc  ori         $t3, $zero, 0xFFFC
    ctx->pc = 0x3a05a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x3a05a4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3a05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3a05a8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3a05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3a05ac: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x3a05acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3a05b0: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x3a05b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a05b4: 0x24e20f10  addiu       $v0, $a3, 0xF10
    ctx->pc = 0x3a05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3856));
    // 0x3a05b8: 0x21cc0  sll         $v1, $v0, 19
    ctx->pc = 0x3a05b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x3a05bc: 0x24e20f20  addiu       $v0, $a3, 0xF20
    ctx->pc = 0x3a05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3872));
    // 0x3a05c0: 0x346c7000  ori         $t4, $v1, 0x7000
    ctx->pc = 0x3a05c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x3a05c4: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x3a05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x3a05c8: 0x346a9000  ori         $t2, $v1, 0x9000
    ctx->pc = 0x3a05c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x3a05cc: 0x34497000  ori         $t1, $v0, 0x7000
    ctx->pc = 0x3a05ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3a05d0: 0x34489000  ori         $t0, $v0, 0x9000
    ctx->pc = 0x3a05d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3a05d4: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x3a05d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3a05d8: 0x35a77000  ori         $a3, $t5, 0x7000
    ctx->pc = 0x3a05d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)28672);
    // 0x3a05dc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3a05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x3a05e0: 0x35a39000  ori         $v1, $t5, 0x9000
    ctx->pc = 0x3a05e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)36864);
    // 0x3a05e4: 0xa0a0000f  sb          $zero, 0xF($a1)
    ctx->pc = 0x3a05e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a05e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a05ec: 0xacac0010  sw          $t4, 0x10($a1)
    ctx->pc = 0x3a05ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 12));
    // 0x3a05f0: 0x3c024800  lui         $v0, 0x4800
    ctx->pc = 0x3a05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18432 << 16));
    // 0x3a05f4: 0xacab0014  sw          $t3, 0x14($a1)
    ctx->pc = 0x3a05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 11));
    // 0x3a05f8: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3a05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3a05fc: 0xacaa0020  sw          $t2, 0x20($a1)
    ctx->pc = 0x3a05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 10));
    // 0x3a0600: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a0600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a0604: 0xacab0024  sw          $t3, 0x24($a1)
    ctx->pc = 0x3a0604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 11));
    // 0x3a0608: 0xaca90030  sw          $t1, 0x30($a1)
    ctx->pc = 0x3a0608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 9));
    // 0x3a060c: 0xacab0034  sw          $t3, 0x34($a1)
    ctx->pc = 0x3a060cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 11));
    // 0x3a0610: 0xaca80040  sw          $t0, 0x40($a1)
    ctx->pc = 0x3a0610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 8));
    // 0x3a0614: 0xacab0044  sw          $t3, 0x44($a1)
    ctx->pc = 0x3a0614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 11));
    // 0x3a0618: 0xaca70050  sw          $a3, 0x50($a1)
    ctx->pc = 0x3a0618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 7));
    // 0x3a061c: 0xacab0054  sw          $t3, 0x54($a1)
    ctx->pc = 0x3a061cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 11));
    // 0x3a0620: 0xaca30060  sw          $v1, 0x60($a1)
    ctx->pc = 0x3a0620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
    // 0x3a0624: 0xacab0064  sw          $t3, 0x64($a1)
    ctx->pc = 0x3a0624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 11));
    // 0x3a0628: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x3a0628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x3a062c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x3a062cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x3a0630: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x3a0630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x3a0634: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x3a0634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    // 0x3a0638: 0xaca20058  sw          $v0, 0x58($a1)
    ctx->pc = 0x3a0638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 2));
    // 0x3a063c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3A063Cu;
    SET_GPR_U32(ctx, 31, 0x3A0644u);
    ctx->pc = 0x3A0640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A063Cu;
    // 0x3a0640: 0xaca20068  sw          $v0, 0x68($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3A063Cu, 0x3A0644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0644u;
label_3a0644:
    // 0x3a0644: 0x0  nop
    ctx->pc = 0x3a0644u;
    // NOP
label_3a0648:
    // 0x3a0648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a064c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A064Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A064Cu;
        // 0x3a0650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A064Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0654u;
}

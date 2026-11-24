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

// Function: sub_002C26A0
// Address: 0x2c26a0 - 0x2c276c
void sub_002C26A0_0x2c26a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C26A0_0x2c26a0");
#endif

    switch (ctx->pc) {
        case 0x2c2738u: goto label_2c2738;
        default: break;
    }

    ctx->pc = 0x2c26a0u;

    // 0x2c26a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c26a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c26a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c26a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c26a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c26ac: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2c26acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2c26b0: 0x94c80002  lhu         $t0, 0x2($a2)
    ctx->pc = 0x2c26b0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c26b4: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x2c26b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x2c26b8: 0x94276ac4  lhu         $a3, 0x6AC4($at)
    ctx->pc = 0x2c26b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2c26bc: 0x31028000  andi        $v0, $t0, 0x8000
    ctx->pc = 0x2c26bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2c26c0: 0xe83826  xor         $a3, $a3, $t0
    ctx->pc = 0x2c26c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
    // 0x2c26c4: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x2c26c4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c26c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C26C8u;
    {
        const bool branch_taken_0x2c26c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26C8u;
        // 0x2c26cc: 0xe31824  and         $v1, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26c8) {
            ctx->pc = 0x2C26E0u;
            goto label_2c26e0;
        }
    }
    ctx->pc = 0x2C26D0u;
    // 0x2c26d0: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c26d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c26d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c26d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c26d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c26d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c26dc: 0x0  nop
    ctx->pc = 0x2c26dcu;
    // NOP
label_2c26e0:
    // 0x2c26e0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C26E0u;
    {
        const bool branch_taken_0x2c26e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c26e0) {
            ctx->pc = 0x2C2758u;
            goto label_2c2758;
        }
    }
    ctx->pc = 0x2C26E8u;
    // 0x2c26e8: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c26e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c26ec: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C26ECu;
    {
        const bool branch_taken_0x2c26ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26ECu;
        // 0x2c26f0: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26ec) {
            ctx->pc = 0x2C2740u;
            goto label_2c2740;
        }
    }
    ctx->pc = 0x2C26F4u;
    // 0x2c26f4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C26F4u;
    {
        const bool branch_taken_0x2c26f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26F4u;
        // 0x2c26f8: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26f4) {
            ctx->pc = 0x2C2730u;
            goto label_2c2730;
        }
    }
    ctx->pc = 0x2C26FCu;
    // 0x2c26fc: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c26fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c2700: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c2700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c2704: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2708: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c270c: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c270cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c2710: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c2710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2714: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c2714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2718: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c2718u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c271c: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c271cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c2720: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c2720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2728: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2728u;
    {
        const bool branch_taken_0x2c2728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2728u;
        // 0x2c272c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2728) {
            ctx->pc = 0x2C2750u;
            goto label_2c2750;
        }
    }
    ctx->pc = 0x2C2730u;
label_2c2730:
    // 0x2c2730: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C2730u;
    SET_GPR_U32(ctx, 31, 0x2C2738u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C2730u, 0x2C2738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2738u;
label_2c2738:
    // 0x2c2738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2738u;
    {
        const bool branch_taken_0x2c2738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2738) {
            ctx->pc = 0x2C2748u;
            goto label_2c2748;
        }
    }
    ctx->pc = 0x2C2740u;
label_2c2740:
    // 0x2c2740: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c2740u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2744: 0x0  nop
    ctx->pc = 0x2c2744u;
    // NOP
label_2c2748:
    // 0x2c2748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c274c: 0x0  nop
    ctx->pc = 0x2c274cu;
    // NOP
label_2c2750:
    // 0x2c2750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2750u;
    {
        const bool branch_taken_0x2c2750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2750) {
            ctx->pc = 0x2C2760u;
            goto label_2c2760;
        }
    }
    ctx->pc = 0x2C2758u;
label_2c2758:
    // 0x2c2758: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c2758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c275c: 0x0  nop
    ctx->pc = 0x2c275cu;
    // NOP
label_2c2760:
    // 0x2c2760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2764: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2764u;
        // 0x2c2768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C276Cu;
}

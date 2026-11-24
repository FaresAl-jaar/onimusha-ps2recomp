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

// Function: sub_003E27B0
// Address: 0x3e27b0 - 0x3e28d4
void sub_003E27B0_0x3e27b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E27B0_0x3e27b0");
#endif

    switch (ctx->pc) {
        case 0x3e2890u: goto label_3e2890;
        case 0x3e28b0u: goto label_3e28b0;
        case 0x3e28b8u: goto label_3e28b8;
        case 0x3e28c0u: goto label_3e28c0;
        case 0x3e28c8u: goto label_3e28c8;
        default: break;
    }

    ctx->pc = 0x3e27b0u;

    // 0x3e27b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e27b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e27b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e27b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e27b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e27b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e27bc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3e27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3e27c0: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3e27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3e27c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e27c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e27c8: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3E27C8u;
    {
        const bool branch_taken_0x3e27c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e27c8) {
            ctx->pc = 0x3E28C8u;
            goto label_3e28c8;
        }
    }
    ctx->pc = 0x3E27D0u;
    // 0x3e27d0: 0x8f858cf8  lw          $a1, -0x7308($gp)
    ctx->pc = 0x3e27d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e27d4: 0x90a30291  lbu         $v1, 0x291($a1)
    ctx->pc = 0x3e27d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 657)));
    // 0x3e27d8: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x3E27D8u;
    {
        const bool branch_taken_0x3e27d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E27D8u;
        // 0x3e27dc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e27d8) {
            ctx->pc = 0x3E28C8u;
            goto label_3e28c8;
        }
    }
    ctx->pc = 0x3E27E0u;
    // 0x3e27e0: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3e27e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3e27e4: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3e27e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3e27e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3e27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3e27ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e27f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e27f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e27f8: 0x9063065c  lbu         $v1, 0x65C($v1)
    ctx->pc = 0x3e27f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1628)));
    // 0x3e27fc: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3E27FCu;
    {
        const bool branch_taken_0x3e27fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E27FCu;
        // 0x3e2800: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e27fc) {
            ctx->pc = 0x3E28A8u;
            goto label_3e28a8;
        }
    }
    ctx->pc = 0x3E2804u;
    // 0x3e2804: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E2804u;
    {
        const bool branch_taken_0x3e2804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e2804) {
            ctx->pc = 0x3E2898u;
            goto label_3e2898;
        }
    }
    ctx->pc = 0x3E280Cu;
    // 0x3e280c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3e280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3e2810: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E2810u;
    {
        const bool branch_taken_0x3e2810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2810u;
        // 0x3e2814: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2810) {
            ctx->pc = 0x3E2888u;
            goto label_3e2888;
        }
    }
    ctx->pc = 0x3E2818u;
    // 0x3e2818: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E2818u;
    {
        const bool branch_taken_0x3e2818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e2818) {
            ctx->pc = 0x3E2878u;
            goto label_3e2878;
        }
    }
    ctx->pc = 0x3E2820u;
    // 0x3e2820: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3e2820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3e2824: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E2824u;
    {
        const bool branch_taken_0x3e2824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2824u;
        // 0x3e2828: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2824) {
            ctx->pc = 0x3E2878u;
            goto label_3e2878;
        }
    }
    ctx->pc = 0x3E282Cu;
    // 0x3e282c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E282Cu;
    {
        const bool branch_taken_0x3e282c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e282c) {
            ctx->pc = 0x3E2878u;
            goto label_3e2878;
        }
    }
    ctx->pc = 0x3E2834u;
    // 0x3e2834: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x3e2834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3e2838: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3E2838u;
    {
        const bool branch_taken_0x3e2838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2838u;
        // 0x3e283c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2838) {
            ctx->pc = 0x3E2878u;
            goto label_3e2878;
        }
    }
    ctx->pc = 0x3E2840u;
    // 0x3e2840: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E2840u;
    {
        const bool branch_taken_0x3e2840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e2840) {
            ctx->pc = 0x3E2870u;
            goto label_3e2870;
        }
    }
    ctx->pc = 0x3E2848u;
    // 0x3e2848: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3e2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e284c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E284Cu;
    {
        const bool branch_taken_0x3e284c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E284Cu;
        // 0x3e2850: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e284c) {
            ctx->pc = 0x3E2870u;
            goto label_3e2870;
        }
    }
    ctx->pc = 0x3E2854u;
    // 0x3e2854: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2854u;
    {
        const bool branch_taken_0x3e2854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e2854) {
            ctx->pc = 0x3E2870u;
            goto label_3e2870;
        }
    }
    ctx->pc = 0x3E285Cu;
    // 0x3e285c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2860: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2860u;
    {
        const bool branch_taken_0x3e2860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e2860) {
            ctx->pc = 0x3E2870u;
            goto label_3e2870;
        }
    }
    ctx->pc = 0x3E2868u;
    // 0x3e2868: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E2868u;
    {
        const bool branch_taken_0x3e2868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2868) {
            ctx->pc = 0x3E28B0u;
            goto label_3e28b0;
        }
    }
    ctx->pc = 0x3E2870u;
label_3e2870:
    // 0x3e2870: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E2870u;
    {
        const bool branch_taken_0x3e2870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2870u;
        // 0x3e2874: 0xa0a00290  sb          $zero, 0x290($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 656), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2870) {
            ctx->pc = 0x3E28B0u;
            goto label_3e28b0;
        }
    }
    ctx->pc = 0x3E2878u;
label_3e2878:
    // 0x3e2878: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e2878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e287c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E287Cu;
    {
        const bool branch_taken_0x3e287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E287Cu;
        // 0x3e2880: 0xa0a20290  sb          $v0, 0x290($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 656), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e287c) {
            ctx->pc = 0x3E28B0u;
            goto label_3e28b0;
        }
    }
    ctx->pc = 0x3E2884u;
    // 0x3e2884: 0x0  nop
    ctx->pc = 0x3e2884u;
    // NOP
label_3e2888:
    // 0x3e2888: 0xc0f858c  jal         func_3E1630
    ctx->pc = 0x3E2888u;
    SET_GPR_U32(ctx, 31, 0x3E2890u);
    ctx->pc = 0x3E1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1630u, 0x3E2888u, 0x3E2890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2890u;
label_3e2890:
    // 0x3e2890: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2890u;
    {
        const bool branch_taken_0x3e2890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2890) {
            ctx->pc = 0x3E28B0u;
            goto label_3e28b0;
        }
    }
    ctx->pc = 0x3E2898u;
label_3e2898:
    // 0x3e2898: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e2898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e289c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E289Cu;
    {
        const bool branch_taken_0x3e289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E289Cu;
        // 0x3e28a0: 0xa0a20290  sb          $v0, 0x290($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 656), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e289c) {
            ctx->pc = 0x3E28B0u;
            goto label_3e28b0;
        }
    }
    ctx->pc = 0x3E28A4u;
    // 0x3e28a4: 0x0  nop
    ctx->pc = 0x3e28a4u;
    // NOP
label_3e28a8:
    // 0x3e28a8: 0xc0f857c  jal         func_3E15F0
    ctx->pc = 0x3E28A8u;
    SET_GPR_U32(ctx, 31, 0x3E28B0u);
    ctx->pc = 0x3E15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E15F0u, 0x3E28A8u, 0x3E28B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E28B0u;
label_3e28b0:
    // 0x3e28b0: 0xc0f85e0  jal         func_3E1780
    ctx->pc = 0x3E28B0u;
    SET_GPR_U32(ctx, 31, 0x3E28B8u);
    ctx->pc = 0x3E1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1780u, 0x3E28B0u, 0x3E28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E28B8u;
label_3e28b8:
    // 0x3e28b8: 0xc0f8724  jal         func_3E1C90
    ctx->pc = 0x3E28B8u;
    SET_GPR_U32(ctx, 31, 0x3E28C0u);
    ctx->pc = 0x3E1C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C90u, 0x3E28B8u, 0x3E28C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E28C0u;
label_3e28c0:
    // 0x3e28c0: 0xc0f88fc  jal         func_3E23F0
    ctx->pc = 0x3E28C0u;
    SET_GPR_U32(ctx, 31, 0x3E28C8u);
    ctx->pc = 0x3E23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E23F0u, 0x3E28C0u, 0x3E28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E28C8u;
label_3e28c8:
    // 0x3e28c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e28c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e28cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E28CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E28CCu;
        // 0x3e28d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E28CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E28D4u;
}

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

// Function: sub_002C2770
// Address: 0x2c2770 - 0x2c282c
void sub_002C2770_0x2c2770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2770_0x2c2770");
#endif

    switch (ctx->pc) {
        case 0x2c27f8u: goto label_2c27f8;
        default: break;
    }

    ctx->pc = 0x2c2770u;

    // 0x2c2770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2774: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2c2774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2c2778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c277c: 0x8ca706ac  lw          $a3, 0x6AC($a1)
    ctx->pc = 0x2c277cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1708)));
    // 0x2c2780: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2c2780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c2784: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2c2784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2c2788: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2788u;
    {
        const bool branch_taken_0x2c2788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2788u;
        // 0x2c278c: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2788) {
            ctx->pc = 0x2C27A0u;
            goto label_2c27a0;
        }
    }
    ctx->pc = 0x2C2790u;
    // 0x2c2790: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c2790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c2794: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c2794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c2798: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c2798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c279c: 0x0  nop
    ctx->pc = 0x2c279cu;
    // NOP
label_2c27a0:
    // 0x2c27a0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C27A0u;
    {
        const bool branch_taken_0x2c27a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c27a0) {
            ctx->pc = 0x2C2818u;
            goto label_2c2818;
        }
    }
    ctx->pc = 0x2C27A8u;
    // 0x2c27a8: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c27a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c27ac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C27ACu;
    {
        const bool branch_taken_0x2c27ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27ACu;
        // 0x2c27b0: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27ac) {
            ctx->pc = 0x2C2800u;
            goto label_2c2800;
        }
    }
    ctx->pc = 0x2C27B4u;
    // 0x2c27b4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C27B4u;
    {
        const bool branch_taken_0x2c27b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27B4u;
        // 0x2c27b8: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27b4) {
            ctx->pc = 0x2C27F0u;
            goto label_2c27f0;
        }
    }
    ctx->pc = 0x2C27BCu;
    // 0x2c27bc: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c27bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c27c0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c27c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c27c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c27c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c27cc: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c27ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c27d0: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c27d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c27d4: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c27d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c27d8: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c27d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c27dc: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c27dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c27e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c27e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c27e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c27e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C27E8u;
    {
        const bool branch_taken_0x2c27e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27E8u;
        // 0x2c27ec: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27e8) {
            ctx->pc = 0x2C2810u;
            goto label_2c2810;
        }
    }
    ctx->pc = 0x2C27F0u;
label_2c27f0:
    // 0x2c27f0: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C27F0u;
    SET_GPR_U32(ctx, 31, 0x2C27F8u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C27F0u, 0x2C27F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27F8u;
label_2c27f8:
    // 0x2c27f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C27F8u;
    {
        const bool branch_taken_0x2c27f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c27f8) {
            ctx->pc = 0x2C2808u;
            goto label_2c2808;
        }
    }
    ctx->pc = 0x2C2800u;
label_2c2800:
    // 0x2c2800: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c2800u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2804: 0x0  nop
    ctx->pc = 0x2c2804u;
    // NOP
label_2c2808:
    // 0x2c2808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c280c: 0x0  nop
    ctx->pc = 0x2c280cu;
    // NOP
label_2c2810:
    // 0x2c2810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2810u;
    {
        const bool branch_taken_0x2c2810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2810) {
            ctx->pc = 0x2C2820u;
            goto label_2c2820;
        }
    }
    ctx->pc = 0x2C2818u;
label_2c2818:
    // 0x2c2818: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c2818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c281c: 0x0  nop
    ctx->pc = 0x2c281cu;
    // NOP
label_2c2820:
    // 0x2c2820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2824: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2824u;
        // 0x2c2828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C282Cu;
}

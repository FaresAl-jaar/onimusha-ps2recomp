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

// Function: sub_002766D0
// Address: 0x2766d0 - 0x2767b4
void sub_002766D0_0x2766d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002766D0_0x2766d0");
#endif

    switch (ctx->pc) {
        case 0x276744u: goto label_276744;
        case 0x276768u: goto label_276768;
        case 0x276798u: goto label_276798;
        default: break;
    }

    ctx->pc = 0x2766d0u;

    // 0x2766d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2766d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2766d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2766d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2766d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2766d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2766dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2766dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2766e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2766e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2766e4: 0x80862903  lb          $a2, 0x2903($a0)
    ctx->pc = 0x2766e4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10499)));
    // 0x2766e8: 0x10c5002d  beq         $a2, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2766E8u;
    {
        const bool branch_taken_0x2766e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2766ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766E8u;
        // 0x2766ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766e8) {
            ctx->pc = 0x2767A0u;
            goto label_2767a0;
        }
    }
    ctx->pc = 0x2766F0u;
    // 0x2766f0: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x2766f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x2766f4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2766f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2766f8: 0x246308f0  addiu       $v1, $v1, 0x8F0
    ctx->pc = 0x2766f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2288));
    // 0x2766fc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2766fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x276700: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x276700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x276704: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x276704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x276708: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x276708u;
    {
        const bool branch_taken_0x276708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x276708) {
            ctx->pc = 0x2767A0u;
            goto label_2767a0;
        }
    }
    ctx->pc = 0x276710u;
    // 0x276710: 0x8f848908  lw          $a0, -0x76F8($gp)
    ctx->pc = 0x276710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x276714: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x276714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x276718: 0x8f82890c  lw          $v0, -0x76F4($gp)
    ctx->pc = 0x276718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x27671c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x27671cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x276720: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x276720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x276724: 0xaf848908  sw          $a0, -0x76F8($gp)
    ctx->pc = 0x276724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
    // 0x276728: 0xaf82890c  sw          $v0, -0x76F4($gp)
    ctx->pc = 0x276728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 2));
    // 0x27672c: 0x8f828908  lw          $v0, -0x76F8($gp)
    ctx->pc = 0x27672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x276730: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x276730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x276734: 0xaf828908  sw          $v0, -0x76F8($gp)
    ctx->pc = 0x276734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 2));
    // 0x276738: 0xa2252903  sb          $a1, 0x2903($s1)
    ctx->pc = 0x276738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10499), (uint8_t)GPR_U32(ctx, 5));
    // 0x27673c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x27673Cu;
    SET_GPR_U32(ctx, 31, 0x276744u);
    ctx->pc = 0x276740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27673Cu;
    // 0x276740: 0x8e24290c  lw          $a0, 0x290C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x27673Cu, 0x276744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276744u;
label_276744:
    // 0x276744: 0xae20290c  sw          $zero, 0x290C($s1)
    ctx->pc = 0x276744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10508), GPR_U32(ctx, 0));
    // 0x276748: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x276748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27674c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x27674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x276750: 0x26262910  addiu       $a2, $s1, 0x2910
    ctx->pc = 0x276750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10512));
    // 0x276754: 0x92232901  lbu         $v1, 0x2901($s1)
    ctx->pc = 0x276754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10497)));
    // 0x276758: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x276758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x27675c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x27675cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x276760: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x276760u;
    SET_GPR_U32(ctx, 31, 0x276768u);
    ctx->pc = 0x276764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276760u;
    // 0x276764: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x276760u, 0x276768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276768u;
label_276768:
    // 0x276768: 0x922208e8  lbu         $v0, 0x8E8($s1)
    ctx->pc = 0x276768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x27676c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27676cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x276770: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x276770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276774: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x276774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x276778: 0x24050500  addiu       $a1, $zero, 0x500
    ctx->pc = 0x276778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x27677c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x27677cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276780: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x276780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276784: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x276784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276788: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x276788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27678c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x27678cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276790: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x276790u;
    SET_GPR_U32(ctx, 31, 0x276798u);
    ctx->pc = 0x276794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276790u;
    // 0x276794: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x276790u, 0x276798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276798u;
label_276798:
    // 0x276798: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x276798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x27679c: 0x0  nop
    ctx->pc = 0x27679cu;
    // NOP
label_2767a0:
    // 0x2767a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2767a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2767a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2767a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2767a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2767a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2767ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2767ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2767B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767ACu;
        // 0x2767b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2767ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2767B4u;
}

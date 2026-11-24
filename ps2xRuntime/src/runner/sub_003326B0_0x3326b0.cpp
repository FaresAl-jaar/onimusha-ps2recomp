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

// Function: sub_003326B0
// Address: 0x3326b0 - 0x3327ac
void sub_003326B0_0x3326b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003326B0_0x3326b0");
#endif

    switch (ctx->pc) {
        case 0x3326dcu: goto label_3326dc;
        case 0x3326fcu: goto label_3326fc;
        case 0x332718u: goto label_332718;
        case 0x332728u: goto label_332728;
        case 0x332750u: goto label_332750;
        case 0x332778u: goto label_332778;
        case 0x33278cu: goto label_33278c;
        default: break;
    }

    ctx->pc = 0x3326b0u;

    // 0x3326b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3326b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3326b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3326b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3326b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3326b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3326bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3326bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3326c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3326c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3326c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3326c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3326c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3326cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3326ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3326d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326d4: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x3326D4u;
    SET_GPR_U32(ctx, 31, 0x3326DCu);
    ctx->pc = 0x3326D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326D4u;
    // 0x3326d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x3326D4u, 0x3326DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326DCu;
label_3326dc:
    // 0x3326dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3326dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326e0: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x3326E0u;
    {
        const bool branch_taken_0x3326e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3326e0) {
            ctx->pc = 0x332790u;
            goto label_332790;
        }
    }
    ctx->pc = 0x3326E8u;
    // 0x3326e8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x3326e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3326ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3326ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326f0: 0x24510510  addiu       $s1, $v0, 0x510
    ctx->pc = 0x3326f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x3326f4: 0xc0bcff4  jal         func_2F3FD0
    ctx->pc = 0x3326F4u;
    SET_GPR_U32(ctx, 31, 0x3326FCu);
    ctx->pc = 0x3326F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326F4u;
    // 0x3326f8: 0x3225ffff  andi        $a1, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3FD0u, 0x3326F4u, 0x3326FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326FCu;
label_3326fc:
    // 0x3326fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3326FCu;
    {
        const bool branch_taken_0x3326fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3326FCu;
        // 0x332700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326fc) {
            ctx->pc = 0x332718u;
            goto label_332718;
        }
    }
    ctx->pc = 0x332704u;
    // 0x332704: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x332704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x332708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33270c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33270cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332710: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x332710u;
    SET_GPR_U32(ctx, 31, 0x332718u);
    ctx->pc = 0x332714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332710u;
    // 0x332714: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x332710u, 0x332718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332718u;
label_332718:
    // 0x332718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33271c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33271cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332720: 0xc0bce30  jal         func_2F38C0
    ctx->pc = 0x332720u;
    SET_GPR_U32(ctx, 31, 0x332728u);
    ctx->pc = 0x332724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332720u;
    // 0x332724: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38C0u, 0x332720u, 0x332728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332728u;
label_332728:
    // 0x332728: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x332728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33272c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x332730: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x332730u;
    {
        const bool branch_taken_0x332730 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x332730) {
            ctx->pc = 0x332780u;
            goto label_332780;
        }
    }
    ctx->pc = 0x332738u;
    // 0x332738: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x332738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33273c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33273cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332740: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x332740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332744: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x332744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332748: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x332748u;
    SET_GPR_U32(ctx, 31, 0x332750u);
    ctx->pc = 0x33274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332748u;
    // 0x33274c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x332748u, 0x332750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332750u;
label_332750:
    // 0x332750: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x332750u;
    {
        const bool branch_taken_0x332750 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x332750) {
            ctx->pc = 0x332760u;
            goto label_332760;
        }
    }
    ctx->pc = 0x332758u;
    // 0x332758: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x332758u;
    {
        const bool branch_taken_0x332758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332758u;
        // 0x33275c: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332758) {
            ctx->pc = 0x332780u;
            goto label_332780;
        }
    }
    ctx->pc = 0x332760u;
label_332760:
    // 0x332760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332764: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x332764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332768: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x332768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x33276c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x33276cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x332770: 0xc0bcd80  jal         func_2F3600
    ctx->pc = 0x332770u;
    SET_GPR_U32(ctx, 31, 0x332778u);
    ctx->pc = 0x332774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332770u;
    // 0x332774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3600u, 0x332770u, 0x332778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332778u;
label_332778:
    // 0x332778: 0x97a6005c  lhu         $a2, 0x5C($sp)
    ctx->pc = 0x332778u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x33277c: 0x0  nop
    ctx->pc = 0x33277cu;
    // NOP
label_332780:
    // 0x332780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332784: 0xc0d264c  jal         func_349930
    ctx->pc = 0x332784u;
    SET_GPR_U32(ctx, 31, 0x33278Cu);
    ctx->pc = 0x332788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332784u;
    // 0x332788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349930u, 0x332784u, 0x33278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33278Cu;
label_33278c:
    // 0x33278c: 0x0  nop
    ctx->pc = 0x33278cu;
    // NOP
label_332790:
    // 0x332790: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x332790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332794: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x332794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x332798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33279c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33279cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3327a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3327a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3327a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3327A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3327A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327A4u;
        // 0x3327a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3327A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3327ACu;
}

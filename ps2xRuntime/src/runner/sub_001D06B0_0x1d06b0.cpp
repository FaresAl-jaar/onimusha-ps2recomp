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

// Function: sub_001D06B0
// Address: 0x1d06b0 - 0x1d0890
void sub_001D06B0_0x1d06b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D06B0_0x1d06b0");
#endif

    switch (ctx->pc) {
        case 0x1d06b0u: goto label_1d06b0;
        case 0x1d06b4u: goto label_1d06b4;
        case 0x1d06b8u: goto label_1d06b8;
        case 0x1d06bcu: goto label_1d06bc;
        case 0x1d06c0u: goto label_1d06c0;
        case 0x1d06c4u: goto label_1d06c4;
        case 0x1d06c8u: goto label_1d06c8;
        case 0x1d06ccu: goto label_1d06cc;
        case 0x1d06d0u: goto label_1d06d0;
        case 0x1d06d4u: goto label_1d06d4;
        case 0x1d06d8u: goto label_1d06d8;
        case 0x1d06dcu: goto label_1d06dc;
        case 0x1d06e0u: goto label_1d06e0;
        case 0x1d06e4u: goto label_1d06e4;
        case 0x1d06e8u: goto label_1d06e8;
        case 0x1d06ecu: goto label_1d06ec;
        case 0x1d06f0u: goto label_1d06f0;
        case 0x1d06f4u: goto label_1d06f4;
        case 0x1d06f8u: goto label_1d06f8;
        case 0x1d06fcu: goto label_1d06fc;
        case 0x1d0700u: goto label_1d0700;
        case 0x1d0704u: goto label_1d0704;
        case 0x1d0708u: goto label_1d0708;
        case 0x1d070cu: goto label_1d070c;
        case 0x1d0710u: goto label_1d0710;
        case 0x1d0714u: goto label_1d0714;
        case 0x1d0718u: goto label_1d0718;
        case 0x1d071cu: goto label_1d071c;
        case 0x1d0720u: goto label_1d0720;
        case 0x1d0724u: goto label_1d0724;
        case 0x1d0728u: goto label_1d0728;
        case 0x1d072cu: goto label_1d072c;
        case 0x1d0730u: goto label_1d0730;
        case 0x1d0734u: goto label_1d0734;
        case 0x1d0738u: goto label_1d0738;
        case 0x1d073cu: goto label_1d073c;
        case 0x1d0740u: goto label_1d0740;
        case 0x1d0744u: goto label_1d0744;
        case 0x1d0748u: goto label_1d0748;
        case 0x1d074cu: goto label_1d074c;
        case 0x1d0750u: goto label_1d0750;
        case 0x1d0754u: goto label_1d0754;
        case 0x1d0758u: goto label_1d0758;
        case 0x1d075cu: goto label_1d075c;
        case 0x1d0760u: goto label_1d0760;
        case 0x1d0764u: goto label_1d0764;
        case 0x1d0768u: goto label_1d0768;
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0770u: goto label_1d0770;
        case 0x1d0774u: goto label_1d0774;
        case 0x1d0778u: goto label_1d0778;
        case 0x1d077cu: goto label_1d077c;
        case 0x1d0780u: goto label_1d0780;
        case 0x1d0784u: goto label_1d0784;
        case 0x1d0788u: goto label_1d0788;
        case 0x1d078cu: goto label_1d078c;
        case 0x1d0790u: goto label_1d0790;
        case 0x1d0794u: goto label_1d0794;
        case 0x1d0798u: goto label_1d0798;
        case 0x1d079cu: goto label_1d079c;
        case 0x1d07a0u: goto label_1d07a0;
        case 0x1d07a4u: goto label_1d07a4;
        case 0x1d07a8u: goto label_1d07a8;
        case 0x1d07acu: goto label_1d07ac;
        case 0x1d07b0u: goto label_1d07b0;
        case 0x1d07b4u: goto label_1d07b4;
        case 0x1d07b8u: goto label_1d07b8;
        case 0x1d07bcu: goto label_1d07bc;
        case 0x1d07c0u: goto label_1d07c0;
        case 0x1d07c4u: goto label_1d07c4;
        case 0x1d07c8u: goto label_1d07c8;
        case 0x1d07ccu: goto label_1d07cc;
        case 0x1d07d0u: goto label_1d07d0;
        case 0x1d07d4u: goto label_1d07d4;
        case 0x1d07d8u: goto label_1d07d8;
        case 0x1d07dcu: goto label_1d07dc;
        case 0x1d07e0u: goto label_1d07e0;
        case 0x1d07e4u: goto label_1d07e4;
        case 0x1d07e8u: goto label_1d07e8;
        case 0x1d07ecu: goto label_1d07ec;
        case 0x1d07f0u: goto label_1d07f0;
        case 0x1d07f4u: goto label_1d07f4;
        case 0x1d07f8u: goto label_1d07f8;
        case 0x1d07fcu: goto label_1d07fc;
        case 0x1d0800u: goto label_1d0800;
        case 0x1d0804u: goto label_1d0804;
        case 0x1d0808u: goto label_1d0808;
        case 0x1d080cu: goto label_1d080c;
        case 0x1d0810u: goto label_1d0810;
        case 0x1d0814u: goto label_1d0814;
        case 0x1d0818u: goto label_1d0818;
        case 0x1d081cu: goto label_1d081c;
        case 0x1d0820u: goto label_1d0820;
        case 0x1d0824u: goto label_1d0824;
        case 0x1d0828u: goto label_1d0828;
        case 0x1d082cu: goto label_1d082c;
        case 0x1d0830u: goto label_1d0830;
        case 0x1d0834u: goto label_1d0834;
        case 0x1d0838u: goto label_1d0838;
        case 0x1d083cu: goto label_1d083c;
        case 0x1d0840u: goto label_1d0840;
        case 0x1d0844u: goto label_1d0844;
        case 0x1d0848u: goto label_1d0848;
        case 0x1d084cu: goto label_1d084c;
        case 0x1d0850u: goto label_1d0850;
        case 0x1d0854u: goto label_1d0854;
        case 0x1d0858u: goto label_1d0858;
        case 0x1d085cu: goto label_1d085c;
        case 0x1d0860u: goto label_1d0860;
        case 0x1d0864u: goto label_1d0864;
        case 0x1d0868u: goto label_1d0868;
        case 0x1d086cu: goto label_1d086c;
        case 0x1d0870u: goto label_1d0870;
        case 0x1d0874u: goto label_1d0874;
        case 0x1d0878u: goto label_1d0878;
        case 0x1d087cu: goto label_1d087c;
        case 0x1d0880u: goto label_1d0880;
        case 0x1d0884u: goto label_1d0884;
        case 0x1d0888u: goto label_1d0888;
        case 0x1d088cu: goto label_1d088c;
        default: break;
    }

    ctx->pc = 0x1d06b0u;

label_1d06b0:
    // 0x1d06b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1d06b4:
    // 0x1d06b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d06b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1d06b8:
    // 0x1d06b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d06b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1d06bc:
    // 0x1d06bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1d06c0:
    // 0x1d06c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d06c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d06c4:
    // 0x1d06c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d06c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d06c8:
    // 0x1d06c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d06c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d06cc:
    // 0x1d06cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d06ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d06d0:
    // 0x1d06d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d06d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d06d4:
    // 0x1d06d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d06d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d06d8:
    // 0x1d06d8: 0xc0b3ae8  jal         func_2CEBA0
label_1d06dc:
    if (ctx->pc == 0x1D06DCu) {
        ctx->pc = 0x1D06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06D8u;
        // 0x1d06dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06E0u;
        goto label_1d06e0;
    }
    ctx->pc = 0x1D06D8u;
    SET_GPR_U32(ctx, 31, 0x1D06E0u);
    ctx->pc = 0x1D06DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D06D8u;
    // 0x1d06dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBA0u, 0x1D06D8u, 0x1D06E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06E0u;
label_1d06e0:
    // 0x1d06e0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d06e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d06e4:
    // 0x1d06e4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d06e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d06e8:
    // 0x1d06e8: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1d06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
label_1d06ec:
    // 0x1d06ec: 0x2442c640  addiu       $v0, $v0, -0x39C0
    ctx->pc = 0x1d06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952512));
label_1d06f0:
    // 0x1d06f0: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x1d06f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_1d06f4:
    // 0x1d06f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d06f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d06f8:
    // 0x1d06f8: 0x26105a98  addiu       $s0, $s0, 0x5A98
    ctx->pc = 0x1d06f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23192));
label_1d06fc:
    // 0x1d06fc: 0x5e8821  addu        $s1, $v0, $fp
    ctx->pc = 0x1d06fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1d0700:
    // 0x1d0700: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x1d0700u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0704:
    // 0x1d0704: 0xc096ff4  jal         func_25BFD0
label_1d0708:
    if (ctx->pc == 0x1D0708u) {
        ctx->pc = 0x1D0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0704u;
        // 0x1d0708: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D070Cu;
        goto label_1d070c;
    }
    ctx->pc = 0x1D0704u;
    SET_GPR_U32(ctx, 31, 0x1D070Cu);
    ctx->pc = 0x1D0708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0704u;
    // 0x1d0708: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFD0u, 0x1D0704u, 0x1D070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D070Cu;
label_1d070c:
    // 0x1d070c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d070cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0710:
    // 0x1d0710: 0xc09703c  jal         func_25C0F0
label_1d0714:
    if (ctx->pc == 0x1D0714u) {
        ctx->pc = 0x1D0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0710u;
        // 0x1d0714: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0718u;
        goto label_1d0718;
    }
    ctx->pc = 0x1D0710u;
    SET_GPR_U32(ctx, 31, 0x1D0718u);
    ctx->pc = 0x1D0714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0710u;
    // 0x1d0714: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C0F0u, 0x1D0710u, 0x1D0718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0718u;
label_1d0718:
    // 0x1d0718: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1d0718u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1d071c:
    // 0x1d071c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1d071cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_1d0720:
    // 0x1d0720: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d0720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0724:
    // 0x1d0724: 0xc05d4c8  jal         func_175320
label_1d0728:
    if (ctx->pc == 0x1D0728u) {
        ctx->pc = 0x1D0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0724u;
        // 0x1d0728: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D072Cu;
        goto label_1d072c;
    }
    ctx->pc = 0x1D0724u;
    SET_GPR_U32(ctx, 31, 0x1D072Cu);
    ctx->pc = 0x1D0728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0724u;
    // 0x1d0728: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175320u, 0x1D0724u, 0x1D072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D072Cu;
label_1d072c:
    // 0x1d072c: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
label_1d0730:
    if (ctx->pc == 0x1D0730u) {
        ctx->pc = 0x1D0734u;
        goto label_1d0734;
    }
    ctx->pc = 0x1D072Cu;
    {
        const bool branch_taken_0x1d072c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d072c) {
            ctx->pc = 0x1D0790u;
            goto label_1d0790;
        }
    }
    ctx->pc = 0x1D0734u;
label_1d0734:
    // 0x1d0734: 0x0  nop
    ctx->pc = 0x1d0734u;
    // NOP
label_1d0738:
    // 0x1d0738: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
label_1d073c:
    if (ctx->pc == 0x1D073Cu) {
        ctx->pc = 0x1D073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0738u;
        // 0x1d073c: 0x8e720010  lw          $s2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0740u;
        goto label_1d0740;
    }
    ctx->pc = 0x1D0738u;
    {
        const bool branch_taken_0x1d0738 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0738u;
        // 0x1d073c: 0x8e720010  lw          $s2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0738) {
            ctx->pc = 0x1D0770u;
            goto label_1d0770;
        }
    }
    ctx->pc = 0x1D0740u;
label_1d0740:
    // 0x1d0740: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x1d0740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1d0744:
    // 0x1d0744: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1d0744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1d0748:
    // 0x1d0748: 0x320f809  jalr        $t9
label_1d074c:
    if (ctx->pc == 0x1D074Cu) {
        ctx->pc = 0x1D074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0748u;
        // 0x1d074c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0750u;
        goto label_1d0750;
    }
    ctx->pc = 0x1D0748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0750u);
        ctx->pc = 0x1D074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0748u;
        // 0x1d074c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0748u, 0x1D0750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0750u;
label_1d0750:
    // 0x1d0750: 0x9382863c  lbu         $v0, -0x79C4($gp)
    ctx->pc = 0x1d0750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1d0754:
    // 0x1d0754: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d0758:
    if (ctx->pc == 0x1D0758u) {
        ctx->pc = 0x1D075Cu;
        goto label_1d075c;
    }
    ctx->pc = 0x1D0754u;
    {
        const bool branch_taken_0x1d0754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0754) {
            ctx->pc = 0x1D0770u;
            goto label_1d0770;
        }
    }
    ctx->pc = 0x1D075Cu;
label_1d075c:
    // 0x1d075c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x1d075cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1d0760:
    // 0x1d0760: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1d0760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1d0764:
    // 0x1d0764: 0x320f809  jalr        $t9
label_1d0768:
    if (ctx->pc == 0x1D0768u) {
        ctx->pc = 0x1D0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0764u;
        // 0x1d0768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D076Cu;
        goto label_1d076c;
    }
    ctx->pc = 0x1D0764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D076Cu);
        ctx->pc = 0x1D0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0764u;
        // 0x1d0768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0764u, 0x1D076Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D076Cu;
label_1d076c:
    // 0x1d076c: 0x0  nop
    ctx->pc = 0x1d076cu;
    // NOP
label_1d0770:
    // 0x1d0770: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_1d0774:
    if (ctx->pc == 0x1D0774u) {
        ctx->pc = 0x1D0778u;
        goto label_1d0778;
    }
    ctx->pc = 0x1D0770u;
    {
        const bool branch_taken_0x1d0770 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0770) {
            ctx->pc = 0x1D0788u;
            goto label_1d0788;
        }
    }
    ctx->pc = 0x1D0778u;
label_1d0778:
    // 0x1d0778: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x1d0778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1d077c:
    // 0x1d077c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d077cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d0780:
    // 0x1d0780: 0x320f809  jalr        $t9
label_1d0784:
    if (ctx->pc == 0x1D0784u) {
        ctx->pc = 0x1D0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0780u;
        // 0x1d0784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0788u;
        goto label_1d0788;
    }
    ctx->pc = 0x1D0780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0788u);
        ctx->pc = 0x1D0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0780u;
        // 0x1d0784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0780u, 0x1D0788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0788u;
label_1d0788:
    // 0x1d0788: 0x1640ffeb  bnez        $s2, . + 4 + (-0x15 << 2)
label_1d078c:
    if (ctx->pc == 0x1D078Cu) {
        ctx->pc = 0x1D078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0788u;
        // 0x1d078c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0790u;
        goto label_1d0790;
    }
    ctx->pc = 0x1D0788u;
    {
        const bool branch_taken_0x1d0788 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0788u;
        // 0x1d078c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0788) {
            ctx->pc = 0x1D0738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0738;
        }
    }
    ctx->pc = 0x1D0790u;
label_1d0790:
    // 0x1d0790: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d0790u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1d0794:
    // 0x1d0794: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x1d0794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d0798:
    // 0x1d0798: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d0798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1d079c:
    // 0x1d079c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_1d07a0:
    if (ctx->pc == 0x1D07A0u) {
        ctx->pc = 0x1D07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D079Cu;
        // 0x1d07a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07A4u;
        goto label_1d07a4;
    }
    ctx->pc = 0x1D079Cu;
    {
        const bool branch_taken_0x1d079c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D079Cu;
        // 0x1d07a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d079c) {
            ctx->pc = 0x1D0700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0700;
        }
    }
    ctx->pc = 0x1D07A4u;
label_1d07a4:
    // 0x1d07a4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1d07a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1d07a8:
    // 0x1d07a8: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x1d07a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d07ac:
    // 0x1d07ac: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_1d07b0:
    if (ctx->pc == 0x1D07B0u) {
        ctx->pc = 0x1D07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07ACu;
        // 0x1d07b0: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07B4u;
        goto label_1d07b4;
    }
    ctx->pc = 0x1D07ACu;
    {
        const bool branch_taken_0x1d07ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07ACu;
        // 0x1d07b0: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07ac) {
            ctx->pc = 0x1D06E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d06e8;
        }
    }
    ctx->pc = 0x1D07B4u;
label_1d07b4:
    // 0x1d07b4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1d07b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_1d07b8:
    // 0x1d07b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d07b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d07bc:
    // 0x1d07bc: 0xc05d4c8  jal         func_175320
label_1d07c0:
    if (ctx->pc == 0x1D07C0u) {
        ctx->pc = 0x1D07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07BCu;
        // 0x1d07c0: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07C4u;
        goto label_1d07c4;
    }
    ctx->pc = 0x1D07BCu;
    SET_GPR_U32(ctx, 31, 0x1D07C4u);
    ctx->pc = 0x1D07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D07BCu;
    // 0x1d07c0: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175320u, 0x1D07BCu, 0x1D07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D07C4u;
label_1d07c4:
    // 0x1d07c4: 0xc0b3af4  jal         func_2CEBD0
label_1d07c8:
    if (ctx->pc == 0x1D07C8u) {
        ctx->pc = 0x1D07CCu;
        goto label_1d07cc;
    }
    ctx->pc = 0x1D07C4u;
    SET_GPR_U32(ctx, 31, 0x1D07CCu);
    ctx->pc = 0x2CEBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBD0u, 0x1D07C4u, 0x1D07CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D07CCu;
label_1d07cc:
    // 0x1d07cc: 0x8f8487e8  lw          $a0, -0x7818($gp)
    ctx->pc = 0x1d07ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936552)));
label_1d07d0:
    // 0x1d07d0: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_1d07d4:
    if (ctx->pc == 0x1D07D4u) {
        ctx->pc = 0x1D07D8u;
        goto label_1d07d8;
    }
    ctx->pc = 0x1D07D0u;
    {
        const bool branch_taken_0x1d07d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d07d0) {
            ctx->pc = 0x1D0860u;
            goto label_1d0860;
        }
    }
    ctx->pc = 0x1D07D8u;
label_1d07d8:
    // 0x1d07d8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1d07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1d07dc:
    // 0x1d07dc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1d07dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1d07e0:
    // 0x1d07e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1d07e4:
    if (ctx->pc == 0x1D07E4u) {
        ctx->pc = 0x1D07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07E0u;
        // 0x1d07e4: 0x24860014  addiu       $a2, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07E8u;
        goto label_1d07e8;
    }
    ctx->pc = 0x1D07E0u;
    {
        const bool branch_taken_0x1d07e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07E0u;
        // 0x1d07e4: 0x24860014  addiu       $a2, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07e0) {
            ctx->pc = 0x1D07F8u;
            goto label_1d07f8;
        }
    }
    ctx->pc = 0x1D07E8u;
label_1d07e8:
    // 0x1d07e8: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x1d07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
label_1d07ec:
    // 0x1d07ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d07f0:
    if (ctx->pc == 0x1D07F0u) {
        ctx->pc = 0x1D07F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07ECu;
        // 0x1d07f0: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07F4u;
        goto label_1d07f4;
    }
    ctx->pc = 0x1D07ECu;
    {
        const bool branch_taken_0x1d07ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07ECu;
        // 0x1d07f0: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07ec) {
            ctx->pc = 0x1D0810u;
            goto label_1d0810;
        }
    }
    ctx->pc = 0x1D07F4u;
label_1d07f4:
    // 0x1d07f4: 0x0  nop
    ctx->pc = 0x1d07f4u;
    // NOP
label_1d07f8:
    // 0x1d07f8: 0xaf9087e8  sw          $s0, -0x7818($gp)
    ctx->pc = 0x1d07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936552), GPR_U32(ctx, 16));
label_1d07fc:
    // 0x1d07fc: 0x8f8387e8  lw          $v1, -0x7818($gp)
    ctx->pc = 0x1d07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936552)));
label_1d0800:
    // 0x1d0800: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d0804:
    if (ctx->pc == 0x1D0804u) {
        ctx->pc = 0x1D0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0800u;
        // 0x1d0804: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0808u;
        goto label_1d0808;
    }
    ctx->pc = 0x1D0800u;
    {
        const bool branch_taken_0x1d0800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0800u;
        // 0x1d0804: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0800) {
            ctx->pc = 0x1D0810u;
            goto label_1d0810;
        }
    }
    ctx->pc = 0x1D0808u;
label_1d0808:
    // 0x1d0808: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1d0808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_1d080c:
    // 0x1d080c: 0x0  nop
    ctx->pc = 0x1d080cu;
    // NOP
label_1d0810:
    // 0x1d0810: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d0810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d0814:
    // 0x1d0814: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1d0818:
    if (ctx->pc == 0x1D0818u) {
        ctx->pc = 0x1D081Cu;
        goto label_1d081c;
    }
    ctx->pc = 0x1D0814u;
    {
        const bool branch_taken_0x1d0814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0814) {
            ctx->pc = 0x1D0828u;
            goto label_1d0828;
        }
    }
    ctx->pc = 0x1D081Cu;
label_1d081c:
    // 0x1d081c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d0820:
    // 0x1d0820: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d0824:
    if (ctx->pc == 0x1D0824u) {
        ctx->pc = 0x1D0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0820u;
        // 0x1d0824: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0828u;
        goto label_1d0828;
    }
    ctx->pc = 0x1D0820u;
    {
        const bool branch_taken_0x1d0820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0820u;
        // 0x1d0824: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0820) {
            ctx->pc = 0x1D0840u;
            goto label_1d0840;
        }
    }
    ctx->pc = 0x1D0828u;
label_1d0828:
    // 0x1d0828: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d0828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d082c:
    // 0x1d082c: 0xaf8387ec  sw          $v1, -0x7814($gp)
    ctx->pc = 0x1d082cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936556), GPR_U32(ctx, 3));
label_1d0830:
    // 0x1d0830: 0x8f8387ec  lw          $v1, -0x7814($gp)
    ctx->pc = 0x1d0830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936556)));
label_1d0834:
    // 0x1d0834: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d0838:
    if (ctx->pc == 0x1D0838u) {
        ctx->pc = 0x1D083Cu;
        goto label_1d083c;
    }
    ctx->pc = 0x1D0834u;
    {
        const bool branch_taken_0x1d0834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0834) {
            ctx->pc = 0x1D0840u;
            goto label_1d0840;
        }
    }
    ctx->pc = 0x1D083Cu;
label_1d083c:
    // 0x1d083c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1d083cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_1d0840:
    // 0x1d0840: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d0844:
    if (ctx->pc == 0x1D0844u) {
        ctx->pc = 0x1D0848u;
        goto label_1d0848;
    }
    ctx->pc = 0x1D0840u;
    {
        const bool branch_taken_0x1d0840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0840) {
            ctx->pc = 0x1D0858u;
            goto label_1d0858;
        }
    }
    ctx->pc = 0x1D0848u;
label_1d0848:
    // 0x1d0848: 0x8c990034  lw          $t9, 0x34($a0)
    ctx->pc = 0x1d0848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1d084c:
    // 0x1d084c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1d084cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1d0850:
    // 0x1d0850: 0x320f809  jalr        $t9
label_1d0854:
    if (ctx->pc == 0x1D0854u) {
        ctx->pc = 0x1D0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0850u;
        // 0x1d0854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0858u;
        goto label_1d0858;
    }
    ctx->pc = 0x1D0850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0858u);
        ctx->pc = 0x1D0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0850u;
        // 0x1d0854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0850u, 0x1D0858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0858u;
label_1d0858:
    // 0x1d0858: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
label_1d085c:
    if (ctx->pc == 0x1D085Cu) {
        ctx->pc = 0x1D085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0858u;
        // 0x1d085c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0860u;
        goto label_1d0860;
    }
    ctx->pc = 0x1D0858u;
    {
        const bool branch_taken_0x1d0858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0858u;
        // 0x1d085c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0858) {
            ctx->pc = 0x1D07D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d07d8;
        }
    }
    ctx->pc = 0x1D0860u;
label_1d0860:
    // 0x1d0860: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d0860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d0864:
    // 0x1d0864: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d0864u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d0868:
    // 0x1d0868: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d0868u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d086c:
    // 0x1d086c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d086cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d0870:
    // 0x1d0870: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d0870u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d0874:
    // 0x1d0874: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d0874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d0878:
    // 0x1d0878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d0878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d087c:
    // 0x1d087c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d087cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0880:
    // 0x1d0880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0884:
    // 0x1d0884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0888:
    // 0x1d0888: 0x3e00008  jr          $ra
label_1d088c:
    if (ctx->pc == 0x1D088Cu) {
        ctx->pc = 0x1D088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0888u;
        // 0x1d088c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0890u;
        goto label_fallthrough_0x1d0888;
    }
    ctx->pc = 0x1D0888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0888u;
        // 0x1d088c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d0888:
    ctx->pc = 0x1D0890u;
}

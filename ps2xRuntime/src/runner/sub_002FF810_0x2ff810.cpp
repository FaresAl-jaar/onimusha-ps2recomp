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

// Function: sub_002FF810
// Address: 0x2ff810 - 0x2ff8ec
void sub_002FF810_0x2ff810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF810_0x2ff810");
#endif

    switch (ctx->pc) {
        case 0x2ff810u: goto label_2ff810;
        case 0x2ff814u: goto label_2ff814;
        case 0x2ff818u: goto label_2ff818;
        case 0x2ff81cu: goto label_2ff81c;
        case 0x2ff820u: goto label_2ff820;
        case 0x2ff824u: goto label_2ff824;
        case 0x2ff828u: goto label_2ff828;
        case 0x2ff82cu: goto label_2ff82c;
        case 0x2ff830u: goto label_2ff830;
        case 0x2ff834u: goto label_2ff834;
        case 0x2ff838u: goto label_2ff838;
        case 0x2ff83cu: goto label_2ff83c;
        case 0x2ff840u: goto label_2ff840;
        case 0x2ff844u: goto label_2ff844;
        case 0x2ff848u: goto label_2ff848;
        case 0x2ff84cu: goto label_2ff84c;
        case 0x2ff850u: goto label_2ff850;
        case 0x2ff854u: goto label_2ff854;
        case 0x2ff858u: goto label_2ff858;
        case 0x2ff85cu: goto label_2ff85c;
        case 0x2ff860u: goto label_2ff860;
        case 0x2ff864u: goto label_2ff864;
        case 0x2ff868u: goto label_2ff868;
        case 0x2ff86cu: goto label_2ff86c;
        case 0x2ff870u: goto label_2ff870;
        case 0x2ff874u: goto label_2ff874;
        case 0x2ff878u: goto label_2ff878;
        case 0x2ff87cu: goto label_2ff87c;
        case 0x2ff880u: goto label_2ff880;
        case 0x2ff884u: goto label_2ff884;
        case 0x2ff888u: goto label_2ff888;
        case 0x2ff88cu: goto label_2ff88c;
        case 0x2ff890u: goto label_2ff890;
        case 0x2ff894u: goto label_2ff894;
        case 0x2ff898u: goto label_2ff898;
        case 0x2ff89cu: goto label_2ff89c;
        case 0x2ff8a0u: goto label_2ff8a0;
        case 0x2ff8a4u: goto label_2ff8a4;
        case 0x2ff8a8u: goto label_2ff8a8;
        case 0x2ff8acu: goto label_2ff8ac;
        case 0x2ff8b0u: goto label_2ff8b0;
        case 0x2ff8b4u: goto label_2ff8b4;
        case 0x2ff8b8u: goto label_2ff8b8;
        case 0x2ff8bcu: goto label_2ff8bc;
        case 0x2ff8c0u: goto label_2ff8c0;
        case 0x2ff8c4u: goto label_2ff8c4;
        case 0x2ff8c8u: goto label_2ff8c8;
        case 0x2ff8ccu: goto label_2ff8cc;
        case 0x2ff8d0u: goto label_2ff8d0;
        case 0x2ff8d4u: goto label_2ff8d4;
        case 0x2ff8d8u: goto label_2ff8d8;
        case 0x2ff8dcu: goto label_2ff8dc;
        case 0x2ff8e0u: goto label_2ff8e0;
        case 0x2ff8e4u: goto label_2ff8e4;
        case 0x2ff8e8u: goto label_2ff8e8;
        default: break;
    }

    ctx->pc = 0x2ff810u;

label_2ff810:
    // 0x2ff810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ff814:
    // 0x2ff814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ff814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ff818:
    // 0x2ff818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ff81c:
    // 0x2ff81c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ff820:
    // 0x2ff820: 0x8cb1004c  lw          $s1, 0x4C($a1)
    ctx->pc = 0x2ff820u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_2ff824:
    // 0x2ff824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff828:
    // 0x2ff828: 0xc0743c0  jal         func_1D0F00
label_2ff82c:
    if (ctx->pc == 0x2FF82Cu) {
        ctx->pc = 0x2FF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF828u;
        // 0x2ff82c: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF830u;
        goto label_2ff830;
    }
    ctx->pc = 0x2FF828u;
    SET_GPR_U32(ctx, 31, 0x2FF830u);
    ctx->pc = 0x2FF82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF828u;
    // 0x2ff82c: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x2FF828u, 0x2FF830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF830u;
label_2ff830:
    // 0x2ff830: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ff834:
    if (ctx->pc == 0x2FF834u) {
        ctx->pc = 0x2FF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF830u;
        // 0x2ff834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF838u;
        goto label_2ff838;
    }
    ctx->pc = 0x2FF830u;
    {
        const bool branch_taken_0x2ff830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF830u;
        // 0x2ff834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff830) {
            ctx->pc = 0x2FF840u;
            goto label_2ff840;
        }
    }
    ctx->pc = 0x2FF838u;
label_2ff838:
    // 0x2ff838: 0xc096b54  jal         func_25AD50
label_2ff83c:
    if (ctx->pc == 0x2FF83Cu) {
        ctx->pc = 0x2FF840u;
        goto label_2ff840;
    }
    ctx->pc = 0x2FF838u;
    SET_GPR_U32(ctx, 31, 0x2FF840u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2FF838u, 0x2FF840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF840u;
label_2ff840:
    // 0x2ff840: 0x92030098  lbu         $v1, 0x98($s0)
    ctx->pc = 0x2ff840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
label_2ff844:
    // 0x2ff844: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x2ff844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2ff848:
    // 0x2ff848: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2ff848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2ff84c:
    // 0x2ff84c: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x2ff84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_2ff850:
    // 0x2ff850: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2ff850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2ff854:
    // 0x2ff854: 0xc07679c  jal         func_1D9E70
label_2ff858:
    if (ctx->pc == 0x2FF858u) {
        ctx->pc = 0x2FF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF854u;
        // 0x2ff858: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF85Cu;
        goto label_2ff85c;
    }
    ctx->pc = 0x2FF854u;
    SET_GPR_U32(ctx, 31, 0x2FF85Cu);
    ctx->pc = 0x2FF858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF854u;
    // 0x2ff858: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x2FF854u, 0x2FF85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF85Cu;
label_2ff85c:
    // 0x2ff85c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2ff85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2ff860:
    // 0x2ff860: 0x26050088  addiu       $a1, $s0, 0x88
    ctx->pc = 0x2ff860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_2ff864:
    // 0x2ff864: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x2ff864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2ff868:
    // 0x2ff868: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x2ff868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_2ff86c:
    // 0x2ff86c: 0x260700e0  addiu       $a3, $s0, 0xE0
    ctx->pc = 0x2ff86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_2ff870:
    // 0x2ff870: 0x26080090  addiu       $t0, $s0, 0x90
    ctx->pc = 0x2ff870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2ff874:
    // 0x2ff874: 0x904a0008  lbu         $t2, 0x8($v0)
    ctx->pc = 0x2ff874u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_2ff878:
    // 0x2ff878: 0xc07692c  jal         func_1DA4B0
label_2ff87c:
    if (ctx->pc == 0x2FF87Cu) {
        ctx->pc = 0x2FF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF878u;
        // 0x2ff87c: 0x26090040  addiu       $t1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF880u;
        goto label_2ff880;
    }
    ctx->pc = 0x2FF878u;
    SET_GPR_U32(ctx, 31, 0x2FF880u);
    ctx->pc = 0x2FF87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF878u;
    // 0x2ff87c: 0x26090040  addiu       $t1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA4B0u, 0x2FF878u, 0x2FF880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF880u;
label_2ff880:
    // 0x2ff880: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2ff880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2ff884:
    // 0x2ff884: 0xc076664  jal         func_1D9990
label_2ff888:
    if (ctx->pc == 0x2FF888u) {
        ctx->pc = 0x2FF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF884u;
        // 0x2ff888: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF88Cu;
        goto label_2ff88c;
    }
    ctx->pc = 0x2FF884u;
    SET_GPR_U32(ctx, 31, 0x2FF88Cu);
    ctx->pc = 0x2FF888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF884u;
    // 0x2ff888: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x2FF884u, 0x2FF88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF88Cu;
label_2ff88c:
    // 0x2ff88c: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x2ff88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
label_2ff890:
    // 0x2ff890: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x2ff890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_2ff894:
    // 0x2ff894: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff898:
    // 0x2ff898: 0x0  nop
    ctx->pc = 0x2ff898u;
    // NOP
label_2ff89c:
    // 0x2ff89c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ff89cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff8a0:
    // 0x2ff8a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2ff8a4:
    if (ctx->pc == 0x2FF8A4u) {
        ctx->pc = 0x2FF8A8u;
        goto label_2ff8a8;
    }
    ctx->pc = 0x2FF8A0u;
    {
        const bool branch_taken_0x2ff8a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff8a0) {
            ctx->pc = 0x2FF8B8u;
            goto label_2ff8b8;
        }
    }
    ctx->pc = 0x2FF8A8u;
label_2ff8a8:
    // 0x2ff8a8: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x2ff8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2ff8ac:
    // 0x2ff8ac: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2ff8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2ff8b0:
    // 0x2ff8b0: 0x320f809  jalr        $t9
label_2ff8b4:
    if (ctx->pc == 0x2FF8B4u) {
        ctx->pc = 0x2FF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8B0u;
        // 0x2ff8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8B8u;
        goto label_2ff8b8;
    }
    ctx->pc = 0x2FF8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF8B8u);
        ctx->pc = 0x2FF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8B0u;
        // 0x2ff8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF8B0u, 0x2FF8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF8B8u;
label_2ff8b8:
    // 0x2ff8b8: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x2ff8b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_2ff8bc:
    // 0x2ff8bc: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x2ff8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
label_2ff8c0:
    // 0x2ff8c0: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x2ff8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_2ff8c4:
    // 0x2ff8c4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2ff8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2ff8c8:
    // 0x2ff8c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2ff8cc:
    if (ctx->pc == 0x2FF8CCu) {
        ctx->pc = 0x2FF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8C8u;
        // 0x2ff8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8D0u;
        goto label_2ff8d0;
    }
    ctx->pc = 0x2FF8C8u;
    {
        const bool branch_taken_0x2ff8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8C8u;
        // 0x2ff8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8c8) {
            ctx->pc = 0x2FF8D8u;
            goto label_2ff8d8;
        }
    }
    ctx->pc = 0x2FF8D0u;
label_2ff8d0:
    // 0x2ff8d0: 0xc096b58  jal         func_25AD60
label_2ff8d4:
    if (ctx->pc == 0x2FF8D4u) {
        ctx->pc = 0x2FF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8D0u;
        // 0x2ff8d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8D8u;
        goto label_2ff8d8;
    }
    ctx->pc = 0x2FF8D0u;
    SET_GPR_U32(ctx, 31, 0x2FF8D8u);
    ctx->pc = 0x2FF8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF8D0u;
    // 0x2ff8d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x2FF8D0u, 0x2FF8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8D8u;
label_2ff8d8:
    // 0x2ff8d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ff8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff8dc:
    // 0x2ff8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff8e0:
    // 0x2ff8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff8e4:
    // 0x2ff8e4: 0x3e00008  jr          $ra
label_2ff8e8:
    if (ctx->pc == 0x2FF8E8u) {
        ctx->pc = 0x2FF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8E4u;
        // 0x2ff8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF8ECu;
        goto label_fallthrough_0x2ff8e4;
    }
    ctx->pc = 0x2FF8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8E4u;
        // 0x2ff8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ff8e4:
    ctx->pc = 0x2FF8ECu;
}

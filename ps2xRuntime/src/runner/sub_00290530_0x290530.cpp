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

// Function: sub_00290530
// Address: 0x290530 - 0x290efc
void sub_00290530_0x290530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290530_0x290530");
#endif

    switch (ctx->pc) {
        case 0x290634u: goto label_290634;
        case 0x290648u: goto label_290648;
        case 0x290664u: goto label_290664;
        case 0x2906e0u: goto label_2906e0;
        case 0x2906f4u: goto label_2906f4;
        case 0x290710u: goto label_290710;
        case 0x290790u: goto label_290790;
        case 0x2907a4u: goto label_2907a4;
        case 0x2907b0u: goto label_2907b0;
        case 0x2907bcu: goto label_2907bc;
        case 0x2907d0u: goto label_2907d0;
        case 0x29085cu: goto label_29085c;
        case 0x290878u: goto label_290878;
        case 0x290890u: goto label_290890;
        case 0x2908d4u: goto label_2908d4;
        case 0x290920u: goto label_290920;
        case 0x290934u: goto label_290934;
        case 0x2909c0u: goto label_2909c0;
        case 0x2909e4u: goto label_2909e4;
        case 0x290ac4u: goto label_290ac4;
        case 0x290b00u: goto label_290b00;
        case 0x290b50u: goto label_290b50;
        case 0x290bc4u: goto label_290bc4;
        case 0x290becu: goto label_290bec;
        case 0x290c2cu: goto label_290c2c;
        case 0x290c4cu: goto label_290c4c;
        case 0x290c98u: goto label_290c98;
        case 0x290cb4u: goto label_290cb4;
        case 0x290d20u: goto label_290d20;
        case 0x290d7cu: goto label_290d7c;
        case 0x290e08u: goto label_290e08;
        case 0x290e80u: goto label_290e80;
        case 0x290eacu: goto label_290eac;
        case 0x290ed8u: goto label_290ed8;
        default: break;
    }

    ctx->pc = 0x290530u;

    // 0x290530: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x290534: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x290534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290538: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x290538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29053c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x29053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x290540: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x290540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x290544: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x290544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x290548: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x290548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29054c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29054cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x290550: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x290550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x290554: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x290554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x290558: 0x2c610013  sltiu       $at, $v1, 0x13
    ctx->pc = 0x290558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x29055c: 0x1020025e  beqz        $at, . + 4 + (0x25E << 2)
    ctx->pc = 0x29055Cu;
    {
        const bool branch_taken_0x29055c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x290560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29055Cu;
        // 0x290560: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29055c) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290564u;
    // 0x290564: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x290564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x290568: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x290568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29056c: 0x24846d70  addiu       $a0, $a0, 0x6D70
    ctx->pc = 0x29056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28016));
    // 0x290570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290574: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x290574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x290578: 0x600008  jr          $v1
    ctx->pc = 0x290578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290580u: goto label_290580;
            case 0x290880u: goto label_290880;
            case 0x290898u: goto label_290898;
            case 0x290A80u: goto label_290a80;
            case 0x290B58u: goto label_290b58;
            case 0x290BD0u: goto label_290bd0;
            case 0x290BF8u: goto label_290bf8;
            case 0x290C38u: goto label_290c38;
            case 0x290C58u: goto label_290c58;
            case 0x290CA0u: goto label_290ca0;
            case 0x290CC0u: goto label_290cc0;
            case 0x290CE0u: goto label_290ce0;
            case 0x290E38u: goto label_290e38;
            case 0x290ED8u: goto label_290ed8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290578u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290580u;
label_290580:
    // 0x290580: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x290580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290584: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x290584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x290588: 0x10830093  beq         $a0, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x290588u;
    {
        const bool branch_taken_0x290588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290588u;
        // 0x29058c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290588) {
            ctx->pc = 0x2907D8u;
            goto label_2907d8;
        }
    }
    ctx->pc = 0x290590u;
    // 0x290590: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x290590u;
    {
        const bool branch_taken_0x290590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x290590) {
            ctx->pc = 0x290718u;
            goto label_290718;
        }
    }
    ctx->pc = 0x290598u;
    // 0x290598: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x290598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29059c: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x29059Cu;
    {
        const bool branch_taken_0x29059c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2905A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29059Cu;
        // 0x2905a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29059c) {
            ctx->pc = 0x290670u;
            goto label_290670;
        }
    }
    ctx->pc = 0x2905A4u;
    // 0x2905a4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2905A4u;
    {
        const bool branch_taken_0x2905a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2905a4) {
            ctx->pc = 0x2905B8u;
            goto label_2905b8;
        }
    }
    ctx->pc = 0x2905ACu;
    // 0x2905ac: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x2905ACu;
    {
        const bool branch_taken_0x2905ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2905ac) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x2905B4u;
    // 0x2905b4: 0x0  nop
    ctx->pc = 0x2905b4u;
    // NOP
label_2905b8:
    // 0x2905b8: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2905b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2905bc: 0xc4450040  lwc1        $f5, 0x40($v0)
    ctx->pc = 0x2905bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2905c0: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x2905c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
    // 0x2905c4: 0xc4440044  lwc1        $f4, 0x44($v0)
    ctx->pc = 0x2905c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2905c8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2905c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2905cc: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x2905ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2905d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2905d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905d4: 0xc442004c  lwc1        $f2, 0x4C($v0)
    ctx->pc = 0x2905d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2905d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2905d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2905dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2905e0: 0x2610eee0  addiu       $s0, $s0, -0x1120
    ctx->pc = 0x2905e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962912));
    // 0x2905e4: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x2905e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x2905e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2905e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2905ec: 0xe4c50000  swc1        $f5, 0x0($a2)
    ctx->pc = 0x2905ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2905f0: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x2905f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2905f4: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x2905f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2905f8: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x2905f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2905fc: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x2905fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290600: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x290600u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290604: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x290604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x290608: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29060c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29060cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290610: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x290610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x290614: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x290614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x290618: 0x0  nop
    ctx->pc = 0x290618u;
    // NOP
    // 0x29061c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x290620: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x290620u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x290624: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x290624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x290628: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x290628u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29062c: 0xc099b04  jal         func_266C10
    ctx->pc = 0x29062Cu;
    SET_GPR_U32(ctx, 31, 0x290634u);
    ctx->pc = 0x290630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29062Cu;
    // 0x290630: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x29062Cu, 0x290634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290634u;
label_290634:
    // 0x290634: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x290634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290638: 0x12200227  beqz        $s1, . + 4 + (0x227 << 2)
    ctx->pc = 0x290638u;
    {
        const bool branch_taken_0x290638 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290638u;
        // 0x29063c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290638) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290640u;
    // 0x290640: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x290640u;
    SET_GPR_U32(ctx, 31, 0x290648u);
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x290640u, 0x290648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290648u;
label_290648:
    // 0x290648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29064c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29064cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290650: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x290650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290654: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x290654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290658: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x290658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29065c: 0xc0ab47c  jal         func_2AD1F0
    ctx->pc = 0x29065Cu;
    SET_GPR_U32(ctx, 31, 0x290664u);
    ctx->pc = 0x290660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29065Cu;
    // 0x290660: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD1F0u, 0x29065Cu, 0x290664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290664u;
label_290664:
    // 0x290664: 0x1000021c  b           . + 4 + (0x21C << 2)
    ctx->pc = 0x290664u;
    {
        const bool branch_taken_0x290664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290664) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x29066Cu;
    // 0x29066c: 0x0  nop
    ctx->pc = 0x29066cu;
    // NOP
label_290670:
    // 0x290670: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x290670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x290674: 0xc4450040  lwc1        $f5, 0x40($v0)
    ctx->pc = 0x290674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x290678: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x290678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29067c: 0xc4440044  lwc1        $f4, 0x44($v0)
    ctx->pc = 0x29067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290684: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x290684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29068c: 0xc442004c  lwc1        $f2, 0x4C($v0)
    ctx->pc = 0x29068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290690: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x290690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290694: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x290694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x290698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29069c: 0xe4c50000  swc1        $f5, 0x0($a2)
    ctx->pc = 0x29069cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2906a0: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x2906a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2906a4: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x2906a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2906a8: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x2906a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2906ac: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x2906acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2906b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2906b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2906b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2906b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2906b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2906b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2906bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2906bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2906c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2906c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2906c4: 0x0  nop
    ctx->pc = 0x2906c4u;
    // NOP
    // 0x2906c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2906c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2906cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2906ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2906d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2906d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2906d4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x2906d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2906d8: 0xc099b04  jal         func_266C10
    ctx->pc = 0x2906D8u;
    SET_GPR_U32(ctx, 31, 0x2906E0u);
    ctx->pc = 0x2906DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2906D8u;
    // 0x2906dc: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x2906D8u, 0x2906E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2906E0u;
label_2906e0:
    // 0x2906e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2906e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906e4: 0x120001fc  beqz        $s0, . + 4 + (0x1FC << 2)
    ctx->pc = 0x2906E4u;
    {
        const bool branch_taken_0x2906e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906E4u;
        // 0x2906e8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906e4) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x2906ECu;
    // 0x2906ec: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x2906ECu;
    SET_GPR_U32(ctx, 31, 0x2906F4u);
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x2906ECu, 0x2906F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2906F4u;
label_2906f4:
    // 0x2906f4: 0x8e480044  lw          $t0, 0x44($s2)
    ctx->pc = 0x2906f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2906f8: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x2906f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
    // 0x2906fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2906fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290700: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x290700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290704: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x290704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290708: 0xc0cf4d0  jal         func_33D340
    ctx->pc = 0x290708u;
    SET_GPR_U32(ctx, 31, 0x290710u);
    ctx->pc = 0x29070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290708u;
    // 0x29070c: 0x24e7ef90  addiu       $a3, $a3, -0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D340u, 0x290708u, 0x290710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290710u;
label_290710:
    // 0x290710: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x290710u;
    {
        const bool branch_taken_0x290710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290710) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290718u;
label_290718:
    // 0x290718: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x290718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x29071c: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x29071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290720: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x290720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x290724: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x290724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290728: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x290728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29072c: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x29072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290734: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x290734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29073c: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x29073cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x290740: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x290740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x290744: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x290744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x290748: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x290748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x29074c: 0xc4430050  lwc1        $f3, 0x50($v0)
    ctx->pc = 0x29074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290750: 0xc4420054  lwc1        $f2, 0x54($v0)
    ctx->pc = 0x290750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290754: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x290754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290758: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x290758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29075c: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x29075cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x290760: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x290760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x290764: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x290764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x290768: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x290768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x29076c: 0xc4430060  lwc1        $f3, 0x60($v0)
    ctx->pc = 0x29076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290770: 0xc4420064  lwc1        $f2, 0x64($v0)
    ctx->pc = 0x290770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290774: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x290774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290778: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x290778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29077c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x29077cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290780: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x290780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x290784: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x290784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x290788: 0xc099b04  jal         func_266C10
    ctx->pc = 0x290788u;
    SET_GPR_U32(ctx, 31, 0x290790u);
    ctx->pc = 0x29078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290788u;
    // 0x29078c: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x290788u, 0x290790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290790u;
label_290790:
    // 0x290790: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x290790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290794: 0x124001d0  beqz        $s2, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x290794u;
    {
        const bool branch_taken_0x290794 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x290798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290794u;
        // 0x290798: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290794) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x29079Cu;
    // 0x29079c: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x29079Cu;
    SET_GPR_U32(ctx, 31, 0x2907A4u);
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x29079Cu, 0x2907A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907A4u;
label_2907a4:
    // 0x2907a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2907a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907a8: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x2907A8u;
    SET_GPR_U32(ctx, 31, 0x2907B0u);
    ctx->pc = 0x2907ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2907A8u;
    // 0x2907ac: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x2907A8u, 0x2907B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907B0u;
label_2907b0:
    // 0x2907b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2907b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907b4: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x2907B4u;
    SET_GPR_U32(ctx, 31, 0x2907BCu);
    ctx->pc = 0x2907B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2907B4u;
    // 0x2907b8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x2907B4u, 0x2907BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907BCu;
label_2907bc:
    // 0x2907bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2907bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2907c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2907c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907c8: 0xc0cf3d8  jal         func_33CF60
    ctx->pc = 0x2907C8u;
    SET_GPR_U32(ctx, 31, 0x2907D0u);
    ctx->pc = 0x2907CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2907C8u;
    // 0x2907cc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF60u, 0x2907C8u, 0x2907D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907D0u;
label_2907d0:
    // 0x2907d0: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x2907D0u;
    {
        const bool branch_taken_0x2907d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2907d0) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x2907D8u;
label_2907d8:
    // 0x2907d8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2907d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2907dc: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x2907dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2907e0: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2907e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2907e4: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x2907e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2907e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2907e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907ec: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x2907ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2907f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2907f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907f4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2907f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2907f8: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x2907f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2907fc: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x2907fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x290800: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x290800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x290804: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x290804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x290808: 0xc4430050  lwc1        $f3, 0x50($v0)
    ctx->pc = 0x290808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29080c: 0xc4420054  lwc1        $f2, 0x54($v0)
    ctx->pc = 0x29080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290810: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x290810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290814: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x290814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290818: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x290818u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29081c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x29081cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x290820: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x290820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x290824: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x290824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x290828: 0xc7a500e0  lwc1        $f5, 0xE0($sp)
    ctx->pc = 0x290828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29082c: 0xc7a400e4  lwc1        $f4, 0xE4($sp)
    ctx->pc = 0x29082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290830: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x290830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290834: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x290834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290838: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x290838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29083c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x29083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290840: 0xe7a500b0  swc1        $f5, 0xB0($sp)
    ctx->pc = 0x290840u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x290844: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x290844u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x290848: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x290848u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29084c: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x29084cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x290850: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x290850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x290854: 0xc099b04  jal         func_266C10
    ctx->pc = 0x290854u;
    SET_GPR_U32(ctx, 31, 0x29085Cu);
    ctx->pc = 0x290858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290854u;
    // 0x290858: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x290854u, 0x29085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29085Cu;
label_29085c:
    // 0x29085c: 0x1040019e  beqz        $v0, . + 4 + (0x19E << 2)
    ctx->pc = 0x29085Cu;
    {
        const bool branch_taken_0x29085c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29085Cu;
        // 0x290860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29085c) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290864u;
    // 0x290864: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x290864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x290868: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29086c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29086cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290870: 0xc0ab36c  jal         func_2ACDB0
    ctx->pc = 0x290870u;
    SET_GPR_U32(ctx, 31, 0x290878u);
    ctx->pc = 0x290874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290870u;
    // 0x290874: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDB0u, 0x290870u, 0x290878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290878u;
label_290878:
    // 0x290878: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x290878u;
    {
        const bool branch_taken_0x290878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290878) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290880u;
label_290880:
    // 0x290880: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x290880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x290884: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x290884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x290888: 0xc0a3b58  jal         func_28ED60
    ctx->pc = 0x290888u;
    SET_GPR_U32(ctx, 31, 0x290890u);
    ctx->pc = 0x29088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290888u;
    // 0x29088c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED60u, 0x290888u, 0x290890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290890u;
label_290890:
    // 0x290890: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x290890u;
    {
        const bool branch_taken_0x290890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290890) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290898u;
label_290898:
    // 0x290898: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x290898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29089c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x29089cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2908a0: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x2908a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2908a4: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x2908A4u;
    {
        const bool branch_taken_0x2908a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908A4u;
        // 0x2908a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908a4) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x2908ACu;
    // 0x2908ac: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2908acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2908b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2908b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2908b4: 0x24846d40  addiu       $a0, $a0, 0x6D40
    ctx->pc = 0x2908b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27968));
    // 0x2908b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2908b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2908bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2908bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2908c0: 0x600008  jr          $v1
    ctx->pc = 0x2908C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2908C8u: goto label_2908c8;
            case 0x2908E8u: goto label_2908e8;
            case 0x290960u: goto label_290960;
            case 0x2909B0u: goto label_2909b0;
            case 0x2909D8u: goto label_2909d8;
            case 0x2909F8u: goto label_2909f8;
            case 0x290A00u: goto label_290a00;
            case 0x290A40u: goto label_290a40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2908C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2908C8u;
label_2908c8:
    // 0x2908c8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2908c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2908cc: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x2908CCu;
    SET_GPR_U32(ctx, 31, 0x2908D4u);
    ctx->pc = 0x2908D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2908CCu;
    // 0x2908d0: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x2908CCu, 0x2908D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2908D4u;
label_2908d4:
    // 0x2908d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2908d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2908d8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2908d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2908dc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2908DCu;
    {
        const bool branch_taken_0x2908dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2908dc) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x2908E4u;
    // 0x2908e4: 0x0  nop
    ctx->pc = 0x2908e4u;
    // NOP
label_2908e8:
    // 0x2908e8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2908e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2908ec: 0x8c2321b0  lw          $v1, 0x21B0($at)
    ctx->pc = 0x2908ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D21B0u));
    // 0x2908f0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2908f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2908f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2908F4u;
    {
        const bool branch_taken_0x2908f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2908f4) {
            ctx->pc = 0x290908u;
            goto label_290908;
        }
    }
    ctx->pc = 0x2908FCu;
    // 0x2908fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2908FCu;
    {
        const bool branch_taken_0x2908fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2908fc) {
            ctx->pc = 0x290958u;
            goto label_290958;
        }
    }
    ctx->pc = 0x290904u;
    // 0x290904: 0x0  nop
    ctx->pc = 0x290904u;
    // NOP
label_290908:
    // 0x290908: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x290908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x29090c: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x29090cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x290910: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290914: 0x24a521f0  addiu       $a1, $a1, 0x21F0
    ctx->pc = 0x290914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8688));
    // 0x290918: 0xc0414d0  jal         func_105340
    ctx->pc = 0x290918u;
    SET_GPR_U32(ctx, 31, 0x290920u);
    ctx->pc = 0x29091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290918u;
    // 0x29091c: 0x24c62200  addiu       $a2, $a2, 0x2200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x290918u, 0x290920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290920u;
label_290920:
    // 0x290920: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x290920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290924: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x290924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x290928: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x290928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29092c: 0xc07cd3c  jal         func_1F34F0
    ctx->pc = 0x29092Cu;
    SET_GPR_U32(ctx, 31, 0x290934u);
    ctx->pc = 0x290930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29092Cu;
    // 0x290930: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34F0u, 0x29092Cu, 0x290934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290934u;
label_290934:
    // 0x290934: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x290934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x290938: 0xc42121d0  lwc1        $f1, 0x21D0($at)
    ctx->pc = 0x290938u;
    { uint32_t bits = FAST_READ32(0x8D21D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29093c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29093cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290940: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x290940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290944: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x290944u;
    {
        const bool branch_taken_0x290944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290944) {
            ctx->pc = 0x290958u;
            goto label_290958;
        }
    }
    ctx->pc = 0x29094Cu;
    // 0x29094c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29094Cu;
    {
        const bool branch_taken_0x29094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29094Cu;
        // 0x290950: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29094c) {
            ctx->pc = 0x290958u;
            goto label_290958;
        }
    }
    ctx->pc = 0x290954u;
    // 0x290954: 0x0  nop
    ctx->pc = 0x290954u;
    // NOP
label_290958:
    // 0x290958: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x290958u;
    {
        const bool branch_taken_0x290958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290958) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x290960u;
label_290960:
    // 0x290960: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x290960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290964: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x290964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x290968: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x290968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x29096c: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x29096cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x290970: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x290970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x290974: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x290974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x290978: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x290978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x29097c: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x29097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x290980: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x290980u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x290984: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x290984u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x290988: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x290988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29098c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290990: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x290990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290994: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x290994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x290998: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290998u;
    {
        const bool branch_taken_0x290998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290998) {
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x2909A0u;
    // 0x2909a0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2909A0u;
    {
        const bool branch_taken_0x2909a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909A0u;
        // 0x2909a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909a0) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x2909A8u;
label_2909a8:
    // 0x2909a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2909A8u;
    {
        const bool branch_taken_0x2909a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2909a8) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x2909B0u;
label_2909b0:
    // 0x2909b0: 0x94450010  lhu         $a1, 0x10($v0)
    ctx->pc = 0x2909b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2909b4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2909b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2909b8: 0xc0bcff4  jal         func_2F3FD0
    ctx->pc = 0x2909B8u;
    SET_GPR_U32(ctx, 31, 0x2909C0u);
    ctx->pc = 0x2909BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2909B8u;
    // 0x2909bc: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3FD0u, 0x2909B8u, 0x2909C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909C0u;
label_2909c0:
    // 0x2909c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2909C0u;
    {
        const bool branch_taken_0x2909c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2909c0) {
            ctx->pc = 0x2909D0u;
            goto label_2909d0;
        }
    }
    ctx->pc = 0x2909C8u;
    // 0x2909c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2909C8u;
    {
        const bool branch_taken_0x2909c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909C8u;
        // 0x2909cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909c8) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x2909D0u;
label_2909d0:
    // 0x2909d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2909D0u;
    {
        const bool branch_taken_0x2909d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2909d0) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x2909D8u;
label_2909d8:
    // 0x2909d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2909d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909dc: 0xc099b04  jal         func_266C10
    ctx->pc = 0x2909DCu;
    SET_GPR_U32(ctx, 31, 0x2909E4u);
    ctx->pc = 0x2909E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2909DCu;
    // 0x2909e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x2909DCu, 0x2909E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909E4u;
label_2909e4:
    // 0x2909e4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2909E4u;
    {
        const bool branch_taken_0x2909e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2909e4) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x2909ECu;
    // 0x2909ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2909ECu;
    {
        const bool branch_taken_0x2909ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909ECu;
        // 0x2909f0: 0x90500002  lbu         $s0, 0x2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909ec) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x2909F4u;
    // 0x2909f4: 0x0  nop
    ctx->pc = 0x2909f4u;
    // NOP
label_2909f8:
    // 0x2909f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2909F8u;
    {
        const bool branch_taken_0x2909f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909F8u;
        // 0x2909fc: 0x8e500074  lw          $s0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909f8) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x290A00u;
label_290a00:
    // 0x290a00: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x290a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290a04: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x290a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x290a08: 0x24633100  addiu       $v1, $v1, 0x3100
    ctx->pc = 0x290a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12544));
    // 0x290a0c: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x290a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x290a10: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x290a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x290a14: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x290a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x290a18: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x290a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x290a1c: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x290a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x290a20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x290a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290a28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x290a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290a2c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x290a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x290a30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290A30u;
    {
        const bool branch_taken_0x290a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290a30) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x290A38u;
    // 0x290a38: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x290A38u;
    {
        const bool branch_taken_0x290a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A38u;
        // 0x290a3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a38) {
            ctx->pc = 0x290A40u;
            goto label_290a40;
        }
    }
    ctx->pc = 0x290A40u;
label_290a40:
    // 0x290a40: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290A40u;
    {
        const bool branch_taken_0x290a40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x290a40) {
            ctx->pc = 0x290A50u;
            goto label_290a50;
        }
    }
    ctx->pc = 0x290A48u;
    // 0x290a48: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x290A48u;
    {
        const bool branch_taken_0x290a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A48u;
        // 0x290a4c: 0xae50004c  sw          $s0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a48) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290A50u;
label_290a50:
    // 0x290a50: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x290a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x290a54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290A54u;
    {
        const bool branch_taken_0x290a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A54u;
        // 0x290a58: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a54) {
            ctx->pc = 0x290A68u;
            goto label_290a68;
        }
    }
    ctx->pc = 0x290A5Cu;
    // 0x290a5c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x290a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x290a60: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x290A60u;
    {
        const bool branch_taken_0x290a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A60u;
        // 0x290a64: 0xac50fe4c  sw          $s0, -0x1B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966860), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a60) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290A68u;
label_290a68:
    // 0x290a68: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x290a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x290a6c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x290a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x290a70: 0x2442f8ac  addiu       $v0, $v0, -0x754
    ctx->pc = 0x290a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965420));
    // 0x290a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290a78: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x290A78u;
    {
        const bool branch_taken_0x290a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A78u;
        // 0x290a7c: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a78) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290A80u;
label_290a80:
    // 0x290a80: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x290a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290a84: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x290a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x290a88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x290a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x290a8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x290a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290a90: 0x24c20100  addiu       $v0, $a2, 0x100
    ctx->pc = 0x290a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x290a94: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x290A94u;
    {
        const bool branch_taken_0x290a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x290A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A94u;
        // 0x290a98: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a94) {
            ctx->pc = 0x290B08u;
            goto label_290b08;
        }
    }
    ctx->pc = 0x290A9Cu;
    // 0x290a9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290aa0: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x290AA0u;
    {
        const bool branch_taken_0x290aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x290AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AA0u;
        // 0x290aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290aa0) {
            ctx->pc = 0x290AD0u;
            goto label_290ad0;
        }
    }
    ctx->pc = 0x290AA8u;
    // 0x290aa8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290AA8u;
    {
        const bool branch_taken_0x290aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x290aa8) {
            ctx->pc = 0x290AB8u;
            goto label_290ab8;
        }
    }
    ctx->pc = 0x290AB0u;
    // 0x290ab0: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x290AB0u;
    {
        const bool branch_taken_0x290ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290ab0) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290AB8u;
label_290ab8:
    // 0x290ab8: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x290ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x290abc: 0xc056e04  jal         func_15B810
    ctx->pc = 0x290ABCu;
    SET_GPR_U32(ctx, 31, 0x290AC4u);
    ctx->pc = 0x290AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290ABCu;
    // 0x290ac0: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x290ABCu, 0x290AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AC4u;
label_290ac4:
    // 0x290ac4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x290AC4u;
    {
        const bool branch_taken_0x290ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290ac4) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290ACCu;
    // 0x290acc: 0x0  nop
    ctx->pc = 0x290accu;
    // NOP
label_290ad0:
    // 0x290ad0: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x290ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x290ad4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x290ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x290ad8: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x290ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x290adc: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x290adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x290ae0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290ae4: 0x802027  not         $a0, $a0
    ctx->pc = 0x290ae4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x290ae8: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x290ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x290aec: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x290aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x290af0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x290af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290af4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x290af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x290af8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x290af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x290afc: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_290b00:
    if (ctx->pc == 0x290B00u) {
        ctx->pc = 0x290B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AFCu;
        // 0x290b00: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B04u;
        goto label_fallthrough_0x290afc;
    }
    ctx->pc = 0x290AFCu;
    {
        const bool branch_taken_0x290afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AFCu;
        // 0x290b00: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290afc) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
label_fallthrough_0x290afc:
    ctx->pc = 0x290B04u;
    // 0x290b04: 0x0  nop
    ctx->pc = 0x290b04u;
    // NOP
label_290b08:
    // 0x290b08: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x290b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x290b0c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x290b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x290b10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x290b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290b14: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x290b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x290b18: 0x30a6001f  andi        $a2, $a1, 0x1F
    ctx->pc = 0x290b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x290b1c: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x290b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x290b20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x290b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x290b24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x290b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x290b28: 0xc23006  srlv        $a2, $v0, $a2
    ctx->pc = 0x290b28u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x290b2c: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x290b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x290b30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290B30u;
    {
        const bool branch_taken_0x290b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B30u;
        // 0x290b34: 0xc01027  not         $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b30) {
            ctx->pc = 0x290B48u;
            goto label_290b48;
        }
    }
    ctx->pc = 0x290B38u;
    // 0x290b38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x290b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x290b3c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x290B3Cu;
    {
        const bool branch_taken_0x290b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B3Cu;
        // 0x290b40: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b3c) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290B44u;
    // 0x290b44: 0x0  nop
    ctx->pc = 0x290b44u;
    // NOP
label_290b48:
    // 0x290b48: 0xc056e04  jal         func_15B810
    ctx->pc = 0x290B48u;
    SET_GPR_U32(ctx, 31, 0x290B50u);
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x290B48u, 0x290B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B50u;
label_290b50:
    // 0x290b50: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x290B50u;
    {
        const bool branch_taken_0x290b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290b50) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290B58u;
label_290b58:
    // 0x290b58: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x290b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290b5c: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x290b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x290b60: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x290b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290b64: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x290b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290b68: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x290b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x290b6c: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x290b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b70: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x290b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x290b74: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x290b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x290b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x290b7c: 0x248422b0  addiu       $a0, $a0, 0x22B0
    ctx->pc = 0x290b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8880));
    // 0x290b80: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x290b80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x290b84: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x290b84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x290b88: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x290b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x290b8c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x290b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x290b90: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x290b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290b94: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x290b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b98: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x290b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x290b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x290ba0: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x290ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x290ba4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290ba8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x290ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x290bac: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x290bacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x290bb0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x290bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x290bb4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x290bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x290bb8: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x290bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x290bbc: 0xc0e2780  jal         func_389E00
    ctx->pc = 0x290BBCu;
    SET_GPR_U32(ctx, 31, 0x290BC4u);
    ctx->pc = 0x290BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BBCu;
    // 0x290bc0: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389E00u, 0x290BBCu, 0x290BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BC4u;
label_290bc4:
    // 0x290bc4: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x290BC4u;
    {
        const bool branch_taken_0x290bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290bc4) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290BCCu;
    // 0x290bcc: 0x0  nop
    ctx->pc = 0x290bccu;
    // NOP
label_290bd0:
    // 0x290bd0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x290bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290bd4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x290bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x290bd8: 0x248422b0  addiu       $a0, $a0, 0x22B0
    ctx->pc = 0x290bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8880));
    // 0x290bdc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x290bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x290be0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x290be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x290be4: 0xc0e27e0  jal         func_389F80
    ctx->pc = 0x290BE4u;
    SET_GPR_U32(ctx, 31, 0x290BECu);
    ctx->pc = 0x290BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BE4u;
    // 0x290be8: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x389F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F80u, 0x290BE4u, 0x290BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BECu;
label_290bec:
    // 0x290bec: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x290BECu;
    {
        const bool branch_taken_0x290bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290bec) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290BF4u;
    // 0x290bf4: 0x0  nop
    ctx->pc = 0x290bf4u;
    // NOP
label_290bf8:
    // 0x290bf8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x290bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x290bfc: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x290bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x290c00: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x290c00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x290c04: 0x24843900  addiu       $a0, $a0, 0x3900
    ctx->pc = 0x290c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14592));
    // 0x290c08: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x290c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x290c0c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x290c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290c10: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x290c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x290c14: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x290c14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290c18: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x290c18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x290c1c: 0x8c4a000c  lw          $t2, 0xC($v0)
    ctx->pc = 0x290c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x290c20: 0x8c4b0018  lw          $t3, 0x18($v0)
    ctx->pc = 0x290c20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x290c24: 0xc065758  jal         func_195D60
    ctx->pc = 0x290C24u;
    SET_GPR_U32(ctx, 31, 0x290C2Cu);
    ctx->pc = 0x290C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C24u;
    // 0x290c28: 0x24c6efd0  addiu       $a2, $a2, -0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195D60u, 0x290C24u, 0x290C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C2Cu;
label_290c2c:
    // 0x290c2c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x290C2Cu;
    {
        const bool branch_taken_0x290c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c2c) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290C34u;
    // 0x290c34: 0x0  nop
    ctx->pc = 0x290c34u;
    // NOP
label_290c38:
    // 0x290c38: 0x90450010  lbu         $a1, 0x10($v0)
    ctx->pc = 0x290c38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290c3c: 0x90460014  lbu         $a2, 0x14($v0)
    ctx->pc = 0x290c3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x290c40: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x290c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x290c44: 0xc05d6a0  jal         func_175A80
    ctx->pc = 0x290C44u;
    SET_GPR_U32(ctx, 31, 0x290C4Cu);
    ctx->pc = 0x290C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C44u;
    // 0x290c48: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A80u, 0x290C44u, 0x290C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C4Cu;
label_290c4c:
    // 0x290c4c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x290C4Cu;
    {
        const bool branch_taken_0x290c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c4c) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290C54u;
    // 0x290c54: 0x0  nop
    ctx->pc = 0x290c54u;
    // NOP
label_290c58:
    // 0x290c58: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x290c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290c5c: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x290c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x290c60: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x290c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290c64: 0x8c4a0018  lw          $t2, 0x18($v0)
    ctx->pc = 0x290c64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x290c68: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x290c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290c6c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x290c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x290c70: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x290c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c74: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x290c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290c78: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x290c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x290c7c: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x290c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    // 0x290c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c84: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x290c84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x290c88: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x290c88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x290c8c: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x290c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x290c90: 0xc0d1d6c  jal         func_3475B0
    ctx->pc = 0x290C90u;
    SET_GPR_U32(ctx, 31, 0x290C98u);
    ctx->pc = 0x290C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C90u;
    // 0x290c94: 0xe500000c  swc1        $f0, 0xC($t0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475B0u, 0x290C90u, 0x290C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C98u;
label_290c98:
    // 0x290c98: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x290C98u;
    {
        const bool branch_taken_0x290c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c98) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290CA0u;
label_290ca0:
    // 0x290ca0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x290ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290ca4: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x290ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x290ca8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x290ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x290cac: 0xc0d1968  jal         func_3465A0
    ctx->pc = 0x290CACu;
    SET_GPR_U32(ctx, 31, 0x290CB4u);
    ctx->pc = 0x290CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290CACu;
    // 0x290cb0: 0x24844c30  addiu       $a0, $a0, 0x4C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3465A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3465A0u, 0x290CACu, 0x290CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290CB4u;
label_290cb4:
    // 0x290cb4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x290CB4u;
    {
        const bool branch_taken_0x290cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290cb4) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290CBCu;
    // 0x290cbc: 0x0  nop
    ctx->pc = 0x290cbcu;
    // NOP
label_290cc0:
    // 0x290cc0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x290cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290cc4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x290cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x290cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290ccc: 0xa6440036  sh          $a0, 0x36($s2)
    ctx->pc = 0x290cccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x290cd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290cd4: 0xae45006c  sw          $a1, 0x6C($s2)
    ctx->pc = 0x290cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 5));
    // 0x290cd8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x290CD8u;
    {
        const bool branch_taken_0x290cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CD8u;
        // 0x290cdc: 0xae430070  sw          $v1, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cd8) {
            ctx->pc = 0x290EE0u;
            goto label_290ee0;
        }
    }
    ctx->pc = 0x290CE0u;
label_290ce0:
    // 0x290ce0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x290ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290ce4: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x290ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x290ce8: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x290ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x290cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290cf0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x290CF0u;
    {
        const bool branch_taken_0x290cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x290cf0) {
            ctx->pc = 0x290D70u;
            goto label_290d70;
        }
    }
    ctx->pc = 0x290CF8u;
    // 0x290cf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290CF8u;
    {
        const bool branch_taken_0x290cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x290cf8) {
            ctx->pc = 0x290D08u;
            goto label_290d08;
        }
    }
    ctx->pc = 0x290D00u;
    // 0x290d00: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x290D00u;
    {
        const bool branch_taken_0x290d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290d00) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290D08u;
label_290d08:
    // 0x290d08: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x290d08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x290d0c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x290d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x290d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d14: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x290d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x290d18: 0xc0c2d58  jal         func_30B560
    ctx->pc = 0x290D18u;
    SET_GPR_U32(ctx, 31, 0x290D20u);
    ctx->pc = 0x290D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D18u;
    // 0x290d1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B560u, 0x290D18u, 0x290D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D20u;
label_290d20:
    // 0x290d20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290d24: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x290d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x290d28: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x290d28u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x290d2c: 0x3c046ff0  lui         $a0, 0x6FF0
    ctx->pc = 0x290d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28656 << 16));
    // 0x290d30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290d34: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x290d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x290d38: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x290d38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x290d3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290d40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x290d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x290d44: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x290d44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x290d48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290d4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x290d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x290d50: 0xac25cebc  sw          $a1, -0x3144($at)
    ctx->pc = 0x290d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x290d54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290d58: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x290d58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x290d5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290d60: 0xac22cec0  sw          $v0, -0x3140($at)
    ctx->pc = 0x290d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x290d64: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x290d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x290d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x290d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x290d6c: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x290d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_290d70:
    // 0x290d70: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x290d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x290d74: 0xc0c2d7c  jal         func_30B5F0
    ctx->pc = 0x290D74u;
    SET_GPR_U32(ctx, 31, 0x290D7Cu);
    ctx->pc = 0x290D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D74u;
    // 0x290d78: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B5F0u, 0x290D74u, 0x290D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D7Cu;
label_290d7c:
    // 0x290d7c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x290D7Cu;
    {
        const bool branch_taken_0x290d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D7Cu;
        // 0x290d80: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d7c) {
            ctx->pc = 0x290E18u;
            goto label_290e18;
        }
    }
    ctx->pc = 0x290D84u;
    // 0x290d84: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x290d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x290d88: 0x8c2acebc  lw          $t2, -0x3144($at)
    ctx->pc = 0x290d88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x290d8c: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x290d8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x290d90: 0x3c02900f  lui         $v0, 0x900F
    ctx->pc = 0x290d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36879 << 16));
    // 0x290d94: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x290d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x290d98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290d9c: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x290d9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x290da0: 0x8c28cec8  lw          $t0, -0x3138($at)
    ctx->pc = 0x290da0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x290da4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290da8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x290da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x290dac: 0x8c27cec4  lw          $a3, -0x313C($at)
    ctx->pc = 0x290dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x290db0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290db4: 0x8c25cecc  lw          $a1, -0x3134($at)
    ctx->pc = 0x290db4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CECCu));
    // 0x290db8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290dbc: 0x8c24ced0  lw          $a0, -0x3130($at)
    ctx->pc = 0x290dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED0u));
    // 0x290dc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290dc4: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x290dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x290dc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290dcc: 0x8c22cedc  lw          $v0, -0x3124($at)
    ctx->pc = 0x290dccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x290dd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290dd4: 0xac29cebc  sw          $t1, -0x3144($at)
    ctx->pc = 0x290dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x290dd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290ddc: 0xac26cec8  sw          $a2, -0x3138($at)
    ctx->pc = 0x290ddcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x290de0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290de4: 0x8c26cec8  lw          $a2, -0x3138($at)
    ctx->pc = 0x290de4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x290de8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x290de8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x290dec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x290decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x290df0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x290df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x290df4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x290df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x290df8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x290df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x290dfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x290dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x290e00: 0xc056db8  jal         func_15B6E0
    ctx->pc = 0x290E00u;
    SET_GPR_U32(ctx, 31, 0x290E08u);
    ctx->pc = 0x290E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E00u;
    // 0x290e04: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B6E0u, 0x290E00u, 0x290E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E08u;
label_290e08:
    // 0x290e08: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x290e08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x290e0c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x290E0Cu;
    {
        const bool branch_taken_0x290e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E0Cu;
        // 0x290e10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e0c) {
            ctx->pc = 0x290EE0u;
            goto label_290ee0;
        }
    }
    ctx->pc = 0x290E14u;
    // 0x290e14: 0x0  nop
    ctx->pc = 0x290e14u;
    // NOP
label_290e18:
    // 0x290e18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x290e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x290e1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290e20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x290e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290e24: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x290e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x290e28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x290e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x290e2c: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x290e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x290e30: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x290E30u;
    {
        const bool branch_taken_0x290e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E30u;
        // 0x290e34: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e30) {
            ctx->pc = 0x290EE0u;
            goto label_290ee0;
        }
    }
    ctx->pc = 0x290E38u;
label_290e38:
    // 0x290e38: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x290e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x290e3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x290e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290e40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290e44: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x290E44u;
    {
        const bool branch_taken_0x290e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x290e44) {
            ctx->pc = 0x290E88u;
            goto label_290e88;
        }
    }
    ctx->pc = 0x290E4Cu;
    // 0x290e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290e50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290E50u;
    {
        const bool branch_taken_0x290e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x290e50) {
            ctx->pc = 0x290E60u;
            goto label_290e60;
        }
    }
    ctx->pc = 0x290E58u;
    // 0x290e58: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x290E58u;
    {
        const bool branch_taken_0x290e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e58) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290E60u;
label_290e60:
    // 0x290e60: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x290e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x290e64: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x290e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x290e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e6c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x290e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x290e70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x290e74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e78: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x290E78u;
    SET_GPR_U32(ctx, 31, 0x290E80u);
    ctx->pc = 0x290E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E78u;
    // 0x290e7c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x290E78u, 0x290E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E80u;
label_290e80:
    // 0x290e80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x290E80u;
    {
        const bool branch_taken_0x290e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e80) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290E88u;
label_290e88:
    // 0x290e88: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x290E88u;
    {
        const bool branch_taken_0x290e88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e88) {
            ctx->pc = 0x290EB8u;
            goto label_290eb8;
        }
    }
    ctx->pc = 0x290E90u;
    // 0x290e90: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x290e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x290e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e98: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x290e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x290e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ea4: 0xc063d30  jal         func_18F4C0
    ctx->pc = 0x290EA4u;
    SET_GPR_U32(ctx, 31, 0x290EACu);
    ctx->pc = 0x290EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290EA4u;
    // 0x290ea8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4C0u, 0x290EA4u, 0x290EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290EACu;
label_290eac:
    // 0x290eac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x290EACu;
    {
        const bool branch_taken_0x290eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290eac) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290EB4u;
    // 0x290eb4: 0x0  nop
    ctx->pc = 0x290eb4u;
    // NOP
label_290eb8:
    // 0x290eb8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x290eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x290ebc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x290ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x290ec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ec4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x290ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x290ec8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x290eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ed0: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x290ED0u;
    SET_GPR_U32(ctx, 31, 0x290ED8u);
    ctx->pc = 0x290ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290ED0u;
    // 0x290ed4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x290ED0u, 0x290ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290ED8u;
label_290ed8:
    // 0x290ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290edc: 0x0  nop
    ctx->pc = 0x290edcu;
    // NOP
label_290ee0:
    // 0x290ee0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x290ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290ee4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x290ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290ee8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x290ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290eec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x290eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290ef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x290ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x290EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EF4u;
        // 0x290ef8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290EFCu;
}

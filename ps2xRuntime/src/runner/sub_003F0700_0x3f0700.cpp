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

// Function: sub_003F0700
// Address: 0x3f0700 - 0x3f088c
void sub_003F0700_0x3f0700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0700_0x3f0700");
#endif

    switch (ctx->pc) {
        case 0x3f0700u: goto label_3f0700;
        case 0x3f0704u: goto label_3f0704;
        case 0x3f0708u: goto label_3f0708;
        case 0x3f070cu: goto label_3f070c;
        case 0x3f0710u: goto label_3f0710;
        case 0x3f0714u: goto label_3f0714;
        case 0x3f0718u: goto label_3f0718;
        case 0x3f071cu: goto label_3f071c;
        case 0x3f0720u: goto label_3f0720;
        case 0x3f0724u: goto label_3f0724;
        case 0x3f0728u: goto label_3f0728;
        case 0x3f072cu: goto label_3f072c;
        case 0x3f0730u: goto label_3f0730;
        case 0x3f0734u: goto label_3f0734;
        case 0x3f0738u: goto label_3f0738;
        case 0x3f073cu: goto label_3f073c;
        case 0x3f0740u: goto label_3f0740;
        case 0x3f0744u: goto label_3f0744;
        case 0x3f0748u: goto label_3f0748;
        case 0x3f074cu: goto label_3f074c;
        case 0x3f0750u: goto label_3f0750;
        case 0x3f0754u: goto label_3f0754;
        case 0x3f0758u: goto label_3f0758;
        case 0x3f075cu: goto label_3f075c;
        case 0x3f0760u: goto label_3f0760;
        case 0x3f0764u: goto label_3f0764;
        case 0x3f0768u: goto label_3f0768;
        case 0x3f076cu: goto label_3f076c;
        case 0x3f0770u: goto label_3f0770;
        case 0x3f0774u: goto label_3f0774;
        case 0x3f0778u: goto label_3f0778;
        case 0x3f077cu: goto label_3f077c;
        case 0x3f0780u: goto label_3f0780;
        case 0x3f0784u: goto label_3f0784;
        case 0x3f0788u: goto label_3f0788;
        case 0x3f078cu: goto label_3f078c;
        case 0x3f0790u: goto label_3f0790;
        case 0x3f0794u: goto label_3f0794;
        case 0x3f0798u: goto label_3f0798;
        case 0x3f079cu: goto label_3f079c;
        case 0x3f07a0u: goto label_3f07a0;
        case 0x3f07a4u: goto label_3f07a4;
        case 0x3f07a8u: goto label_3f07a8;
        case 0x3f07acu: goto label_3f07ac;
        case 0x3f07b0u: goto label_3f07b0;
        case 0x3f07b4u: goto label_3f07b4;
        case 0x3f07b8u: goto label_3f07b8;
        case 0x3f07bcu: goto label_3f07bc;
        case 0x3f07c0u: goto label_3f07c0;
        case 0x3f07c4u: goto label_3f07c4;
        case 0x3f07c8u: goto label_3f07c8;
        case 0x3f07ccu: goto label_3f07cc;
        case 0x3f07d0u: goto label_3f07d0;
        case 0x3f07d4u: goto label_3f07d4;
        case 0x3f07d8u: goto label_3f07d8;
        case 0x3f07dcu: goto label_3f07dc;
        case 0x3f07e0u: goto label_3f07e0;
        case 0x3f07e4u: goto label_3f07e4;
        case 0x3f07e8u: goto label_3f07e8;
        case 0x3f07ecu: goto label_3f07ec;
        case 0x3f07f0u: goto label_3f07f0;
        case 0x3f07f4u: goto label_3f07f4;
        case 0x3f07f8u: goto label_3f07f8;
        case 0x3f07fcu: goto label_3f07fc;
        case 0x3f0800u: goto label_3f0800;
        case 0x3f0804u: goto label_3f0804;
        case 0x3f0808u: goto label_3f0808;
        case 0x3f080cu: goto label_3f080c;
        case 0x3f0810u: goto label_3f0810;
        case 0x3f0814u: goto label_3f0814;
        case 0x3f0818u: goto label_3f0818;
        case 0x3f081cu: goto label_3f081c;
        case 0x3f0820u: goto label_3f0820;
        case 0x3f0824u: goto label_3f0824;
        case 0x3f0828u: goto label_3f0828;
        case 0x3f082cu: goto label_3f082c;
        case 0x3f0830u: goto label_3f0830;
        case 0x3f0834u: goto label_3f0834;
        case 0x3f0838u: goto label_3f0838;
        case 0x3f083cu: goto label_3f083c;
        case 0x3f0840u: goto label_3f0840;
        case 0x3f0844u: goto label_3f0844;
        case 0x3f0848u: goto label_3f0848;
        case 0x3f084cu: goto label_3f084c;
        case 0x3f0850u: goto label_3f0850;
        case 0x3f0854u: goto label_3f0854;
        case 0x3f0858u: goto label_3f0858;
        case 0x3f085cu: goto label_3f085c;
        case 0x3f0860u: goto label_3f0860;
        case 0x3f0864u: goto label_3f0864;
        case 0x3f0868u: goto label_3f0868;
        case 0x3f086cu: goto label_3f086c;
        case 0x3f0870u: goto label_3f0870;
        case 0x3f0874u: goto label_3f0874;
        case 0x3f0878u: goto label_3f0878;
        case 0x3f087cu: goto label_3f087c;
        case 0x3f0880u: goto label_3f0880;
        case 0x3f0884u: goto label_3f0884;
        case 0x3f0888u: goto label_3f0888;
        default: break;
    }

    ctx->pc = 0x3f0700u;

label_3f0700:
    // 0x3f0700: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3f0700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3f0704:
    // 0x3f0704: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x3f0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_3f0708:
    // 0x3f0708: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f0708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f070c:
    // 0x3f070c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x3f070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f0710:
    // 0x3f0710: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f0710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f0714:
    // 0x3f0714: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f0714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f0718:
    // 0x3f0718: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f0718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f071c:
    // 0x3f071c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f0720:
    // 0x3f0720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0724:
    // 0x3f0724: 0x30f1ffff  andi        $s1, $a3, 0xFFFF
    ctx->pc = 0x3f0724u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3f0728:
    // 0x3f0728: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f0728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f072c:
    // 0x3f072c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x3f072cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f0730:
    // 0x3f0730: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f0730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0734:
    // 0x3f0734: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f0734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0738:
    // 0x3f0738: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f0738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f073c:
    // 0x3f073c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3f073cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3f0740:
    // 0x3f0740: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0744:
    // 0x3f0744: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3f0744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0748:
    // 0x3f0748: 0x16220029  bne         $s1, $v0, . + 4 + (0x29 << 2)
label_3f074c:
    if (ctx->pc == 0x3F074Cu) {
        ctx->pc = 0x3F074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0748u;
        // 0x3f074c: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0750u;
        goto label_3f0750;
    }
    ctx->pc = 0x3F0748u;
    {
        const bool branch_taken_0x3f0748 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0748u;
        // 0x3f074c: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0748) {
            ctx->pc = 0x3F07F0u;
            goto label_3f07f0;
        }
    }
    ctx->pc = 0x3F0750u;
label_3f0750:
    // 0x3f0750: 0xc0a4408  jal         func_291020
label_3f0754:
    if (ctx->pc == 0x3F0754u) {
        ctx->pc = 0x3F0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0750u;
        // 0x3f0754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0758u;
        goto label_3f0758;
    }
    ctx->pc = 0x3F0750u;
    SET_GPR_U32(ctx, 31, 0x3F0758u);
    ctx->pc = 0x3F0754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0750u;
    // 0x3f0754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3F0750u, 0x3F0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0758u;
label_3f0758:
    // 0x3f0758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f075c:
    // 0x3f075c: 0xc0a43fc  jal         func_290FF0
label_3f0760:
    if (ctx->pc == 0x3F0760u) {
        ctx->pc = 0x3F0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F075Cu;
        // 0x3f0760: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0764u;
        goto label_3f0764;
    }
    ctx->pc = 0x3F075Cu;
    SET_GPR_U32(ctx, 31, 0x3F0764u);
    ctx->pc = 0x3F0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F075Cu;
    // 0x3f0760: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3F075Cu, 0x3F0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0764u;
label_3f0764:
    // 0x3f0764: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3f0764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3f0768:
    // 0x3f0768: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x3f0768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3f076c:
    // 0x3f076c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3f076cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3f0770:
    // 0x3f0770: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3f0770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3f0774:
    // 0x3f0774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f0774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0778:
    // 0x3f0778: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3f0778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f077c:
    // 0x3f077c: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3f077cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3f0780:
    // 0x3f0780: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f0780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0784:
    // 0x3f0784: 0xc0510e0  jal         func_144380
label_3f0788:
    if (ctx->pc == 0x3F0788u) {
        ctx->pc = 0x3F0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0784u;
        // 0x3f0788: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F078Cu;
        goto label_3f078c;
    }
    ctx->pc = 0x3F0784u;
    SET_GPR_U32(ctx, 31, 0x3F078Cu);
    ctx->pc = 0x3F0788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0784u;
    // 0x3f0788: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3F0784u, 0x3F078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F078Cu;
label_3f078c:
    // 0x3f078c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f078cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0790:
    // 0x3f0790: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3f0790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3f0794:
    // 0x3f0794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0798:
    // 0x3f0798: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3f0798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f079c:
    // 0x3f079c: 0xc0d0484  jal         func_341210
label_3f07a0:
    if (ctx->pc == 0x3F07A0u) {
        ctx->pc = 0x3F07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F079Cu;
        // 0x3f07a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07A4u;
        goto label_3f07a4;
    }
    ctx->pc = 0x3F079Cu;
    SET_GPR_U32(ctx, 31, 0x3F07A4u);
    ctx->pc = 0x3F07A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F079Cu;
    // 0x3f07a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3F079Cu, 0x3F07A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F07A4u;
label_3f07a4:
    // 0x3f07a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f07a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f07a8:
    // 0x3f07a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f07a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f07ac:
    // 0x3f07ac: 0x24060708  addiu       $a2, $zero, 0x708
    ctx->pc = 0x3f07acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
label_3f07b0:
    // 0x3f07b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f07b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f07b4:
    // 0x3f07b4: 0xc0ebb40  jal         func_3AED00
label_3f07b8:
    if (ctx->pc == 0x3F07B8u) {
        ctx->pc = 0x3F07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07B4u;
        // 0x3f07b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07BCu;
        goto label_3f07bc;
    }
    ctx->pc = 0x3F07B4u;
    SET_GPR_U32(ctx, 31, 0x3F07BCu);
    ctx->pc = 0x3F07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F07B4u;
    // 0x3f07b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3F07B4u, 0x3F07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F07BCu;
label_3f07bc:
    // 0x3f07bc: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x3f07bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3f07c0:
    // 0x3f07c0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f07c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f07c4:
    // 0x3f07c4: 0x320f809  jalr        $t9
label_3f07c8:
    if (ctx->pc == 0x3F07C8u) {
        ctx->pc = 0x3F07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07C4u;
        // 0x3f07c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07CCu;
        goto label_3f07cc;
    }
    ctx->pc = 0x3F07C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F07CCu);
        ctx->pc = 0x3F07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07C4u;
        // 0x3f07c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F07C4u, 0x3F07CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F07CCu;
label_3f07cc:
    // 0x3f07cc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3f07ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f07d0:
    // 0x3f07d0: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x3f07d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
label_3f07d4:
    // 0x3f07d4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3f07d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_3f07d8:
    // 0x3f07d8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f07d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3f07dc:
    // 0x3f07dc: 0xc0e3668  jal         func_38D9A0
label_3f07e0:
    if (ctx->pc == 0x3F07E0u) {
        ctx->pc = 0x3F07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07DCu;
        // 0x3f07e0: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07E4u;
        goto label_3f07e4;
    }
    ctx->pc = 0x3F07DCu;
    SET_GPR_U32(ctx, 31, 0x3F07E4u);
    ctx->pc = 0x3F07E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F07DCu;
    // 0x3f07e0: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D9A0u, 0x3F07DCu, 0x3F07E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F07E4u;
label_3f07e4:
    // 0x3f07e4: 0x10000022  b           . + 4 + (0x22 << 2)
label_3f07e8:
    if (ctx->pc == 0x3F07E8u) {
        ctx->pc = 0x3F07ECu;
        goto label_3f07ec;
    }
    ctx->pc = 0x3F07E4u;
    {
        const bool branch_taken_0x3f07e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f07e4) {
            ctx->pc = 0x3F0870u;
            goto label_3f0870;
        }
    }
    ctx->pc = 0x3F07ECu;
label_3f07ec:
    // 0x3f07ec: 0x0  nop
    ctx->pc = 0x3f07ecu;
    // NOP
label_3f07f0:
    // 0x3f07f0: 0xc09d210  jal         func_274840
label_3f07f4:
    if (ctx->pc == 0x3F07F4u) {
        ctx->pc = 0x3F07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F07F0u;
        // 0x3f07f4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F07F8u;
        goto label_3f07f8;
    }
    ctx->pc = 0x3F07F0u;
    SET_GPR_U32(ctx, 31, 0x3F07F8u);
    ctx->pc = 0x3F07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F07F0u;
    // 0x3f07f4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274840u, 0x3F07F0u, 0x3F07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F07F8u;
label_3f07f8:
    // 0x3f07f8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3f07f8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f07fc:
    // 0x3f07fc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3f07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_3f0800:
    // 0x3f0800: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f0800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0804:
    // 0x3f0804: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3f0804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3f0808:
    // 0x3f0808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f0808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f080c:
    // 0x3f080c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f080cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0810:
    // 0x3f0810: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f0810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f0814:
    // 0x3f0814: 0x24060216  addiu       $a2, $zero, 0x216
    ctx->pc = 0x3f0814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
label_3f0818:
    // 0x3f0818: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x3f0818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f081c:
    // 0x3f081c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f081cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f0820:
    // 0x3f0820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f0820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0824:
    // 0x3f0824: 0x0  nop
    ctx->pc = 0x3f0824u;
    // NOP
label_3f0828:
    // 0x3f0828: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f0828u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3f082c:
    // 0x3f082c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f082cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f0830:
    // 0x3f0830: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f0830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f0834:
    // 0x3f0834: 0x0  nop
    ctx->pc = 0x3f0834u;
    // NOP
label_3f0838:
    // 0x3f0838: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3f0838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3f083c:
    // 0x3f083c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f083cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f0840:
    // 0x3f0840: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3f0840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_3f0844:
    // 0x3f0844: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3f0844u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
label_3f0848:
    // 0x3f0848: 0xc09d1e0  jal         func_274780
label_3f084c:
    if (ctx->pc == 0x3F084Cu) {
        ctx->pc = 0x3F084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0848u;
        // 0x3f084c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0850u;
        goto label_3f0850;
    }
    ctx->pc = 0x3F0848u;
    SET_GPR_U32(ctx, 31, 0x3F0850u);
    ctx->pc = 0x3F084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0848u;
    // 0x3f084c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274780u, 0x3F0848u, 0x3F0850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0850u;
label_3f0850:
    // 0x3f0850: 0xc09d1ac  jal         func_2746B0
label_3f0854:
    if (ctx->pc == 0x3F0854u) {
        ctx->pc = 0x3F0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0850u;
        // 0x3f0854: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0858u;
        goto label_3f0858;
    }
    ctx->pc = 0x3F0850u;
    SET_GPR_U32(ctx, 31, 0x3F0858u);
    ctx->pc = 0x3F0854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0850u;
    // 0x3f0854: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2746B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2746B0u, 0x3F0850u, 0x3F0858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0858u;
label_3f0858:
    // 0x3f0858: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3f0858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f085c:
    // 0x3f085c: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x3f085cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
label_3f0860:
    // 0x3f0860: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3f0860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_3f0864:
    // 0x3f0864: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f0864u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3f0868:
    // 0x3f0868: 0xc0e3668  jal         func_38D9A0
label_3f086c:
    if (ctx->pc == 0x3F086Cu) {
        ctx->pc = 0x3F086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0868u;
        // 0x3f086c: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0870u;
        goto label_3f0870;
    }
    ctx->pc = 0x3F0868u;
    SET_GPR_U32(ctx, 31, 0x3F0870u);
    ctx->pc = 0x3F086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0868u;
    // 0x3f086c: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D9A0u, 0x3F0868u, 0x3F0870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0870u;
label_3f0870:
    // 0x3f0870: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f0870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f0874:
    // 0x3f0874: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f0874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0878:
    // 0x3f0878: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f0878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f087c:
    // 0x3f087c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f087cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0880:
    // 0x3f0880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0884:
    // 0x3f0884: 0x3e00008  jr          $ra
label_3f0888:
    if (ctx->pc == 0x3F0888u) {
        ctx->pc = 0x3F0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0884u;
        // 0x3f0888: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F088Cu;
        goto label_fallthrough_0x3f0884;
    }
    ctx->pc = 0x3F0884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0884u;
        // 0x3f0888: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0884:
    ctx->pc = 0x3F088Cu;
}

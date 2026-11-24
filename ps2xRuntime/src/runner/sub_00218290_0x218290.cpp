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

// Function: sub_00218290
// Address: 0x218290 - 0x21853c
void sub_00218290_0x218290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218290_0x218290");
#endif

    switch (ctx->pc) {
        case 0x2182f0u: goto label_2182f0;
        case 0x21830cu: goto label_21830c;
        case 0x21831cu: goto label_21831c;
        case 0x218324u: goto label_218324;
        case 0x21832cu: goto label_21832c;
        case 0x218340u: goto label_218340;
        case 0x218358u: goto label_218358;
        case 0x21836cu: goto label_21836c;
        case 0x218374u: goto label_218374;
        case 0x21838cu: goto label_21838c;
        case 0x2183c4u: goto label_2183c4;
        case 0x2183d4u: goto label_2183d4;
        case 0x2183e4u: goto label_2183e4;
        case 0x218404u: goto label_218404;
        case 0x218410u: goto label_218410;
        case 0x218420u: goto label_218420;
        case 0x2184b8u: goto label_2184b8;
        case 0x2184c8u: goto label_2184c8;
        case 0x2184dcu: goto label_2184dc;
        case 0x2184f0u: goto label_2184f0;
        case 0x218508u: goto label_218508;
        default: break;
    }

    ctx->pc = 0x218290u;

    // 0x218290: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x218290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x218294: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x218294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x218298: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x218298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21829c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x21829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2182a0: 0x269609f8  addiu       $s6, $s4, 0x9F8
    ctx->pc = 0x2182a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 2552));
    // 0x2182a4: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2182a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x2182a8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2182a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182ac: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2182acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2182b0: 0x26820950  addiu       $v0, $s4, 0x950
    ctx->pc = 0x2182b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2384));
    // 0x2182b4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2182b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2182b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2182b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182bc: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2182bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2182c0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2182c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2182c4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2182c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2182c8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2182c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2182cc: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2182ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2182d0: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2182d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2182d4: 0x8e931fc0  lw          $s3, 0x1FC0($s4)
    ctx->pc = 0x2182d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8128)));
    // 0x2182d8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2182d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2182dc: 0x267e008c  addiu       $fp, $s3, 0x8C
    ctx->pc = 0x2182dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    // 0x2182e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2182e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2182e4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2182e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182e8: 0xc086150  jal         func_218540
    ctx->pc = 0x2182E8u;
    SET_GPR_U32(ctx, 31, 0x2182F0u);
    ctx->pc = 0x2182ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182E8u;
    // 0x2182ec: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218540u, 0x2182E8u, 0x2182F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182F0u;
label_2182f0:
    // 0x2182f0: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x2182F0u;
    {
        const bool branch_taken_0x2182f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2182f0) {
            ctx->pc = 0x2182F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2182F0u;
            // 0x2182f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21850Cu;
            goto label_21850c;
        }
    }
    ctx->pc = 0x2182F8u;
    // 0x2182f8: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x2182f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2182fc: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2182fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x218300: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218304: 0xc086212  jal         func_218848
    ctx->pc = 0x218304u;
    SET_GPR_U32(ctx, 31, 0x21830Cu);
    ctx->pc = 0x218308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218304u;
    // 0x218308: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218848u, 0x218304u, 0x21830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21830Cu;
label_21830c:
    // 0x21830c: 0x2665108c  addiu       $a1, $s3, 0x108C
    ctx->pc = 0x21830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4236));
    // 0x218310: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x218310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218314: 0xc086366  jal         func_218D98
    ctx->pc = 0x218314u;
    SET_GPR_U32(ctx, 31, 0x21831Cu);
    ctx->pc = 0x218318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218314u;
    // 0x218318: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218D98u, 0x218314u, 0x21831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21831Cu;
label_21831c:
    // 0x21831c: 0xc086234  jal         func_2188D0
    ctx->pc = 0x21831Cu;
    SET_GPR_U32(ctx, 31, 0x218324u);
    ctx->pc = 0x218320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21831Cu;
    // 0x218320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2188D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188D0u, 0x21831Cu, 0x218324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218324u;
label_218324:
    // 0x218324: 0xc0886b8  jal         func_221AE0
    ctx->pc = 0x218324u;
    SET_GPR_U32(ctx, 31, 0x21832Cu);
    ctx->pc = 0x221AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AE0u, 0x218324u, 0x21832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21832Cu;
label_21832c:
    // 0x21832c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218334: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x218334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218338: 0xc0944ce  jal         func_251338
    ctx->pc = 0x218338u;
    SET_GPR_U32(ctx, 31, 0x218340u);
    ctx->pc = 0x21833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218338u;
    // 0x21833c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251338u, 0x218338u, 0x218340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218340u;
label_218340:
    // 0x218340: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x218340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218344: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x218344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218348: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x218348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21834c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x21834cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218350: 0xc086e70  jal         func_21B9C0
    ctx->pc = 0x218350u;
    SET_GPR_U32(ctx, 31, 0x218358u);
    ctx->pc = 0x218354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218350u;
    // 0x218354: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B9C0u, 0x218350u, 0x218358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218358u;
label_218358:
    // 0x218358: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x218358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21835c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21835cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218364: 0xc0944ce  jal         func_251338
    ctx->pc = 0x218364u;
    SET_GPR_U32(ctx, 31, 0x21836Cu);
    ctx->pc = 0x218368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218364u;
    // 0x218368: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251338u, 0x218364u, 0x21836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21836Cu;
label_21836c:
    // 0x21836c: 0xc0886b8  jal         func_221AE0
    ctx->pc = 0x21836Cu;
    SET_GPR_U32(ctx, 31, 0x218374u);
    ctx->pc = 0x218370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21836Cu;
    // 0x218370: 0x50a823  subu        $s5, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AE0u, 0x21836Cu, 0x218374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218374u;
label_218374:
    // 0x218374: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x218374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x218378: 0x52282f  dsubu       $a1, $v0, $s2
    ctx->pc = 0x218378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x21837c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21837cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x218380: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x218380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x218384: 0xc0886fa  jal         func_221BE8
    ctx->pc = 0x218384u;
    SET_GPR_U32(ctx, 31, 0x21838Cu);
    ctx->pc = 0x218388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218384u;
    // 0x218388: 0x248436c0  addiu       $a0, $a0, 0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BE8u, 0x218384u, 0x21838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21838Cu;
label_21838c:
    // 0x21838c: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x21838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x218390: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x218390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218394: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x218394u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x218398: 0x8fa8002c  lw          $t0, 0x2C($sp)
    ctx->pc = 0x218398u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x21839c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21839cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183a0: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x2183a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2183a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2183a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2183a8: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x2183a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x2183ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2183acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183b0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2183b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2183b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2183b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183b8: 0xaec30010  sw          $v1, 0x10($s6)
    ctx->pc = 0x2183b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
    // 0x2183bc: 0xc085960  jal         func_216580
    ctx->pc = 0x2183BCu;
    SET_GPR_U32(ctx, 31, 0x2183C4u);
    ctx->pc = 0x2183C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183BCu;
    // 0x2183c0: 0x34e70f06  ori         $a3, $a3, 0xF06 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3846);
    ctx->in_delay_slot = false;
    ctx->pc = 0x216580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216580u, 0x2183BCu, 0x2183C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183C4u;
label_2183c4:
    // 0x2183c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2183c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2183c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183cc: 0xc085936  jal         func_2164D8
    ctx->pc = 0x2183CCu;
    SET_GPR_U32(ctx, 31, 0x2183D4u);
    ctx->pc = 0x2183D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183CCu;
    // 0x2183d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2164D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2164D8u, 0x2183CCu, 0x2183D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183D4u;
label_2183d4:
    // 0x2183d4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2183D4u;
    {
        const bool branch_taken_0x2183d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2183d4) {
            ctx->pc = 0x2183F0u;
            goto label_2183f0;
        }
    }
    ctx->pc = 0x2183DCu;
    // 0x2183dc: 0xc086834  jal         func_21A0D0
    ctx->pc = 0x2183DCu;
    SET_GPR_U32(ctx, 31, 0x2183E4u);
    ctx->pc = 0x2183E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183DCu;
    // 0x2183e0: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A0D0u, 0x2183DCu, 0x2183E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183E4u;
label_2183e4:
    // 0x2183e4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2183E4u;
    {
        const bool branch_taken_0x2183e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183E4u;
        // 0x2183e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183e4) {
            ctx->pc = 0x21850Cu;
            goto label_21850c;
        }
    }
    ctx->pc = 0x2183ECu;
    // 0x2183ec: 0x0  nop
    ctx->pc = 0x2183ecu;
    // NOP
label_2183f0:
    // 0x2183f0: 0x5aa00041  blezl       $s5, . + 4 + (0x41 << 2)
    ctx->pc = 0x2183F0u;
    {
        const bool branch_taken_0x2183f0 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x2183f0) {
            ctx->pc = 0x2183F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2183F0u;
            // 0x2183f4: 0x8e620168  lw          $v0, 0x168($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2184F8u;
            goto label_2184f8;
        }
    }
    ctx->pc = 0x2183F8u;
    // 0x2183f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2183f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183fc: 0xc0867e6  jal         func_219F98
    ctx->pc = 0x2183FCu;
    SET_GPR_U32(ctx, 31, 0x218404u);
    ctx->pc = 0x218400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183FCu;
    // 0x218400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F98u, 0x2183FCu, 0x218404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218404u;
label_218404:
    // 0x218404: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218408: 0xc08627a  jal         func_2189E8
    ctx->pc = 0x218408u;
    SET_GPR_U32(ctx, 31, 0x218410u);
    ctx->pc = 0x21840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218408u;
    // 0x21840c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2189E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2189E8u, 0x218408u, 0x218410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218410u;
label_218410:
    // 0x218410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218414: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x218414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218418: 0xc0862de  jal         func_218B78
    ctx->pc = 0x218418u;
    SET_GPR_U32(ctx, 31, 0x218420u);
    ctx->pc = 0x21841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218418u;
    // 0x21841c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218B78u, 0x218418u, 0x218420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218420u;
label_218420:
    // 0x218420: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x218420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x218424: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x218424u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218428: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x218428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21842c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x21842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x218430: 0xad020048  sw          $v0, 0x48($t0)
    ctx->pc = 0x218430u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 2));
    // 0x218434: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x218434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x218438: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x218438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21843c: 0x8e620174  lw          $v0, 0x174($s3)
    ctx->pc = 0x21843cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x218440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x218440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x218444: 0x8fc50038  lw          $a1, 0x38($fp)
    ctx->pc = 0x218444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x218448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21844c: 0xad030040  sw          $v1, 0x40($t0)
    ctx->pc = 0x21844cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 3));
    // 0x218450: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x218450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x218454: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x218454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x218458: 0x10a70007  beq         $a1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x218458u;
    {
        const bool branch_taken_0x218458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x21845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218458u;
        // 0x21845c: 0xad020044  sw          $v0, 0x44($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218458) {
            ctx->pc = 0x218478u;
            goto label_218478;
        }
    }
    ctx->pc = 0x218460u;
    // 0x218460: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x218460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x218464: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x218464u;
    {
        const bool branch_taken_0x218464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218464) {
            ctx->pc = 0x218468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218464u;
            // 0x218468: 0xae600168  sw          $zero, 0x168($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21847Cu;
            goto label_21847c;
        }
    }
    ctx->pc = 0x21846Cu;
    // 0x21846c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21846Cu;
    {
        const bool branch_taken_0x21846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21846Cu;
        // 0x218470: 0xae680168  sw          $t0, 0x168($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21846c) {
            ctx->pc = 0x21847Cu;
            goto label_21847c;
        }
    }
    ctx->pc = 0x218474u;
    // 0x218474: 0x0  nop
    ctx->pc = 0x218474u;
    // NOP
label_218478:
    // 0x218478: 0xae600168  sw          $zero, 0x168($s3)
    ctx->pc = 0x218478u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 0));
label_21847c:
    // 0x21847c: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x21847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x218480: 0xae60016c  sw          $zero, 0x16C($s3)
    ctx->pc = 0x218480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 364), GPR_U32(ctx, 0));
    // 0x218484: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x218484u;
    {
        const bool branch_taken_0x218484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218484u;
        // 0x218488: 0xae600170  sw          $zero, 0x170($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218484) {
            ctx->pc = 0x2184E0u;
            goto label_2184e0;
        }
    }
    ctx->pc = 0x21848Cu;
    // 0x21848c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x21848cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x218490: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x218490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x218494: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x218494u;
    {
        const bool branch_taken_0x218494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x218494) {
            ctx->pc = 0x2184C0u;
            goto label_2184c0;
        }
    }
    ctx->pc = 0x21849Cu;
    // 0x21849c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x21849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2184a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2184a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2184a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2184a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2184a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2184A8u;
    {
        const bool branch_taken_0x2184a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2184a8) {
            ctx->pc = 0x2184C0u;
            goto label_2184c0;
        }
    }
    ctx->pc = 0x2184B0u;
    // 0x2184b0: 0xc08683e  jal         func_21A0F8
    ctx->pc = 0x2184B0u;
    SET_GPR_U32(ctx, 31, 0x2184B8u);
    ctx->pc = 0x2184B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184B0u;
    // 0x2184b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A0F8u, 0x2184B0u, 0x2184B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184B8u;
label_2184b8:
    // 0x2184b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2184B8u;
    {
        const bool branch_taken_0x2184b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2184BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184B8u;
        // 0x2184bc: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184b8) {
            ctx->pc = 0x2184CCu;
            goto label_2184cc;
        }
    }
    ctx->pc = 0x2184C0u;
label_2184c0:
    // 0x2184c0: 0xc086838  jal         func_21A0E0
    ctx->pc = 0x2184C0u;
    SET_GPR_U32(ctx, 31, 0x2184C8u);
    ctx->pc = 0x2184C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184C0u;
    // 0x2184c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A0E0u, 0x2184C0u, 0x2184C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184C8u;
label_2184c8:
    // 0x2184c8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2184c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2184cc:
    // 0x2184cc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2184ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2184d0: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x2184d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2184d4: 0xc080406  jal         func_201018
    ctx->pc = 0x2184D4u;
    SET_GPR_U32(ctx, 31, 0x2184DCu);
    ctx->pc = 0x2184D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184D4u;
    // 0x2184d8: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201018u, 0x2184D4u, 0x2184DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184DCu;
label_2184dc:
    // 0x2184dc: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2184dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_2184e0:
    // 0x2184e0: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x2184e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2184e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2184e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184e8: 0xc0875ea  jal         func_21D7A8
    ctx->pc = 0x2184E8u;
    SET_GPR_U32(ctx, 31, 0x2184F0u);
    ctx->pc = 0x2184ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184E8u;
    // 0x2184ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D7A8u, 0x2184E8u, 0x2184F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184F0u;
label_2184f0:
    // 0x2184f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2184F0u;
    {
        const bool branch_taken_0x2184f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2184F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184F0u;
        // 0x2184f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184f0) {
            ctx->pc = 0x21850Cu;
            goto label_21850c;
        }
    }
    ctx->pc = 0x2184F8u;
label_2184f8:
    // 0x2184f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2184F8u;
    {
        const bool branch_taken_0x2184f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2184f8) {
            ctx->pc = 0x2184FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2184F8u;
            // 0x2184fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21850Cu;
            goto label_21850c;
        }
    }
    ctx->pc = 0x218500u;
    // 0x218500: 0xc086834  jal         func_21A0D0
    ctx->pc = 0x218500u;
    SET_GPR_U32(ctx, 31, 0x218508u);
    ctx->pc = 0x218504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218500u;
    // 0x218504: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A0D0u, 0x218500u, 0x218508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218508u;
label_218508:
    // 0x218508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x218508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21850c:
    // 0x21850c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x21850cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218510: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x218510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x218514: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x218514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218518: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x218518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21851c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x21851cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218520: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x218520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x218524: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x218524u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x218528: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x218528u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21852c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x21852cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218530: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x218530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x218534: 0x3e00008  jr          $ra
    ctx->pc = 0x218534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218534u;
        // 0x218538: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21853Cu;
}

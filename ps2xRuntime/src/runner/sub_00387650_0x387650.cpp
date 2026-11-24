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

// Function: sub_00387650
// Address: 0x387650 - 0x387988
void sub_00387650_0x387650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387650_0x387650");
#endif

    switch (ctx->pc) {
        case 0x3876b0u: goto label_3876b0;
        case 0x3876b8u: goto label_3876b8;
        case 0x3876f8u: goto label_3876f8;
        case 0x38773cu: goto label_38773c;
        case 0x387774u: goto label_387774;
        case 0x3877acu: goto label_3877ac;
        case 0x3877bcu: goto label_3877bc;
        case 0x387838u: goto label_387838;
        case 0x387868u: goto label_387868;
        case 0x3878a8u: goto label_3878a8;
        case 0x3878e8u: goto label_3878e8;
        default: break;
    }

    ctx->pc = 0x387650u;

    // 0x387650: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x387650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x387654: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x387654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x387658: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x387658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x38765c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x38765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x387660: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x387660u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387664: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x387664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x387668: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x387668u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38766c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x38766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x387670: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x387670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x387674: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x387674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x387678: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x387678u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38767c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x387680: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x387680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387684: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x387684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x387688: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x387688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38768c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x387690: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x387690u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x387694: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x387694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x387698: 0xafa700fc  sw          $a3, 0xFC($sp)
    ctx->pc = 0x387698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 7));
    // 0x38769c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x38769cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3876a0: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x3876a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3876a4: 0xafa800e0  sw          $t0, 0xE0($sp)
    ctx->pc = 0x3876a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 8));
    // 0x3876a8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3876A8u;
    SET_GPR_U32(ctx, 31, 0x3876B0u);
    ctx->pc = 0x3876ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3876A8u;
    // 0x3876ac: 0xafa900dc  sw          $t1, 0xDC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3876A8u, 0x3876B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3876B0u;
label_3876b0:
    // 0x3876b0: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3876B0u;
    SET_GPR_U32(ctx, 31, 0x3876B8u);
    ctx->pc = 0x3876B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3876B0u;
    // 0x3876b4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3876B0u, 0x3876B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3876B8u;
label_3876b8:
    // 0x3876b8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3876b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3876bc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3876bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x3876c0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3876c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3876c4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3876c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3876c8: 0x1020009f  beqz        $at, . + 4 + (0x9F << 2)
    ctx->pc = 0x3876C8u;
    {
        const bool branch_taken_0x3876c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3876CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3876C8u;
        // 0x3876cc: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3876c8) {
            ctx->pc = 0x387948u;
            goto label_387948;
        }
    }
    ctx->pc = 0x3876D0u;
    // 0x3876d0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x3876d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3876d4: 0x27b20138  addiu       $s2, $sp, 0x138
    ctx->pc = 0x3876d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x3876d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3876d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3876dc: 0x27b10128  addiu       $s1, $sp, 0x128
    ctx->pc = 0x3876dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x3876e0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3876e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x3876e4: 0x27b60114  addiu       $s6, $sp, 0x114
    ctx->pc = 0x3876e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x3876e8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3876e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3876ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3876ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3876f0: 0x0  nop
    ctx->pc = 0x3876f0u;
    // NOP
    // 0x3876f4: 0x46150500  add.s       $f20, $f0, $f21
    ctx->pc = 0x3876f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3876f8:
    // 0x3876f8: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x3876f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3876fc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3876fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x387700: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x387700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x387704: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x387704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x387708: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x387708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38770c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x38770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x387710: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x387710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x387714: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x387714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x387718: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x387718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38771c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x387720: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x387720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x387724: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x387724u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x387728: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x387728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x38772c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x38772cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x387730: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x387730u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x387734: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x387734u;
    SET_GPR_U32(ctx, 31, 0x38773Cu);
    ctx->pc = 0x387738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387734u;
    // 0x387738: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x387734u, 0x38773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38773Cu;
label_38773c:
    // 0x38773c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x38773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x387740: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x387740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x387744: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x387744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387748: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x387748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x38774c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x38774cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x387750: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x387750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x387754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x387754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x387758: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x387758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x38775c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x38775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387760: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x387760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x387764: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x387764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x387768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x387768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38776c: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x38776Cu;
    SET_GPR_U32(ctx, 31, 0x387774u);
    ctx->pc = 0x387770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38776Cu;
    // 0x387770: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x38776Cu, 0x387774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387774u;
label_387774:
    // 0x387774: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x387774u;
    {
        const bool branch_taken_0x387774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387774) {
            ctx->pc = 0x387918u;
            goto label_387918;
        }
    }
    ctx->pc = 0x38777Cu;
    // 0x38777c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x38777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x387780: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x387780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x387784: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x387784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x387788: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x387788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x38778c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x38778cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x387790: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x387790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x387794: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x387794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x387798: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x387798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x38779c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x38779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3877a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3877a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3877a4: 0xc096cf8  jal         func_25B3E0
    ctx->pc = 0x3877A4u;
    SET_GPR_U32(ctx, 31, 0x3877ACu);
    ctx->pc = 0x3877A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3877A4u;
    // 0x3877a8: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B3E0u, 0x3877A4u, 0x3877ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3877ACu;
label_3877ac:
    // 0x3877ac: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x3877ACu;
    {
        const bool branch_taken_0x3877ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3877B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877ACu;
        // 0x3877b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877ac) {
            ctx->pc = 0x387918u;
            goto label_387918;
        }
    }
    ctx->pc = 0x3877B4u;
    // 0x3877b4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3877B4u;
    SET_GPR_U32(ctx, 31, 0x3877BCu);
    ctx->pc = 0x3877B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3877B4u;
    // 0x3877b8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3877B4u, 0x3877BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3877BCu;
label_3877bc:
    // 0x3877bc: 0x7ae50000  lq          $a1, 0x0($s7)
    ctx->pc = 0x3877bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3877c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3877c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3877c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3877c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3877c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3877c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3877cc: 0x7ea50000  sq          $a1, 0x0($s5)
    ctx->pc = 0x3877ccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 5));
    // 0x3877d0: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x3877d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3877d4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x3877d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3877d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3877d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3877dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3877dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3877e0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x3877e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x3877e4: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x3877e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3877e8: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x3877e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x3877ec: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x3877ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3877f0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3877f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3877f4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x3877f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x3877f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3877f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3877fc: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x3877fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x387800: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x387800u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x387804: 0x93c32b6e  lbu         $v1, 0x2B6E($fp)
    ctx->pc = 0x387804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 11118)));
    // 0x387808: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x387808u;
    {
        const bool branch_taken_0x387808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387808u;
        // 0x38780c: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x387808) {
            ctx->pc = 0x387830u;
            goto label_387830;
        }
    }
    ctx->pc = 0x387810u;
    // 0x387810: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x387810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387814: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x387814u;
    {
        const bool branch_taken_0x387814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x387814) {
            ctx->pc = 0x387830u;
            goto label_387830;
        }
    }
    ctx->pc = 0x38781Cu;
    // 0x38781c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38781Cu;
    {
        const bool branch_taken_0x38781c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x38781c) {
            ctx->pc = 0x387830u;
            goto label_387830;
        }
    }
    ctx->pc = 0x387824u;
    // 0x387824: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x387824u;
    {
        const bool branch_taken_0x387824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387824) {
            ctx->pc = 0x387908u;
            goto label_387908;
        }
    }
    ctx->pc = 0x38782Cu;
    // 0x38782c: 0x0  nop
    ctx->pc = 0x38782cu;
    // NOP
label_387830:
    // 0x387830: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x387830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x387834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387838:
    // 0x387838: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x387838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x38783c: 0x101083  sra         $v0, $s0, 2
    ctx->pc = 0x38783cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 2));
    // 0x387840: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x387840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x387844: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x387844u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x387848: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387848u;
    {
        const bool branch_taken_0x387848 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x38784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387848u;
        // 0x38784c: 0x7fa30110  sq          $v1, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387848) {
            ctx->pc = 0x387858u;
            goto label_387858;
        }
    }
    ctx->pc = 0x387850u;
    // 0x387850: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x387850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x387854: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x387854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_387858:
    // 0x387858: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x387858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x38785c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x38785cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x387860: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x387860u;
    SET_GPR_U32(ctx, 31, 0x387868u);
    ctx->pc = 0x387864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387860u;
    // 0x387864: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x387860u, 0x387868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387868u;
label_387868:
    // 0x387868: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x387868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38786c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x38786cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x387870: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x387870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x387874: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x387874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x387878: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x387878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38787c: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x38787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x387880: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x387880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x387884: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x387884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x387888: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x387888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x38788c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x38788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x387890: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x387890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x387894: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x387894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387898: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x387898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x38789c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x38789cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3878a0: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3878A0u;
    SET_GPR_U32(ctx, 31, 0x3878A8u);
    ctx->pc = 0x3878A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3878A0u;
    // 0x3878a4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3878A0u, 0x3878A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3878A8u;
label_3878a8:
    // 0x3878a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3878A8u;
    {
        const bool branch_taken_0x3878a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3878a8) {
            ctx->pc = 0x3878B8u;
            goto label_3878b8;
        }
    }
    ctx->pc = 0x3878B0u;
    // 0x3878b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3878B0u;
    {
        const bool branch_taken_0x3878b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3878B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878B0u;
        // 0x3878b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878b0) {
            ctx->pc = 0x387908u;
            goto label_387908;
        }
    }
    ctx->pc = 0x3878B8u;
label_3878b8:
    // 0x3878b8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3878b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3878bc: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x3878bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3878c0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3878c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3878c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3878c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3878c8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3878c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3878cc: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x3878ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x3878d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3878d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3878d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3878d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3878d8: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x3878d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3878dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3878dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3878e0: 0xc096cf8  jal         func_25B3E0
    ctx->pc = 0x3878E0u;
    SET_GPR_U32(ctx, 31, 0x3878E8u);
    ctx->pc = 0x3878E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3878E0u;
    // 0x3878e4: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B3E0u, 0x3878E0u, 0x3878E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3878E8u;
label_3878e8:
    // 0x3878e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3878E8u;
    {
        const bool branch_taken_0x3878e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3878e8) {
            ctx->pc = 0x3878F8u;
            goto label_3878f8;
        }
    }
    ctx->pc = 0x3878F0u;
    // 0x3878f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3878F0u;
    {
        const bool branch_taken_0x3878f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3878F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878F0u;
        // 0x3878f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878f0) {
            ctx->pc = 0x387908u;
            goto label_387908;
        }
    }
    ctx->pc = 0x3878F8u;
label_3878f8:
    // 0x3878f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3878f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3878fc: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x3878fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x387900: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x387900u;
    {
        const bool branch_taken_0x387900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387900u;
        // 0x387904: 0x26101000  addiu       $s0, $s0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387900) {
            ctx->pc = 0x387838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387838;
        }
    }
    ctx->pc = 0x387908u;
label_387908:
    // 0x387908: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x387908u;
    {
        const bool branch_taken_0x387908 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387908u;
        // 0x38790c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387908) {
            ctx->pc = 0x387918u;
            goto label_387918;
        }
    }
    ctx->pc = 0x387910u;
    // 0x387910: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x387910u;
    {
        const bool branch_taken_0x387910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387910) {
            ctx->pc = 0x387950u;
            goto label_387950;
        }
    }
    ctx->pc = 0x387918u;
label_387918:
    // 0x387918: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x387918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x38791c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x38791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x387920: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x387920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x387924: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x387924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x387928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x387928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38792c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x38792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x387930: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x387930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x387934: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x387934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x387938: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x387938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38793c: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x38793Cu;
    {
        const bool branch_taken_0x38793c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38793c) {
            ctx->pc = 0x3876F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3876f8;
        }
    }
    ctx->pc = 0x387944u;
    // 0x387944: 0x0  nop
    ctx->pc = 0x387944u;
    // NOP
label_387948:
    // 0x387948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38794c: 0x0  nop
    ctx->pc = 0x38794cu;
    // NOP
label_387950:
    // 0x387950: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x387950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x387954: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x387954u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x387958: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x387958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x38795c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x38795cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x387960: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x387960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x387964: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x387964u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x387968: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x387968u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38796c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x38796cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x387970: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x387970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387974: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x387974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387978: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x387978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38797c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38797cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387980: 0x3e00008  jr          $ra
    ctx->pc = 0x387980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387980u;
        // 0x387984: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387988u;
}

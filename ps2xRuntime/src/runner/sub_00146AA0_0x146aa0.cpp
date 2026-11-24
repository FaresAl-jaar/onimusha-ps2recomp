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

// Function: sub_00146AA0
// Address: 0x146aa0 - 0x147018
void sub_00146AA0_0x146aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146AA0_0x146aa0");
#endif

    switch (ctx->pc) {
        case 0x146b18u: goto label_146b18;
        case 0x146b50u: goto label_146b50;
        case 0x146c60u: goto label_146c60;
        case 0x146d34u: goto label_146d34;
        case 0x146e00u: goto label_146e00;
        case 0x146e18u: goto label_146e18;
        default: break;
    }

    ctx->pc = 0x146aa0u;

    // 0x146aa0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x146aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x146aa4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x146aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x146aa8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x146aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x146aac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x146aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x146ab0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x146ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x146ab4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x146ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x146ab8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x146ab8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146abc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x146abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x146ac0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x146ac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ac4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x146ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x146ac8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x146ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x146acc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x146accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ad0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x146ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x146ad4: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x146ad4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x146ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x146adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ae0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x146ae0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x146ae4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x146ae4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x146ae8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x146ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x146aec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x146aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x146af0: 0x90830351  lbu         $v1, 0x351($a0)
    ctx->pc = 0x146af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 849)));
    // 0x146af4: 0x3c0447c3  lui         $a0, 0x47C3
    ctx->pc = 0x146af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18371 << 16));
    // 0x146af8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x146af8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x146afc: 0x34844f80  ori         $a0, $a0, 0x4F80
    ctx->pc = 0x146afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20352);
    // 0x146b00: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x146b00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x146b04: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x146B04u;
    {
        const bool branch_taken_0x146b04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x146B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B04u;
        // 0x146b08: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b04) {
            ctx->pc = 0x146BD0u;
            goto label_146bd0;
        }
    }
    ctx->pc = 0x146B0Cu;
    // 0x146b0c: 0x24100034  addiu       $s0, $zero, 0x34
    ctx->pc = 0x146b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x146b10: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x146b10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x146b14: 0x27be00c8  addiu       $fp, $sp, 0xC8
    ctx->pc = 0x146b14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_146b18:
    // 0x146b18: 0x8ea20340  lw          $v0, 0x340($s5)
    ctx->pc = 0x146b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x146b1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x146b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x146b20: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x146b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b24: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x146b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x146b28: 0x50a021  addu        $s4, $v0, $s0
    ctx->pc = 0x146b28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x146b2c: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x146b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b30: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x146b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x146b34: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x146b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x146b38: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x146b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b3c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x146b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x146b40: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x146b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b44: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x146b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x146b48: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x146B48u;
    SET_GPR_U32(ctx, 31, 0x146B50u);
    ctx->pc = 0x146B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146B48u;
    // 0x146b4c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x146B48u, 0x146B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B50u;
label_146b50:
    // 0x146b50: 0xc6820030  lwc1        $f2, 0x30($s4)
    ctx->pc = 0x146b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146b54: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x146b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x146b58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x146b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146b5c: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x146b5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x146b60: 0x4602b880  add.s       $f2, $f23, $f2
    ctx->pc = 0x146b60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x146b64: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x146B64u;
    {
        const bool branch_taken_0x146b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B64u;
        // 0x146b68: 0x460208c0  add.s       $f3, $f1, $f2 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b64) {
            ctx->pc = 0x146BB8u;
            goto label_146bb8;
        }
    }
    ctx->pc = 0x146B6Cu;
    // 0x146b6c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x146b6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b70: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x146B70u;
    {
        const bool branch_taken_0x146b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146b70) {
            ctx->pc = 0x146BB8u;
            goto label_146bb8;
        }
    }
    ctx->pc = 0x146B78u;
    // 0x146b78: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x146B78u;
    {
        const bool branch_taken_0x146b78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x146b78) {
            ctx->pc = 0x146B88u;
            goto label_146b88;
        }
    }
    ctx->pc = 0x146B80u;
    // 0x146b80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x146B80u;
    {
        const bool branch_taken_0x146b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B80u;
        // 0x146b84: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b80) {
            ctx->pc = 0x146BA0u;
            goto label_146ba0;
        }
    }
    ctx->pc = 0x146B88u;
label_146b88:
    // 0x146b88: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x146b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146b8c: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x146b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146b90: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x146b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x146B94u;
    {
        const bool branch_taken_0x146b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146b94) {
            ctx->pc = 0x146BA0u;
            goto label_146ba0;
        }
    }
    ctx->pc = 0x146B9Cu;
    // 0x146b9c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x146b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_146ba0:
    // 0x146ba0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x146ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x146ba4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x146ba4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x146ba8: 0x4603a036  c.le.s      $f20, $f3
    ctx->pc = 0x146ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146bac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x146BACu;
    {
        const bool branch_taken_0x146bac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x146BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BACu;
        // 0x146bb0: 0x3071ffff  andi        $s1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bac) {
            ctx->pc = 0x146BB8u;
            goto label_146bb8;
        }
    }
    ctx->pc = 0x146BB4u;
    // 0x146bb4: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x146bb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
label_146bb8:
    // 0x146bb8: 0x92a30351  lbu         $v1, 0x351($s5)
    ctx->pc = 0x146bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 849)));
    // 0x146bbc: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x146bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x146bc0: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x146bc0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x146bc4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x146bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x146bc8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x146BC8u;
    {
        const bool branch_taken_0x146bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BC8u;
        // 0x146bcc: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bc8) {
            ctx->pc = 0x146B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146b18;
        }
    }
    ctx->pc = 0x146BD0u;
label_146bd0:
    // 0x146bd0: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x146BD0u;
    {
        const bool branch_taken_0x146bd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x146bd0) {
            ctx->pc = 0x146BE8u;
            goto label_146be8;
        }
    }
    ctx->pc = 0x146BD8u;
    // 0x146bd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x146bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x146bdc: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x146bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x146be0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x146BE0u;
    {
        const bool branch_taken_0x146be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BE0u;
        // 0x146be4: 0x8eb30340  lw          $s3, 0x340($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146be0) {
            ctx->pc = 0x146C50u;
            goto label_146c50;
        }
    }
    ctx->pc = 0x146BE8u;
label_146be8:
    // 0x146be8: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x146be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x146bec: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x146becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x146bf0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x146BF0u;
    {
        const bool branch_taken_0x146bf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x146BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BF0u;
        // 0x146bf4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bf0) {
            ctx->pc = 0x146C08u;
            goto label_146c08;
        }
    }
    ctx->pc = 0x146BF8u;
    // 0x146bf8: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x146bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x146bfc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x146BFCu;
    {
        const bool branch_taken_0x146bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146bfc) {
            ctx->pc = 0x146C50u;
            goto label_146c50;
        }
    }
    ctx->pc = 0x146C04u;
    // 0x146c04: 0x0  nop
    ctx->pc = 0x146c04u;
    // NOP
label_146c08:
    // 0x146c08: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x146c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x146c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146c10: 0x0  nop
    ctx->pc = 0x146c10u;
    // NOP
    // 0x146c14: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x146c14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146c18: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x146C18u;
    {
        const bool branch_taken_0x146c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C18u;
        // 0x146c1c: 0x3c044000  lui         $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c18) {
            ctx->pc = 0x146C48u;
            goto label_146c48;
        }
    }
    ctx->pc = 0x146C20u;
    // 0x146c20: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x146c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x146c24: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x146c24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146c2c: 0x0  nop
    ctx->pc = 0x146c2cu;
    // NOP
    // 0x146c30: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x146c30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x146c34: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x146c34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x146c38: 0x0  nop
    ctx->pc = 0x146c38u;
    // NOP
    // 0x146c3c: 0x0  nop
    ctx->pc = 0x146c3cu;
    // NOP
    // 0x146c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x146C40u;
    {
        const bool branch_taken_0x146c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c40) {
            ctx->pc = 0x146C50u;
            goto label_146c50;
        }
    }
    ctx->pc = 0x146C48u;
label_146c48:
    // 0x146c48: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x146c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x146c4c: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x146c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_146c50:
    // 0x146c50: 0x8ea600f0  lw          $a2, 0xF0($s5)
    ctx->pc = 0x146c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x146c54: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x146C54u;
    {
        const bool branch_taken_0x146c54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C54u;
        // 0x146c58: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c54) {
            ctx->pc = 0x146C80u;
            goto label_146c80;
        }
    }
    ctx->pc = 0x146C5Cu;
    // 0x146c5c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x146c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_146c60:
    // 0x146c60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x146c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x146c64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x146c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x146c68: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x146c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x146c6c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x146c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x146c70: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x146c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x146c74: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x146C74u;
    {
        const bool branch_taken_0x146c74 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x146c74) {
            ctx->pc = 0x146C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146c60;
        }
    }
    ctx->pc = 0x146C7Cu;
    // 0x146c7c: 0x0  nop
    ctx->pc = 0x146c7cu;
    // NOP
label_146c80:
    // 0x146c80: 0x8ea600f4  lw          $a2, 0xF4($s5)
    ctx->pc = 0x146c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146c84: 0x10c0006c  beqz        $a2, . + 4 + (0x6C << 2)
    ctx->pc = 0x146C84u;
    {
        const bool branch_taken_0x146c84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c84) {
            ctx->pc = 0x146E38u;
            goto label_146e38;
        }
    }
    ctx->pc = 0x146C8Cu;
    // 0x146c8c: 0x8ea300f8  lw          $v1, 0xF8($s5)
    ctx->pc = 0x146c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x146c90: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x146C90u;
    {
        const bool branch_taken_0x146c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c90) {
            ctx->pc = 0x146E10u;
            goto label_146e10;
        }
    }
    ctx->pc = 0x146C98u;
    // 0x146c98: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x146c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x146c9c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x146c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x146ca0: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x146ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146ca4: 0x27b200c4  addiu       $s2, $sp, 0xC4
    ctx->pc = 0x146ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x146ca8: 0xc4c40024  lwc1        $f4, 0x24($a2)
    ctx->pc = 0x146ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x146cac: 0x27b000c8  addiu       $s0, $sp, 0xC8
    ctx->pc = 0x146cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x146cb0: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x146cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146cb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x146cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cb8: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x146cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146cbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x146cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x146cc0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x146cc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x146cc4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x146cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x146cc8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x146cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x146ccc: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x146cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146cd0: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x146cd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x146cd4: 0x46041543  div.s       $f21, $f2, $f4
    ctx->pc = 0x146cd4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x146cd8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x146cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146cdc: 0x46030d03  div.s       $f20, $f1, $f3
    ctx->pc = 0x146cdcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x146ce0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x146ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x146ce4: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x146ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146ce8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x146ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146cec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x146cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x146cf0: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x146cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x146cf4: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x146cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x146cf8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x146cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146cfc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x146cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x146d00: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x146d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x146d04: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x146d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146d08: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x146d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x146d0c: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x146d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x146d10: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x146d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146d14: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x146d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x146d18: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x146d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x146d1c: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x146d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x146d20: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x146d20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x146d24: 0x0  nop
    ctx->pc = 0x146d24u;
    // NOP
    // 0x146d28: 0x0  nop
    ctx->pc = 0x146d28u;
    // NOP
    // 0x146d2c: 0xc0414c0  jal         func_105300
    ctx->pc = 0x146D2Cu;
    SET_GPR_U32(ctx, 31, 0x146D34u);
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x146D2Cu, 0x146D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D34u;
label_146d34:
    // 0x146d34: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x146d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146d38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x146d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d3c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x146d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x146d40: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x146d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146d44: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x146d44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x146d48: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x146d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146d4c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x146d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x146d50: 0xa2a20055  sb          $v0, 0x55($s5)
    ctx->pc = 0x146d50u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x146d54: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x146d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146d58: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x146d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x146d5c: 0xa2a20056  sb          $v0, 0x56($s5)
    ctx->pc = 0x146d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x146d60: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x146d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146d64: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x146d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x146d68: 0xa2a20057  sb          $v0, 0x57($s5)
    ctx->pc = 0x146d68u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x146d6c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x146d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146d70: 0xe6a00068  swc1        $f0, 0x68($s5)
    ctx->pc = 0x146d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 104), bits); }
    // 0x146d74: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x146d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146d78: 0xe6a0006c  swc1        $f0, 0x6C($s5)
    ctx->pc = 0x146d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    // 0x146d7c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x146d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146d80: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x146d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
    // 0x146d84: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x146d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146d88: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x146d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146d8c: 0xe6a00064  swc1        $f0, 0x64($s5)
    ctx->pc = 0x146d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
    // 0x146d90: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x146d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146d94: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x146d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x146d98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x146d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146d9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x146d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146da0: 0x4615081a  mula.s      $f1, $f21
    ctx->pc = 0x146da0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    // 0x146da4: 0x4614001c  madd.s      $f0, $f0, $f20
    ctx->pc = 0x146da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x146da8: 0xe6a00058  swc1        $f0, 0x58($s5)
    ctx->pc = 0x146da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x146dac: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x146dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146db0: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x146db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x146db4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x146db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146db8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x146db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146dbc: 0x4615081a  mula.s      $f1, $f21
    ctx->pc = 0x146dbcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    // 0x146dc0: 0x4614001c  madd.s      $f0, $f0, $f20
    ctx->pc = 0x146dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x146dc4: 0xe6a0005c  swc1        $f0, 0x5C($s5)
    ctx->pc = 0x146dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x146dc8: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x146dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146dcc: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x146dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x146dd0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x146dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146dd4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x146dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146dd8: 0x4615081a  mula.s      $f1, $f21
    ctx->pc = 0x146dd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    // 0x146ddc: 0x4614001c  madd.s      $f0, $f0, $f20
    ctx->pc = 0x146ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x146de0: 0xe6a00060  swc1        $f0, 0x60($s5)
    ctx->pc = 0x146de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 96), bits); }
    // 0x146de4: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x146de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x146de8: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x146de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x146dec: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x146decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146df0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x146df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146df4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146df8: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x146DF8u;
    SET_GPR_U32(ctx, 31, 0x146E00u);
    ctx->pc = 0x146DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146DF8u;
    // 0x146dfc: 0xe6a00074  swc1        $f0, 0x74($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x146DF8u, 0x146E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E00u;
label_146e00:
    // 0x146e00: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x146e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x146e04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x146E04u;
    {
        const bool branch_taken_0x146e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E04u;
        // 0x146e08: 0xe6a00078  swc1        $f0, 0x78($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e04) {
            ctx->pc = 0x146E38u;
            goto label_146e38;
        }
    }
    ctx->pc = 0x146E0Cu;
    // 0x146e0c: 0x0  nop
    ctx->pc = 0x146e0cu;
    // NOP
label_146e10:
    // 0x146e10: 0x26a50054  addiu       $a1, $s5, 0x54
    ctx->pc = 0x146e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
    // 0x146e14: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x146e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_146e18:
    // 0x146e18: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x146e1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x146e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x146e20: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x146e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x146e24: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x146e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x146e28: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x146e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x146e2c: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x146E2Cu;
    {
        const bool branch_taken_0x146e2c = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x146e2c) {
            ctx->pc = 0x146E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146e18;
        }
    }
    ctx->pc = 0x146E34u;
    // 0x146e34: 0x0  nop
    ctx->pc = 0x146e34u;
    // NOP
label_146e38:
    // 0x146e38: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x146e38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x146e3c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x146e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x146e40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x146e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146e44: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x146e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x146e48: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x146e48u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146e4c: 0xa2a40088  sb          $a0, 0x88($s5)
    ctx->pc = 0x146e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 136), (uint8_t)GPR_U32(ctx, 4));
    // 0x146e50: 0xa2a80089  sb          $t0, 0x89($s5)
    ctx->pc = 0x146e50u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 137), (uint8_t)GPR_U32(ctx, 8));
    // 0x146e54: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x146e54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x146e58: 0xa2a4008a  sb          $a0, 0x8A($s5)
    ctx->pc = 0x146e58u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 138), (uint8_t)GPR_U32(ctx, 4));
    // 0x146e5c: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x146e5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x146e60: 0xa2a4008b  sb          $a0, 0x8B($s5)
    ctx->pc = 0x146e60u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 139), (uint8_t)GPR_U32(ctx, 4));
    // 0x146e64: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x146e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e68: 0xe6a0008c  swc1        $f0, 0x8C($s5)
    ctx->pc = 0x146e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 140), bits); }
    // 0x146e6c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x146e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e70: 0xe6a00090  swc1        $f0, 0x90($s5)
    ctx->pc = 0x146e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 144), bits); }
    // 0x146e74: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x146e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e78: 0xe6a00094  swc1        $f0, 0x94($s5)
    ctx->pc = 0x146e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 148), bits); }
    // 0x146e7c: 0xaea70098  sw          $a3, 0x98($s5)
    ctx->pc = 0x146e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 152), GPR_U32(ctx, 7));
    // 0x146e80: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x146e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e84: 0xe6a0009c  swc1        $f0, 0x9C($s5)
    ctx->pc = 0x146e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 156), bits); }
    // 0x146e88: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x146e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e8c: 0xe6a000a0  swc1        $f0, 0xA0($s5)
    ctx->pc = 0x146e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 160), bits); }
    // 0x146e90: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x146e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e94: 0xe6a000a4  swc1        $f0, 0xA4($s5)
    ctx->pc = 0x146e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 164), bits); }
    // 0x146e98: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x146e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e9c: 0xe6a000a8  swc1        $f0, 0xA8($s5)
    ctx->pc = 0x146e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 168), bits); }
    // 0x146ea0: 0x92660003  lbu         $a2, 0x3($s3)
    ctx->pc = 0x146ea0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x146ea4: 0x8ea4033c  lw          $a0, 0x33C($s5)
    ctx->pc = 0x146ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 828)));
    // 0x146ea8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x146ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x146eac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x146eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x146eb0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x146eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x146eb4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x146eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x146eb8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x146eb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146ebc: 0xa2a400bc  sb          $a0, 0xBC($s5)
    ctx->pc = 0x146ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 188), (uint8_t)GPR_U32(ctx, 4));
    // 0x146ec0: 0xa2a800bd  sb          $t0, 0xBD($s5)
    ctx->pc = 0x146ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 189), (uint8_t)GPR_U32(ctx, 8));
    // 0x146ec4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x146ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146ec8: 0xe6a000c0  swc1        $f0, 0xC0($s5)
    ctx->pc = 0x146ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
    // 0x146ecc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x146eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146ed0: 0xe6a000c4  swc1        $f0, 0xC4($s5)
    ctx->pc = 0x146ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 196), bits); }
    // 0x146ed4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x146ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146ed8: 0xe6a000c8  swc1        $f0, 0xC8($s5)
    ctx->pc = 0x146ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 200), bits); }
    // 0x146edc: 0x1860003e  blez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x146EDCu;
    {
        const bool branch_taken_0x146edc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x146EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EDCu;
        // 0x146ee0: 0xaea700cc  sw          $a3, 0xCC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146edc) {
            ctx->pc = 0x146FD8u;
            goto label_146fd8;
        }
    }
    ctx->pc = 0x146EE4u;
    // 0x146ee4: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x146ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x146ee8: 0x46160881  sub.s       $f2, $f1, $f22
    ctx->pc = 0x146ee8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x146eec: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x146eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146ef0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x146ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146ef4: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146ef4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146ef8: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146efc: 0xe6a0009c  swc1        $f0, 0x9C($s5)
    ctx->pc = 0x146efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 156), bits); }
    // 0x146f00: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x146f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x146f04: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x146f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f08: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x146f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f0c: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146f0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146f10: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146f14: 0xe6a000a0  swc1        $f0, 0xA0($s5)
    ctx->pc = 0x146f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 160), bits); }
    // 0x146f18: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x146f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x146f1c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x146f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f20: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x146f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f24: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146f24u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146f28: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146f2c: 0xe6a000a4  swc1        $f0, 0xA4($s5)
    ctx->pc = 0x146f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 164), bits); }
    // 0x146f30: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x146f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x146f34: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x146f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f38: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x146f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f3c: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146f3cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146f40: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146f44: 0xe6a0008c  swc1        $f0, 0x8C($s5)
    ctx->pc = 0x146f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 140), bits); }
    // 0x146f48: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x146f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x146f4c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x146f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f50: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x146f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f54: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146f54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146f58: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146f5c: 0xe6a00090  swc1        $f0, 0x90($s5)
    ctx->pc = 0x146f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 144), bits); }
    // 0x146f60: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x146f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x146f64: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x146f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f68: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x146f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f6c: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146f6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146f70: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146f74: 0xe6a00094  swc1        $f0, 0x94($s5)
    ctx->pc = 0x146f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 148), bits); }
    // 0x146f78: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x146f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x146f7c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x146f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f80: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x146f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f84: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146f84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146f88: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146f8c: 0xe6a000a8  swc1        $f0, 0xA8($s5)
    ctx->pc = 0x146f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 168), bits); }
    // 0x146f90: 0x8ea3033c  lw          $v1, 0x33C($s5)
    ctx->pc = 0x146f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 828)));
    // 0x146f94: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x146f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x146f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f9c: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146f9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146fa0: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146fa4: 0xe6a000c0  swc1        $f0, 0xC0($s5)
    ctx->pc = 0x146fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
    // 0x146fa8: 0x8ea3033c  lw          $v1, 0x33C($s5)
    ctx->pc = 0x146fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 828)));
    // 0x146fac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x146facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146fb0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x146fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146fb4: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146fb4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146fb8: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146fbc: 0xe6a000c4  swc1        $f0, 0xC4($s5)
    ctx->pc = 0x146fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 196), bits); }
    // 0x146fc0: 0x8ea3033c  lw          $v1, 0x33C($s5)
    ctx->pc = 0x146fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 828)));
    // 0x146fc4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x146fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146fc8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x146fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146fcc: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x146fccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x146fd0: 0x4616001c  madd.s      $f0, $f0, $f22
    ctx->pc = 0x146fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x146fd4: 0xe6a000c8  swc1        $f0, 0xC8($s5)
    ctx->pc = 0x146fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 200), bits); }
label_146fd8:
    // 0x146fd8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x146fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x146fdc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x146fdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x146fe0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x146fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x146fe4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x146fe4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x146fe8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x146fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x146fec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x146fecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x146ff0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x146ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x146ff4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x146ff4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146ff8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x146ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x146ffc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x146ffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147000: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x147000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147004: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x147004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147008: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x147008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14700c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14700cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147010: 0x3e00008  jr          $ra
    ctx->pc = 0x147010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147010u;
        // 0x147014: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147018u;
}

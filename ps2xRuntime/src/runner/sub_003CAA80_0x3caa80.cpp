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

// Function: sub_003CAA80
// Address: 0x3caa80 - 0x3cac84
void sub_003CAA80_0x3caa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAA80_0x3caa80");
#endif

    switch (ctx->pc) {
        case 0x3cab00u: goto label_3cab00;
        case 0x3caba4u: goto label_3caba4;
        case 0x3cabacu: goto label_3cabac;
        case 0x3cabbcu: goto label_3cabbc;
        default: break;
    }

    ctx->pc = 0x3caa80u;

    // 0x3caa80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3caa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3caa84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3caa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3caa88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3caa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3caa8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3caa8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3caa90: 0x90832b2c  lbu         $v1, 0x2B2C($a0)
    ctx->pc = 0x3caa90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11052)));
    // 0x3caa94: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3CAA94u;
    {
        const bool branch_taken_0x3caa94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA94u;
        // 0x3caa98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa94) {
            ctx->pc = 0x3CAAF0u;
            goto label_3caaf0;
        }
    }
    ctx->pc = 0x3CAA9Cu;
    // 0x3caa9c: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x3caa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3caaa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3caaa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3caaa4: 0x0  nop
    ctx->pc = 0x3caaa4u;
    // NOP
    // 0x3caaa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3caaa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3caaac: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x3CAAACu;
    {
        const bool branch_taken_0x3caaac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3caaac) {
            ctx->pc = 0x3CAAD8u;
            goto label_3caad8;
        }
    }
    ctx->pc = 0x3CAAB4u;
    // 0x3caab4: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x3caab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3caab8: 0x3c03bfd1  lui         $v1, 0xBFD1
    ctx->pc = 0x3caab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49105 << 16));
    // 0x3caabc: 0x34631111  ori         $v1, $v1, 0x1111
    ctx->pc = 0x3caabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4369);
    // 0x3caac0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3caac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3caac4: 0x0  nop
    ctx->pc = 0x3caac4u;
    // NOP
    // 0x3caac8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3caac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3caacc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CAACCu;
    {
        const bool branch_taken_0x3caacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAACCu;
        // 0x3caad0: 0xe60000a4  swc1        $f0, 0xA4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caacc) {
            ctx->pc = 0x3CAAE0u;
            goto label_3caae0;
        }
    }
    ctx->pc = 0x3CAAD4u;
    // 0x3caad4: 0x0  nop
    ctx->pc = 0x3caad4u;
    // NOP
label_3caad8:
    // 0x3caad8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3caad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3caadc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x3caadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_3caae0:
    // 0x3caae0: 0xa2002b2c  sb          $zero, 0x2B2C($s0)
    ctx->pc = 0x3caae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11052), (uint8_t)GPR_U32(ctx, 0));
    // 0x3caae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3caae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3caae8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3CAAE8u;
    {
        const bool branch_taken_0x3caae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAE8u;
        // 0x3caaec: 0xa2032b31  sb          $v1, 0x2B31($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11057), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caae8) {
            ctx->pc = 0x3CAC70u;
            goto label_3cac70;
        }
    }
    ctx->pc = 0x3CAAF0u;
label_3caaf0:
    // 0x3caaf0: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3caaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3caaf4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3caaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3caaf8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3CAAF8u;
    SET_GPR_U32(ctx, 31, 0x3CAB00u);
    ctx->pc = 0x3CAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAAF8u;
    // 0x3caafc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3CAAF8u, 0x3CAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAB00u;
label_3cab00:
    // 0x3cab00: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3CAB00u;
    {
        const bool branch_taken_0x3cab00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cab00) {
            ctx->pc = 0x3CAB50u;
            goto label_3cab50;
        }
    }
    ctx->pc = 0x3CAB08u;
    // 0x3cab08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3cab08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cab0c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3cab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3cab10: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x3cab10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3cab14: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CAB14u;
    {
        const bool branch_taken_0x3cab14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB14u;
        // 0x3cab18: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cab14) {
            ctx->pc = 0x3CAB20u;
            goto label_3cab20;
        }
    }
    ctx->pc = 0x3CAB1Cu;
    // 0x3cab1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cab1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cab20:
    // 0x3cab20: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3CAB20u;
    {
        const bool branch_taken_0x3cab20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cab20) {
            ctx->pc = 0x3CAB50u;
            goto label_3cab50;
        }
    }
    ctx->pc = 0x3CAB28u;
    // 0x3cab28: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x3cab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cab2c: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x3cab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x3cab30: 0xc44128f0  lwc1        $f1, 0x28F0($v0)
    ctx->pc = 0x3cab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cab34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cab34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cab38: 0x0  nop
    ctx->pc = 0x3cab38u;
    // NOP
    // 0x3cab3c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3cab3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3cab40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cab40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3cab44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3CAB44u;
    {
        const bool branch_taken_0x3cab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB44u;
        // 0x3cab48: 0xe6002b20  swc1        $f0, 0x2B20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cab44) {
            ctx->pc = 0x3CAB88u;
            goto label_3cab88;
        }
    }
    ctx->pc = 0x3CAB4Cu;
    // 0x3cab4c: 0x0  nop
    ctx->pc = 0x3cab4cu;
    // NOP
label_3cab50:
    // 0x3cab50: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x3cab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x3cab54: 0xc60228f0  lwc1        $f2, 0x28F0($s0)
    ctx->pc = 0x3cab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cab58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cab58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cab5c: 0x0  nop
    ctx->pc = 0x3cab5cu;
    // NOP
    // 0x3cab60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3cab60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cab64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3CAB64u;
    {
        const bool branch_taken_0x3cab64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cab64) {
            ctx->pc = 0x3CAB88u;
            goto label_3cab88;
        }
    }
    ctx->pc = 0x3CAB6Cu;
    // 0x3cab6c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3cab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cab70: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x3cab70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x3cab74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cab74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cab78: 0x0  nop
    ctx->pc = 0x3cab78u;
    // NOP
    // 0x3cab7c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3cab7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3cab80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cab80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3cab84: 0xe6002b20  swc1        $f0, 0x2B20($s0)
    ctx->pc = 0x3cab84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11040), bits); }
label_3cab88:
    // 0x3cab88: 0xc6022b20  lwc1        $f2, 0x2B20($s0)
    ctx->pc = 0x3cab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cab8c: 0xc6012b24  lwc1        $f1, 0x2B24($s0)
    ctx->pc = 0x3cab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cab90: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3cab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cab94: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3cab94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3cab98: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x3cab98u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cab9c: 0xc04b946  jal         func_12E518
    ctx->pc = 0x3CAB9Cu;
    SET_GPR_U32(ctx, 31, 0x3CABA4u);
    ctx->pc = 0x3CABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAB9Cu;
    // 0x3caba0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x3CAB9Cu, 0x3CABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CABA4u;
label_3caba4:
    // 0x3caba4: 0xc0478a6  jal         func_11E298
    ctx->pc = 0x3CABA4u;
    SET_GPR_U32(ctx, 31, 0x3CABACu);
    ctx->pc = 0x3CABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CABA4u;
    // 0x3caba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E298u, 0x3CABA4u, 0x3CABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CABACu;
label_3cabac:
    // 0x3cabac: 0x3c03403e  lui         $v1, 0x403E
    ctx->pc = 0x3cabacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16446 << 16));
    // 0x3cabb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cabb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cabb4: 0xc0400cc  jal         func_100330
    ctx->pc = 0x3CABB4u;
    SET_GPR_U32(ctx, 31, 0x3CABBCu);
    ctx->pc = 0x3CABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CABB4u;
    // 0x3cabb8: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100330u, 0x3CABB4u, 0x3CABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CABBCu;
label_3cabbc:
    // 0x3cabbc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3CABBCu;
    {
        const bool branch_taken_0x3cabbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cabbc) {
            ctx->pc = 0x3CAC60u;
            goto label_3cac60;
        }
    }
    ctx->pc = 0x3CABC4u;
    // 0x3cabc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cabc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cabc8: 0x0  nop
    ctx->pc = 0x3cabc8u;
    // NOP
    // 0x3cabcc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3cabccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cabd0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x3CABD0u;
    {
        const bool branch_taken_0x3cabd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cabd0) {
            ctx->pc = 0x3CAC20u;
            goto label_3cac20;
        }
    }
    ctx->pc = 0x3CABD8u;
    // 0x3cabd8: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3cabd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cabdc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3cabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3cabe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cabe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cabe4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3cabe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3cabe8: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x3cabe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x3cabec: 0x24a50b8c  addiu       $a1, $a1, 0xB8C
    ctx->pc = 0x3cabecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2956));
    // 0x3cabf0: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x3cabf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x3cabf4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3cabf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3cabf8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3cabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cabfc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3cabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3cac00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cac00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cac04: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3cac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3cac08: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3cac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cac0c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cac0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3cac10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cac10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3cac14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3CAC14u;
    {
        const bool branch_taken_0x3cac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC14u;
        // 0x3cac18: 0xe60000a4  swc1        $f0, 0xA4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cac14) {
            ctx->pc = 0x3CAC58u;
            goto label_3cac58;
        }
    }
    ctx->pc = 0x3CAC1Cu;
    // 0x3cac1c: 0x0  nop
    ctx->pc = 0x3cac1cu;
    // NOP
label_3cac20:
    // 0x3cac20: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x3cac20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cac24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3cac24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3cac28: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x3cac28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x3cac2c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3cac2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3cac30: 0x24840b8c  addiu       $a0, $a0, 0xB8C
    ctx->pc = 0x3cac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2956));
    // 0x3cac34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cac34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cac38: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3cac38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3cac3c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3cac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3cac40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cac40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cac44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3cac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3cac48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cac4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cac4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3cac50: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x3cac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x3cac54: 0x0  nop
    ctx->pc = 0x3cac54u;
    // NOP
label_3cac58:
    // 0x3cac58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CAC58u;
    {
        const bool branch_taken_0x3cac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC58u;
        // 0x3cac5c: 0xa2002b31  sb          $zero, 0x2B31($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11057), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cac58) {
            ctx->pc = 0x3CAC70u;
            goto label_3cac70;
        }
    }
    ctx->pc = 0x3CAC60u;
label_3cac60:
    // 0x3cac60: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3cac60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x3cac64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cac68: 0xa2032b31  sb          $v1, 0x2B31($s0)
    ctx->pc = 0x3cac68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11057), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cac6c: 0x0  nop
    ctx->pc = 0x3cac6cu;
    // NOP
label_3cac70:
    // 0x3cac70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cac70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cac74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cac74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cac78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3cac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cac7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CAC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC7Cu;
        // 0x3cac80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CAC84u;
}

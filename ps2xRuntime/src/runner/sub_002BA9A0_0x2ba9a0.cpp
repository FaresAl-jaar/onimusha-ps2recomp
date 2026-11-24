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

// Function: sub_002BA9A0
// Address: 0x2ba9a0 - 0x2bac88
void sub_002BA9A0_0x2ba9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA9A0_0x2ba9a0");
#endif

    switch (ctx->pc) {
        case 0x2ba9d4u: goto label_2ba9d4;
        case 0x2ba9fcu: goto label_2ba9fc;
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa24u: goto label_2baa24;
        case 0x2baa30u: goto label_2baa30;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa84u: goto label_2baa84;
        case 0x2baa94u: goto label_2baa94;
        case 0x2baadcu: goto label_2baadc;
        case 0x2bac5cu: goto label_2bac5c;
        default: break;
    }

    ctx->pc = 0x2ba9a0u;

    // 0x2ba9a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ba9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ba9a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ba9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ba9a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ba9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ba9ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ba9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ba9b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ba9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ba9b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba9b8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2ba9b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ba9bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ba9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba9c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ba9c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ba9c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ba9c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ba9c8: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x2ba9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2ba9cc: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2BA9CCu;
    SET_GPR_U32(ctx, 31, 0x2BA9D4u);
    ctx->pc = 0x2BA9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA9CCu;
    // 0x2ba9d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2BA9CCu, 0x2BA9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9D4u;
label_2ba9d4:
    // 0x2ba9d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ba9d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba9d8: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA9D8u;
    {
        const bool branch_taken_0x2ba9d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9d8) {
            ctx->pc = 0x2BA9F0u;
            goto label_2ba9f0;
        }
    }
    ctx->pc = 0x2BA9E0u;
    // 0x2ba9e0: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2ba9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x2ba9e4: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x2ba9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x2ba9e8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2BA9E8u;
    {
        const bool branch_taken_0x2ba9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9E8u;
        // 0x2ba9ec: 0xae0007c0  sw          $zero, 0x7C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9e8) {
            ctx->pc = 0x2BAC50u;
            goto label_2bac50;
        }
    }
    ctx->pc = 0x2BA9F0u;
label_2ba9f0:
    // 0x2ba9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ba9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba9f4: 0xc0b222c  jal         func_2C88B0
    ctx->pc = 0x2BA9F4u;
    SET_GPR_U32(ctx, 31, 0x2BA9FCu);
    ctx->pc = 0x2BA9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA9F4u;
    // 0x2ba9f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C88B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C88B0u, 0x2BA9F4u, 0x2BA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9FCu;
label_2ba9fc:
    // 0x2ba9fc: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2BA9FCu;
    {
        const bool branch_taken_0x2ba9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9FCu;
        // 0x2baa00: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9fc) {
            ctx->pc = 0x2BAC60u;
            goto label_2bac60;
        }
    }
    ctx->pc = 0x2BAA04u;
    // 0x2baa04: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2baa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2baa08: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2BAA08u;
    SET_GPR_U32(ctx, 31, 0x2BAA10u);
    ctx->pc = 0x2BAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA08u;
    // 0x2baa0c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2BAA08u, 0x2BAA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA10u;
label_2baa10:
    // 0x2baa10: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x2baa10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2baa14: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x2baa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2baa18: 0xc6560000  lwc1        $f22, 0x0($s2)
    ctx->pc = 0x2baa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2baa1c: 0xc0aeb24  jal         func_2BAC90
    ctx->pc = 0x2BAA1Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA24u);
    ctx->pc = 0x2BAA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA1Cu;
    // 0x2baa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAC90u, 0x2BAA1Cu, 0x2BAA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA24u;
label_2baa24:
    // 0x2baa24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2baa24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2baa28: 0xc0aeb24  jal         func_2BAC90
    ctx->pc = 0x2BAA28u;
    SET_GPR_U32(ctx, 31, 0x2BAA30u);
    ctx->pc = 0x2BAA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA28u;
    // 0x2baa2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAC90u, 0x2BAA28u, 0x2BAA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA30u;
label_2baa30:
    // 0x2baa30: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x2baa30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2baa34: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x2baa34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x2baa38: 0x4616b01c  madd.s      $f0, $f22, $f22
    ctx->pc = 0x2baa38u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[22], ctx->f[22]));
    // 0x2baa3c: 0x46000004  c1          0x4
    ctx->pc = 0x2baa3cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2baa40: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x2baa40u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2baa44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2baa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baa48: 0x0  nop
    ctx->pc = 0x2baa48u;
    // NOP
    // 0x2baa4c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2baa4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2baa50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAA50u;
    {
        const bool branch_taken_0x2baa50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2baa50) {
            ctx->pc = 0x2BAA5Cu;
            goto label_2baa5c;
        }
    }
    ctx->pc = 0x2BAA58u;
    // 0x2baa58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2baa58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2baa5c:
    // 0x2baa5c: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x2baa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2baa60: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2baa60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2baa64: 0x4500007a  bc1f        . + 4 + (0x7A << 2)
    ctx->pc = 0x2BAA64u;
    {
        const bool branch_taken_0x2baa64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA64u;
        // 0x2baa68: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa64) {
            ctx->pc = 0x2BAC50u;
            goto label_2bac50;
        }
    }
    ctx->pc = 0x2BAA6Cu;
    // 0x2baa6c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2BAA6Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA74u);
    ctx->pc = 0x2BAA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA6Cu;
    // 0x2baa70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2BAA6Cu, 0x2BAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA74u;
label_2baa74:
    // 0x2baa74: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2baa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2baa78: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x2baa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x2baa7c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2BAA7Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA84u);
    ctx->pc = 0x2BAA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA7Cu;
    // 0x2baa80: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2BAA7Cu, 0x2BAA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA84u;
label_2baa84:
    // 0x2baa84: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x2baa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2baa88: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2baa88u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2baa8c: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x2BAA8Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA94u);
    ctx->pc = 0x2BAA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA8Cu;
    // 0x2baa90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x2BAA8Cu, 0x2BAA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA94u;
label_2baa94:
    // 0x2baa94: 0xc621009c  lwc1        $f1, 0x9C($s1)
    ctx->pc = 0x2baa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baa98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2baa98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2baa9c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2BAA9Cu;
    {
        const bool branch_taken_0x2baa9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2baa9c) {
            ctx->pc = 0x2BAAD0u;
            goto label_2baad0;
        }
    }
    ctx->pc = 0x2BAAA4u;
    // 0x2baaa4: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2baaa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2baaa8: 0x34630801  ori         $v1, $v1, 0x801
    ctx->pc = 0x2baaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2049);
    // 0x2baaac: 0xfe030500  sd          $v1, 0x500($s0)
    ctx->pc = 0x2baaacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
    // 0x2baab0: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2baab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2baab4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2baab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baab8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2baab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2baabc: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2baabcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2baac0: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2baac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2baac4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2BAAC4u;
    {
        const bool branch_taken_0x2baac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAC4u;
        // 0x2baac8: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baac4) {
            ctx->pc = 0x2BAC48u;
            goto label_2bac48;
        }
    }
    ctx->pc = 0x2BAACCu;
    // 0x2baacc: 0x0  nop
    ctx->pc = 0x2baaccu;
    // NOP
label_2baad0:
    // 0x2baad0: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x2baad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2baad4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2BAAD4u;
    SET_GPR_U32(ctx, 31, 0x2BAADCu);
    ctx->pc = 0x2BAAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAAD4u;
    // 0x2baad8: 0xc64d0000  lwc1        $f13, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2BAAD4u, 0x2BAADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAADCu;
label_2baadc:
    // 0x2baadc: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x2baadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x2baae0: 0xa20004ee  sb          $zero, 0x4EE($s0)
    ctx->pc = 0x2baae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1262), (uint8_t)GPR_U32(ctx, 0));
    // 0x2baae4: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x2baae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x2baae8: 0x9224005e  lbu         $a0, 0x5E($s1)
    ctx->pc = 0x2baae8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2baaec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2baaecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2baaf0: 0x0  nop
    ctx->pc = 0x2baaf0u;
    // NOP
    // 0x2baaf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2baaf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2baaf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2baaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2baafc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2baafcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bab00: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2bab00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2bab04: 0x0  nop
    ctx->pc = 0x2bab04u;
    // NOP
    // 0x2bab08: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2bab08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bab0c: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2BAB0Cu;
    {
        const bool branch_taken_0x2bab0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB0Cu;
        // 0x2bab10: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab0c) {
            ctx->pc = 0x2BAC10u;
            goto label_2bac10;
        }
    }
    ctx->pc = 0x2BAB14u;
    // 0x2bab14: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2BAB14u;
    {
        const bool branch_taken_0x2bab14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB14u;
        // 0x2bab18: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab14) {
            ctx->pc = 0x2BAC10u;
            goto label_2bac10;
        }
    }
    ctx->pc = 0x2BAB1Cu;
    // 0x2bab1c: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BAB1Cu;
    {
        const bool branch_taken_0x2bab1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bab1c) {
            ctx->pc = 0x2BABC0u;
            goto label_2babc0;
        }
    }
    ctx->pc = 0x2BAB24u;
    // 0x2bab24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bab28: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BAB28u;
    {
        const bool branch_taken_0x2bab28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB28u;
        // 0x2bab2c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab28) {
            ctx->pc = 0x2BAB78u;
            goto label_2bab78;
        }
    }
    ctx->pc = 0x2BAB30u;
    // 0x2bab30: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAB30u;
    {
        const bool branch_taken_0x2bab30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bab30) {
            ctx->pc = 0x2BAB40u;
            goto label_2bab40;
        }
    }
    ctx->pc = 0x2BAB38u;
    // 0x2bab38: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2BAB38u;
    {
        const bool branch_taken_0x2bab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bab38) {
            ctx->pc = 0x2BAC10u;
            goto label_2bac10;
        }
    }
    ctx->pc = 0x2BAB40u;
label_2bab40:
    // 0x2bab40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bab40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab44: 0x0  nop
    ctx->pc = 0x2bab44u;
    // NOP
    // 0x2bab48: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bab48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bab4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAB4Cu;
    {
        const bool branch_taken_0x2bab4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB4Cu;
        // 0x2bab50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab4c) {
            ctx->pc = 0x2BAB58u;
            goto label_2bab58;
        }
    }
    ctx->pc = 0x2BAB54u;
    // 0x2bab54: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x2bab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2bab58:
    // 0x2bab58: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2bab58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bab5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2bab5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2bab60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bab64: 0xa60304ec  sh          $v1, 0x4EC($s0)
    ctx->pc = 0x2bab64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1260), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bab68: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2bab68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2bab6c: 0x34630440  ori         $v1, $v1, 0x440
    ctx->pc = 0x2bab6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1088);
    // 0x2bab70: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2BAB70u;
    {
        const bool branch_taken_0x2bab70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB70u;
        // 0x2bab74: 0xfe030500  sd          $v1, 0x500($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab70) {
            ctx->pc = 0x2BAC48u;
            goto label_2bac48;
        }
    }
    ctx->pc = 0x2BAB78u;
label_2bab78:
    // 0x2bab78: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x2bab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2bab7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bab7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab80: 0x0  nop
    ctx->pc = 0x2bab80u;
    // NOP
    // 0x2bab84: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bab84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bab88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAB88u;
    {
        const bool branch_taken_0x2bab88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB88u;
        // 0x2bab8c: 0xae0307c0  sw          $v1, 0x7C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab88) {
            ctx->pc = 0x2BAB98u;
            goto label_2bab98;
        }
    }
    ctx->pc = 0x2BAB90u;
    // 0x2bab90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAB90u;
    {
        const bool branch_taken_0x2bab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB90u;
        // 0x2bab94: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab90) {
            ctx->pc = 0x2BAB9Cu;
            goto label_2bab9c;
        }
    }
    ctx->pc = 0x2BAB98u;
label_2bab98:
    // 0x2bab98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bab98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bab9c:
    // 0x2bab9c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2bab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2baba0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2baba0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2baba4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2baba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2baba8: 0xa60304ec  sh          $v1, 0x4EC($s0)
    ctx->pc = 0x2baba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1260), (uint16_t)GPR_U32(ctx, 3));
    // 0x2babac: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2babacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2babb0: 0x34630460  ori         $v1, $v1, 0x460
    ctx->pc = 0x2babb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1120);
    // 0x2babb4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2BABB4u;
    {
        const bool branch_taken_0x2babb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABB4u;
        // 0x2babb8: 0xfe030500  sd          $v1, 0x500($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babb4) {
            ctx->pc = 0x2BAC48u;
            goto label_2bac48;
        }
    }
    ctx->pc = 0x2BABBCu;
    // 0x2babbc: 0x0  nop
    ctx->pc = 0x2babbcu;
    // NOP
label_2babc0:
    // 0x2babc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2babc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2babc4: 0x0  nop
    ctx->pc = 0x2babc4u;
    // NOP
    // 0x2babc8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2babc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2babcc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2BABCCu;
    {
        const bool branch_taken_0x2babcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2babcc) {
            ctx->pc = 0x2BABE8u;
            goto label_2babe8;
        }
    }
    ctx->pc = 0x2BABD4u;
    // 0x2babd4: 0xa60504ec  sh          $a1, 0x4EC($s0)
    ctx->pc = 0x2babd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1260), (uint16_t)GPR_U32(ctx, 5));
    // 0x2babd8: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2babd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2babdc: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2babdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2babe0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2BABE0u;
    {
        const bool branch_taken_0x2babe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABE0u;
        // 0x2babe4: 0xfe030500  sd          $v1, 0x500($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babe0) {
            ctx->pc = 0x2BAC48u;
            goto label_2bac48;
        }
    }
    ctx->pc = 0x2BABE8u;
label_2babe8:
    // 0x2babe8: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2babe8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2babec: 0x34630801  ori         $v1, $v1, 0x801
    ctx->pc = 0x2babecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2049);
    // 0x2babf0: 0xfe030500  sd          $v1, 0x500($s0)
    ctx->pc = 0x2babf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
    // 0x2babf4: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2babf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2babf8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2babf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2babfc: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2babfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bac00: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2bac00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2bac04: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2bac04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2bac08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BAC08u;
    {
        const bool branch_taken_0x2bac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC08u;
        // 0x2bac0c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac08) {
            ctx->pc = 0x2BAC48u;
            goto label_2bac48;
        }
    }
    ctx->pc = 0x2BAC10u;
label_2bac10:
    // 0x2bac10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bac10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bac14: 0x0  nop
    ctx->pc = 0x2bac14u;
    // NOP
    // 0x2bac18: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bac18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bac1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAC1Cu;
    {
        const bool branch_taken_0x2bac1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC1Cu;
        // 0x2bac20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac1c) {
            ctx->pc = 0x2BAC28u;
            goto label_2bac28;
        }
    }
    ctx->pc = 0x2BAC24u;
    // 0x2bac24: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x2bac24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2bac28:
    // 0x2bac28: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2bac28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bac2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2bac2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2bac30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bac34: 0xa60304ec  sh          $v1, 0x4EC($s0)
    ctx->pc = 0x2bac34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1260), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bac38: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2bac38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2bac3c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2bac3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2bac40: 0xfe030500  sd          $v1, 0x500($s0)
    ctx->pc = 0x2bac40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
    // 0x2bac44: 0x0  nop
    ctx->pc = 0x2bac44u;
    // NOP
label_2bac48:
    // 0x2bac48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAC48u;
    {
        const bool branch_taken_0x2bac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bac48) {
            ctx->pc = 0x2BAC60u;
            goto label_2bac60;
        }
    }
    ctx->pc = 0x2BAC50u;
label_2bac50:
    // 0x2bac50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bac50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac54: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BAC54u;
    SET_GPR_U32(ctx, 31, 0x2BAC5Cu);
    ctx->pc = 0x2BAC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC54u;
    // 0x2bac58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BAC54u, 0x2BAC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC5Cu;
label_2bac5c:
    // 0x2bac5c: 0x0  nop
    ctx->pc = 0x2bac5cu;
    // NOP
label_2bac60:
    // 0x2bac60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bac60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bac64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2bac64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bac68: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2bac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bac6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2bac6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bac70: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2bac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bac74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bac74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bac78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2bac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bac7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bac7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bac80: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC80u;
        // 0x2bac84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC88u;
}

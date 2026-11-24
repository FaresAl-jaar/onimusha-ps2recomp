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

// Function: sub_001D8A00
// Address: 0x1d8a00 - 0x1d8c9c
void sub_001D8A00_0x1d8a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8A00_0x1d8a00");
#endif

    switch (ctx->pc) {
        case 0x1d8a48u: goto label_1d8a48;
        case 0x1d8a58u: goto label_1d8a58;
        case 0x1d8a64u: goto label_1d8a64;
        case 0x1d8a74u: goto label_1d8a74;
        case 0x1d8a8cu: goto label_1d8a8c;
        case 0x1d8b54u: goto label_1d8b54;
        case 0x1d8b70u: goto label_1d8b70;
        case 0x1d8c24u: goto label_1d8c24;
        case 0x1d8c34u: goto label_1d8c34;
        case 0x1d8c50u: goto label_1d8c50;
        case 0x1d8c60u: goto label_1d8c60;
        default: break;
    }

    ctx->pc = 0x1d8a00u;

    // 0x1d8a00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d8a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d8a04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d8a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d8a08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d8a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d8a0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d8a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d8a10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d8a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d8a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d8a18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d8a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d8a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d8a20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d8a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a24: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d8a24u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d8a28: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1d8a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a2c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d8a2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d8a30: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1d8a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a34: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d8a34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d8a38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d8a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d8a3c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1d8a3cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1d8a40: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x1D8A40u;
    SET_GPR_U32(ctx, 31, 0x1D8A48u);
    ctx->pc = 0x1D8A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A40u;
    // 0x1d8a44: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1D8A40u, 0x1D8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A48u;
label_1d8a48:
    // 0x1d8a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d8a50: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x1D8A50u;
    SET_GPR_U32(ctx, 31, 0x1D8A58u);
    ctx->pc = 0x1D8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A50u;
    // 0x1d8a54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1D8A50u, 0x1D8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A58u;
label_1d8a58:
    // 0x1d8a58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d8a5c: 0xc076654  jal         func_1D9950
    ctx->pc = 0x1D8A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A64u);
    ctx->pc = 0x1D8A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A5Cu;
    // 0x1d8a60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x1D8A5Cu, 0x1D8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A64u;
label_1d8a64:
    // 0x1d8a64: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d8a64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1d8a68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d8a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d8a6c: 0xc076654  jal         func_1D9950
    ctx->pc = 0x1D8A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A74u);
    ctx->pc = 0x1D8A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A6Cu;
    // 0x1d8a70: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x1D8A6Cu, 0x1D8A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A74u;
label_1d8a74:
    // 0x1d8a74: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1d8a78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d8a7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8a80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d8a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a84: 0xc076654  jal         func_1D9950
    ctx->pc = 0x1D8A84u;
    SET_GPR_U32(ctx, 31, 0x1D8A8Cu);
    ctx->pc = 0x1D8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A84u;
    // 0x1d8a88: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x1D8A84u, 0x1D8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A8Cu;
label_1d8a8c:
    // 0x1d8a8c: 0x4617b842  mul.s       $f1, $f23, $f23
    ctx->pc = 0x1d8a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x1d8a90: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d8a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d8a94: 0x0  nop
    ctx->pc = 0x1d8a94u;
    // NOP
    // 0x1d8a98: 0x46151032  c.eq.s      $f2, $f21
    ctx->pc = 0x1d8a98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8a9c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8A9Cu;
    {
        const bool branch_taken_0x1d8a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A9Cu;
        // 0x1d8aa0: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a9c) {
            ctx->pc = 0x1D8AB0u;
            goto label_1d8ab0;
        }
    }
    ctx->pc = 0x1D8AA4u;
    // 0x1d8aa4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1D8AA4u;
    {
        const bool branch_taken_0x1d8aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AA4u;
        // 0x1d8aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8aa4) {
            ctx->pc = 0x1D8C70u;
            goto label_1d8c70;
        }
    }
    ctx->pc = 0x1D8AACu;
    // 0x1d8aac: 0x0  nop
    ctx->pc = 0x1d8aacu;
    // NOP
label_1d8ab0:
    // 0x1d8ab0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d8ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8ab8: 0x4616b01a  mula.s      $f22, $f22
    ctx->pc = 0x1d8ab8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[22], ctx->f[22]));
    // 0x1d8abc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d8abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d8ac0: 0x460105dd  msub.s      $f23, $f0, $f1
    ctx->pc = 0x1d8ac0u;
    ctx->f[23] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x1d8ac4: 0x4602b834  c.lt.s      $f23, $f2
    ctx->pc = 0x1d8ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8ac8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8AC8u;
    {
        const bool branch_taken_0x1d8ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AC8u;
        // 0x1d8acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ac8) {
            ctx->pc = 0x1D8AD8u;
            goto label_1d8ad8;
        }
    }
    ctx->pc = 0x1D8AD0u;
    // 0x1d8ad0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1D8AD0u;
    {
        const bool branch_taken_0x1d8ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ad0) {
            ctx->pc = 0x1D8C70u;
            goto label_1d8c70;
        }
    }
    ctx->pc = 0x1D8AD8u;
label_1d8ad8:
    // 0x1d8ad8: 0x46171032  c.eq.s      $f2, $f23
    ctx->pc = 0x1d8ad8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8adc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1D8ADCu;
    {
        const bool branch_taken_0x1d8adc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ADCu;
        // 0x1d8ae0: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8adc) {
            ctx->pc = 0x1D8B38u;
            goto label_1d8b38;
        }
    }
    ctx->pc = 0x1D8AE4u;
    // 0x1d8ae4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8ae8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d8ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8aec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d8aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8af0: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x1d8af0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
    // 0x1d8af4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d8af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d8af8: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d8af8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8afc: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x1d8afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1d8b00: 0x0  nop
    ctx->pc = 0x1d8b00u;
    // NOP
    // 0x1d8b04: 0x0  nop
    ctx->pc = 0x1d8b04u;
    // NOP
    // 0x1d8b08: 0x4616a836  c.le.s      $f21, $f22
    ctx->pc = 0x1d8b08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8b0c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8B0Cu;
    {
        const bool branch_taken_0x1d8b0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B0Cu;
        // 0x1d8b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b0c) {
            ctx->pc = 0x1D8B20u;
            goto label_1d8b20;
        }
    }
    ctx->pc = 0x1D8B14u;
    // 0x1d8b14: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1D8B14u;
    {
        const bool branch_taken_0x1d8b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b14) {
            ctx->pc = 0x1D8C70u;
            goto label_1d8c70;
        }
    }
    ctx->pc = 0x1D8B1Cu;
    // 0x1d8b1c: 0x0  nop
    ctx->pc = 0x1d8b1cu;
    // NOP
label_1d8b20:
    // 0x1d8b20: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x1d8b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8b24: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x1D8B24u;
    {
        const bool branch_taken_0x1d8b24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B24u;
        // 0x1d8b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b24) {
            ctx->pc = 0x1D8C10u;
            goto label_1d8c10;
        }
    }
    ctx->pc = 0x1D8B2Cu;
    // 0x1d8b2c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1D8B2Cu;
    {
        const bool branch_taken_0x1d8b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b2c) {
            ctx->pc = 0x1D8C70u;
            goto label_1d8c70;
        }
    }
    ctx->pc = 0x1D8B34u;
    // 0x1d8b34: 0x0  nop
    ctx->pc = 0x1d8b34u;
    // NOP
label_1d8b38:
    // 0x1d8b38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d8b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8b40: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8b44: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1d8b44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1d8b48: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x1d8b48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d8b4c: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D8B4Cu;
    SET_GPR_U32(ctx, 31, 0x1D8B54u);
    ctx->pc = 0x1D8B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B4Cu;
    // 0x1d8b50: 0x4600b587  neg.s       $f22, $f22 (Delay Slot)
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D8B4Cu, 0x1D8B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B54u;
label_1d8b54:
    // 0x1d8b54: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x1d8b54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1d8b58: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x1d8b58u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1d8b5c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1d8b5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1d8b60: 0x0  nop
    ctx->pc = 0x1d8b60u;
    // NOP
    // 0x1d8b64: 0x0  nop
    ctx->pc = 0x1d8b64u;
    // NOP
    // 0x1d8b68: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D8B68u;
    SET_GPR_U32(ctx, 31, 0x1D8B70u);
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D8B68u, 0x1D8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B70u;
label_1d8b70:
    // 0x1d8b70: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x1d8b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x1d8b74: 0x0  nop
    ctx->pc = 0x1d8b74u;
    // NOP
    // 0x1d8b78: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x1d8b78u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1d8b7c: 0x0  nop
    ctx->pc = 0x1d8b7cu;
    // NOP
    // 0x1d8b80: 0x0  nop
    ctx->pc = 0x1d8b80u;
    // NOP
    // 0x1d8b84: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1d8b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8b88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8B88u;
    {
        const bool branch_taken_0x1d8b88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8b88) {
            ctx->pc = 0x1D8BA0u;
            goto label_1d8ba0;
        }
    }
    ctx->pc = 0x1D8B90u;
    // 0x1d8b90: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1d8b90u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x1d8b94: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1d8b94u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1d8b98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d8b98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d8b9c: 0x0  nop
    ctx->pc = 0x1d8b9cu;
    // NOP
label_1d8ba0:
    // 0x1d8ba0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8ba4: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x1d8ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1d8ba8: 0x0  nop
    ctx->pc = 0x1d8ba8u;
    // NOP
    // 0x1d8bac: 0x4616a836  c.le.s      $f21, $f22
    ctx->pc = 0x1d8bacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8bb0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8BB0u;
    {
        const bool branch_taken_0x1d8bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8bb0) {
            ctx->pc = 0x1D8BD0u;
            goto label_1d8bd0;
        }
    }
    ctx->pc = 0x1D8BB8u;
    // 0x1d8bb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8bbc: 0x0  nop
    ctx->pc = 0x1d8bbcu;
    // NOP
    // 0x1d8bc0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1d8bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8bc4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BC4u;
    {
        const bool branch_taken_0x1d8bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8bc4) {
            ctx->pc = 0x1D8BD8u;
            goto label_1d8bd8;
        }
    }
    ctx->pc = 0x1D8BCCu;
    // 0x1d8bcc: 0x0  nop
    ctx->pc = 0x1d8bccu;
    // NOP
label_1d8bd0:
    // 0x1d8bd0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d8bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d8bd4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1d8bd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_1d8bd8:
    // 0x1d8bd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8be0: 0x0  nop
    ctx->pc = 0x1d8be0u;
    // NOP
    // 0x1d8be4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1d8be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8be8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8BE8u;
    {
        const bool branch_taken_0x1d8be8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8be8) {
            ctx->pc = 0x1D8C08u;
            goto label_1d8c08;
        }
    }
    ctx->pc = 0x1D8BF0u;
    // 0x1d8bf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8bf4: 0x0  nop
    ctx->pc = 0x1d8bf4u;
    // NOP
    // 0x1d8bf8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d8bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8bfc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BFCu;
    {
        const bool branch_taken_0x1d8bfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8bfc) {
            ctx->pc = 0x1D8C10u;
            goto label_1d8c10;
        }
    }
    ctx->pc = 0x1D8C04u;
    // 0x1d8c04: 0x0  nop
    ctx->pc = 0x1d8c04u;
    // NOP
label_1d8c08:
    // 0x1d8c08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d8c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d8c0c: 0x0  nop
    ctx->pc = 0x1d8c0cu;
    // NOP
label_1d8c10:
    // 0x1d8c10: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8C10u;
    {
        const bool branch_taken_0x1d8c10 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x1D8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C10u;
        // 0x1d8c14: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c10) {
            ctx->pc = 0x1D8C38u;
            goto label_1d8c38;
        }
    }
    ctx->pc = 0x1D8C18u;
    // 0x1d8c18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d8c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d8c1c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D8C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C24u);
    ctx->pc = 0x1D8C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C1Cu;
    // 0x1d8c20: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D8C1Cu, 0x1D8C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C24u;
label_1d8c24:
    // 0x1d8c24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d8c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d8c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c2c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1D8C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C34u);
    ctx->pc = 0x1D8C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C2Cu;
    // 0x1d8c30: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1D8C2Cu, 0x1D8C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C34u;
label_1d8c34:
    // 0x1d8c34: 0xe676000c  swc1        $f22, 0xC($s3)
    ctx->pc = 0x1d8c34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1d8c38:
    // 0x1d8c38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8c3c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8C3Cu;
    {
        const bool branch_taken_0x1d8c3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C3Cu;
        // 0x1d8c40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c3c) {
            ctx->pc = 0x1D8C68u;
            goto label_1d8c68;
        }
    }
    ctx->pc = 0x1D8C44u;
    // 0x1d8c44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d8c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d8c48: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D8C48u;
    SET_GPR_U32(ctx, 31, 0x1D8C50u);
    ctx->pc = 0x1D8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C48u;
    // 0x1d8c4c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D8C48u, 0x1D8C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C50u;
label_1d8c50:
    // 0x1d8c50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d8c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c58: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1D8C58u;
    SET_GPR_U32(ctx, 31, 0x1D8C60u);
    ctx->pc = 0x1D8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C58u;
    // 0x1d8c5c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1D8C58u, 0x1D8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C60u;
label_1d8c60:
    // 0x1d8c60: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x1d8c60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1d8c64: 0x0  nop
    ctx->pc = 0x1d8c64u;
    // NOP
label_1d8c68:
    // 0x1d8c68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d8c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c6c: 0x0  nop
    ctx->pc = 0x1d8c6cu;
    // NOP
label_1d8c70:
    // 0x1d8c70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d8c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8c74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d8c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8c78: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d8c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d8c7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d8c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8c80: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d8c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d8c84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d8c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8c88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d8c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d8c8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d8c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8c90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d8c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d8c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C94u;
        // 0x1d8c98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8C9Cu;
}

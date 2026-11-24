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

// Function: sub_001DAC10
// Address: 0x1dac10 - 0x1dadd0
void sub_001DAC10_0x1dac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAC10_0x1dac10");
#endif

    switch (ctx->pc) {
        case 0x1dacacu: goto label_1dacac;
        case 0x1dacc0u: goto label_1dacc0;
        case 0x1dacd0u: goto label_1dacd0;
        case 0x1dace4u: goto label_1dace4;
        case 0x1dacf8u: goto label_1dacf8;
        case 0x1dad10u: goto label_1dad10;
        case 0x1dad20u: goto label_1dad20;
        case 0x1dad38u: goto label_1dad38;
        case 0x1dad58u: goto label_1dad58;
        case 0x1dad78u: goto label_1dad78;
        case 0x1dad88u: goto label_1dad88;
        default: break;
    }

    ctx->pc = 0x1dac10u;

    // 0x1dac10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1dac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1dac14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dac14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dac18: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1dac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1dac1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dac1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dac20: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1dac20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1dac24: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1dac24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1dac28: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1dac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1dac2c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1dac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1dac30: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1dac30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac34: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1dac34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1dac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1dac3c: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1dac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1dac40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1dac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1dac44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1dac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dac48: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1dac48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1dac50: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dac54: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1dac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1dac58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dac5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dac5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dac60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dac64: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1dac64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dac68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dac68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac6c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1dac6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1dac70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dac70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dac74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dac78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dac78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dac7c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1dac7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dac80: 0x46020d43  div.s       $f21, $f1, $f2
    ctx->pc = 0x1dac80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1dac84: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1dac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1dac88: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x1dac88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1dac8c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1dac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dac90: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dac90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dac94: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1dac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1dac98: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1dac98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dac9c: 0x0  nop
    ctx->pc = 0x1dac9cu;
    // NOP
    // 0x1daca0: 0x0  nop
    ctx->pc = 0x1daca0u;
    // NOP
    // 0x1daca4: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DACA4u;
    SET_GPR_U32(ctx, 31, 0x1DACACu);
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DACA4u, 0x1DACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACACu;
label_1dacac:
    // 0x1dacac: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x1dacacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dacb0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dacb4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1dacb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1dacb8: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DACB8u;
    SET_GPR_U32(ctx, 31, 0x1DACC0u);
    ctx->pc = 0x1DACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACB8u;
    // 0x1dacbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DACB8u, 0x1DACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACC0u;
label_1dacc0:
    // 0x1dacc0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dacc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dacc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dacc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dacc8: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DACC8u;
    SET_GPR_U32(ctx, 31, 0x1DACD0u);
    ctx->pc = 0x1DACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACC8u;
    // 0x1daccc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DACC8u, 0x1DACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACD0u;
label_1dacd0:
    // 0x1dacd0: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x1dacd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dacd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dacd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dacdc: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DACDCu;
    SET_GPR_U32(ctx, 31, 0x1DACE4u);
    ctx->pc = 0x1DACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACDCu;
    // 0x1dace0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DACDCu, 0x1DACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACE4u;
label_1dace4:
    // 0x1dace4: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1dace4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1dace8: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1DACE8u;
    {
        const bool branch_taken_0x1dace8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACE8u;
        // 0x1dacec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dace8) {
            ctx->pc = 0x1DAD98u;
            goto label_1dad98;
        }
    }
    ctx->pc = 0x1DACF0u;
    // 0x1dacf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dacf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacf4: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1dacf8:
    // 0x1dacf8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1dacf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dacfc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1dacfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dad00: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1dad00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad04: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1dad04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dad08: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DAD08u;
    SET_GPR_U32(ctx, 31, 0x1DAD10u);
    ctx->pc = 0x1DAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD08u;
    // 0x1dad0c: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DAD08u, 0x1DAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD10u;
label_1dad10:
    // 0x1dad10: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1dad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dad14: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1dad14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1dad18: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAD18u;
    SET_GPR_U32(ctx, 31, 0x1DAD20u);
    ctx->pc = 0x1DAD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD18u;
    // 0x1dad1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAD18u, 0x1DAD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD20u;
label_1dad20:
    // 0x1dad20: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1dad20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1dad24: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DAD24u;
    {
        const bool branch_taken_0x1dad24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD24u;
        // 0x1dad28: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad24) {
            ctx->pc = 0x1DAD68u;
            goto label_1dad68;
        }
    }
    ctx->pc = 0x1DAD2Cu;
    // 0x1dad2c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1dad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1dad30: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x1dad30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1dad34: 0x0  nop
    ctx->pc = 0x1dad34u;
    // NOP
label_1dad38:
    // 0x1dad38: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x1dad38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dad3c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1dad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dad40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dad44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dad44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad48: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1dad48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dad4c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1dad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1dad50: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1DAD50u;
    SET_GPR_U32(ctx, 31, 0x1DAD58u);
    ctx->pc = 0x1DAD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD50u;
    // 0x1dad54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1DAD50u, 0x1DAD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD58u;
label_1dad58:
    // 0x1dad58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1dad5c: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x1dad5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1dad60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DAD60u;
    {
        const bool branch_taken_0x1dad60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD60u;
        // 0x1dad64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad60) {
            ctx->pc = 0x1DAD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dad38;
        }
    }
    ctx->pc = 0x1DAD68u;
label_1dad68:
    // 0x1dad68: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1dad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dad6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dad6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad70: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1DAD70u;
    SET_GPR_U32(ctx, 31, 0x1DAD78u);
    ctx->pc = 0x1DAD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD70u;
    // 0x1dad74: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1DAD70u, 0x1DAD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD78u;
label_1dad78:
    // 0x1dad78: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1dad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dad7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1dad7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad80: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1DAD80u;
    SET_GPR_U32(ctx, 31, 0x1DAD88u);
    ctx->pc = 0x1DAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD80u;
    // 0x1dad84: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1DAD80u, 0x1DAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD88u;
label_1dad88:
    // 0x1dad88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1dad88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1dad8c: 0x274182a  slt         $v1, $s3, $s4
    ctx->pc = 0x1dad8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1dad90: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1DAD90u;
    {
        const bool branch_taken_0x1dad90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD90u;
        // 0x1dad94: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad90) {
            ctx->pc = 0x1DACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dacf8;
        }
    }
    ctx->pc = 0x1DAD98u;
label_1dad98:
    // 0x1dad98: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1dad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dad9c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1dad9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dada0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1dada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1dada4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1dada4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dada8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dadac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1dadacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dadb0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1dadb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dadb4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1dadb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dadb8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1dadb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dadbc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dadbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dadc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dadc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dadc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dadc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dadc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADC8u;
        // 0x1dadcc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DADC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DADD0u;
}

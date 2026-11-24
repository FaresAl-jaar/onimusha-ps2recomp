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

// Function: sub_001D5F50
// Address: 0x1d5f50 - 0x1d6858
void sub_001D5F50_0x1d5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5F50_0x1d5f50");
#endif

    switch (ctx->pc) {
        case 0x1d602cu: goto label_1d602c;
        case 0x1d6038u: goto label_1d6038;
        case 0x1d6044u: goto label_1d6044;
        case 0x1d6050u: goto label_1d6050;
        case 0x1d6060u: goto label_1d6060;
        case 0x1d6074u: goto label_1d6074;
        case 0x1d6084u: goto label_1d6084;
        case 0x1d6098u: goto label_1d6098;
        case 0x1d60a8u: goto label_1d60a8;
        case 0x1d60b8u: goto label_1d60b8;
        case 0x1d60c8u: goto label_1d60c8;
        case 0x1d60d8u: goto label_1d60d8;
        case 0x1d615cu: goto label_1d615c;
        case 0x1d6168u: goto label_1d6168;
        case 0x1d6180u: goto label_1d6180;
        case 0x1d61a0u: goto label_1d61a0;
        case 0x1d61e0u: goto label_1d61e0;
        case 0x1d6214u: goto label_1d6214;
        case 0x1d6270u: goto label_1d6270;
        case 0x1d627cu: goto label_1d627c;
        case 0x1d62b0u: goto label_1d62b0;
        case 0x1d62e4u: goto label_1d62e4;
        case 0x1d62f0u: goto label_1d62f0;
        case 0x1d6324u: goto label_1d6324;
        case 0x1d6358u: goto label_1d6358;
        case 0x1d6368u: goto label_1d6368;
        case 0x1d6378u: goto label_1d6378;
        case 0x1d6388u: goto label_1d6388;
        case 0x1d63b4u: goto label_1d63b4;
        case 0x1d6410u: goto label_1d6410;
        case 0x1d641cu: goto label_1d641c;
        case 0x1d644cu: goto label_1d644c;
        case 0x1d6480u: goto label_1d6480;
        case 0x1d648cu: goto label_1d648c;
        case 0x1d64bcu: goto label_1d64bc;
        case 0x1d64f4u: goto label_1d64f4;
        case 0x1d6504u: goto label_1d6504;
        case 0x1d6514u: goto label_1d6514;
        case 0x1d6524u: goto label_1d6524;
        case 0x1d6538u: goto label_1d6538;
        case 0x1d6578u: goto label_1d6578;
        case 0x1d65d8u: goto label_1d65d8;
        case 0x1d6604u: goto label_1d6604;
        case 0x1d6668u: goto label_1d6668;
        case 0x1d6674u: goto label_1d6674;
        case 0x1d66a4u: goto label_1d66a4;
        case 0x1d66d8u: goto label_1d66d8;
        case 0x1d66e4u: goto label_1d66e4;
        case 0x1d6714u: goto label_1d6714;
        case 0x1d674cu: goto label_1d674c;
        case 0x1d675cu: goto label_1d675c;
        case 0x1d676cu: goto label_1d676c;
        case 0x1d677cu: goto label_1d677c;
        default: break;
    }

    ctx->pc = 0x1d5f50u;

    // 0x1d5f50: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1d5f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1d5f54: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d5f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d5f58: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d5f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d5f5c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d5f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d5f60: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1d5f60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f64: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d5f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d5f68: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d5f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d5f6c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1d5f6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f70: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d5f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d5f74: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1d5f74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f78: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d5f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d5f7c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d5f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d5f80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d5f84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d5f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d5f88: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d5f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f8c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1d5f8cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1d5f90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d5f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f94: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1d5f94u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d5f98: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d5f98u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d5f9c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d5f9cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d5fa0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d5fa0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d5fa4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d5fa4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d5fa8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d5fa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d5fac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5facu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d5fb0: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x1d5fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x1d5fb4: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5FB4u;
    {
        const bool branch_taken_0x1d5fb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FB4u;
        // 0x1d5fb8: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fb4) {
            ctx->pc = 0x1D5FC0u;
            goto label_1d5fc0;
        }
    }
    ctx->pc = 0x1D5FBCu;
    // 0x1d5fbc: 0x86b60002  lh          $s6, 0x2($s5)
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_1d5fc0:
    // 0x1d5fc0: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x1d5fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5fc4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5FC4u;
    {
        const bool branch_taken_0x1d5fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FC4u;
        // 0x1d5fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fc4) {
            ctx->pc = 0x1D5FD8u;
            goto label_1d5fd8;
        }
    }
    ctx->pc = 0x1D5FCCu;
    // 0x1d5fcc: 0x1000020e  b           . + 4 + (0x20E << 2)
    ctx->pc = 0x1D5FCCu;
    {
        const bool branch_taken_0x1d5fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5fcc) {
            ctx->pc = 0x1D6808u;
            goto label_1d6808;
        }
    }
    ctx->pc = 0x1D5FD4u;
    // 0x1d5fd4: 0x0  nop
    ctx->pc = 0x1d5fd4u;
    // NOP
label_1d5fd8:
    // 0x1d5fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5fdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d5fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fe0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d5fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fe4: 0x16c20006  bne         $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5FE4u;
    {
        const bool branch_taken_0x1d5fe4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FE4u;
        // 0x1d5fe8: 0x27d40010  addiu       $s4, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fe4) {
            ctx->pc = 0x1D6000u;
            goto label_1d6000;
        }
    }
    ctx->pc = 0x1D5FECu;
    // 0x1d5fec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5ff0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d5ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d5ff4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D5FF4u;
    {
        const bool branch_taken_0x1d5ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FF4u;
        // 0x1d5ff8: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ff4) {
            ctx->pc = 0x1D6020u;
            goto label_1d6020;
        }
    }
    ctx->pc = 0x1D5FFCu;
    // 0x1d5ffc: 0x0  nop
    ctx->pc = 0x1d5ffcu;
    // NOP
label_1d6000:
    // 0x1d6000: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6004: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d6004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d6008: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x1d6008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1d600c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d600cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6010: 0x0  nop
    ctx->pc = 0x1d6010u;
    // NOP
    // 0x1d6014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6018: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x1d6018u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d601c: 0x0  nop
    ctx->pc = 0x1d601cu;
    // NOP
label_1d6020:
    // 0x1d6020: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1d6020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d6024: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D6024u;
    SET_GPR_U32(ctx, 31, 0x1D602Cu);
    ctx->pc = 0x1D6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6024u;
    // 0x1d6028: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D6024u, 0x1D602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D602Cu;
label_1d602c:
    // 0x1d602c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1d602cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1d6030: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D6030u;
    SET_GPR_U32(ctx, 31, 0x1D6038u);
    ctx->pc = 0x1D6034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6030u;
    // 0x1d6034: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D6030u, 0x1D6038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6038u;
label_1d6038:
    // 0x1d6038: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1d6038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1d603c: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D603Cu;
    SET_GPR_U32(ctx, 31, 0x1D6044u);
    ctx->pc = 0x1D6040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D603Cu;
    // 0x1d6040: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D603Cu, 0x1D6044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6044u;
label_1d6044:
    // 0x1d6044: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d6044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d6048: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D6048u;
    SET_GPR_U32(ctx, 31, 0x1D6050u);
    ctx->pc = 0x1D604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6048u;
    // 0x1d604c: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D6048u, 0x1D6050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6050u;
label_1d6050:
    // 0x1d6050: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d6050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d6054: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1d6054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d6058: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D6058u;
    SET_GPR_U32(ctx, 31, 0x1D6060u);
    ctx->pc = 0x1D605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6058u;
    // 0x1d605c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D6058u, 0x1D6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6060u;
label_1d6060:
    // 0x1d6060: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1d6060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d6064: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1d6064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1d6068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d606c: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D606Cu;
    SET_GPR_U32(ctx, 31, 0x1D6074u);
    ctx->pc = 0x1D6070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D606Cu;
    // 0x1d6070: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D606Cu, 0x1D6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6074u;
label_1d6074:
    // 0x1d6074: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d6074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d6078: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1d6078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1d607c: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D607Cu;
    SET_GPR_U32(ctx, 31, 0x1D6084u);
    ctx->pc = 0x1D6080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D607Cu;
    // 0x1d6080: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D607Cu, 0x1D6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6084u;
label_1d6084:
    // 0x1d6084: 0x27b700f0  addiu       $s7, $sp, 0xF0
    ctx->pc = 0x1d6084u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d6088: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1d6088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1d608c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d608cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6090: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D6090u;
    SET_GPR_U32(ctx, 31, 0x1D6098u);
    ctx->pc = 0x1D6094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6090u;
    // 0x1d6094: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D6090u, 0x1D6098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6098u;
label_1d6098:
    // 0x1d6098: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d609c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d609cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d60a0: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D60A0u;
    SET_GPR_U32(ctx, 31, 0x1D60A8u);
    ctx->pc = 0x1D60A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60A0u;
    // 0x1d60a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D60A0u, 0x1D60A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60A8u;
label_1d60a8:
    // 0x1d60a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d60a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d60acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60b0: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D60B0u;
    SET_GPR_U32(ctx, 31, 0x1D60B8u);
    ctx->pc = 0x1D60B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60B0u;
    // 0x1d60b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D60B0u, 0x1D60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60B8u;
label_1d60b8:
    // 0x1d60b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d60bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d60bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d60c0: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D60C0u;
    SET_GPR_U32(ctx, 31, 0x1D60C8u);
    ctx->pc = 0x1D60C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60C0u;
    // 0x1d60c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D60C0u, 0x1D60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60C8u;
label_1d60c8:
    // 0x1d60c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d60c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d60ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60d0: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D60D0u;
    SET_GPR_U32(ctx, 31, 0x1D60D8u);
    ctx->pc = 0x1D60D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60D0u;
    // 0x1d60d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D60D0u, 0x1D60D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60D8u;
label_1d60d8:
    // 0x1d60d8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1d60d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d60dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1d60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1d60e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d60e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d60e4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1d60e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1d60e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d60e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60ec: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d60ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d60f0: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1d60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1d60f4: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x1d60f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
    // 0x1d60f8: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x1d60f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d60fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d60fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d6100: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x1d6100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d6104: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1d6104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1d6108: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x1d6108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1d610c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d610cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6110: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1d6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d6114: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d6114u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d6118: 0xc4226b60  lwc1        $f2, 0x6B60($at)
    ctx->pc = 0x1d6118u;
    { uint32_t bits = FAST_READ32(0x696B60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d611c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1d6120: 0xc4206b74  lwc1        $f0, 0x6B74($at)
    ctx->pc = 0x1d6120u;
    { uint32_t bits = FAST_READ32(0x696B74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6124: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x1d6124u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x1d6128: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1d6128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1d612c: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x1d612cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1d6130: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6130u;
    {
        const bool branch_taken_0x1d6130 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6130u;
        // 0x1d6134: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6130) {
            ctx->pc = 0x1D6150u;
            goto label_1d6150;
        }
    }
    ctx->pc = 0x1D6138u;
    // 0x1d6138: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1d6138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d613c: 0x86a40006  lh          $a0, 0x6($s5)
    ctx->pc = 0x1d613cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1d6140: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1d6140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6144: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d6144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d6148: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x1d6148u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d614c: 0x82b824  and         $s7, $a0, $v0
    ctx->pc = 0x1d614cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1d6150:
    // 0x1d6150: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d6150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d6154: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D6154u;
    SET_GPR_U32(ctx, 31, 0x1D615Cu);
    ctx->pc = 0x1D6158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6154u;
    // 0x1d6158: 0x24846a20  addiu       $a0, $a0, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D6154u, 0x1D615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D615Cu;
label_1d615c:
    // 0x1d615c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d615cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d6160: 0xc0768e0  jal         func_1DA380
    ctx->pc = 0x1D6160u;
    SET_GPR_U32(ctx, 31, 0x1D6168u);
    ctx->pc = 0x1D6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6160u;
    // 0x1d6164: 0x24846aa0  addiu       $a0, $a0, 0x6AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA380u, 0x1D6160u, 0x1D6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6168u;
label_1d6168:
    // 0x1d6168: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d6168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d616c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1d616cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1d6170: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1d6170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1d6174: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d6174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6178: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D6178u;
    SET_GPR_U32(ctx, 31, 0x1D6180u);
    ctx->pc = 0x1D617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6178u;
    // 0x1d617c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D6178u, 0x1D6180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6180u;
label_1d6180:
    // 0x1d6180: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d6180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d6184: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x1d6184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1d6188: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x1d6188u;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    // 0x1d618c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6190: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d6190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d6194: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d6194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d6198: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D6198u;
    SET_GPR_U32(ctx, 31, 0x1D61A0u);
    ctx->pc = 0x1D619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6198u;
    // 0x1d619c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D6198u, 0x1D61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D61A0u;
label_1d61a0:
    // 0x1d61a0: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x1d61a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1d61a4: 0x27b70234  addiu       $s7, $sp, 0x234
    ctx->pc = 0x1d61a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x1d61a8: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x1d61a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1d61ac: 0x27a20244  addiu       $v0, $sp, 0x244
    ctx->pc = 0x1d61acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x1d61b0: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x1d61b0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x1d61b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d61b8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1d61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d61bc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1d61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d61c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d61c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d61c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1d61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d61c8: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x1d61c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x1d61cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d61ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d61d0: 0x4619c81a  mula.s      $f25, $f25
    ctx->pc = 0x1d61d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x1d61d4: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x1d61d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x1d61d8: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D61D8u;
    SET_GPR_U32(ctx, 31, 0x1D61E0u);
    ctx->pc = 0x1D61DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D61D8u;
    // 0x1d61dc: 0x4618c31c  madd.s      $f12, $f24, $f24 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[24], ctx->f[24]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D61D8u, 0x1D61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D61E0u;
label_1d61e0:
    // 0x1d61e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d61e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d61e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d61e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d61e8: 0x0  nop
    ctx->pc = 0x1d61e8u;
    // NOP
    // 0x1d61ec: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1d61ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d61f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D61F0u;
    {
        const bool branch_taken_0x1d61f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d61f0) {
            ctx->pc = 0x1D6208u;
            goto label_1d6208;
        }
    }
    ctx->pc = 0x1D61F8u;
    // 0x1d61f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d61f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D61FCu;
    {
        const bool branch_taken_0x1d61fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61FCu;
        // 0x1d6200: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61fc) {
            ctx->pc = 0x1D6260u;
            goto label_1d6260;
        }
    }
    ctx->pc = 0x1D6204u;
    // 0x1d6204: 0x0  nop
    ctx->pc = 0x1d6204u;
    // NOP
label_1d6208:
    // 0x1d6208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d620c: 0xc076910  jal         func_1DA440
    ctx->pc = 0x1D620Cu;
    SET_GPR_U32(ctx, 31, 0x1D6214u);
    ctx->pc = 0x1D6210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D620Cu;
    // 0x1d6210: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA440u, 0x1D620Cu, 0x1D6214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6214u;
label_1d6214:
    // 0x1d6214: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x1d6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6218: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d6218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d621c: 0x0  nop
    ctx->pc = 0x1d621cu;
    // NOP
    // 0x1d6220: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d6220u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6224: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6224u;
    {
        const bool branch_taken_0x1d6224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6224) {
            ctx->pc = 0x1D6234u;
            goto label_1d6234;
        }
    }
    ctx->pc = 0x1D622Cu;
    // 0x1d622c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D622Cu;
    {
        const bool branch_taken_0x1d622c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D622Cu;
        // 0x1d6230: 0x4618b802  mul.s       $f0, $f23, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d622c) {
            ctx->pc = 0x1D6244u;
            goto label_1d6244;
        }
    }
    ctx->pc = 0x1D6234u;
label_1d6234:
    // 0x1d6234: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d6234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d6238: 0x0  nop
    ctx->pc = 0x1d6238u;
    // NOP
    // 0x1d623c: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d623cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d6240: 0x4618b802  mul.s       $f0, $f23, $f24
    ctx->pc = 0x1d6240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
label_1d6244:
    // 0x1d6244: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d6248: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d624c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d624cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d6250: 0x4619b002  mul.s       $f0, $f22, $f25
    ctx->pc = 0x1d6250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x1d6254: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d6258: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d625c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1d625cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1d6260:
    // 0x1d6260: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6264: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1d6264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d6268: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D6268u;
    SET_GPR_U32(ctx, 31, 0x1D6270u);
    ctx->pc = 0x1D626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6268u;
    // 0x1d626c: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D6268u, 0x1D6270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6270u;
label_1d6270:
    // 0x1d6270: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1d6270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d6274: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D6274u;
    SET_GPR_U32(ctx, 31, 0x1D627Cu);
    ctx->pc = 0x1D6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6274u;
    // 0x1d6278: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D6274u, 0x1D627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D627Cu;
label_1d627c:
    // 0x1d627c: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x1d627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1d6280: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1d6280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1d6284: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d6284u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d6288: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d6288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d628c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x1d628cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x1d6290: 0x27a20244  addiu       $v0, $sp, 0x244
    ctx->pc = 0x1d6290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x1d6294: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6298: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d6298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d629c: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1d629cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x1d62a0: 0x27a20248  addiu       $v0, $sp, 0x248
    ctx->pc = 0x1d62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x1d62a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d62a8: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D62A8u;
    SET_GPR_U32(ctx, 31, 0x1D62B0u);
    ctx->pc = 0x1D62ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62A8u;
    // 0x1d62ac: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D62A8u, 0x1D62B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62B0u;
label_1d62b0:
    // 0x1d62b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d62b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d62b4: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1d62b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d62b8: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d62b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d62bc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1d62bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1d62c0: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d62c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d62c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d62c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d62c8: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d62cc: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x1d62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x1d62d0: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x1d62d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x1d62d4: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1d62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1d62d8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d62d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d62dc: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D62DCu;
    SET_GPR_U32(ctx, 31, 0x1D62E4u);
    ctx->pc = 0x1D62E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62DCu;
    // 0x1d62e0: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D62DCu, 0x1D62E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62E4u;
label_1d62e4:
    // 0x1d62e4: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x1d62e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1d62e8: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D62E8u;
    SET_GPR_U32(ctx, 31, 0x1D62F0u);
    ctx->pc = 0x1D62ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62E8u;
    // 0x1d62ec: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D62E8u, 0x1D62F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62F0u;
label_1d62f0:
    // 0x1d62f0: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x1d62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1d62f4: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x1d62f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1d62f8: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d62f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d62fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6300: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1d6300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x1d6304: 0x27a20244  addiu       $v0, $sp, 0x244
    ctx->pc = 0x1d6304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x1d6308: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d630c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d630cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d6310: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1d6310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1d6314: 0x27a20248  addiu       $v0, $sp, 0x248
    ctx->pc = 0x1d6314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x1d6318: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d631c: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D631Cu;
    SET_GPR_U32(ctx, 31, 0x1D6324u);
    ctx->pc = 0x1D6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D631Cu;
    // 0x1d6320: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D631Cu, 0x1D6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6324u;
label_1d6324:
    // 0x1d6324: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6328: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1d6328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d632c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d632cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d6330: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d6330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6334: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d6334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d6338: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1d6338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d633c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d633cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6340: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d6340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d6344: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1d6344u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x1d6348: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1d6348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1d634c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d634cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d6350: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6350u;
    SET_GPR_U32(ctx, 31, 0x1D6358u);
    ctx->pc = 0x1D6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6350u;
    // 0x1d6354: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6350u, 0x1D6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6358u;
label_1d6358:
    // 0x1d6358: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1d6358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1d635c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d6360: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6360u;
    SET_GPR_U32(ctx, 31, 0x1D6368u);
    ctx->pc = 0x1D6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6360u;
    // 0x1d6364: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6360u, 0x1D6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6368u;
label_1d6368:
    // 0x1d6368: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1d6368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d636c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1d636cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d6370: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6370u;
    SET_GPR_U32(ctx, 31, 0x1D6378u);
    ctx->pc = 0x1D6374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6370u;
    // 0x1d6374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6370u, 0x1D6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6378u;
label_1d6378:
    // 0x1d6378: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d6378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d637c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1d637cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d6380: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6380u;
    SET_GPR_U32(ctx, 31, 0x1D6388u);
    ctx->pc = 0x1D6384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6380u;
    // 0x1d6384: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6380u, 0x1D6388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6388u;
label_1d6388:
    // 0x1d6388: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d638c: 0x0  nop
    ctx->pc = 0x1d638cu;
    // NOP
    // 0x1d6390: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1d6390u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6394: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6394u;
    {
        const bool branch_taken_0x1d6394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6394u;
        // 0x1d6398: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6394) {
            ctx->pc = 0x1D63A8u;
            goto label_1d63a8;
        }
    }
    ctx->pc = 0x1D639Cu;
    // 0x1d639c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D639Cu;
    {
        const bool branch_taken_0x1d639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D639Cu;
        // 0x1d63a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d639c) {
            ctx->pc = 0x1D6400u;
            goto label_1d6400;
        }
    }
    ctx->pc = 0x1D63A4u;
    // 0x1d63a4: 0x0  nop
    ctx->pc = 0x1d63a4u;
    // NOP
label_1d63a8:
    // 0x1d63a8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d63a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d63ac: 0xc076910  jal         func_1DA440
    ctx->pc = 0x1D63ACu;
    SET_GPR_U32(ctx, 31, 0x1D63B4u);
    ctx->pc = 0x1D63B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63ACu;
    // 0x1d63b0: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA440u, 0x1D63ACu, 0x1D63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63B4u;
label_1d63b4:
    // 0x1d63b4: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x1d63b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d63b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d63b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d63bc: 0x0  nop
    ctx->pc = 0x1d63bcu;
    // NOP
    // 0x1d63c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d63c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d63c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D63C4u;
    {
        const bool branch_taken_0x1d63c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d63c4) {
            ctx->pc = 0x1D63D4u;
            goto label_1d63d4;
        }
    }
    ctx->pc = 0x1D63CCu;
    // 0x1d63cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D63CCu;
    {
        const bool branch_taken_0x1d63cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63CCu;
        // 0x1d63d0: 0x4618b802  mul.s       $f0, $f23, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63cc) {
            ctx->pc = 0x1D63E4u;
            goto label_1d63e4;
        }
    }
    ctx->pc = 0x1D63D4u;
label_1d63d4:
    // 0x1d63d4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d63d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d63d8: 0x0  nop
    ctx->pc = 0x1d63d8u;
    // NOP
    // 0x1d63dc: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d63dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d63e0: 0x4618b802  mul.s       $f0, $f23, $f24
    ctx->pc = 0x1d63e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
label_1d63e4:
    // 0x1d63e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d63e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d63e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d63e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d63ec: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d63ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d63f0: 0x4619b002  mul.s       $f0, $f22, $f25
    ctx->pc = 0x1d63f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x1d63f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d63f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d63f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d63f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d63fc: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1d63fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1d6400:
    // 0x1d6400: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x1d6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x1d6404: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1d6404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d6408: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D6408u;
    SET_GPR_U32(ctx, 31, 0x1D6410u);
    ctx->pc = 0x1D640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6408u;
    // 0x1d640c: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D6408u, 0x1D6410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6410u;
label_1d6410:
    // 0x1d6410: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x1d6410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x1d6414: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D6414u;
    SET_GPR_U32(ctx, 31, 0x1D641Cu);
    ctx->pc = 0x1D6418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6414u;
    // 0x1d6418: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D6414u, 0x1D641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D641Cu;
label_1d641c:
    // 0x1d641c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x1d641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1d6420: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x1d6420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x1d6424: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d6424u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d6428: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d6428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d642c: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x1d642cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x1d6430: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d6430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d6434: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d6434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d6438: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x1d6438u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    // 0x1d643c: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x1d643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1d6440: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6444: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D6444u;
    SET_GPR_U32(ctx, 31, 0x1D644Cu);
    ctx->pc = 0x1D6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6444u;
    // 0x1d6448: 0xae820088  sw          $v0, 0x88($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D6444u, 0x1D644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D644Cu;
label_1d644c:
    // 0x1d644c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d644cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6450: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x1d6450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x1d6454: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d6454u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d6458: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1d6458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1d645c: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d6460: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6464: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d6464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d6468: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x1d6468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    // 0x1d646c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1d646cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1d6470: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x1d6470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1d6474: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d6474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d6478: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D6478u;
    SET_GPR_U32(ctx, 31, 0x1D6480u);
    ctx->pc = 0x1D647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6478u;
    // 0x1d647c: 0xae820088  sw          $v0, 0x88($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D6478u, 0x1D6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6480u;
label_1d6480:
    // 0x1d6480: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x1d6480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1d6484: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D6484u;
    SET_GPR_U32(ctx, 31, 0x1D648Cu);
    ctx->pc = 0x1D6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6484u;
    // 0x1d6488: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D6484u, 0x1D648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D648Cu;
label_1d648c:
    // 0x1d648c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x1d648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1d6490: 0x268400b0  addiu       $a0, $s4, 0xB0
    ctx->pc = 0x1d6490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1d6494: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d6494u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d6498: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d6498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d649c: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x1d649cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x1d64a0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d64a4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d64a8: 0xae8200b4  sw          $v0, 0xB4($s4)
    ctx->pc = 0x1d64a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
    // 0x1d64ac: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x1d64acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1d64b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d64b4: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D64B4u;
    SET_GPR_U32(ctx, 31, 0x1D64BCu);
    ctx->pc = 0x1D64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64B4u;
    // 0x1d64b8: 0xae8200b8  sw          $v0, 0xB8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D64B4u, 0x1D64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64BCu;
label_1d64bc:
    // 0x1d64bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d64bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d64c0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1d64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d64c4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d64c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d64c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d64c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64cc: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d64ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d64d0: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1d64d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d64d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d64d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d64d8: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d64dc: 0xae8200bc  sw          $v0, 0xBC($s4)
    ctx->pc = 0x1d64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 2));
    // 0x1d64e0: 0x8e8200b8  lw          $v0, 0xB8($s4)
    ctx->pc = 0x1d64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x1d64e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d64e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d64e8: 0xae8200b8  sw          $v0, 0xB8($s4)
    ctx->pc = 0x1d64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 184), GPR_U32(ctx, 2));
    // 0x1d64ec: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D64ECu;
    SET_GPR_U32(ctx, 31, 0x1D64F4u);
    ctx->pc = 0x1D64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64ECu;
    // 0x1d64f0: 0x269400c0  addiu       $s4, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D64ECu, 0x1D64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64F4u;
label_1d64f4:
    // 0x1d64f4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1d64f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1d64f8: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1d64f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d64fc: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D64FCu;
    SET_GPR_U32(ctx, 31, 0x1D6504u);
    ctx->pc = 0x1D6500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64FCu;
    // 0x1d6500: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D64FCu, 0x1D6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6504u;
label_1d6504:
    // 0x1d6504: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1d6504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d6508: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1d6508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d650c: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D650Cu;
    SET_GPR_U32(ctx, 31, 0x1D6514u);
    ctx->pc = 0x1D6510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D650Cu;
    // 0x1d6510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D650Cu, 0x1D6514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6514u;
label_1d6514:
    // 0x1d6514: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d6514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d6518: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1d6518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d651c: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D651Cu;
    SET_GPR_U32(ctx, 31, 0x1D6524u);
    ctx->pc = 0x1D6520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D651Cu;
    // 0x1d6520: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D651Cu, 0x1D6524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6524u;
label_1d6524:
    // 0x1d6524: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d6524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d6528: 0x256082a  slt         $at, $s2, $s6
    ctx->pc = 0x1d6528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1d652c: 0x10200098  beqz        $at, . + 4 + (0x98 << 2)
    ctx->pc = 0x1D652Cu;
    {
        const bool branch_taken_0x1d652c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d652c) {
            ctx->pc = 0x1D6790u;
            goto label_1d6790;
        }
    }
    ctx->pc = 0x1D6534u;
    // 0x1d6534: 0x0  nop
    ctx->pc = 0x1d6534u;
    // NOP
label_1d6538:
    // 0x1d6538: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6538u;
    {
        const bool branch_taken_0x1d6538 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6538u;
        // 0x1d653c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6538) {
            ctx->pc = 0x1D6558u;
            goto label_1d6558;
        }
    }
    ctx->pc = 0x1D6540u;
    // 0x1d6540: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1d6540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d6544: 0x86a30006  lh          $v1, 0x6($s5)
    ctx->pc = 0x1d6544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1d6548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d6548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d654c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d6550: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d6550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d6554: 0x0  nop
    ctx->pc = 0x1d6554u;
    // NOP
label_1d6558:
    // 0x1d6558: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d6558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d655c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d6560: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1d6560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1d6564: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d6564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6568: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x1d6568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1d656c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d656cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6570: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D6570u;
    SET_GPR_U32(ctx, 31, 0x1D6578u);
    ctx->pc = 0x1D6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6570u;
    // 0x1d6574: 0x7fa20240  sq          $v0, 0x240($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D6570u, 0x1D6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6578u;
label_1d6578:
    // 0x1d6578: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d6578u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d657c: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x1d657cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1d6580: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x1d6580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1d6584: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6588: 0x27a20244  addiu       $v0, $sp, 0x244
    ctx->pc = 0x1d6588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x1d658c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1d658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d6590: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6594: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1d6594u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d6598: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d6598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d659c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d659cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d65a0: 0x4600c024  .word       0x4600C024                   # cvt.w.s     $f0, $f24 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d65a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[24]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d65a4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1d65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d65a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d65a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d65ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d65acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d65b0: 0x0  nop
    ctx->pc = 0x1d65b0u;
    // NOP
    // 0x1d65b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1d65b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d65b8: 0x46800e60  cvt.s.w     $f25, $f1
    ctx->pc = 0x1d65b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x1d65bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d65c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d65c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d65c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d65c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d65c8: 0x4619c81a  mula.s      $f25, $f25
    ctx->pc = 0x1d65c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x1d65cc: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x1d65ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x1d65d0: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D65D0u;
    SET_GPR_U32(ctx, 31, 0x1D65D8u);
    ctx->pc = 0x1D65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D65D0u;
    // 0x1d65d4: 0x4618c31c  madd.s      $f12, $f24, $f24 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[24], ctx->f[24]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D65D0u, 0x1D65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D65D8u;
label_1d65d8:
    // 0x1d65d8: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x1d65d8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x1d65dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d65dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d65e0: 0x0  nop
    ctx->pc = 0x1d65e0u;
    // NOP
    // 0x1d65e4: 0x461a0032  c.eq.s      $f0, $f26
    ctx->pc = 0x1d65e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d65e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D65E8u;
    {
        const bool branch_taken_0x1d65e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65E8u;
        // 0x1d65ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65e8) {
            ctx->pc = 0x1D65F8u;
            goto label_1d65f8;
        }
    }
    ctx->pc = 0x1D65F0u;
    // 0x1d65f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D65F0u;
    {
        const bool branch_taken_0x1d65f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65F0u;
        // 0x1d65f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65f0) {
            ctx->pc = 0x1D6658u;
            goto label_1d6658;
        }
    }
    ctx->pc = 0x1D65F8u;
label_1d65f8:
    // 0x1d65f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d65f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65fc: 0xc076910  jal         func_1DA440
    ctx->pc = 0x1D65FCu;
    SET_GPR_U32(ctx, 31, 0x1D6604u);
    ctx->pc = 0x1D6600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D65FCu;
    // 0x1d6600: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA440u, 0x1D65FCu, 0x1D6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6604u;
label_1d6604:
    // 0x1d6604: 0x27a20228  addiu       $v0, $sp, 0x228
    ctx->pc = 0x1d6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x1d6608: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d6608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d660c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d660cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6610: 0x0  nop
    ctx->pc = 0x1d6610u;
    // NOP
    // 0x1d6614: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d6614u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6618: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6618u;
    {
        const bool branch_taken_0x1d6618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6618) {
            ctx->pc = 0x1D6628u;
            goto label_1d6628;
        }
    }
    ctx->pc = 0x1D6620u;
    // 0x1d6620: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6620u;
    {
        const bool branch_taken_0x1d6620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6620u;
        // 0x1d6624: 0x4618b802  mul.s       $f0, $f23, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6620) {
            ctx->pc = 0x1D6638u;
            goto label_1d6638;
        }
    }
    ctx->pc = 0x1D6628u;
label_1d6628:
    // 0x1d6628: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x1d6628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x1d662c: 0x0  nop
    ctx->pc = 0x1d662cu;
    // NOP
    // 0x1d6630: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d6630u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d6634: 0x4618b802  mul.s       $f0, $f23, $f24
    ctx->pc = 0x1d6634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
label_1d6638:
    // 0x1d6638: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d663c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d663cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6640: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1d6640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1d6644: 0x4619b002  mul.s       $f0, $f22, $f25
    ctx->pc = 0x1d6644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x1d6648: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d664c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d664cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6650: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d6650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d6654: 0x0  nop
    ctx->pc = 0x1d6654u;
    // NOP
label_1d6658:
    // 0x1d6658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d665c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1d665cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d6660: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D6660u;
    SET_GPR_U32(ctx, 31, 0x1D6668u);
    ctx->pc = 0x1D6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6660u;
    // 0x1d6664: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D6660u, 0x1D6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6668u;
label_1d6668:
    // 0x1d6668: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1d6668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d666c: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D666Cu;
    SET_GPR_U32(ctx, 31, 0x1D6674u);
    ctx->pc = 0x1D6670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D666Cu;
    // 0x1d6670: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D666Cu, 0x1D6674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6674u;
label_1d6674:
    // 0x1d6674: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x1d6674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1d6678: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1d6678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1d667c: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d667cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d6680: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1d6680u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d6684: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x1d6684u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x1d6688: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d668c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6690: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1d6690u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x1d6694: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x1d6694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1d6698: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d669c: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D669Cu;
    SET_GPR_U32(ctx, 31, 0x1D66A4u);
    ctx->pc = 0x1D66A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D669Cu;
    // 0x1d66a0: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D669Cu, 0x1D66A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66A4u;
label_1d66a4:
    // 0x1d66a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d66a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d66a8: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1d66a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d66ac: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d66acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d66b0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1d66b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1d66b4: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d66b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d66b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d66b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d66bc: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d66c0: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x1d66c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x1d66c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d66c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d66c8: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1d66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1d66cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d66ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d66d0: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D66D0u;
    SET_GPR_U32(ctx, 31, 0x1D66D8u);
    ctx->pc = 0x1D66D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66D0u;
    // 0x1d66d4: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D66D0u, 0x1D66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66D8u;
label_1d66d8:
    // 0x1d66d8: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x1d66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1d66dc: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D66DCu;
    SET_GPR_U32(ctx, 31, 0x1D66E4u);
    ctx->pc = 0x1D66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66DCu;
    // 0x1d66e0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D66DCu, 0x1D66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66E4u;
label_1d66e4:
    // 0x1d66e4: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x1d66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1d66e8: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x1d66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1d66ec: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d66ecu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d66f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d66f4: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1d66f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x1d66f8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d66fc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6700: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1d6700u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1d6704: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x1d6704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1d6708: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d670c: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D670Cu;
    SET_GPR_U32(ctx, 31, 0x1D6714u);
    ctx->pc = 0x1D6710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D670Cu;
    // 0x1d6710: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D670Cu, 0x1D6714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6714u;
label_1d6714:
    // 0x1d6714: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6718: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1d6718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d671c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d671cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d6720: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d6720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6724: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d6724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d6728: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1d6728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d672c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d672cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6730: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d6730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d6734: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1d6734u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x1d6738: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1d6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1d673c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d673cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d6740: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x1d6740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    // 0x1d6744: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6744u;
    SET_GPR_U32(ctx, 31, 0x1D674Cu);
    ctx->pc = 0x1D6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6744u;
    // 0x1d6748: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6744u, 0x1D674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D674Cu;
label_1d674c:
    // 0x1d674c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1d674cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1d6750: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1d6750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d6754: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6754u;
    SET_GPR_U32(ctx, 31, 0x1D675Cu);
    ctx->pc = 0x1D6758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6754u;
    // 0x1d6758: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6754u, 0x1D675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D675Cu;
label_1d675c:
    // 0x1d675c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1d675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d6760: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1d6760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d6764: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6764u;
    SET_GPR_U32(ctx, 31, 0x1D676Cu);
    ctx->pc = 0x1D6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6764u;
    // 0x1d6768: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6764u, 0x1D676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D676Cu;
label_1d676c:
    // 0x1d676c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d6770: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1d6770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d6774: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6774u;
    SET_GPR_U32(ctx, 31, 0x1D677Cu);
    ctx->pc = 0x1D6778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6774u;
    // 0x1d6778: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6774u, 0x1D677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D677Cu;
label_1d677c:
    // 0x1d677c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d677cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d6780: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1d6780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1d6784: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
    ctx->pc = 0x1D6784u;
    {
        const bool branch_taken_0x1d6784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6784) {
            ctx->pc = 0x1D6538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6538;
        }
    }
    ctx->pc = 0x1D678Cu;
    // 0x1d678c: 0x0  nop
    ctx->pc = 0x1d678cu;
    // NOP
label_1d6790:
    // 0x1d6790: 0x29e1823  subu        $v1, $s4, $fp
    ctx->pc = 0x1d6790u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x1d6794: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6794u;
    {
        const bool branch_taken_0x1d6794 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6794u;
        // 0x1d6798: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6794) {
            ctx->pc = 0x1D67A4u;
            goto label_1d67a4;
        }
    }
    ctx->pc = 0x1D679Cu;
    // 0x1d679c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d67a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d67a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d67a4:
    // 0x1d67a4: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1d67a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d67a8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1d67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1d67ac: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1d67acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1d67b0: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x1d67b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1d67b4: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d67b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d67b8: 0x0  nop
    ctx->pc = 0x1d67b8u;
    // NOP
    // 0x1d67bc: 0x0  nop
    ctx->pc = 0x1d67bcu;
    // NOP
    // 0x1d67c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1d67c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d67c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d67c8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d67c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d67cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D67CCu;
    {
        const bool branch_taken_0x1d67cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67CCu;
        // 0x1d67d0: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67cc) {
            ctx->pc = 0x1D67F8u;
            goto label_1d67f8;
        }
    }
    ctx->pc = 0x1D67D4u;
    // 0x1d67d4: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x1d67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x1d67d8: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1d67d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d67dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d67dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d67e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d67e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d67e4: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x1d67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d67e8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d67e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d67ec: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x1d67ecu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x1d67f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D67F0u;
    {
        const bool branch_taken_0x1d67f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67F0u;
        // 0x1d67f4: 0xffc20008  sd          $v0, 0x8($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67f0) {
            ctx->pc = 0x1D6800u;
            goto label_1d6800;
        }
    }
    ctx->pc = 0x1D67F8u;
label_1d67f8:
    // 0x1d67f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D67F8u;
    {
        const bool branch_taken_0x1d67f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67F8u;
        // 0x1d67fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67f8) {
            ctx->pc = 0x1D6808u;
            goto label_1d6808;
        }
    }
    ctx->pc = 0x1D6800u;
label_1d6800:
    // 0x1d6800: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d6800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6804: 0x0  nop
    ctx->pc = 0x1d6804u;
    // NOP
label_1d6808:
    // 0x1d6808: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d6808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d680c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d680cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d6810: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1d6810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1d6814: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d6814u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6818: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1d6818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d681c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d681cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d6820: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d6820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d6824: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d6824u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d6828: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d6828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d682c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d682cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d6830: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d6830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d6834: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d6834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6838: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d683c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d683cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6840: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d6840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d6844: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d6844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6848: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d6848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d684c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d684cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6850: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6850u;
        // 0x1d6854: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6858u;
}

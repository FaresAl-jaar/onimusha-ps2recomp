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

// Function: sub_001D4010
// Address: 0x1d4010 - 0x1d44f8
void sub_001D4010_0x1d4010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4010_0x1d4010");
#endif

    switch (ctx->pc) {
        case 0x1d40e8u: goto label_1d40e8;
        case 0x1d40f4u: goto label_1d40f4;
        case 0x1d4104u: goto label_1d4104;
        case 0x1d4158u: goto label_1d4158;
        case 0x1d4164u: goto label_1d4164;
        case 0x1d4194u: goto label_1d4194;
        default: break;
    }

    ctx->pc = 0x1d4010u;

    // 0x1d4010: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x1d4010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1d4014: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1d4014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1d4018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d401c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d401cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d4020: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d4020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d4024: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1d4024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1d4028: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d402c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d4030: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4034: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d4034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d4038: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d4038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d403c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d403cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1d4040: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d4040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d4044: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d4044u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4048: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d4048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d404c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d404cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4050: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d4050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d4054: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d4054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4058: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d4058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d405c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d4060: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d4060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d4064: 0x5b883  sra         $s7, $a1, 2
    ctx->pc = 0x1d4064u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1d4068: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1d4068u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1d406c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d4070: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1d4070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d4074: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d4074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4078: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x1d4078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1d407c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1d407cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d4080: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d4080u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d4084: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d4084u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d4088: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d4088u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d408c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d408cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d4090: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x1d4090u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4094: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d4094u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4098: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d4098u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d409c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d409cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d40a0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1d40a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1d40a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d40a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d40a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d40a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d40ac: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1d40acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1d40b0: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x1d40b0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x1d40b4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d40b8: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x1d40b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1d40bc: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x1d40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
    // 0x1d40c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d40c4: 0x0  nop
    ctx->pc = 0x1d40c4u;
    // NOP
    // 0x1d40c8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d40c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d40cc: 0x102000f2  beqz        $at, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1D40CCu;
    {
        const bool branch_taken_0x1d40cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40CCu;
        // 0x1d40d0: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40cc) {
            ctx->pc = 0x1D4498u;
            goto label_1d4498;
        }
    }
    ctx->pc = 0x1D40D4u;
    // 0x1d40d4: 0x2601026  xor         $v0, $s3, $zero
    ctx->pc = 0x1d40d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 0));
    // 0x1d40d8: 0x17b040  sll         $s6, $s7, 1
    ctx->pc = 0x1d40d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x1d40dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d40dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d40e0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d40e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1d40e4: 0x0  nop
    ctx->pc = 0x1d40e4u;
    // NOP
label_1d40e8:
    // 0x1d40e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d40e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d40ec: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D40ECu;
    SET_GPR_U32(ctx, 31, 0x1D40F4u);
    ctx->pc = 0x1D40F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40ECu;
    // 0x1d40f0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D40ECu, 0x1D40F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40F4u;
label_1d40f4:
    // 0x1d40f4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d40f8: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1d40f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1d40fc: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D40FCu;
    SET_GPR_U32(ctx, 31, 0x1D4104u);
    ctx->pc = 0x1D4100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40FCu;
    // 0x1d4100: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D40FCu, 0x1D4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4104u;
label_1d4104:
    // 0x1d4104: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d4104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d4108: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1d4108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d410c: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1d410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1d4110: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1d4110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d4114: 0xc7b50110  lwc1        $f21, 0x110($sp)
    ctx->pc = 0x1d4114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d4118: 0x4483c800  mtc1        $v1, $f25
    ctx->pc = 0x1d4118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1d411c: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d4120: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d4120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4124: 0x102000d6  beqz        $at, . + 4 + (0xD6 << 2)
    ctx->pc = 0x1D4124u;
    {
        const bool branch_taken_0x1d4124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4124u;
        // 0x1d4128: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4124) {
            ctx->pc = 0x1D4480u;
            goto label_1d4480;
        }
    }
    ctx->pc = 0x1D412Cu;
    // 0x1d412c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d4130: 0x12182a  slt         $v1, $zero, $s2
    ctx->pc = 0x1d4130u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d4134: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d4134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4138: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d4138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d413c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d413cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1d4140: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1d4140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1d4144: 0x52f023  subu        $fp, $v0, $s2
    ctx->pc = 0x1d4144u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d4148: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d414c: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x1d414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x1d4150: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d4154: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d4154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1d4158:
    // 0x1d4158: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d4158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d415c: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D415Cu;
    SET_GPR_U32(ctx, 31, 0x1D4164u);
    ctx->pc = 0x1D4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D415Cu;
    // 0x1d4160: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D415Cu, 0x1D4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4164u;
label_1d4164:
    // 0x1d4164: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x1d4164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d4168: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1d4168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d416c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1d416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1d4170: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1d4170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d4174: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d4174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d4178: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d4178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d417c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d417cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4180: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x1d4180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d4184: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1d4184u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1d4188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d418c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D418Cu;
    SET_GPR_U32(ctx, 31, 0x1D4194u);
    ctx->pc = 0x1D4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D418Cu;
    // 0x1d4190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D418Cu, 0x1D4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4194u;
label_1d4194:
    // 0x1d4194: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1d4194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d4198: 0x2201826  xor         $v1, $s1, $zero
    ctx->pc = 0x1d4198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 0));
    // 0x1d419c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d41a0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1d41a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d41a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d41a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d41a8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D41A8u;
    {
        const bool branch_taken_0x1d41a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41A8u;
        // 0x1d41ac: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41a8) {
            ctx->pc = 0x1D41E0u;
            goto label_1d41e0;
        }
    }
    ctx->pc = 0x1D41B0u;
    // 0x1d41b0: 0x2912023  subu        $a0, $s4, $s1
    ctx->pc = 0x1d41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1d41b4: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1d41b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d41b8: 0x2452818  mult        $a1, $s2, $a1
    ctx->pc = 0x1d41b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d41bc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d41bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d41c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d41c4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d41c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d41c8: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1d41c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d41cc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1d41ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1d41d0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1d41d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d41d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d41d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d41d8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1d41d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d41dc: 0x0  nop
    ctx->pc = 0x1d41dcu;
    // NOP
label_1d41e0:
    // 0x1d41e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d41e4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1D41E4u;
    {
        const bool branch_taken_0x1d41e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41E4u;
        // 0x1d41e8: 0x237082a  slt         $at, $s1, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41e4) {
            ctx->pc = 0x1D4300u;
            goto label_1d4300;
        }
    }
    ctx->pc = 0x1D41ECu;
    // 0x1d41ec: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1D41ECu;
    {
        const bool branch_taken_0x1d41ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41ECu;
        // 0x1d41f0: 0x13202b  sltu        $a0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41ec) {
            ctx->pc = 0x1D42A8u;
            goto label_1d42a8;
        }
    }
    ctx->pc = 0x1D41F4u;
    // 0x1d41f4: 0x2d11023  subu        $v0, $s6, $s1
    ctx->pc = 0x1d41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1d41f8: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x1d41f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1d41fc: 0x2453018  mult        $a2, $s2, $a1
    ctx->pc = 0x1d41fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d4200: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x1d4200u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4204: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1d4204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d4208: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d4208u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d420c: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x1d420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1d4210: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1d4210u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1d4214: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d4214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4218: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4218u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d421c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D421Cu;
    {
        const bool branch_taken_0x1d421c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D421Cu;
        // 0x1d4220: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d421c) {
            ctx->pc = 0x1D4248u;
            goto label_1d4248;
        }
    }
    ctx->pc = 0x1D4224u;
    // 0x1d4224: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1d4224u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d4228: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x1d4228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1d422c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d422cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d4230: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d4230u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d4234: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x1d4234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1d4238: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1d4238u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1d423c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1d423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4240: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4240u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d4244: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1d4244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1d4248:
    // 0x1d4248: 0x13202b  sltu        $a0, $zero, $s3
    ctx->pc = 0x1d4248u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d424c: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x1d424cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1d4250: 0x3c52818  mult        $a1, $fp, $a1
    ctx->pc = 0x1d4250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d4254: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x1d4254u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4258: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d425c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d425cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4260: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d4260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d4264: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1d4264u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1d4268: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d4268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d426c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d426cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d4270: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d4270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d4274: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4278: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4278u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d427c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D427Cu;
    {
        const bool branch_taken_0x1d427c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D427Cu;
        // 0x1d4280: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d427c) {
            ctx->pc = 0x1D42A8u;
            goto label_1d42a8;
        }
    }
    ctx->pc = 0x1D4284u;
    // 0x1d4284: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d4284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4288: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x1d4288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1d428c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d4290: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d4294: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1d4294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d4298: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1d4298u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1d429c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1d429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d42a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d42a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d42a4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1d42a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1d42a8:
    // 0x1d42a8: 0x13202b  sltu        $a0, $zero, $s3
    ctx->pc = 0x1d42a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d42ac: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1d42acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1d42b0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d42b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d42b4: 0x3c42018  mult        $a0, $fp, $a0
    ctx->pc = 0x1d42b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d42b8: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x1d42b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d42bc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d42bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d42c0: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x1d42c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1d42c4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1d42c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1d42c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d42c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d42cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d42ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d42d0: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x1D42D0u;
    {
        const bool branch_taken_0x1d42d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D0u;
        // 0x1d42d4: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42d0) {
            ctx->pc = 0x1D4468u;
            goto label_1d4468;
        }
    }
    ctx->pc = 0x1D42D8u;
    // 0x1d42d8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d42d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d42dc: 0x2911823  subu        $v1, $s4, $s1
    ctx->pc = 0x1d42dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1d42e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d42e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d42e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d42e8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d42e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d42ec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d42ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d42f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d42f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d42f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d42f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d42f8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1D42F8u;
    {
        const bool branch_taken_0x1d42f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42F8u;
        // 0x1d42fc: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42f8) {
            ctx->pc = 0x1D4468u;
            goto label_1d4468;
        }
    }
    ctx->pc = 0x1D4300u;
label_1d4300:
    // 0x1d4300: 0x1640003f  bnez        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x1D4300u;
    {
        const bool branch_taken_0x1d4300 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4300u;
        // 0x1d4304: 0x237082a  slt         $at, $s1, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4300) {
            ctx->pc = 0x1D4400u;
            goto label_1d4400;
        }
    }
    ctx->pc = 0x1D4308u;
    // 0x1d4308: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D4308u;
    {
        const bool branch_taken_0x1d4308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4308) {
            ctx->pc = 0x1D43A8u;
            goto label_1d43a8;
        }
    }
    ctx->pc = 0x1D4310u;
    // 0x1d4310: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x1d4310u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4314: 0x2d13023  subu        $a2, $s6, $s1
    ctx->pc = 0x1d4314u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1d4318: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1d4318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d431c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d4320: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4320u;
    {
        const bool branch_taken_0x1d4320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4320u;
        // 0x1d4324: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4320) {
            ctx->pc = 0x1D4348u;
            goto label_1d4348;
        }
    }
    ctx->pc = 0x1D4328u;
    // 0x1d4328: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d4328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d432c: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x1d432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1d4330: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d4334: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1d4334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d4338: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1d4338u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1d433c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1d433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4340: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4340u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d4344: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1d4344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1d4348:
    // 0x1d4348: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x1d4348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d434c: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d4350: 0x3c42818  mult        $a1, $fp, $a0
    ctx->pc = 0x1d4350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d4354: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d4354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4358: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1d4358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d435c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d435cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d4360: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1d4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d4364: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1d4364u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1d4368: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d4368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d436c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d436cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d4370: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d4370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d4374: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1d4374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4378: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4378u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d437c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D437Cu;
    {
        const bool branch_taken_0x1d437c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D437Cu;
        // 0x1d4380: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d437c) {
            ctx->pc = 0x1D43A8u;
            goto label_1d43a8;
        }
    }
    ctx->pc = 0x1D4384u;
    // 0x1d4384: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d4384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4388: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x1d4388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1d438c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d4390: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d4394: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1d4394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d4398: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1d4398u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1d439c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1d439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d43a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d43a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d43a4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1d43a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1d43a8:
    // 0x1d43a8: 0x13202b  sltu        $a0, $zero, $s3
    ctx->pc = 0x1d43a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d43ac: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1d43acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1d43b0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d43b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d43b4: 0x3c42018  mult        $a0, $fp, $a0
    ctx->pc = 0x1d43b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d43b8: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d43bc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d43bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d43c0: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x1d43c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1d43c4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1d43c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1d43c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d43c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d43cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d43ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d43d0: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D43D0u;
    {
        const bool branch_taken_0x1d43d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43D0u;
        // 0x1d43d4: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43d0) {
            ctx->pc = 0x1D4468u;
            goto label_1d4468;
        }
    }
    ctx->pc = 0x1D43D8u;
    // 0x1d43d8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d43d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d43dc: 0x2911823  subu        $v1, $s4, $s1
    ctx->pc = 0x1d43dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1d43e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d43e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d43e8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d43ec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d43ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d43f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d43f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d43f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d43f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d43f8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D43F8u;
    {
        const bool branch_taken_0x1d43f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43F8u;
        // 0x1d43fc: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43f8) {
            ctx->pc = 0x1D4468u;
            goto label_1d4468;
        }
    }
    ctx->pc = 0x1D4400u;
label_1d4400:
    // 0x1d4400: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d4400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d4404: 0x237202a  slt         $a0, $s1, $s7
    ctx->pc = 0x1d4404u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1d4408: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1d4408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1d440c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D440Cu;
    {
        const bool branch_taken_0x1d440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D440Cu;
        // 0x1d4410: 0x13202b  sltu        $a0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d440c) {
            ctx->pc = 0x1D4468u;
            goto label_1d4468;
        }
    }
    ctx->pc = 0x1D4414u;
    // 0x1d4414: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d4414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4418: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x1d4418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1d441c: 0x2452818  mult        $a1, $s2, $a1
    ctx->pc = 0x1d441cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d4420: 0x2d12023  subu        $a0, $s6, $s1
    ctx->pc = 0x1d4420u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1d4424: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d4424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d4428: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d442c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1d442cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d4430: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1d4430u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1d4434: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d4434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4438: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4438u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d443c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D443Cu;
    {
        const bool branch_taken_0x1d443c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D443Cu;
        // 0x1d4440: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d443c) {
            ctx->pc = 0x1D4468u;
            goto label_1d4468;
        }
    }
    ctx->pc = 0x1D4444u;
    // 0x1d4444: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d4444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4448: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x1d4448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1d444c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d4450: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4454: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d4458: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d4458u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d445c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4460: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4460u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d4464: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d4464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1d4468:
    // 0x1d4468: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d446c: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d4470: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d4470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4474: 0x1440ff38  bnez        $v0, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x1D4474u;
    {
        const bool branch_taken_0x1d4474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4474u;
        // 0x1d4478: 0x4618ce40  add.s       $f25, $f25, $f24 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4474) {
            ctx->pc = 0x1D4158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4158;
        }
    }
    ctx->pc = 0x1D447Cu;
    // 0x1d447c: 0x0  nop
    ctx->pc = 0x1d447cu;
    // NOP
label_1d4480:
    // 0x1d4480: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d4484: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d4484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d4488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d448c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d448cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4490: 0x1440ff15  bnez        $v0, . + 4 + (-0xEB << 2)
    ctx->pc = 0x1D4490u;
    {
        const bool branch_taken_0x1d4490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4490u;
        // 0x1d4494: 0x4616bdc0  add.s       $f23, $f23, $f22 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4490) {
            ctx->pc = 0x1D40E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d40e8;
        }
    }
    ctx->pc = 0x1D4498u;
label_1d4498:
    // 0x1d4498: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x1d4498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d449c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1d449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d44a0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d44a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d44a4: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1d44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1d44a8: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1d44a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d44ac: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d44acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d44b0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d44b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d44b4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d44b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d44b8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d44b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d44bc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d44bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d44c0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d44c4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d44c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d44c8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d44c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d44cc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d44ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d44d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d44d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d44d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d44d8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d44d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d44dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d44dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d44e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d44e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d44e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d44e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d44e8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d44e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d44ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d44ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d44f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D44F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44F0u;
        // 0x1d44f4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D44F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D44F8u;
}

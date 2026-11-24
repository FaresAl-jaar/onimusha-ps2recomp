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

// Function: sub_001D3A90
// Address: 0x1d3a90 - 0x1d3dcc
void sub_001D3A90_0x1d3a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3A90_0x1d3a90");
#endif

    switch (ctx->pc) {
        case 0x1d3b50u: goto label_1d3b50;
        case 0x1d3b5cu: goto label_1d3b5c;
        case 0x1d3b6cu: goto label_1d3b6c;
        case 0x1d3bc8u: goto label_1d3bc8;
        case 0x1d3bd4u: goto label_1d3bd4;
        case 0x1d3bf8u: goto label_1d3bf8;
        default: break;
    }

    ctx->pc = 0x1d3a90u;

    // 0x1d3a90: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1d3a90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d3a94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3a98: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d3a98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3a9c: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1d3a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1d3aa0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d3aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1d3aa4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d3aa8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d3aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d3aac: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d3aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d3ab0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d3ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d3ab4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d3ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d3ab8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d3ab8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3abc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d3abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d3ac0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d3ac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ac4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d3ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d3ac8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d3ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d3acc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3ad0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d3ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d3ad4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d3ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d3ad8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d3adc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1d3adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d3ae0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d3ae4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1d3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1d3ae8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d3ae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3aec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d3aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d3af0: 0x59043  sra         $s2, $a1, 1
    ctx->pc = 0x1d3af0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1d3af4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1d3af4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1d3af8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1d3af8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d3afc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d3afcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d3b00: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d3b00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d3b04: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d3b04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d3b08: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3b08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d3b0c: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x1d3b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1d3b10: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3b10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d3b14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d3b18: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x1d3b18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1d3b1c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1d3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1d3b20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d3b20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3b24: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d3b28: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1d3b28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1d3b2c: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x1d3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
    // 0x1d3b30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3b34: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x1d3b34u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x1d3b38: 0x46020e02  mul.s       $f24, $f1, $f2
    ctx->pc = 0x1d3b38u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1d3b3c: 0x0  nop
    ctx->pc = 0x1d3b3cu;
    // NOP
    // 0x1d3b40: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d3b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3b44: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x1D3B44u;
    {
        const bool branch_taken_0x1d3b44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B44u;
        // 0x1d3b48: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b44) {
            ctx->pc = 0x1D3D70u;
            goto label_1d3d70;
        }
    }
    ctx->pc = 0x1D3B4Cu;
    // 0x1d3b4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3b50:
    // 0x1d3b50: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d3b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d3b54: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D3B54u;
    SET_GPR_U32(ctx, 31, 0x1D3B5Cu);
    ctx->pc = 0x1D3B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B54u;
    // 0x1d3b58: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D3B54u, 0x1D3B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B5Cu;
label_1d3b5c:
    // 0x1d3b5c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d3b60: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1d3b60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1d3b64: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D3B64u;
    SET_GPR_U32(ctx, 31, 0x1D3B6Cu);
    ctx->pc = 0x1D3B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B64u;
    // 0x1d3b68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D3B64u, 0x1D3B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B6Cu;
label_1d3b6c:
    // 0x1d3b6c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d3b70: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1d3b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d3b74: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1d3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1d3b78: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1d3b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3b7c: 0xc7b50110  lwc1        $f21, 0x110($sp)
    ctx->pc = 0x1d3b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d3b80: 0x4483c800  mtc1        $v1, $f25
    ctx->pc = 0x1d3b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1d3b84: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1d3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d3b88: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d3b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3b8c: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x1D3B8Cu;
    {
        const bool branch_taken_0x1d3b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B8Cu;
        // 0x1d3b90: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b8c) {
            ctx->pc = 0x1D3D50u;
            goto label_1d3d50;
        }
    }
    ctx->pc = 0x1D3B94u;
    // 0x1d3b94: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1d3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1d3b98: 0x16202a  slt         $a0, $zero, $s6
    ctx->pc = 0x1d3b98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1d3b9c: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x1d3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d3ba0: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1d3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d3ba4: 0x43b818  mult        $s7, $v0, $v1
    ctx->pc = 0x1d3ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
    // 0x1d3ba8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d3bac: 0xafb700dc  sw          $s7, 0xDC($sp)
    ctx->pc = 0x1d3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 23));
    // 0x1d3bb0: 0x2c2182a  slt         $v1, $s6, $v0
    ctx->pc = 0x1d3bb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3bb4: 0x2c21026  xor         $v0, $s6, $v0
    ctx->pc = 0x1d3bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 2));
    // 0x1d3bb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d3bbc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d3bc0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1d3bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d3bc4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1d3bc8:
    // 0x1d3bc8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d3bcc: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D3BCCu;
    SET_GPR_U32(ctx, 31, 0x1D3BD4u);
    ctx->pc = 0x1D3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BCCu;
    // 0x1d3bd0: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D3BCCu, 0x1D3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BD4u;
label_1d3bd4:
    // 0x1d3bd4: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1d3bd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d3bd8: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x1d3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1d3bdc: 0x3f100  sll         $fp, $v1, 4
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d3be0: 0x2be8021  addu        $s0, $s5, $fp
    ctx->pc = 0x1d3be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x1d3be4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d3be4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d3be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bf0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D3BF0u;
    SET_GPR_U32(ctx, 31, 0x1D3BF8u);
    ctx->pc = 0x1D3BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BF0u;
    // 0x1d3bf4: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D3BF0u, 0x1D3BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BF8u;
label_1d3bf8:
    // 0x1d3bf8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1d3bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d3bfc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d3c00: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D3C00u;
    {
        const bool branch_taken_0x1d3c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C00u;
        // 0x1d3c04: 0x272082a  slt         $at, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c00) {
            ctx->pc = 0x1D3C88u;
            goto label_1d3c88;
        }
    }
    ctx->pc = 0x1D3C08u;
    // 0x1d3c08: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D3C08u;
    {
        const bool branch_taken_0x1d3c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c08) {
            ctx->pc = 0x1D3C68u;
            goto label_1d3c68;
        }
    }
    ctx->pc = 0x1D3C10u;
    // 0x1d3c10: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d3c14: 0x2931823  subu        $v1, $s4, $s3
    ctx->pc = 0x1d3c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1d3c18: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1d3c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d3c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3c24: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1d3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d3c28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3c2c: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x1d3c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3c30: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x1d3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3c34: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d3c34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3c38: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1d3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1d3c3c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d3c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3c40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3c44: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d3c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d3c48: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d3c48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3c4c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d3c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d3c50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1d3c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3c54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3c58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d3c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d3c5c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d3c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c60: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3c60u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3c64: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d3c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1d3c68:
    // 0x1d3c68: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d3c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3c6c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x1d3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1d3c70: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3c74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d3c74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d3c78: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d3c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3c7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3c80: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D3C80u;
    {
        const bool branch_taken_0x1d3c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C80u;
        // 0x1d3c84: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c80) {
            ctx->pc = 0x1D3D38u;
            goto label_1d3d38;
        }
    }
    ctx->pc = 0x1D3C88u;
label_1d3c88:
    // 0x1d3c88: 0x16c0001d  bnez        $s6, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3C88u;
    {
        const bool branch_taken_0x1d3c88 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C88u;
        // 0x1d3c8c: 0x272082a  slt         $at, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c88) {
            ctx->pc = 0x1D3D00u;
            goto label_1d3d00;
        }
    }
    ctx->pc = 0x1D3C90u;
    // 0x1d3c90: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3C90u;
    {
        const bool branch_taken_0x1d3c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C90u;
        // 0x1d3c94: 0x2932823  subu        $a1, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c90) {
            ctx->pc = 0x1D3CE0u;
            goto label_1d3ce0;
        }
    }
    ctx->pc = 0x1D3C98u;
    // 0x1d3c98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d3c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c9c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d3ca0: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x1d3ca0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d3ca4: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3ca8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d3cac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1d3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d3cb0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d3cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d3cb4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3cb8: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x1d3cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3cbc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1d3cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d3cc0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1d3cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1d3cc4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d3cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cc8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3cc8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3ccc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d3cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d3cd0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d3cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3cd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3cd8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d3cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d3cdc: 0x0  nop
    ctx->pc = 0x1d3cdcu;
    // NOP
label_1d3ce0:
    // 0x1d3ce0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d3ce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3ce4: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x1d3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1d3ce8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3cec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d3cecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d3cf0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d3cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cf4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3cf4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3cf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D3CF8u;
    {
        const bool branch_taken_0x1d3cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CF8u;
        // 0x1d3cfc: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cf8) {
            ctx->pc = 0x1D3D38u;
            goto label_1d3d38;
        }
    }
    ctx->pc = 0x1D3D00u;
label_1d3d00:
    // 0x1d3d00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3d04: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x1d3d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d3d08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d3d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d3d0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3D0Cu;
    {
        const bool branch_taken_0x1d3d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d0c) {
            ctx->pc = 0x1D3D38u;
            goto label_1d3d38;
        }
    }
    ctx->pc = 0x1D3D14u;
    // 0x1d3d14: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d3d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3d18: 0x2931823  subu        $v1, $s4, $s3
    ctx->pc = 0x1d3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1d3d1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d3d20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d3d24: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3d28: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d3d28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d3d2c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1d3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3d30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3d30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3d34: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d3d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d3d38:
    // 0x1d3d38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3d38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d3d3c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1d3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d3d40: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1d3d40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d3d44: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d3d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3d48: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x1D3D48u;
    {
        const bool branch_taken_0x1d3d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D48u;
        // 0x1d3d4c: 0x4618ce40  add.s       $f25, $f25, $f24 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d48) {
            ctx->pc = 0x1D3BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3bc8;
        }
    }
    ctx->pc = 0x1D3D50u;
label_1d3d50:
    // 0x1d3d50: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1d3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d3d54: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d3d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d3d58: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d3d58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d3d5c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d3d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d3d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3d64: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1d3d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3d68: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x1D3D68u;
    {
        const bool branch_taken_0x1d3d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D68u;
        // 0x1d3d6c: 0x4616bdc0  add.s       $f23, $f23, $f22 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d68) {
            ctx->pc = 0x1D3B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3b50;
        }
    }
    ctx->pc = 0x1D3D70u;
label_1d3d70:
    // 0x1d3d70: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1d3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1d3d74: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1d3d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d3d78: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d3d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d3d7c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d3d7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d3d80: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1d3d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d3d84: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d3d84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3d88: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d3d8c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d3d8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d3d90: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d3d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d3d94: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d3d94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3d98: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d3d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d3d9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3da0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d3da0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3da4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d3da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3da8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d3dac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d3dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3db0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d3db4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d3db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3db8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3dbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d3dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3dc0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1d3dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC4u;
        // 0x1d3dc8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DCCu;
}

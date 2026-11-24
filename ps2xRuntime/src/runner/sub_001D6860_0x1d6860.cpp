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

// Function: sub_001D6860
// Address: 0x1d6860 - 0x1d72d4
void sub_001D6860_0x1d6860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6860_0x1d6860");
#endif

    switch (ctx->pc) {
        case 0x1d6994u: goto label_1d6994;
        case 0x1d69a0u: goto label_1d69a0;
        case 0x1d69acu: goto label_1d69ac;
        case 0x1d69b8u: goto label_1d69b8;
        case 0x1d69c8u: goto label_1d69c8;
        case 0x1d69d8u: goto label_1d69d8;
        case 0x1d69e8u: goto label_1d69e8;
        case 0x1d69f8u: goto label_1d69f8;
        case 0x1d6a08u: goto label_1d6a08;
        case 0x1d6a18u: goto label_1d6a18;
        case 0x1d6a28u: goto label_1d6a28;
        case 0x1d6a38u: goto label_1d6a38;
        case 0x1d6abcu: goto label_1d6abc;
        case 0x1d6ac8u: goto label_1d6ac8;
        case 0x1d6ae0u: goto label_1d6ae0;
        case 0x1d6b00u: goto label_1d6b00;
        case 0x1d6b40u: goto label_1d6b40;
        case 0x1d6b74u: goto label_1d6b74;
        case 0x1d6bd0u: goto label_1d6bd0;
        case 0x1d6bdcu: goto label_1d6bdc;
        case 0x1d6c10u: goto label_1d6c10;
        case 0x1d6c44u: goto label_1d6c44;
        case 0x1d6c50u: goto label_1d6c50;
        case 0x1d6c84u: goto label_1d6c84;
        case 0x1d6cb8u: goto label_1d6cb8;
        case 0x1d6cc8u: goto label_1d6cc8;
        case 0x1d6cd8u: goto label_1d6cd8;
        case 0x1d6ce8u: goto label_1d6ce8;
        case 0x1d6d14u: goto label_1d6d14;
        case 0x1d6d70u: goto label_1d6d70;
        case 0x1d6d7cu: goto label_1d6d7c;
        case 0x1d6db0u: goto label_1d6db0;
        case 0x1d6de4u: goto label_1d6de4;
        case 0x1d6df0u: goto label_1d6df0;
        case 0x1d6e24u: goto label_1d6e24;
        case 0x1d6e84u: goto label_1d6e84;
        case 0x1d6e94u: goto label_1d6e94;
        case 0x1d6eb0u: goto label_1d6eb0;
        case 0x1d6ec0u: goto label_1d6ec0;
        case 0x1d6ed0u: goto label_1d6ed0;
        case 0x1d6ee0u: goto label_1d6ee0;
        case 0x1d6ef8u: goto label_1d6ef8;
        case 0x1d6f38u: goto label_1d6f38;
        case 0x1d6f9cu: goto label_1d6f9c;
        case 0x1d6fccu: goto label_1d6fcc;
        case 0x1d7030u: goto label_1d7030;
        case 0x1d703cu: goto label_1d703c;
        case 0x1d7070u: goto label_1d7070;
        case 0x1d70a4u: goto label_1d70a4;
        case 0x1d70b0u: goto label_1d70b0;
        case 0x1d70e4u: goto label_1d70e4;
        case 0x1d7148u: goto label_1d7148;
        case 0x1d7158u: goto label_1d7158;
        case 0x1d7184u: goto label_1d7184;
        case 0x1d7194u: goto label_1d7194;
        case 0x1d71b0u: goto label_1d71b0;
        case 0x1d71c0u: goto label_1d71c0;
        case 0x1d71d0u: goto label_1d71d0;
        case 0x1d71e0u: goto label_1d71e0;
        default: break;
    }

    ctx->pc = 0x1d6860u;

    // 0x1d6860: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x1d6860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x1d6864: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1d6864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1d6868: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1d6868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1d686c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1d686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1d6870: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1d6870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1d6874: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1d6874u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6878: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d6878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1d687c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1d687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1d6880: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d6880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6884: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1d6884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1d6888: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d6888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1d688c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d6890: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d6890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d6894: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x1d6894u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d6898: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d6898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d689c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1d689cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1d68a0: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1d68a0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d68a4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d68a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d68a8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d68a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d68ac: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d68acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d68b0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d68b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d68b4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d68b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d68b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d68b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d68bc: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x1d68bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x1d68c0: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1d68c0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1d68c4: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x1d68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x1d68c8: 0xafa800f0  sw          $t0, 0xF0($sp)
    ctx->pc = 0x1d68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 8));
    // 0x1d68cc: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D68CCu;
    {
        const bool branch_taken_0x1d68cc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68CCu;
        // 0x1d68d0: 0xafa900e0  sw          $t1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68cc) {
            ctx->pc = 0x1D68E0u;
            goto label_1d68e0;
        }
    }
    ctx->pc = 0x1D68D4u;
    // 0x1d68d4: 0x86e20002  lh          $v0, 0x2($s7)
    ctx->pc = 0x1d68d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x1d68d8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1d68d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1d68dc: 0x0  nop
    ctx->pc = 0x1d68dcu;
    // NOP
label_1d68e0:
    // 0x1d68e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d68e4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d68e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d68e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D68E8u;
    {
        const bool branch_taken_0x1d68e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68E8u;
        // 0x1d68ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68e8) {
            ctx->pc = 0x1D68F8u;
            goto label_1d68f8;
        }
    }
    ctx->pc = 0x1D68F0u;
    // 0x1d68f0: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x1D68F0u;
    {
        const bool branch_taken_0x1d68f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d68f0) {
            ctx->pc = 0x1D7280u;
            goto label_1d7280;
        }
    }
    ctx->pc = 0x1D68F8u;
label_1d68f8:
    // 0x1d68f8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1d68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1d68fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d68fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6900: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d6900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6904: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d6904u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6908: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x1d6908u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d690c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d6910: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6910u;
    {
        const bool branch_taken_0x1d6910 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1D6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6910u;
        // 0x1d6914: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6910) {
            ctx->pc = 0x1D6920u;
            goto label_1d6920;
        }
    }
    ctx->pc = 0x1D6918u;
    // 0x1d6918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d691c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d691cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1d6920:
    // 0x1d6920: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d6924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6928: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6928u;
    {
        const bool branch_taken_0x1d6928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6928u;
        // 0x1d692c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6928) {
            ctx->pc = 0x1D6940u;
            goto label_1d6940;
        }
    }
    ctx->pc = 0x1D6930u;
    // 0x1d6930: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d6930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d6934: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D6934u;
    {
        const bool branch_taken_0x1d6934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6934u;
        // 0x1d6938: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6934) {
            ctx->pc = 0x1D6960u;
            goto label_1d6960;
        }
    }
    ctx->pc = 0x1D693Cu;
    // 0x1d693c: 0x0  nop
    ctx->pc = 0x1d693cu;
    // NOP
label_1d6940:
    // 0x1d6940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6944: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d6944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d6948: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d6948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d694c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d6950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6954: 0x0  nop
    ctx->pc = 0x1d6954u;
    // NOP
    // 0x1d6958: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d695c: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x1d695cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_1d6960:
    // 0x1d6960: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d6960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d6964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6968: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6968u;
    {
        const bool branch_taken_0x1d6968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6968u;
        // 0x1d696c: 0x4600af06  mov.s       $f28, $f21 (Delay Slot)
        ctx->f[28] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6968) {
            ctx->pc = 0x1D6978u;
            goto label_1d6978;
        }
    }
    ctx->pc = 0x1D6970u;
    // 0x1d6970: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6970u;
    {
        const bool branch_taken_0x1d6970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6970u;
        // 0x1d6974: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6970) {
            ctx->pc = 0x1D698Cu;
            goto label_1d698c;
        }
    }
    ctx->pc = 0x1D6978u;
label_1d6978:
    // 0x1d6978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d697c: 0x0  nop
    ctx->pc = 0x1d697cu;
    // NOP
    // 0x1d6980: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6984: 0x4600af03  div.s       $f28, $f21, $f0
    ctx->pc = 0x1d6984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[28] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d6988: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x1d6988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_1d698c:
    // 0x1d698c: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D698Cu;
    SET_GPR_U32(ctx, 31, 0x1D6994u);
    ctx->pc = 0x1D6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D698Cu;
    // 0x1d6990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D698Cu, 0x1D6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6994u;
label_1d6994:
    // 0x1d6994: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x1d6994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1d6998: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D6998u;
    SET_GPR_U32(ctx, 31, 0x1D69A0u);
    ctx->pc = 0x1D699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6998u;
    // 0x1d699c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D6998u, 0x1D69A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69A0u;
label_1d69a0:
    // 0x1d69a0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1d69a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1d69a4: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D69A4u;
    SET_GPR_U32(ctx, 31, 0x1D69ACu);
    ctx->pc = 0x1D69A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69A4u;
    // 0x1d69a8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D69A4u, 0x1D69ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69ACu;
label_1d69ac:
    // 0x1d69ac: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1d69acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d69b0: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D69B0u;
    SET_GPR_U32(ctx, 31, 0x1D69B8u);
    ctx->pc = 0x1D69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69B0u;
    // 0x1d69b4: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D69B0u, 0x1D69B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69B8u;
label_1d69b8:
    // 0x1d69b8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1d69b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d69bc: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x1d69bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1d69c0: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D69C0u;
    SET_GPR_U32(ctx, 31, 0x1D69C8u);
    ctx->pc = 0x1D69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69C0u;
    // 0x1d69c4: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D69C0u, 0x1D69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69C8u;
label_1d69c8:
    // 0x1d69c8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1d69c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d69cc: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x1d69ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1d69d0: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D69D0u;
    SET_GPR_U32(ctx, 31, 0x1D69D8u);
    ctx->pc = 0x1D69D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69D0u;
    // 0x1d69d4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D69D0u, 0x1D69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69D8u;
label_1d69d8:
    // 0x1d69d8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d69d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d69dc: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x1d69dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1d69e0: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D69E0u;
    SET_GPR_U32(ctx, 31, 0x1D69E8u);
    ctx->pc = 0x1D69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69E0u;
    // 0x1d69e4: 0x27a602a0  addiu       $a2, $sp, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D69E0u, 0x1D69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69E8u;
label_1d69e8:
    // 0x1d69e8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d69e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d69ec: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1d69ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1d69f0: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D69F0u;
    SET_GPR_U32(ctx, 31, 0x1D69F8u);
    ctx->pc = 0x1D69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69F0u;
    // 0x1d69f4: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D69F0u, 0x1D69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69F8u;
label_1d69f8:
    // 0x1d69f8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1d69f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d69fc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1d69fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d6a00: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D6A00u;
    SET_GPR_U32(ctx, 31, 0x1D6A08u);
    ctx->pc = 0x1D6A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A00u;
    // 0x1d6a04: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D6A00u, 0x1D6A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A08u;
label_1d6a08:
    // 0x1d6a08: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1d6a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d6a0c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d6a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d6a10: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D6A10u;
    SET_GPR_U32(ctx, 31, 0x1D6A18u);
    ctx->pc = 0x1D6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A10u;
    // 0x1d6a14: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D6A10u, 0x1D6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A18u;
label_1d6a18:
    // 0x1d6a18: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1d6a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d6a1c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1d6a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d6a20: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D6A20u;
    SET_GPR_U32(ctx, 31, 0x1D6A28u);
    ctx->pc = 0x1D6A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A20u;
    // 0x1d6a24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D6A20u, 0x1D6A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A28u;
label_1d6a28:
    // 0x1d6a28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d6a28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d6a2c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1d6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d6a30: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D6A30u;
    SET_GPR_U32(ctx, 31, 0x1D6A38u);
    ctx->pc = 0x1D6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A30u;
    // 0x1d6a34: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D6A30u, 0x1D6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A38u;
label_1d6a38:
    // 0x1d6a38: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x1d6a38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d6a3c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1d6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1d6a40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6a44: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1d6a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1d6a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d6a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6a4c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1d6a4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6a50: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x1d6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d6a54: 0x7fa30250  sq          $v1, 0x250($sp)
    ctx->pc = 0x1d6a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 3));
    // 0x1d6a58: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d6a58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d6a5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d6a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d6a60: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x1d6a60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1d6a64: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1d6a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1d6a68: 0x27a202a0  addiu       $v0, $sp, 0x2A0
    ctx->pc = 0x1d6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1d6a6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d6a6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6a70: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x1d6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1d6a74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d6a74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d6a78: 0xc4226b60  lwc1        $f2, 0x6B60($at)
    ctx->pc = 0x1d6a78u;
    { uint32_t bits = FAST_READ32(0x696B60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d6a7c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1d6a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1d6a80: 0xc4206b74  lwc1        $f0, 0x6B74($at)
    ctx->pc = 0x1d6a80u;
    { uint32_t bits = FAST_READ32(0x696B74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6a84: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x1d6a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x1d6a88: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1d6a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1d6a8c: 0x46020e02  mul.s       $f24, $f1, $f2
    ctx->pc = 0x1d6a8cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1d6a90: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6A90u;
    {
        const bool branch_taken_0x1d6a90 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A90u;
        // 0x1d6a94: 0x46000dc2  mul.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a90) {
            ctx->pc = 0x1D6AB0u;
            goto label_1d6ab0;
        }
    }
    ctx->pc = 0x1D6A98u;
    // 0x1d6a98: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x1d6a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d6a9c: 0x86e40006  lh          $a0, 0x6($s7)
    ctx->pc = 0x1d6a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x1d6aa0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1d6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6aa4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d6aa8: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x1d6aa8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d6aac: 0x82b024  and         $s6, $a0, $v0
    ctx->pc = 0x1d6aacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1d6ab0:
    // 0x1d6ab0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d6ab4: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D6AB4u;
    SET_GPR_U32(ctx, 31, 0x1D6ABCu);
    ctx->pc = 0x1D6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AB4u;
    // 0x1d6ab8: 0x24846a20  addiu       $a0, $a0, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D6AB4u, 0x1D6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6ABCu;
label_1d6abc:
    // 0x1d6abc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d6ac0: 0xc0768e0  jal         func_1DA380
    ctx->pc = 0x1D6AC0u;
    SET_GPR_U32(ctx, 31, 0x1D6AC8u);
    ctx->pc = 0x1D6AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AC0u;
    // 0x1d6ac4: 0x24846aa0  addiu       $a0, $a0, 0x6AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA380u, 0x1D6AC0u, 0x1D6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AC8u;
label_1d6ac8:
    // 0x1d6ac8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1d6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d6acc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1d6accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d6ad0: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x1d6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1d6ad4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d6ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6ad8: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D6AD8u;
    SET_GPR_U32(ctx, 31, 0x1D6AE0u);
    ctx->pc = 0x1D6ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AD8u;
    // 0x1d6adc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D6AD8u, 0x1D6AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AE0u;
label_1d6ae0:
    // 0x1d6ae0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1d6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d6ae4: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x1d6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1d6ae8: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x1d6ae8u;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    // 0x1d6aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6af0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d6af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1d6af4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1d6af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d6af8: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D6AF8u;
    SET_GPR_U32(ctx, 31, 0x1D6B00u);
    ctx->pc = 0x1D6AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AF8u;
    // 0x1d6afc: 0x27a402e0  addiu       $a0, $sp, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D6AF8u, 0x1D6B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B00u;
label_1d6b00:
    // 0x1d6b00: 0x27a202f4  addiu       $v0, $sp, 0x2F4
    ctx->pc = 0x1d6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
    // 0x1d6b04: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x1d6b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d6b08: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d6b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1d6b0c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1d6b0cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1d6b10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6b14: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1d6b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d6b18: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d6b1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d6b1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6b20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6b24: 0x468006a0  cvt.s.w     $f26, $f0
    ctx->pc = 0x1d6b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x1d6b28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6b30: 0x461ad01a  mula.s      $f26, $f26
    ctx->pc = 0x1d6b30u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[26], ctx->f[26]));
    // 0x1d6b34: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x1d6b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x1d6b38: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D6B38u;
    SET_GPR_U32(ctx, 31, 0x1D6B40u);
    ctx->pc = 0x1D6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B38u;
    // 0x1d6b3c: 0x4619cb1c  madd.s      $f12, $f25, $f25 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D6B38u, 0x1D6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B40u;
label_1d6b40:
    // 0x1d6b40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d6b40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d6b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6b48: 0x0  nop
    ctx->pc = 0x1d6b48u;
    // NOP
    // 0x1d6b4c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1d6b4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6b50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6B50u;
    {
        const bool branch_taken_0x1d6b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6b50) {
            ctx->pc = 0x1D6B68u;
            goto label_1d6b68;
        }
    }
    ctx->pc = 0x1D6B58u;
    // 0x1d6b58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d6b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D6B5Cu;
    {
        const bool branch_taken_0x1d6b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B5Cu;
        // 0x1d6b60: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b5c) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D6B64u;
    // 0x1d6b64: 0x0  nop
    ctx->pc = 0x1d6b64u;
    // NOP
label_1d6b68:
    // 0x1d6b68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b6c: 0xc076910  jal         func_1DA440
    ctx->pc = 0x1D6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1D6B74u);
    ctx->pc = 0x1D6B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B6Cu;
    // 0x1d6b70: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA440u, 0x1D6B6Cu, 0x1D6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B74u;
label_1d6b74:
    // 0x1d6b74: 0xc7a002d8  lwc1        $f0, 0x2D8($sp)
    ctx->pc = 0x1d6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6b78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d6b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6b7c: 0x0  nop
    ctx->pc = 0x1d6b7cu;
    // NOP
    // 0x1d6b80: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d6b80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6b84: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6B84u;
    {
        const bool branch_taken_0x1d6b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6b84) {
            ctx->pc = 0x1D6B94u;
            goto label_1d6b94;
        }
    }
    ctx->pc = 0x1D6B8Cu;
    // 0x1d6b8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6B8Cu;
    {
        const bool branch_taken_0x1d6b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B8Cu;
        // 0x1d6b90: 0x4619c002  mul.s       $f0, $f24, $f25 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b8c) {
            ctx->pc = 0x1D6BA4u;
            goto label_1d6ba4;
        }
    }
    ctx->pc = 0x1D6B94u;
label_1d6b94:
    // 0x1d6b94: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d6b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d6b98: 0x0  nop
    ctx->pc = 0x1d6b98u;
    // NOP
    // 0x1d6b9c: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d6b9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d6ba0: 0x4619c002  mul.s       $f0, $f24, $f25
    ctx->pc = 0x1d6ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
label_1d6ba4:
    // 0x1d6ba4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d6ba8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6ba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6bac: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d6bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d6bb0: 0x461ab802  mul.s       $f0, $f23, $f26
    ctx->pc = 0x1d6bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[26]);
    // 0x1d6bb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d6bb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6bb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6bbc: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x1d6bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_1d6bc0:
    // 0x1d6bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6bc4: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1d6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d6bc8: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D6BC8u;
    SET_GPR_U32(ctx, 31, 0x1D6BD0u);
    ctx->pc = 0x1D6BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BC8u;
    // 0x1d6bcc: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D6BC8u, 0x1D6BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BD0u;
label_1d6bd0:
    // 0x1d6bd0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1d6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d6bd4: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D6BD4u;
    SET_GPR_U32(ctx, 31, 0x1D6BDCu);
    ctx->pc = 0x1D6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BD4u;
    // 0x1d6bd8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D6BD4u, 0x1D6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BDCu;
label_1d6bdc:
    // 0x1d6bdc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1d6be0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1d6be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1d6be4: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d6be4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d6be8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6bec: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x1d6becu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x1d6bf0: 0x27a202f4  addiu       $v0, $sp, 0x2F4
    ctx->pc = 0x1d6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
    // 0x1d6bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6bf8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d6bfc: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1d6bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x1d6c00: 0x27a202f8  addiu       $v0, $sp, 0x2F8
    ctx->pc = 0x1d6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
    // 0x1d6c04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6c08: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D6C08u;
    SET_GPR_U32(ctx, 31, 0x1D6C10u);
    ctx->pc = 0x1D6C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C08u;
    // 0x1d6c0c: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D6C08u, 0x1D6C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C10u;
label_1d6c10:
    // 0x1d6c10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6c14: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1d6c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d6c18: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d6c18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d6c1c: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1d6c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d6c20: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d6c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d6c24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6c28: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d6c2c: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x1d6c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x1d6c30: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x1d6c30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x1d6c34: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1d6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1d6c38: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d6c38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d6c3c: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D6C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C44u);
    ctx->pc = 0x1D6C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C3Cu;
    // 0x1d6c40: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D6C3Cu, 0x1D6C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C44u;
label_1d6c44:
    // 0x1d6c44: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x1d6c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1d6c48: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D6C48u;
    SET_GPR_U32(ctx, 31, 0x1D6C50u);
    ctx->pc = 0x1D6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C48u;
    // 0x1d6c4c: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D6C48u, 0x1D6C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C50u;
label_1d6c50:
    // 0x1d6c50: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1d6c54: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x1d6c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1d6c58: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d6c58u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d6c5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6c60: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1d6c60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x1d6c64: 0x27a202f4  addiu       $v0, $sp, 0x2F4
    ctx->pc = 0x1d6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
    // 0x1d6c68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6c6c: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x1d6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d6c70: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1d6c70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1d6c74: 0x27a202f8  addiu       $v0, $sp, 0x2F8
    ctx->pc = 0x1d6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
    // 0x1d6c78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6c7c: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D6C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C84u);
    ctx->pc = 0x1D6C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C7Cu;
    // 0x1d6c80: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D6C7Cu, 0x1D6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C84u;
label_1d6c84:
    // 0x1d6c84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6c88: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1d6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d6c8c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d6c8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d6c90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d6c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c94: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d6c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d6c98: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1d6c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d6c9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6ca0: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d6ca4: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1d6ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x1d6ca8: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1d6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1d6cac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d6cacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d6cb0: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6CB0u;
    SET_GPR_U32(ctx, 31, 0x1D6CB8u);
    ctx->pc = 0x1D6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CB0u;
    // 0x1d6cb4: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6CB0u, 0x1D6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CB8u;
label_1d6cb8:
    // 0x1d6cb8: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1d6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d6cbc: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1d6cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d6cc0: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6CC0u;
    SET_GPR_U32(ctx, 31, 0x1D6CC8u);
    ctx->pc = 0x1D6CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CC0u;
    // 0x1d6cc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6CC0u, 0x1D6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CC8u;
label_1d6cc8:
    // 0x1d6cc8: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1d6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1d6ccc: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x1d6cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d6cd0: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6CD0u;
    SET_GPR_U32(ctx, 31, 0x1D6CD8u);
    ctx->pc = 0x1D6CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CD0u;
    // 0x1d6cd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6CD0u, 0x1D6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CD8u;
label_1d6cd8:
    // 0x1d6cd8: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1d6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1d6cdc: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1d6cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d6ce0: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6CE0u;
    SET_GPR_U32(ctx, 31, 0x1D6CE8u);
    ctx->pc = 0x1D6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CE0u;
    // 0x1d6ce4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6CE0u, 0x1D6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CE8u;
label_1d6ce8:
    // 0x1d6ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6cec: 0x0  nop
    ctx->pc = 0x1d6cecu;
    // NOP
    // 0x1d6cf0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1d6cf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6cf4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6CF4u;
    {
        const bool branch_taken_0x1d6cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CF4u;
        // 0x1d6cf8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cf4) {
            ctx->pc = 0x1D6D08u;
            goto label_1d6d08;
        }
    }
    ctx->pc = 0x1D6CFCu;
    // 0x1d6cfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D6CFCu;
    {
        const bool branch_taken_0x1d6cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CFCu;
        // 0x1d6d00: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cfc) {
            ctx->pc = 0x1D6D60u;
            goto label_1d6d60;
        }
    }
    ctx->pc = 0x1D6D04u;
    // 0x1d6d04: 0x0  nop
    ctx->pc = 0x1d6d04u;
    // NOP
label_1d6d08:
    // 0x1d6d08: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1d6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d6d0c: 0xc076910  jal         func_1DA440
    ctx->pc = 0x1D6D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D14u);
    ctx->pc = 0x1D6D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D0Cu;
    // 0x1d6d10: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA440u, 0x1D6D0Cu, 0x1D6D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D14u;
label_1d6d14:
    // 0x1d6d14: 0xc7a002d8  lwc1        $f0, 0x2D8($sp)
    ctx->pc = 0x1d6d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6d18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d6d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6d1c: 0x0  nop
    ctx->pc = 0x1d6d1cu;
    // NOP
    // 0x1d6d20: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d6d20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6d24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6D24u;
    {
        const bool branch_taken_0x1d6d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6d24) {
            ctx->pc = 0x1D6D34u;
            goto label_1d6d34;
        }
    }
    ctx->pc = 0x1D6D2Cu;
    // 0x1d6d2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6D2Cu;
    {
        const bool branch_taken_0x1d6d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D2Cu;
        // 0x1d6d30: 0x4619c002  mul.s       $f0, $f24, $f25 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d2c) {
            ctx->pc = 0x1D6D44u;
            goto label_1d6d44;
        }
    }
    ctx->pc = 0x1D6D34u;
label_1d6d34:
    // 0x1d6d34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d6d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d6d38: 0x0  nop
    ctx->pc = 0x1d6d38u;
    // NOP
    // 0x1d6d3c: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d6d3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d6d40: 0x4619c002  mul.s       $f0, $f24, $f25
    ctx->pc = 0x1d6d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
label_1d6d44:
    // 0x1d6d44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d6d48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6d48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6d4c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d6d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d6d50: 0x461ab802  mul.s       $f0, $f23, $f26
    ctx->pc = 0x1d6d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[26]);
    // 0x1d6d54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d6d58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6d58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6d5c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x1d6d5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_1d6d60:
    // 0x1d6d60: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x1d6d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x1d6d64: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1d6d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d6d68: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D6D68u;
    SET_GPR_U32(ctx, 31, 0x1D6D70u);
    ctx->pc = 0x1D6D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D68u;
    // 0x1d6d6c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D6D68u, 0x1D6D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D70u;
label_1d6d70:
    // 0x1d6d70: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x1d6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x1d6d74: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D6D74u;
    SET_GPR_U32(ctx, 31, 0x1D6D7Cu);
    ctx->pc = 0x1D6D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D74u;
    // 0x1d6d78: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D6D74u, 0x1D6D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D7Cu;
label_1d6d7c:
    // 0x1d6d7c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x1d6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d6d80: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x1d6d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x1d6d84: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d6d84u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d6d88: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6d8c: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x1d6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x1d6d90: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d6d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6d98: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d6d9c: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x1d6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    // 0x1d6da0: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x1d6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
    // 0x1d6da4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6da8: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D6DA8u;
    SET_GPR_U32(ctx, 31, 0x1D6DB0u);
    ctx->pc = 0x1D6DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DA8u;
    // 0x1d6dac: 0xae820088  sw          $v0, 0x88($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D6DA8u, 0x1D6DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DB0u;
label_1d6db0:
    // 0x1d6db0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6db4: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x1d6db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x1d6db8: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d6db8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d6dbc: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1d6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d6dc0: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d6dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d6dc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6dc8: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d6dcc: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x1d6dccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    // 0x1d6dd0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d6dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d6dd4: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x1d6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1d6dd8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d6dd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d6ddc: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D6DDCu;
    SET_GPR_U32(ctx, 31, 0x1D6DE4u);
    ctx->pc = 0x1D6DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DDCu;
    // 0x1d6de0: 0xae820088  sw          $v0, 0x88($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D6DDCu, 0x1D6DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DE4u;
label_1d6de4:
    // 0x1d6de4: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x1d6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1d6de8: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D6DE8u;
    SET_GPR_U32(ctx, 31, 0x1D6DF0u);
    ctx->pc = 0x1D6DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DE8u;
    // 0x1d6dec: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D6DE8u, 0x1D6DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DF0u;
label_1d6df0:
    // 0x1d6df0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x1d6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d6df4: 0x268400b0  addiu       $a0, $s4, 0xB0
    ctx->pc = 0x1d6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1d6df8: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d6df8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d6dfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6e00: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x1d6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x1d6e04: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d6e08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6e0c: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x1d6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d6e10: 0xae8200b4  sw          $v0, 0xB4($s4)
    ctx->pc = 0x1d6e10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
    // 0x1d6e14: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x1d6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
    // 0x1d6e18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6e1c: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D6E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E24u);
    ctx->pc = 0x1D6E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E1Cu;
    // 0x1d6e20: 0xae8200b8  sw          $v0, 0xB8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D6E1Cu, 0x1D6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E24u;
label_1d6e24:
    // 0x1d6e24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d6e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6e28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d6e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d6e2c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d6e2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d6e30: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d6e34: 0x32630007  andi        $v1, $s3, 0x7
    ctx->pc = 0x1d6e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d6e38: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d6e38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d6e3c: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1d6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1d6e40: 0xae8300bc  sw          $v1, 0xBC($s4)
    ctx->pc = 0x1d6e40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 3));
    // 0x1d6e44: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d6e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6e48: 0x8e8300b8  lw          $v1, 0xB8($s4)
    ctx->pc = 0x1d6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x1d6e4c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d6e4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d6e50: 0xae8300b8  sw          $v1, 0xB8($s4)
    ctx->pc = 0x1d6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 184), GPR_U32(ctx, 3));
    // 0x1d6e54: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D6E54u;
    {
        const bool branch_taken_0x1d6e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E54u;
        // 0x1d6e58: 0x269400c0  addiu       $s4, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e54) {
            ctx->pc = 0x1D6EA0u;
            goto label_1d6ea0;
        }
    }
    ctx->pc = 0x1D6E5Cu;
    // 0x1d6e5c: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x1d6e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1d6e60: 0x4600e507  neg.s       $f20, $f28
    ctx->pc = 0x1d6e60u;
    ctx->f[20] = FPU_NEG_S(ctx->f[28]);
    // 0x1d6e64: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1d6e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d6e68: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1d6e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d6e6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d6e6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d6e70: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x1d6e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x1d6e74: 0x7aa30030  lq          $v1, 0x30($s5)
    ctx->pc = 0x1d6e74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1d6e78: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x1d6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d6e7c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D6E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E84u);
    ctx->pc = 0x1D6E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E7Cu;
    // 0x1d6e80: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D6E7Cu, 0x1D6E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E84u;
label_1d6e84:
    // 0x1d6e84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d6e84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d6e88: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1d6e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d6e8c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D6E8Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E94u);
    ctx->pc = 0x1D6E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E8Cu;
    // 0x1d6e90: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D6E8Cu, 0x1D6E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E94u;
label_1d6e94:
    // 0x1d6e94: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d6e94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6e98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d6e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e9c: 0x0  nop
    ctx->pc = 0x1d6e9cu;
    // NOP
label_1d6ea0:
    // 0x1d6ea0: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1d6ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d6ea4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d6ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ea8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6EA8u;
    SET_GPR_U32(ctx, 31, 0x1D6EB0u);
    ctx->pc = 0x1D6EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EA8u;
    // 0x1d6eac: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6EA8u, 0x1D6EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EB0u;
label_1d6eb0:
    // 0x1d6eb0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1d6eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d6eb4: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1d6eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d6eb8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6EB8u;
    SET_GPR_U32(ctx, 31, 0x1D6EC0u);
    ctx->pc = 0x1D6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EB8u;
    // 0x1d6ebc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6EB8u, 0x1D6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EC0u;
label_1d6ec0:
    // 0x1d6ec0: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1d6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1d6ec4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x1d6ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d6ec8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6EC8u;
    SET_GPR_U32(ctx, 31, 0x1D6ED0u);
    ctx->pc = 0x1D6ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EC8u;
    // 0x1d6ecc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6EC8u, 0x1D6ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6ED0u;
label_1d6ed0:
    // 0x1d6ed0: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1d6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1d6ed4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1d6ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d6ed8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D6ED8u;
    SET_GPR_U32(ctx, 31, 0x1D6EE0u);
    ctx->pc = 0x1D6EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6ED8u;
    // 0x1d6edc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D6ED8u, 0x1D6EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EE0u;
label_1d6ee0:
    // 0x1d6ee0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d6ee4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d6ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d6ee8: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1d6ee8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6eec: 0x102000c2  beqz        $at, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1D6EECu;
    {
        const bool branch_taken_0x1d6eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EECu;
        // 0x1d6ef0: 0x4600e587  neg.s       $f22, $f28 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6eec) {
            ctx->pc = 0x1D71F8u;
            goto label_1d71f8;
        }
    }
    ctx->pc = 0x1D6EF4u;
    // 0x1d6ef4: 0x0  nop
    ctx->pc = 0x1d6ef4u;
    // NOP
label_1d6ef8:
    // 0x1d6ef8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6EF8u;
    {
        const bool branch_taken_0x1d6ef8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EF8u;
        // 0x1d6efc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ef8) {
            ctx->pc = 0x1D6F18u;
            goto label_1d6f18;
        }
    }
    ctx->pc = 0x1D6F00u;
    // 0x1d6f00: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x1d6f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d6f04: 0x86e30006  lh          $v1, 0x6($s7)
    ctx->pc = 0x1d6f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x1d6f08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6f0c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d6f10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d6f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d6f14: 0x0  nop
    ctx->pc = 0x1d6f14u;
    // NOP
label_1d6f18:
    // 0x1d6f18: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d6f1c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1d6f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d6f20: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x1d6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1d6f24: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d6f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6f28: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x1d6f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d6f2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f30: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D6F30u;
    SET_GPR_U32(ctx, 31, 0x1D6F38u);
    ctx->pc = 0x1D6F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F30u;
    // 0x1d6f34: 0x7fa202f0  sq          $v0, 0x2F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D6F30u, 0x1D6F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F38u;
label_1d6f38:
    // 0x1d6f38: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d6f3c: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x1d6f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d6f40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6f44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d6f44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d6f48: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1d6f4c: 0x4600d024  .word       0x4600D024                   # cvt.w.s     $f0, $f26 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[26]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6f50: 0x27a202f4  addiu       $v0, $sp, 0x2F4
    ctx->pc = 0x1d6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
    // 0x1d6f54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6f58: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1d6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d6f5c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d6f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d6f60: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6f64: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6f68: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1d6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d6f6c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d6f6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d6f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6f74: 0x0  nop
    ctx->pc = 0x1d6f74u;
    // NOP
    // 0x1d6f78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1d6f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d6f7c: 0x46800ea0  cvt.s.w     $f26, $f1
    ctx->pc = 0x1d6f7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x1d6f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6f84: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d6f84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d6f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6f8c: 0x461ad01a  mula.s      $f26, $f26
    ctx->pc = 0x1d6f8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[26], ctx->f[26]));
    // 0x1d6f90: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x1d6f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x1d6f94: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D6F94u;
    SET_GPR_U32(ctx, 31, 0x1D6F9Cu);
    ctx->pc = 0x1D6F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F94u;
    // 0x1d6f98: 0x4619cb1c  madd.s      $f12, $f25, $f25 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D6F94u, 0x1D6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F9Cu;
label_1d6f9c:
    // 0x1d6f9c: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x1d6f9cu;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    // 0x1d6fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6fa4: 0x0  nop
    ctx->pc = 0x1d6fa4u;
    // NOP
    // 0x1d6fa8: 0x461b0032  c.eq.s      $f0, $f27
    ctx->pc = 0x1d6fa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6fac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6FACu;
    {
        const bool branch_taken_0x1d6fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6fac) {
            ctx->pc = 0x1D6FC0u;
            goto label_1d6fc0;
        }
    }
    ctx->pc = 0x1D6FB4u;
    // 0x1d6fb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d6fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fb8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D6FB8u;
    {
        const bool branch_taken_0x1d6fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FB8u;
        // 0x1d6fbc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fb8) {
            ctx->pc = 0x1D7020u;
            goto label_1d7020;
        }
    }
    ctx->pc = 0x1D6FC0u;
label_1d6fc0:
    // 0x1d6fc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fc4: 0xc076910  jal         func_1DA440
    ctx->pc = 0x1D6FC4u;
    SET_GPR_U32(ctx, 31, 0x1D6FCCu);
    ctx->pc = 0x1D6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6FC4u;
    // 0x1d6fc8: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA440u, 0x1D6FC4u, 0x1D6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FCCu;
label_1d6fcc:
    // 0x1d6fcc: 0x27a202d8  addiu       $v0, $sp, 0x2D8
    ctx->pc = 0x1d6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
    // 0x1d6fd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6fd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d6fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6fd8: 0x0  nop
    ctx->pc = 0x1d6fd8u;
    // NOP
    // 0x1d6fdc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d6fdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6fe0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6FE0u;
    {
        const bool branch_taken_0x1d6fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6fe0) {
            ctx->pc = 0x1D6FF0u;
            goto label_1d6ff0;
        }
    }
    ctx->pc = 0x1D6FE8u;
    // 0x1d6fe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6FE8u;
    {
        const bool branch_taken_0x1d6fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FE8u;
        // 0x1d6fec: 0x4619c002  mul.s       $f0, $f24, $f25 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fe8) {
            ctx->pc = 0x1D7000u;
            goto label_1d7000;
        }
    }
    ctx->pc = 0x1D6FF0u;
label_1d6ff0:
    // 0x1d6ff0: 0x4600d802  mul.s       $f0, $f27, $f0
    ctx->pc = 0x1d6ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
    // 0x1d6ff4: 0x0  nop
    ctx->pc = 0x1d6ff4u;
    // NOP
    // 0x1d6ff8: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d6ff8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d6ffc: 0x4619c002  mul.s       $f0, $f24, $f25
    ctx->pc = 0x1d6ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
label_1d7000:
    // 0x1d7000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d7000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7004: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d7004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d7008: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d7008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d700c: 0x461ab802  mul.s       $f0, $f23, $f26
    ctx->pc = 0x1d700cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[26]);
    // 0x1d7010: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d7010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7014: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d7014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d7018: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x1d7018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x1d701c: 0x0  nop
    ctx->pc = 0x1d701cu;
    // NOP
label_1d7020:
    // 0x1d7020: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7024: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1d7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d7028: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7028u;
    SET_GPR_U32(ctx, 31, 0x1D7030u);
    ctx->pc = 0x1D702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7028u;
    // 0x1d702c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7028u, 0x1D7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7030u;
label_1d7030:
    // 0x1d7030: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1d7030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d7034: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D7034u;
    SET_GPR_U32(ctx, 31, 0x1D703Cu);
    ctx->pc = 0x1D7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7034u;
    // 0x1d7038: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D7034u, 0x1D703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D703Cu;
label_1d703c:
    // 0x1d703c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x1d703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d7040: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1d7040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1d7044: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d7044u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d7048: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d7048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d704c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x1d704cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x1d7050: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d7050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d7054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7058: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d7058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d705c: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1d705cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x1d7060: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x1d7060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
    // 0x1d7064: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7068: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D7068u;
    SET_GPR_U32(ctx, 31, 0x1D7070u);
    ctx->pc = 0x1D706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7068u;
    // 0x1d706c: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D7068u, 0x1D7070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7070u;
label_1d7070:
    // 0x1d7070: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7074: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1d7074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d7078: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d7078u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d707c: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1d707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d7080: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d7080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d7084: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7088: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d7088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d708c: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x1d708cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x1d7090: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7090u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7094: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1d7094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1d7098: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d7098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d709c: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D709Cu;
    SET_GPR_U32(ctx, 31, 0x1D70A4u);
    ctx->pc = 0x1D70A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D709Cu;
    // 0x1d70a0: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D709Cu, 0x1D70A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70A4u;
label_1d70a4:
    // 0x1d70a4: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x1d70a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1d70a8: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D70A8u;
    SET_GPR_U32(ctx, 31, 0x1D70B0u);
    ctx->pc = 0x1D70ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70A8u;
    // 0x1d70ac: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D70A8u, 0x1D70B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70B0u;
label_1d70b0:
    // 0x1d70b0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x1d70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d70b4: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x1d70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1d70b8: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d70b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d70bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d70c0: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1d70c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x1d70c4: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d70c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d70cc: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x1d70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d70d0: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1d70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1d70d4: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x1d70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
    // 0x1d70d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d70dc: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D70DCu;
    SET_GPR_U32(ctx, 31, 0x1D70E4u);
    ctx->pc = 0x1D70E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70DCu;
    // 0x1d70e0: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D70DCu, 0x1D70E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70E4u;
label_1d70e4:
    // 0x1d70e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d70e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d70e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d70e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d70ec: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d70ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d70f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d70f4: 0x32630007  andi        $v1, $s3, 0x7
    ctx->pc = 0x1d70f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d70f8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d70f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d70fc: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1d70fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1d7100: 0xae83005c  sw          $v1, 0x5C($s4)
    ctx->pc = 0x1d7100u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
    // 0x1d7104: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d7104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7108: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x1d7108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1d710c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d710cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d7110: 0xae830058  sw          $v1, 0x58($s4)
    ctx->pc = 0x1d7110u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
    // 0x1d7114: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D7114u;
    {
        const bool branch_taken_0x1d7114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7114u;
        // 0x1d7118: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7114) {
            ctx->pc = 0x1D71A0u;
            goto label_1d71a0;
        }
    }
    ctx->pc = 0x1D711Cu;
    // 0x1d711c: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D711Cu;
    {
        const bool branch_taken_0x1d711c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d711c) {
            ctx->pc = 0x1D7160u;
            goto label_1d7160;
        }
    }
    ctx->pc = 0x1D7124u;
    // 0x1d7124: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x1d7124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1d7128: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1d7128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d712c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1d712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d7130: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d7130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d7134: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x1d7134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x1d7138: 0x7aa30030  lq          $v1, 0x30($s5)
    ctx->pc = 0x1d7138u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1d713c: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x1d713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d7140: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D7140u;
    SET_GPR_U32(ctx, 31, 0x1D7148u);
    ctx->pc = 0x1D7144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7140u;
    // 0x1d7144: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D7140u, 0x1D7148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7148u;
label_1d7148:
    // 0x1d7148: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1d7148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d714c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d7150: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D7150u;
    SET_GPR_U32(ctx, 31, 0x1D7158u);
    ctx->pc = 0x1D7154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7150u;
    // 0x1d7154: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D7150u, 0x1D7158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7158u;
label_1d7158:
    // 0x1d7158: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D7158u;
    {
        const bool branch_taken_0x1d7158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7158u;
        // 0x1d715c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7158) {
            ctx->pc = 0x1D7198u;
            goto label_1d7198;
        }
    }
    ctx->pc = 0x1D7160u;
label_1d7160:
    // 0x1d7160: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1d7160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d7164: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1d7164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d7168: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1d7168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d716c: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x1d716cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    // 0x1d7170: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x1d7170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x1d7174: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d7174u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d7178: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x1d7178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d717c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D717Cu;
    SET_GPR_U32(ctx, 31, 0x1D7184u);
    ctx->pc = 0x1D7180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D717Cu;
    // 0x1d7180: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D717Cu, 0x1D7184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7184u;
label_1d7184:
    // 0x1d7184: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1d7184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d7188: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d7188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d718c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D718Cu;
    SET_GPR_U32(ctx, 31, 0x1D7194u);
    ctx->pc = 0x1D7190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D718Cu;
    // 0x1d7190: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D718Cu, 0x1D7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7194u;
label_1d7194:
    // 0x1d7194: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d7194u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7198:
    // 0x1d7198: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d7198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d719c: 0x0  nop
    ctx->pc = 0x1d719cu;
    // NOP
label_1d71a0:
    // 0x1d71a0: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1d71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d71a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d71a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71a8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D71A8u;
    SET_GPR_U32(ctx, 31, 0x1D71B0u);
    ctx->pc = 0x1D71ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71A8u;
    // 0x1d71ac: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D71A8u, 0x1D71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71B0u;
label_1d71b0:
    // 0x1d71b0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1d71b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1d71b4: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1d71b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d71b8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D71B8u;
    SET_GPR_U32(ctx, 31, 0x1D71C0u);
    ctx->pc = 0x1D71BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71B8u;
    // 0x1d71bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D71B8u, 0x1D71C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71C0u;
label_1d71c0:
    // 0x1d71c0: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1d71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1d71c4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x1d71c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1d71c8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D71C8u;
    SET_GPR_U32(ctx, 31, 0x1D71D0u);
    ctx->pc = 0x1D71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71C8u;
    // 0x1d71cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D71C8u, 0x1D71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71D0u;
label_1d71d0:
    // 0x1d71d0: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1d71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1d71d4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1d71d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d71d8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D71D8u;
    SET_GPR_U32(ctx, 31, 0x1D71E0u);
    ctx->pc = 0x1D71DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71D8u;
    // 0x1d71dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D71D8u, 0x1D71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71E0u;
label_1d71e0:
    // 0x1d71e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d71e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d71e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d71e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d71e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d71ec: 0x1440ff42  bnez        $v0, . + 4 + (-0xBE << 2)
    ctx->pc = 0x1D71ECu;
    {
        const bool branch_taken_0x1d71ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d71ec) {
            ctx->pc = 0x1D6EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6ef8;
        }
    }
    ctx->pc = 0x1D71F4u;
    // 0x1d71f4: 0x0  nop
    ctx->pc = 0x1d71f4u;
    // NOP
label_1d71f8:
    // 0x1d71f8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1d71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1d71fc: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x1d71fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d7200: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7200u;
    {
        const bool branch_taken_0x1d7200 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7200u;
        // 0x1d7204: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7200) {
            ctx->pc = 0x1D7210u;
            goto label_1d7210;
        }
    }
    ctx->pc = 0x1D7208u;
    // 0x1d7208: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d7208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d720c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d720cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d7210:
    // 0x1d7210: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d7214: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1d7218: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1d721c: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x1d721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1d7220: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d7220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d7224: 0x0  nop
    ctx->pc = 0x1d7224u;
    // NOP
    // 0x1d7228: 0x0  nop
    ctx->pc = 0x1d7228u;
    // NOP
    // 0x1d722c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d722cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d7230: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d7230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7234: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d7234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d7238: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7238u;
    {
        const bool branch_taken_0x1d7238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7238) {
            ctx->pc = 0x1D7270u;
            goto label_1d7270;
        }
    }
    ctx->pc = 0x1D7240u;
    // 0x1d7240: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x1d7240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x1d7244: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d7244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d7248: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d7248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d724c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d724cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d7250: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d7250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7254: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x1d7254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d7258: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1d7258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d725c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1d725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1d7260: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1d7260u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x1d7264: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1d7264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1d7268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7268u;
    {
        const bool branch_taken_0x1d7268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7268u;
        // 0x1d726c: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7268) {
            ctx->pc = 0x1D7278u;
            goto label_1d7278;
        }
    }
    ctx->pc = 0x1D7270u;
label_1d7270:
    // 0x1d7270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7270u;
    {
        const bool branch_taken_0x1d7270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7270u;
        // 0x1d7274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7270) {
            ctx->pc = 0x1D7280u;
            goto label_1d7280;
        }
    }
    ctx->pc = 0x1D7278u;
label_1d7278:
    // 0x1d7278: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d7278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d727c: 0x0  nop
    ctx->pc = 0x1d727cu;
    // NOP
label_1d7280:
    // 0x1d7280: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1d7280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7284: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1d7284u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d7288: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x1d7288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1d728c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1d728cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d7290: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1d7290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1d7294: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1d7294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d7298: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1d7298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d729c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d729cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d72a0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d72a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d72a4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1d72a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d72a8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d72ac: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1d72acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d72b0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d72b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d72b4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d72b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d72b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d72b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d72bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d72bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d72c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d72c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d72c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d72c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d72c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d72cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D72CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72CCu;
        // 0x1d72d0: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D72CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D72D4u;
}

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

// Function: sub_001D72E0
// Address: 0x1d72e0 - 0x1d7d58
void sub_001D72E0_0x1d72e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D72E0_0x1d72e0");
#endif

    switch (ctx->pc) {
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7418u: goto label_1d7418;
        case 0x1d7424u: goto label_1d7424;
        case 0x1d7430u: goto label_1d7430;
        case 0x1d7440u: goto label_1d7440;
        case 0x1d7450u: goto label_1d7450;
        case 0x1d7464u: goto label_1d7464;
        case 0x1d7474u: goto label_1d7474;
        case 0x1d7484u: goto label_1d7484;
        case 0x1d7494u: goto label_1d7494;
        case 0x1d74a4u: goto label_1d74a4;
        case 0x1d74b4u: goto label_1d74b4;
        case 0x1d7534u: goto label_1d7534;
        case 0x1d7540u: goto label_1d7540;
        case 0x1d7558u: goto label_1d7558;
        case 0x1d7578u: goto label_1d7578;
        case 0x1d75b8u: goto label_1d75b8;
        case 0x1d75ecu: goto label_1d75ec;
        case 0x1d7648u: goto label_1d7648;
        case 0x1d7654u: goto label_1d7654;
        case 0x1d7688u: goto label_1d7688;
        case 0x1d76c0u: goto label_1d76c0;
        case 0x1d76ccu: goto label_1d76cc;
        case 0x1d7700u: goto label_1d7700;
        case 0x1d7734u: goto label_1d7734;
        case 0x1d7744u: goto label_1d7744;
        case 0x1d7754u: goto label_1d7754;
        case 0x1d7764u: goto label_1d7764;
        case 0x1d778cu: goto label_1d778c;
        case 0x1d77e8u: goto label_1d77e8;
        case 0x1d77f4u: goto label_1d77f4;
        case 0x1d7828u: goto label_1d7828;
        case 0x1d785cu: goto label_1d785c;
        case 0x1d7868u: goto label_1d7868;
        case 0x1d789cu: goto label_1d789c;
        case 0x1d78f8u: goto label_1d78f8;
        case 0x1d7918u: goto label_1d7918;
        case 0x1d7950u: goto label_1d7950;
        case 0x1d7960u: goto label_1d7960;
        case 0x1d7970u: goto label_1d7970;
        case 0x1d7980u: goto label_1d7980;
        case 0x1d7998u: goto label_1d7998;
        case 0x1d79d8u: goto label_1d79d8;
        case 0x1d7a3cu: goto label_1d7a3c;
        case 0x1d7a6cu: goto label_1d7a6c;
        case 0x1d7ad0u: goto label_1d7ad0;
        case 0x1d7adcu: goto label_1d7adc;
        case 0x1d7b10u: goto label_1d7b10;
        case 0x1d7b44u: goto label_1d7b44;
        case 0x1d7b50u: goto label_1d7b50;
        case 0x1d7b84u: goto label_1d7b84;
        case 0x1d7be0u: goto label_1d7be0;
        case 0x1d7c00u: goto label_1d7c00;
        case 0x1d7c38u: goto label_1d7c38;
        case 0x1d7c48u: goto label_1d7c48;
        case 0x1d7c58u: goto label_1d7c58;
        case 0x1d7c68u: goto label_1d7c68;
        default: break;
    }

    ctx->pc = 0x1d72e0u;

    // 0x1d72e0: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x1d72e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
    // 0x1d72e4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d72e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d72e8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d72e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d72ec: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d72ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d72f0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d72f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d72f4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1d72f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72f8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d72f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d72fc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d72fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d7300: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d7300u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7304: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d7304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d7308: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d7308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d730c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d730cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d7310: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d7310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d7314: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1d7314u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1d7318: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d7318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d731c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1d731cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d7320: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d7320u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d7324: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d7324u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d7328: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d7328u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d732c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d732cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d7330: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d7330u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d7334: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d7334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d7338: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x1d7338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x1d733c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1d733cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1d7340: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x1d7340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x1d7344: 0xafa800e0  sw          $t0, 0xE0($sp)
    ctx->pc = 0x1d7344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 8));
    // 0x1d7348: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7348u;
    {
        const bool branch_taken_0x1d7348 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7348u;
        // 0x1d734c: 0xafa900d0  sw          $t1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7348) {
            ctx->pc = 0x1D7358u;
            goto label_1d7358;
        }
    }
    ctx->pc = 0x1D7350u;
    // 0x1d7350: 0x86e20002  lh          $v0, 0x2($s7)
    ctx->pc = 0x1d7350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x1d7354: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d7354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1d7358:
    // 0x1d7358: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d7358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d735c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d735cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d7360: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7360u;
    {
        const bool branch_taken_0x1d7360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7360u;
        // 0x1d7364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7360) {
            ctx->pc = 0x1D7370u;
            goto label_1d7370;
        }
    }
    ctx->pc = 0x1D7368u;
    // 0x1d7368: 0x10000267  b           . + 4 + (0x267 << 2)
    ctx->pc = 0x1D7368u;
    {
        const bool branch_taken_0x1d7368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7368) {
            ctx->pc = 0x1D7D08u;
            goto label_1d7d08;
        }
    }
    ctx->pc = 0x1D7370u;
label_1d7370:
    // 0x1d7370: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1d7370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1d7374: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d7374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7378: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d737c: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x1d737cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7380: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d7380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d7384: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7384u;
    {
        const bool branch_taken_0x1d7384 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1D7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7384u;
        // 0x1d7388: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7384) {
            ctx->pc = 0x1D7398u;
            goto label_1d7398;
        }
    }
    ctx->pc = 0x1D738Cu;
    // 0x1d738c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7390: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d7390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1d7394: 0x0  nop
    ctx->pc = 0x1d7394u;
    // NOP
label_1d7398:
    // 0x1d7398: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d7398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d739c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d73a0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D73A0u;
    {
        const bool branch_taken_0x1d73a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73A0u;
        // 0x1d73a4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73a0) {
            ctx->pc = 0x1D73B8u;
            goto label_1d73b8;
        }
    }
    ctx->pc = 0x1D73A8u;
    // 0x1d73a8: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d73a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d73ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D73ACu;
    {
        const bool branch_taken_0x1d73ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73ACu;
        // 0x1d73b0: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73ac) {
            ctx->pc = 0x1D73D8u;
            goto label_1d73d8;
        }
    }
    ctx->pc = 0x1D73B4u;
    // 0x1d73b4: 0x0  nop
    ctx->pc = 0x1d73b4u;
    // NOP
label_1d73b8:
    // 0x1d73b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d73bc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d73bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d73c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d73c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d73c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d73c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d73cc: 0x0  nop
    ctx->pc = 0x1d73ccu;
    // NOP
    // 0x1d73d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d73d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d73d4: 0x4600ad83  div.s       $f22, $f21, $f0
    ctx->pc = 0x1d73d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_1d73d8:
    // 0x1d73d8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d73dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d73dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d73e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D73E0u;
    {
        const bool branch_taken_0x1d73e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E0u;
        // 0x1d73e4: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73e0) {
            ctx->pc = 0x1D73F0u;
            goto label_1d73f0;
        }
    }
    ctx->pc = 0x1D73E8u;
    // 0x1d73e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D73E8u;
    {
        const bool branch_taken_0x1d73e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E8u;
        // 0x1d73ec: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73e8) {
            ctx->pc = 0x1D7404u;
            goto label_1d7404;
        }
    }
    ctx->pc = 0x1D73F0u;
label_1d73f0:
    // 0x1d73f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d73f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d73f4: 0x0  nop
    ctx->pc = 0x1d73f4u;
    // NOP
    // 0x1d73f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d73f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d73fc: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x1d73fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d7400: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1d7404:
    // 0x1d7404: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D7404u;
    SET_GPR_U32(ctx, 31, 0x1D740Cu);
    ctx->pc = 0x1D7408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7404u;
    // 0x1d7408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D7404u, 0x1D740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D740Cu;
label_1d740c:
    // 0x1d740c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x1d740cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1d7410: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D7410u;
    SET_GPR_U32(ctx, 31, 0x1D7418u);
    ctx->pc = 0x1D7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7410u;
    // 0x1d7414: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D7410u, 0x1D7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7418u;
label_1d7418:
    // 0x1d7418: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x1d7418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1d741c: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D741Cu;
    SET_GPR_U32(ctx, 31, 0x1D7424u);
    ctx->pc = 0x1D7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D741Cu;
    // 0x1d7420: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D741Cu, 0x1D7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7424u;
label_1d7424:
    // 0x1d7424: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1d7424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d7428: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D7428u;
    SET_GPR_U32(ctx, 31, 0x1D7430u);
    ctx->pc = 0x1D742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7428u;
    // 0x1d742c: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D7428u, 0x1D7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7430u;
label_1d7430:
    // 0x1d7430: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1d7430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d7434: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x1d7434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1d7438: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D7438u;
    SET_GPR_U32(ctx, 31, 0x1D7440u);
    ctx->pc = 0x1D743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7438u;
    // 0x1d743c: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D7438u, 0x1D7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7440u;
label_1d7440:
    // 0x1d7440: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d7444: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x1d7444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1d7448: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D7448u;
    SET_GPR_U32(ctx, 31, 0x1D7450u);
    ctx->pc = 0x1D744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7448u;
    // 0x1d744c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D7448u, 0x1D7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7450u;
label_1d7450:
    // 0x1d7450: 0x27be0290  addiu       $fp, $sp, 0x290
    ctx->pc = 0x1d7450u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1d7454: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d7458: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1d7458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1d745c: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D745Cu;
    SET_GPR_U32(ctx, 31, 0x1D7464u);
    ctx->pc = 0x1D7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D745Cu;
    // 0x1d7460: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D745Cu, 0x1D7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7464u;
label_1d7464:
    // 0x1d7464: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d7464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d7468: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x1d7468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1d746c: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D746Cu;
    SET_GPR_U32(ctx, 31, 0x1D7474u);
    ctx->pc = 0x1D7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D746Cu;
    // 0x1d7470: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D746Cu, 0x1D7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7474u;
label_1d7474:
    // 0x1d7474: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1d7474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1d7478: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d747c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D747Cu;
    SET_GPR_U32(ctx, 31, 0x1D7484u);
    ctx->pc = 0x1D7480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D747Cu;
    // 0x1d7480: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D747Cu, 0x1D7484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7484u;
label_1d7484:
    // 0x1d7484: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7488: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1d7488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d748c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D748Cu;
    SET_GPR_U32(ctx, 31, 0x1D7494u);
    ctx->pc = 0x1D7490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D748Cu;
    // 0x1d7490: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D748Cu, 0x1D7494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7494u;
label_1d7494:
    // 0x1d7494: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1d7494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d7498: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1d7498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d749c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D749Cu;
    SET_GPR_U32(ctx, 31, 0x1D74A4u);
    ctx->pc = 0x1D74A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D749Cu;
    // 0x1d74a0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D749Cu, 0x1D74A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74A4u;
label_1d74a4:
    // 0x1d74a4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d74a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d74a8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1d74a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d74ac: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D74ACu;
    SET_GPR_U32(ctx, 31, 0x1D74B4u);
    ctx->pc = 0x1D74B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74ACu;
    // 0x1d74b0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D74ACu, 0x1D74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74B4u;
label_1d74b4:
    // 0x1d74b4: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x1d74b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d74b8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1d74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1d74bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d74bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d74c0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1d74c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1d74c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d74c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74c8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1d74c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d74cc: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x1d74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d74d0: 0x7fa30240  sq          $v1, 0x240($sp)
    ctx->pc = 0x1d74d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 3));
    // 0x1d74d4: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d74d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d74d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d74d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d74dc: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x1d74dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1d74e0: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1d74e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1d74e4: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x1d74e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d74e8: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x1d74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1d74ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d74ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d74f0: 0xc4226b60  lwc1        $f2, 0x6B60($at)
    ctx->pc = 0x1d74f0u;
    { uint32_t bits = FAST_READ32(0x696B60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d74f4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1d74f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1d74f8: 0xc4206b74  lwc1        $f0, 0x6B74($at)
    ctx->pc = 0x1d74f8u;
    { uint32_t bits = FAST_READ32(0x696B74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d74fc: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x1d74fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x1d7500: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x1d7500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1d7504: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x1d7504u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1d7508: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7508u;
    {
        const bool branch_taken_0x1d7508 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7508u;
        // 0x1d750c: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7508) {
            ctx->pc = 0x1D7528u;
            goto label_1d7528;
        }
    }
    ctx->pc = 0x1D7510u;
    // 0x1d7510: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x1d7510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d7514: 0x86e40006  lh          $a0, 0x6($s7)
    ctx->pc = 0x1d7514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x1d7518: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1d7518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d751c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d7520: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x1d7520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d7524: 0x82b024  and         $s6, $a0, $v0
    ctx->pc = 0x1d7524u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1d7528:
    // 0x1d7528: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d7528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d752c: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D752Cu;
    SET_GPR_U32(ctx, 31, 0x1D7534u);
    ctx->pc = 0x1D7530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D752Cu;
    // 0x1d7530: 0x24846a20  addiu       $a0, $a0, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D752Cu, 0x1D7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7534u;
label_1d7534:
    // 0x1d7534: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d7534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d7538: 0xc0768e0  jal         func_1DA380
    ctx->pc = 0x1D7538u;
    SET_GPR_U32(ctx, 31, 0x1D7540u);
    ctx->pc = 0x1D753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7538u;
    // 0x1d753c: 0x24846aa0  addiu       $a0, $a0, 0x6AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA380u, 0x1D7538u, 0x1D7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7540u;
label_1d7540:
    // 0x1d7540: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1d7540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d7544: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1d7544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d7548: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x1d7548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1d754c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d754cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7550: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D7550u;
    SET_GPR_U32(ctx, 31, 0x1D7558u);
    ctx->pc = 0x1D7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7550u;
    // 0x1d7554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D7550u, 0x1D7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7558u;
label_1d7558:
    // 0x1d7558: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1d7558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d755c: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x1d755cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1d7560: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x1d7560u;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    // 0x1d7564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7568: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d756c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7570: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D7570u;
    SET_GPR_U32(ctx, 31, 0x1D7578u);
    ctx->pc = 0x1D7574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7570u;
    // 0x1d7574: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D7570u, 0x1D7578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7578u;
label_1d7578:
    // 0x1d7578: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d7578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d757c: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x1d757cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1d7580: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1d7580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d7584: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x1d7584u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x1d7588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d7588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d758c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1d758cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d7590: 0x27a202d4  addiu       $v0, $sp, 0x2D4
    ctx->pc = 0x1d7590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
    // 0x1d7594: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d7594u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7598: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d759c: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x1d759cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x1d75a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d75a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d75a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d75a8: 0x4619c81a  mula.s      $f25, $f25
    ctx->pc = 0x1d75a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x1d75ac: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x1d75acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x1d75b0: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D75B0u;
    SET_GPR_U32(ctx, 31, 0x1D75B8u);
    ctx->pc = 0x1D75B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75B0u;
    // 0x1d75b4: 0x4618c31c  madd.s      $f12, $f24, $f24 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[24], ctx->f[24]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D75B0u, 0x1D75B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75B8u;
label_1d75b8:
    // 0x1d75b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d75b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d75bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d75bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d75c0: 0x0  nop
    ctx->pc = 0x1d75c0u;
    // NOP
    // 0x1d75c4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1d75c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d75c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D75C8u;
    {
        const bool branch_taken_0x1d75c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d75c8) {
            ctx->pc = 0x1D75E0u;
            goto label_1d75e0;
        }
    }
    ctx->pc = 0x1D75D0u;
    // 0x1d75d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d75d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D75D4u;
    {
        const bool branch_taken_0x1d75d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75D4u;
        // 0x1d75d8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75d4) {
            ctx->pc = 0x1D7638u;
            goto label_1d7638;
        }
    }
    ctx->pc = 0x1D75DCu;
    // 0x1d75dc: 0x0  nop
    ctx->pc = 0x1d75dcu;
    // NOP
label_1d75e0:
    // 0x1d75e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d75e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75e4: 0xc076910  jal         func_1DA440
    ctx->pc = 0x1D75E4u;
    SET_GPR_U32(ctx, 31, 0x1D75ECu);
    ctx->pc = 0x1D75E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75E4u;
    // 0x1d75e8: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA440u, 0x1D75E4u, 0x1D75ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75ECu;
label_1d75ec:
    // 0x1d75ec: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x1d75ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d75f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d75f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d75f4: 0x0  nop
    ctx->pc = 0x1d75f4u;
    // NOP
    // 0x1d75f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d75f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d75fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D75FCu;
    {
        const bool branch_taken_0x1d75fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d75fc) {
            ctx->pc = 0x1D760Cu;
            goto label_1d760c;
        }
    }
    ctx->pc = 0x1D7604u;
    // 0x1d7604: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7604u;
    {
        const bool branch_taken_0x1d7604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7604u;
        // 0x1d7608: 0x4618b802  mul.s       $f0, $f23, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7604) {
            ctx->pc = 0x1D761Cu;
            goto label_1d761c;
        }
    }
    ctx->pc = 0x1D760Cu;
label_1d760c:
    // 0x1d760c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d760cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d7610: 0x0  nop
    ctx->pc = 0x1d7610u;
    // NOP
    // 0x1d7614: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d7614u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d7618: 0x4618b802  mul.s       $f0, $f23, $f24
    ctx->pc = 0x1d7618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
label_1d761c:
    // 0x1d761c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d761cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7620: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d7620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d7624: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d7624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d7628: 0x4619b002  mul.s       $f0, $f22, $f25
    ctx->pc = 0x1d7628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x1d762c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d762cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7630: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d7630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d7634: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x1d7634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_1d7638:
    // 0x1d7638: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d763c: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1d763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1d7640: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7640u;
    SET_GPR_U32(ctx, 31, 0x1D7648u);
    ctx->pc = 0x1D7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7640u;
    // 0x1d7644: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7640u, 0x1D7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7648u;
label_1d7648:
    // 0x1d7648: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1d7648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d764c: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D764Cu;
    SET_GPR_U32(ctx, 31, 0x1D7654u);
    ctx->pc = 0x1D7650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D764Cu;
    // 0x1d7650: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D764Cu, 0x1D7654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7654u;
label_1d7654:
    // 0x1d7654: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x1d7654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d7658: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1d7658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1d765c: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d765cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d7660: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d7664: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x1d7664u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x1d7668: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d7668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d766c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7670: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d7670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d7674: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1d7674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x1d7678: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x1d7678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
    // 0x1d767c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7680: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D7680u;
    SET_GPR_U32(ctx, 31, 0x1D7688u);
    ctx->pc = 0x1D7684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7680u;
    // 0x1d7684: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D7680u, 0x1D7688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7688u;
label_1d7688:
    // 0x1d7688: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d768c: 0x27be0250  addiu       $fp, $sp, 0x250
    ctx->pc = 0x1d768cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d7690: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d7690u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d7694: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1d7694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d7698: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d7698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d769c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d76a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d76a4: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d76a8: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x1d76a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x1d76ac: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x1d76acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x1d76b0: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1d76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1d76b4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d76b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d76b8: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D76B8u;
    SET_GPR_U32(ctx, 31, 0x1D76C0u);
    ctx->pc = 0x1D76BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76B8u;
    // 0x1d76bc: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D76B8u, 0x1D76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76C0u;
label_1d76c0:
    // 0x1d76c0: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x1d76c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1d76c4: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D76C4u;
    SET_GPR_U32(ctx, 31, 0x1D76CCu);
    ctx->pc = 0x1D76C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76C4u;
    // 0x1d76c8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D76C4u, 0x1D76CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76CCu;
label_1d76cc:
    // 0x1d76cc: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x1d76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d76d0: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x1d76d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1d76d4: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d76d4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d76d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d76dc: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1d76dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x1d76e0: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d76e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d76e8: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x1d76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d76ec: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1d76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1d76f0: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x1d76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
    // 0x1d76f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d76f8: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D76F8u;
    SET_GPR_U32(ctx, 31, 0x1D7700u);
    ctx->pc = 0x1D76FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76F8u;
    // 0x1d76fc: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D76F8u, 0x1D7700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7700u;
label_1d7700:
    // 0x1d7700: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7704: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1d7704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1d7708: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d7708u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d770c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d770cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7710: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d7710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d7714: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1d7714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d7718: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d771c: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d771cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d7720: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1d7720u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x1d7724: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1d7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1d7728: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d7728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d772c: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D772Cu;
    SET_GPR_U32(ctx, 31, 0x1D7734u);
    ctx->pc = 0x1D7730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D772Cu;
    // 0x1d7730: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D772Cu, 0x1D7734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7734u;
label_1d7734:
    // 0x1d7734: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1d7734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7738: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d7738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d773c: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D773Cu;
    SET_GPR_U32(ctx, 31, 0x1D7744u);
    ctx->pc = 0x1D7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D773Cu;
    // 0x1d7740: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D773Cu, 0x1D7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7744u;
label_1d7744:
    // 0x1d7744: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1d7744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1d7748: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1d7748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d774c: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D774Cu;
    SET_GPR_U32(ctx, 31, 0x1D7754u);
    ctx->pc = 0x1D7750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D774Cu;
    // 0x1d7750: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D774Cu, 0x1D7754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7754u;
label_1d7754:
    // 0x1d7754: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1d7754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1d7758: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1d7758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d775c: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D775Cu;
    SET_GPR_U32(ctx, 31, 0x1D7764u);
    ctx->pc = 0x1D7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D775Cu;
    // 0x1d7760: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D775Cu, 0x1D7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7764u;
label_1d7764:
    // 0x1d7764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7768: 0x0  nop
    ctx->pc = 0x1d7768u;
    // NOP
    // 0x1d776c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1d776cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7770: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7770u;
    {
        const bool branch_taken_0x1d7770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7770u;
        // 0x1d7774: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7770) {
            ctx->pc = 0x1D7780u;
            goto label_1d7780;
        }
    }
    ctx->pc = 0x1D7778u;
    // 0x1d7778: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7778u;
    {
        const bool branch_taken_0x1d7778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7778u;
        // 0x1d777c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7778) {
            ctx->pc = 0x1D77D8u;
            goto label_1d77d8;
        }
    }
    ctx->pc = 0x1D7780u;
label_1d7780:
    // 0x1d7780: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d7780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7784: 0xc076910  jal         func_1DA440
    ctx->pc = 0x1D7784u;
    SET_GPR_U32(ctx, 31, 0x1D778Cu);
    ctx->pc = 0x1D7788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7784u;
    // 0x1d7788: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA440u, 0x1D7784u, 0x1D778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D778Cu;
label_1d778c:
    // 0x1d778c: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x1d778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7790: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7794: 0x0  nop
    ctx->pc = 0x1d7794u;
    // NOP
    // 0x1d7798: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7798u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d779c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D779Cu;
    {
        const bool branch_taken_0x1d779c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d779c) {
            ctx->pc = 0x1D77ACu;
            goto label_1d77ac;
        }
    }
    ctx->pc = 0x1D77A4u;
    // 0x1d77a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D77A4u;
    {
        const bool branch_taken_0x1d77a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77A4u;
        // 0x1d77a8: 0x4618b802  mul.s       $f0, $f23, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77a4) {
            ctx->pc = 0x1D77BCu;
            goto label_1d77bc;
        }
    }
    ctx->pc = 0x1D77ACu;
label_1d77ac:
    // 0x1d77ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d77acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d77b0: 0x0  nop
    ctx->pc = 0x1d77b0u;
    // NOP
    // 0x1d77b4: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d77b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d77b8: 0x4618b802  mul.s       $f0, $f23, $f24
    ctx->pc = 0x1d77b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
label_1d77bc:
    // 0x1d77bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d77bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d77c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d77c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d77c4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d77c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d77c8: 0x4619b002  mul.s       $f0, $f22, $f25
    ctx->pc = 0x1d77c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x1d77cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d77ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d77d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d77d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d77d4: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x1d77d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_1d77d8:
    // 0x1d77d8: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x1d77d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x1d77dc: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1d77dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1d77e0: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D77E0u;
    SET_GPR_U32(ctx, 31, 0x1D77E8u);
    ctx->pc = 0x1D77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77E0u;
    // 0x1d77e4: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D77E0u, 0x1D77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77E8u;
label_1d77e8:
    // 0x1d77e8: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x1d77e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x1d77ec: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D77ECu;
    SET_GPR_U32(ctx, 31, 0x1D77F4u);
    ctx->pc = 0x1D77F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77ECu;
    // 0x1d77f0: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D77ECu, 0x1D77F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77F4u;
label_1d77f4:
    // 0x1d77f4: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1d77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1d77f8: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x1d77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x1d77fc: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d77fcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d7800: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d7800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d7804: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x1d7804u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x1d7808: 0x27a202d4  addiu       $v0, $sp, 0x2D4
    ctx->pc = 0x1d7808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
    // 0x1d780c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7810: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d7810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d7814: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x1d7814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    // 0x1d7818: 0x27a202d8  addiu       $v0, $sp, 0x2D8
    ctx->pc = 0x1d7818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
    // 0x1d781c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7820: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D7820u;
    SET_GPR_U32(ctx, 31, 0x1D7828u);
    ctx->pc = 0x1D7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7820u;
    // 0x1d7824: 0xae820088  sw          $v0, 0x88($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D7820u, 0x1D7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7828u;
label_1d7828:
    // 0x1d7828: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d782c: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x1d782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x1d7830: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d7830u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d7834: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d7834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7838: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d7838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d783c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d783cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7840: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d7840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d7844: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x1d7844u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    // 0x1d7848: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1d7848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1d784c: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x1d784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1d7850: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d7850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d7854: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7854u;
    SET_GPR_U32(ctx, 31, 0x1D785Cu);
    ctx->pc = 0x1D7858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7854u;
    // 0x1d7858: 0xae820088  sw          $v0, 0x88($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7854u, 0x1D785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D785Cu;
label_1d785c:
    // 0x1d785c: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x1d785cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1d7860: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D7860u;
    SET_GPR_U32(ctx, 31, 0x1D7868u);
    ctx->pc = 0x1D7864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7860u;
    // 0x1d7864: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D7860u, 0x1D7868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7868u;
label_1d7868:
    // 0x1d7868: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1d7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1d786c: 0x268400b0  addiu       $a0, $s4, 0xB0
    ctx->pc = 0x1d786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1d7870: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d7870u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d7874: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d7874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d7878: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x1d7878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x1d787c: 0x27a202d4  addiu       $v0, $sp, 0x2D4
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
    // 0x1d7880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7884: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x1d7884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d7888: 0xae8200b4  sw          $v0, 0xB4($s4)
    ctx->pc = 0x1d7888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
    // 0x1d788c: 0x27a202d8  addiu       $v0, $sp, 0x2D8
    ctx->pc = 0x1d788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
    // 0x1d7890: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7894: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D7894u;
    SET_GPR_U32(ctx, 31, 0x1D789Cu);
    ctx->pc = 0x1D7898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7894u;
    // 0x1d7898: 0xae8200b8  sw          $v0, 0xB8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D7894u, 0x1D789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D789Cu;
label_1d789c:
    // 0x1d789c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d789cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d78a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d78a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d78a4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d78a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d78a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d78ac: 0x32630007  andi        $v1, $s3, 0x7
    ctx->pc = 0x1d78acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d78b0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d78b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d78b4: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1d78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1d78b8: 0xae8300bc  sw          $v1, 0xBC($s4)
    ctx->pc = 0x1d78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 3));
    // 0x1d78bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d78bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d78c0: 0x8e8300b8  lw          $v1, 0xB8($s4)
    ctx->pc = 0x1d78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x1d78c4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d78c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d78c8: 0xae8300b8  sw          $v1, 0xB8($s4)
    ctx->pc = 0x1d78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 184), GPR_U32(ctx, 3));
    // 0x1d78cc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D78CCu;
    {
        const bool branch_taken_0x1d78cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78CCu;
        // 0x1d78d0: 0x269400c0  addiu       $s4, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78cc) {
            ctx->pc = 0x1D7940u;
            goto label_1d7940;
        }
    }
    ctx->pc = 0x1D78D4u;
    // 0x1d78d4: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1d78d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d78d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d78d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78dc: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1d78dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1d78e0: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1d78e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1d78e4: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x1d78e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
    // 0x1d78e8: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d78e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d78ec: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x1d78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d78f0: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D78F0u;
    SET_GPR_U32(ctx, 31, 0x1D78F8u);
    ctx->pc = 0x1D78F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78F0u;
    // 0x1d78f4: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D78F0u, 0x1D78F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78F8u;
label_1d78f8:
    // 0x1d78f8: 0x7a82ffb0  lq          $v0, -0x50($s4)
    ctx->pc = 0x1d78f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 4294967216)));
    // 0x1d78fc: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1d78fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1d7900: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1d7900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d7904: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d7904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7908: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x1d7908u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    // 0x1d790c: 0x7a82ffc0  lq          $v0, -0x40($s4)
    ctx->pc = 0x1d790cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 4294967232)));
    // 0x1d7910: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7910u;
    SET_GPR_U32(ctx, 31, 0x1D7918u);
    ctx->pc = 0x1D7914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7910u;
    // 0x1d7914: 0x7e820020  sq          $v0, 0x20($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7910u, 0x1D7918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7918u;
label_1d7918:
    // 0x1d7918: 0x7a83ffe0  lq          $v1, -0x20($s4)
    ctx->pc = 0x1d7918u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 4294967264)));
    // 0x1d791c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1d791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d7920: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d7920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7924: 0x7e830040  sq          $v1, 0x40($s4)
    ctx->pc = 0x1d7924u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 3));
    // 0x1d7928: 0x7a83fff0  lq          $v1, -0x10($s4)
    ctx->pc = 0x1d7928u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 4294967280)));
    // 0x1d792c: 0x7e830050  sq          $v1, 0x50($s4)
    ctx->pc = 0x1d792cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 3));
    // 0x1d7930: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x1d7930u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x1d7934: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1d7934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x1d7938: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1d7938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x1d793c: 0x0  nop
    ctx->pc = 0x1d793cu;
    // NOP
label_1d7940:
    // 0x1d7940: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1d7940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1d7944: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d7944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7948: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D7948u;
    SET_GPR_U32(ctx, 31, 0x1D7950u);
    ctx->pc = 0x1D794Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7948u;
    // 0x1d794c: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D7948u, 0x1D7950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7950u;
label_1d7950:
    // 0x1d7950: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1d7950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d7954: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d7954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7958: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D7958u;
    SET_GPR_U32(ctx, 31, 0x1D7960u);
    ctx->pc = 0x1D795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7958u;
    // 0x1d795c: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D7958u, 0x1D7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7960u;
label_1d7960:
    // 0x1d7960: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1d7960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1d7964: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1d7964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d7968: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D7968u;
    SET_GPR_U32(ctx, 31, 0x1D7970u);
    ctx->pc = 0x1D796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7968u;
    // 0x1d796c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D7968u, 0x1D7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7970u;
label_1d7970:
    // 0x1d7970: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1d7970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1d7974: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1d7974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d7978: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D7978u;
    SET_GPR_U32(ctx, 31, 0x1D7980u);
    ctx->pc = 0x1D797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7978u;
    // 0x1d797c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D7978u, 0x1D7980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7980u;
label_1d7980:
    // 0x1d7980: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d7984: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d7984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d7988: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1d7988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d798c: 0x102000bc  beqz        $at, . + 4 + (0xBC << 2)
    ctx->pc = 0x1D798Cu;
    {
        const bool branch_taken_0x1d798c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d798c) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D7994u;
    // 0x1d7994: 0x0  nop
    ctx->pc = 0x1d7994u;
    // NOP
label_1d7998:
    // 0x1d7998: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7998u;
    {
        const bool branch_taken_0x1d7998 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7998u;
        // 0x1d799c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7998) {
            ctx->pc = 0x1D79B8u;
            goto label_1d79b8;
        }
    }
    ctx->pc = 0x1D79A0u;
    // 0x1d79a0: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x1d79a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d79a4: 0x86e30006  lh          $v1, 0x6($s7)
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x1d79a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d79ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d79b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d79b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d79b4: 0x0  nop
    ctx->pc = 0x1d79b4u;
    // NOP
label_1d79b8:
    // 0x1d79b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d79bc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1d79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d79c0: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x1d79c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1d79c4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d79c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d79c8: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x1d79c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1d79cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d79ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79d0: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D79D0u;
    SET_GPR_U32(ctx, 31, 0x1D79D8u);
    ctx->pc = 0x1D79D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79D0u;
    // 0x1d79d4: 0x7fa202e0  sq          $v0, 0x2E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D79D0u, 0x1D79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79D8u;
label_1d79d8:
    // 0x1d79d8: 0x27a202d4  addiu       $v0, $sp, 0x2D4
    ctx->pc = 0x1d79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
    // 0x1d79dc: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x1d79dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1d79e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d79e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d79e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d79e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d79e8: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1d79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1d79ec: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d79ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d79f0: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x1d79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1d79f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d79f8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1d79f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d79fc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d79fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d7a00: 0x4600c024  .word       0x4600C024                   # cvt.w.s     $f0, $f24 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d7a00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[24]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d7a04: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d7a08: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1d7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d7a0c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d7a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d7a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d7a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7a14: 0x0  nop
    ctx->pc = 0x1d7a14u;
    // NOP
    // 0x1d7a18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1d7a18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d7a1c: 0x46800e60  cvt.s.w     $f25, $f1
    ctx->pc = 0x1d7a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x1d7a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7a24: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d7a24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d7a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7a2c: 0x4619c81a  mula.s      $f25, $f25
    ctx->pc = 0x1d7a2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x1d7a30: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x1d7a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x1d7a34: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D7A34u;
    SET_GPR_U32(ctx, 31, 0x1D7A3Cu);
    ctx->pc = 0x1D7A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A34u;
    // 0x1d7a38: 0x4618c31c  madd.s      $f12, $f24, $f24 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[24], ctx->f[24]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D7A34u, 0x1D7A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A3Cu;
label_1d7a3c:
    // 0x1d7a3c: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x1d7a3cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x1d7a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7a44: 0x0  nop
    ctx->pc = 0x1d7a44u;
    // NOP
    // 0x1d7a48: 0x461a0032  c.eq.s      $f0, $f26
    ctx->pc = 0x1d7a48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7a4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7A4Cu;
    {
        const bool branch_taken_0x1d7a4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7a4c) {
            ctx->pc = 0x1D7A60u;
            goto label_1d7a60;
        }
    }
    ctx->pc = 0x1D7A54u;
    // 0x1d7a54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d7a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D7A58u;
    {
        const bool branch_taken_0x1d7a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A58u;
        // 0x1d7a5c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a58) {
            ctx->pc = 0x1D7AC0u;
            goto label_1d7ac0;
        }
    }
    ctx->pc = 0x1D7A60u;
label_1d7a60:
    // 0x1d7a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a64: 0xc076910  jal         func_1DA440
    ctx->pc = 0x1D7A64u;
    SET_GPR_U32(ctx, 31, 0x1D7A6Cu);
    ctx->pc = 0x1D7A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A64u;
    // 0x1d7a68: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA440u, 0x1D7A64u, 0x1D7A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A6Cu;
label_1d7a6c:
    // 0x1d7a6c: 0x27a202c8  addiu       $v0, $sp, 0x2C8
    ctx->pc = 0x1d7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
    // 0x1d7a70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d7a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7a74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7a78: 0x0  nop
    ctx->pc = 0x1d7a78u;
    // NOP
    // 0x1d7a7c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7a7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7a80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7A80u;
    {
        const bool branch_taken_0x1d7a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7a80) {
            ctx->pc = 0x1D7A90u;
            goto label_1d7a90;
        }
    }
    ctx->pc = 0x1D7A88u;
    // 0x1d7a88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7A88u;
    {
        const bool branch_taken_0x1d7a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A88u;
        // 0x1d7a8c: 0x4618b802  mul.s       $f0, $f23, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a88) {
            ctx->pc = 0x1D7AA0u;
            goto label_1d7aa0;
        }
    }
    ctx->pc = 0x1D7A90u;
label_1d7a90:
    // 0x1d7a90: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x1d7a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x1d7a94: 0x0  nop
    ctx->pc = 0x1d7a94u;
    // NOP
    // 0x1d7a98: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d7a98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1d7a9c: 0x4618b802  mul.s       $f0, $f23, $f24
    ctx->pc = 0x1d7a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
label_1d7aa0:
    // 0x1d7aa0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d7aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7aa4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d7aa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d7aa8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d7aa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d7aac: 0x4619b002  mul.s       $f0, $f22, $f25
    ctx->pc = 0x1d7aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x1d7ab0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d7ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d7ab4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d7ab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d7ab8: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x1d7ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x1d7abc: 0x0  nop
    ctx->pc = 0x1d7abcu;
    // NOP
label_1d7ac0:
    // 0x1d7ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ac4: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1d7ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1d7ac8: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7AC8u;
    SET_GPR_U32(ctx, 31, 0x1D7AD0u);
    ctx->pc = 0x1D7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AC8u;
    // 0x1d7acc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7AC8u, 0x1D7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AD0u;
label_1d7ad0:
    // 0x1d7ad0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1d7ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d7ad4: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D7AD4u;
    SET_GPR_U32(ctx, 31, 0x1D7ADCu);
    ctx->pc = 0x1D7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AD4u;
    // 0x1d7ad8: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D7AD4u, 0x1D7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7ADCu;
label_1d7adc:
    // 0x1d7adc: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1d7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1d7ae0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1d7ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1d7ae4: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d7ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d7ae8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d7aec: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x1d7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x1d7af0: 0x27a202d4  addiu       $v0, $sp, 0x2D4
    ctx->pc = 0x1d7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
    // 0x1d7af4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7af8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d7afc: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1d7afcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x1d7b00: 0x27a202d8  addiu       $v0, $sp, 0x2D8
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
    // 0x1d7b04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7b08: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D7B08u;
    SET_GPR_U32(ctx, 31, 0x1D7B10u);
    ctx->pc = 0x1D7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B08u;
    // 0x1d7b0c: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D7B08u, 0x1D7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B10u;
label_1d7b10:
    // 0x1d7b10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7b14: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1d7b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d7b18: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d7b18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d7b1c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d7b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b20: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d7b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d7b24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7b28: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d7b2c: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x1d7b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x1d7b30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7b30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7b34: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1d7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1d7b38: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d7b38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d7b3c: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B44u);
    ctx->pc = 0x1D7B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B3Cu;
    // 0x1d7b40: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7B3Cu, 0x1D7B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B44u;
label_1d7b44:
    // 0x1d7b44: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x1d7b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1d7b48: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D7B48u;
    SET_GPR_U32(ctx, 31, 0x1D7B50u);
    ctx->pc = 0x1D7B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B48u;
    // 0x1d7b4c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D7B48u, 0x1D7B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B50u;
label_1d7b50:
    // 0x1d7b50: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1d7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1d7b54: 0x26840050  addiu       $a0, $s4, 0x50
    ctx->pc = 0x1d7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1d7b58: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1d7b58u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d7b5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d7b60: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1d7b60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x1d7b64: 0x27a202d4  addiu       $v0, $sp, 0x2D4
    ctx->pc = 0x1d7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
    // 0x1d7b68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7b6c: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d7b70: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1d7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1d7b74: 0x27a202d8  addiu       $v0, $sp, 0x2D8
    ctx->pc = 0x1d7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
    // 0x1d7b78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7b7c: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D7B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B84u);
    ctx->pc = 0x1D7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B7Cu;
    // 0x1d7b80: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D7B7Cu, 0x1D7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B84u;
label_1d7b84:
    // 0x1d7b84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7b88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d7b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d7b8c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d7b8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d7b90: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d7b94: 0x32630007  andi        $v1, $s3, 0x7
    ctx->pc = 0x1d7b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d7b98: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d7b98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7b9c: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1d7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1d7ba0: 0xae83005c  sw          $v1, 0x5C($s4)
    ctx->pc = 0x1d7ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
    // 0x1d7ba4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d7ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7ba8: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x1d7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1d7bac: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d7bacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d7bb0: 0xae830058  sw          $v1, 0x58($s4)
    ctx->pc = 0x1d7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
    // 0x1d7bb4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D7BB4u;
    {
        const bool branch_taken_0x1d7bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BB4u;
        // 0x1d7bb8: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7bb4) {
            ctx->pc = 0x1D7C28u;
            goto label_1d7c28;
        }
    }
    ctx->pc = 0x1D7BBCu;
    // 0x1d7bbc: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1d7bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d7bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bc4: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1d7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1d7bc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7bc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7bcc: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x1d7bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
    // 0x1d7bd0: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d7bd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d7bd4: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x1d7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d7bd8: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7BD8u;
    SET_GPR_U32(ctx, 31, 0x1D7BE0u);
    ctx->pc = 0x1D7BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BD8u;
    // 0x1d7bdc: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7BD8u, 0x1D7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BE0u;
label_1d7be0:
    // 0x1d7be0: 0x7a82ffb0  lq          $v0, -0x50($s4)
    ctx->pc = 0x1d7be0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 4294967216)));
    // 0x1d7be4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7be4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7be8: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1d7be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d7bec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d7becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bf0: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x1d7bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    // 0x1d7bf4: 0x7a82ffc0  lq          $v0, -0x40($s4)
    ctx->pc = 0x1d7bf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 4294967232)));
    // 0x1d7bf8: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7BF8u;
    SET_GPR_U32(ctx, 31, 0x1D7C00u);
    ctx->pc = 0x1D7BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BF8u;
    // 0x1d7bfc: 0x7e820020  sq          $v0, 0x20($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7BF8u, 0x1D7C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C00u;
label_1d7c00:
    // 0x1d7c00: 0x7a83ffe0  lq          $v1, -0x20($s4)
    ctx->pc = 0x1d7c00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 4294967264)));
    // 0x1d7c04: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1d7c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d7c08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d7c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c0c: 0x7e830040  sq          $v1, 0x40($s4)
    ctx->pc = 0x1d7c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 3));
    // 0x1d7c10: 0x7a83fff0  lq          $v1, -0x10($s4)
    ctx->pc = 0x1d7c10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 4294967280)));
    // 0x1d7c14: 0x7e830050  sq          $v1, 0x50($s4)
    ctx->pc = 0x1d7c14u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 3));
    // 0x1d7c18: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x1d7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x1d7c1c: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1d7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x1d7c20: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1d7c20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x1d7c24: 0x0  nop
    ctx->pc = 0x1d7c24u;
    // NOP
label_1d7c28:
    // 0x1d7c28: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1d7c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1d7c2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d7c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c30: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D7C30u;
    SET_GPR_U32(ctx, 31, 0x1D7C38u);
    ctx->pc = 0x1D7C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C30u;
    // 0x1d7c34: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D7C30u, 0x1D7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C38u;
label_1d7c38:
    // 0x1d7c38: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1d7c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d7c3c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d7c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c40: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D7C40u;
    SET_GPR_U32(ctx, 31, 0x1D7C48u);
    ctx->pc = 0x1D7C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C40u;
    // 0x1d7c44: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D7C40u, 0x1D7C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C48u;
label_1d7c48:
    // 0x1d7c48: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1d7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1d7c4c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1d7c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d7c50: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D7C50u;
    SET_GPR_U32(ctx, 31, 0x1D7C58u);
    ctx->pc = 0x1D7C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C50u;
    // 0x1d7c54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D7C50u, 0x1D7C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C58u;
label_1d7c58:
    // 0x1d7c58: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1d7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1d7c5c: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1d7c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d7c60: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D7C60u;
    SET_GPR_U32(ctx, 31, 0x1D7C68u);
    ctx->pc = 0x1D7C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C60u;
    // 0x1d7c64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D7C60u, 0x1D7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C68u;
label_1d7c68:
    // 0x1d7c68: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d7c6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d7c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d7c70: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d7c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7c74: 0x1440ff48  bnez        $v0, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x1D7C74u;
    {
        const bool branch_taken_0x1d7c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c74) {
            ctx->pc = 0x1D7998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7998;
        }
    }
    ctx->pc = 0x1D7C7Cu;
    // 0x1d7c7c: 0x0  nop
    ctx->pc = 0x1d7c7cu;
    // NOP
label_1d7c80:
    // 0x1d7c80: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1d7c84: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x1d7c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d7c88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7C88u;
    {
        const bool branch_taken_0x1d7c88 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C88u;
        // 0x1d7c8c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c88) {
            ctx->pc = 0x1D7C98u;
            goto label_1d7c98;
        }
    }
    ctx->pc = 0x1D7C90u;
    // 0x1d7c90: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d7c94: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d7c94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d7c98:
    // 0x1d7c98: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1d7c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d7c9c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1d7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1d7ca0: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1d7ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1d7ca4: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x1d7ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1d7ca8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d7ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d7cac: 0x0  nop
    ctx->pc = 0x1d7cacu;
    // NOP
    // 0x1d7cb0: 0x0  nop
    ctx->pc = 0x1d7cb0u;
    // NOP
    // 0x1d7cb4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d7cb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d7cb8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7cbc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d7cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d7cc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7CC0u;
    {
        const bool branch_taken_0x1d7cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7cc0) {
            ctx->pc = 0x1D7CF8u;
            goto label_1d7cf8;
        }
    }
    ctx->pc = 0x1D7CC8u;
    // 0x1d7cc8: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x1d7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x1d7ccc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d7cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d7cd0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d7cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d7cd4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d7cd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d7cd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d7cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7cdc: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x1d7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d7ce0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1d7ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d7ce4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1d7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1d7ce8: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1d7ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x1d7cec: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1d7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1d7cf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7CF0u;
    {
        const bool branch_taken_0x1d7cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CF0u;
        // 0x1d7cf4: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cf0) {
            ctx->pc = 0x1D7D00u;
            goto label_1d7d00;
        }
    }
    ctx->pc = 0x1D7CF8u;
label_1d7cf8:
    // 0x1d7cf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7CF8u;
    {
        const bool branch_taken_0x1d7cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CF8u;
        // 0x1d7cfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cf8) {
            ctx->pc = 0x1D7D08u;
            goto label_1d7d08;
        }
    }
    ctx->pc = 0x1D7D00u;
label_1d7d00:
    // 0x1d7d00: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d7d04: 0x0  nop
    ctx->pc = 0x1d7d04u;
    // NOP
label_1d7d08:
    // 0x1d7d08: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d7d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d7d0c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d7d0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d7d10: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1d7d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1d7d14: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d7d14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d7d18: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1d7d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d7d1c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d7d1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d7d20: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d7d24: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d7d24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d7d28: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d7d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d7d2c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d7d2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d7d30: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d7d34: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d7d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d7d38: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d7d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d7d3c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d7d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7d40: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d7d44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d7d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7d48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d7d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d7d4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d7d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7d50: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D50u;
        // 0x1d7d54: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7D58u;
}

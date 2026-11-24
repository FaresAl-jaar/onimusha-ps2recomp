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

// Function: sub_0013D390
// Address: 0x13d390 - 0x13de84
void sub_0013D390_0x13d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D390_0x13d390");
#endif

    switch (ctx->pc) {
        case 0x13d40cu: goto label_13d40c;
        case 0x13d448u: goto label_13d448;
        case 0x13d468u: goto label_13d468;
        case 0x13d5acu: goto label_13d5ac;
        case 0x13d614u: goto label_13d614;
        case 0x13d77cu: goto label_13d77c;
        case 0x13d7c4u: goto label_13d7c4;
        case 0x13d7f0u: goto label_13d7f0;
        case 0x13d874u: goto label_13d874;
        case 0x13d880u: goto label_13d880;
        case 0x13d8f4u: goto label_13d8f4;
        case 0x13d920u: goto label_13d920;
        case 0x13d940u: goto label_13d940;
        case 0x13d9b0u: goto label_13d9b0;
        case 0x13da28u: goto label_13da28;
        case 0x13da80u: goto label_13da80;
        case 0x13dac4u: goto label_13dac4;
        case 0x13db1cu: goto label_13db1c;
        case 0x13db54u: goto label_13db54;
        case 0x13db88u: goto label_13db88;
        case 0x13dbf0u: goto label_13dbf0;
        case 0x13dc54u: goto label_13dc54;
        case 0x13dc98u: goto label_13dc98;
        case 0x13dcc0u: goto label_13dcc0;
        case 0x13dd78u: goto label_13dd78;
        default: break;
    }

    ctx->pc = 0x13d390u;

    // 0x13d390: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x13d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x13d394: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x13d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x13d398: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x13d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x13d39c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x13d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x13d3a0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x13d3a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3a4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x13d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x13d3a8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x13d3a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3ac: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x13d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x13d3b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x13d3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x13d3b4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x13d3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x13d3b8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x13d3b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x13d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x13d3c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13d3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13d3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13d3c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13d3cc: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x13d3ccu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13d3d0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x13d3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3d4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x13d3d4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13d3d8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x13d3d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13d3dc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x13d3dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x13d3e0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x13d3e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13d3e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13d3e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13d3e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13d3e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13d3ec: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x13d3ecu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x13d3f0: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x13d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x13d3f4: 0xafa900cc  sw          $t1, 0xCC($sp)
    ctx->pc = 0x13d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 9));
    // 0x13d3f8: 0x461ad642  mul.s       $f25, $f26, $f26
    ctx->pc = 0x13d3f8u;
    ctx->f[25] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x13d3fc: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x13d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x13d400: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x13d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x13d404: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x13D404u;
    SET_GPR_U32(ctx, 31, 0x13D40Cu);
    ctx->pc = 0x13D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D404u;
    // 0x13d408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x13D404u, 0x13D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D40Cu;
label_13d40c:
    // 0x13d40c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13d410: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x13d410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13d414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13d414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d418: 0x0  nop
    ctx->pc = 0x13d418u;
    // NOP
    // 0x13d41c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x13d41cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x13d420: 0x461a0e1c  madd.s      $f24, $f1, $f26
    ctx->pc = 0x13d420u;
    ctx->f[24] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[26]));
    // 0x13d424: 0x7a850000  lq          $a1, 0x0($s4)
    ctx->pc = 0x13d424u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13d428: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d42c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d430: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x13d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x13d434: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x13d434u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d438: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x13d438u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x13d43c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13d43cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13d440: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x13d440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13d444: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13d444u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_13d448:
    // 0x13d448: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x13d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13d44c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x13d44cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d450: 0x3010ffff  andi        $s0, $zero, 0xFFFF
    ctx->pc = 0x13d450u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x13d454: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x13d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x13d458: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x13d458u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x13d45c: 0x8c530acc  lw          $s3, 0xACC($v0)
    ctx->pc = 0x13d45cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2764)));
    // 0x13d460: 0x1000025b  b           . + 4 + (0x25B << 2)
    ctx->pc = 0x13D460u;
    {
        const bool branch_taken_0x13d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D460u;
        // 0x13d464: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d460) {
            ctx->pc = 0x13DDD0u;
            goto label_13ddd0;
        }
    }
    ctx->pc = 0x13D468u;
label_13d468:
    // 0x13d468: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x13d468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13d46c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13d470: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13d470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13d474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D474u;
    {
        const bool branch_taken_0x13d474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D474u;
        // 0x13d478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d474) {
            ctx->pc = 0x13D488u;
            goto label_13d488;
        }
    }
    ctx->pc = 0x13D47Cu;
    // 0x13d47c: 0x10000250  b           . + 4 + (0x250 << 2)
    ctx->pc = 0x13D47Cu;
    {
        const bool branch_taken_0x13d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D47Cu;
        // 0x13d480: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d47c) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D484u;
    // 0x13d484: 0x0  nop
    ctx->pc = 0x13d484u;
    // NOP
label_13d488:
    // 0x13d488: 0xdf838538  ld          $v1, -0x7AC8($gp)
    ctx->pc = 0x13d488u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13d48c: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x13d48cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13d490: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13d490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13d494: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D494u;
    {
        const bool branch_taken_0x13d494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D494u;
        // 0x13d498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d494) {
            ctx->pc = 0x13D4A8u;
            goto label_13d4a8;
        }
    }
    ctx->pc = 0x13D49Cu;
    // 0x13d49c: 0x10000248  b           . + 4 + (0x248 << 2)
    ctx->pc = 0x13D49Cu;
    {
        const bool branch_taken_0x13d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D49Cu;
        // 0x13d4a0: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d49c) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D4A4u;
    // 0x13d4a4: 0x0  nop
    ctx->pc = 0x13d4a4u;
    // NOP
label_13d4a8:
    // 0x13d4a8: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x13d4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x13d4ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D4ACu;
    {
        const bool branch_taken_0x13d4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4ACu;
        // 0x13d4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4ac) {
            ctx->pc = 0x13D4C0u;
            goto label_13d4c0;
        }
    }
    ctx->pc = 0x13D4B4u;
    // 0x13d4b4: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x13D4B4u;
    {
        const bool branch_taken_0x13d4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4B4u;
        // 0x13d4b8: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4b4) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D4BCu;
    // 0x13d4bc: 0x0  nop
    ctx->pc = 0x13d4bcu;
    // NOP
label_13d4c0:
    // 0x13d4c0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D4C0u;
    {
        const bool branch_taken_0x13d4c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4c0) {
            ctx->pc = 0x13D4E0u;
            goto label_13d4e0;
        }
    }
    ctx->pc = 0x13D4C8u;
    // 0x13d4c8: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x13d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x13d4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d4d0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13D4D0u;
    {
        const bool branch_taken_0x13d4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d4d0) {
            ctx->pc = 0x13D500u;
            goto label_13d500;
        }
    }
    ctx->pc = 0x13D4D8u;
    // 0x13d4d8: 0x10000239  b           . + 4 + (0x239 << 2)
    ctx->pc = 0x13D4D8u;
    {
        const bool branch_taken_0x13d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4d8) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D4E0u;
label_13d4e0:
    // 0x13d4e0: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x13d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x13d4e4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x13d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x13d4e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13d4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13d4ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D4ECu;
    {
        const bool branch_taken_0x13d4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4ECu;
        // 0x13d4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4ec) {
            ctx->pc = 0x13D500u;
            goto label_13d500;
        }
    }
    ctx->pc = 0x13D4F4u;
    // 0x13d4f4: 0x10000232  b           . + 4 + (0x232 << 2)
    ctx->pc = 0x13D4F4u;
    {
        const bool branch_taken_0x13d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4F4u;
        // 0x13d4f8: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4f4) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D4FCu;
    // 0x13d4fc: 0x0  nop
    ctx->pc = 0x13d4fcu;
    // NOP
label_13d500:
    // 0x13d500: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x13d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d504: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x13d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d508: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13d508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d50c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x13D50Cu;
    {
        const bool branch_taken_0x13d50c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d50c) {
            ctx->pc = 0x13D540u;
            goto label_13d540;
        }
    }
    ctx->pc = 0x13D514u;
    // 0x13d514: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x13d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d518: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13d518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d51c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x13D51Cu;
    {
        const bool branch_taken_0x13d51c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d51c) {
            ctx->pc = 0x13D540u;
            goto label_13d540;
        }
    }
    ctx->pc = 0x13D524u;
    // 0x13d524: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x13d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d528: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13d528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d52c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x13D52Cu;
    {
        const bool branch_taken_0x13d52c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D52Cu;
        // 0x13d530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d52c) {
            ctx->pc = 0x13D540u;
            goto label_13d540;
        }
    }
    ctx->pc = 0x13D534u;
    // 0x13d534: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x13D534u;
    {
        const bool branch_taken_0x13d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D534u;
        // 0x13d538: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d534) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D53Cu;
    // 0x13d53c: 0x0  nop
    ctx->pc = 0x13d53cu;
    // NOP
label_13d540:
    // 0x13d540: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x13d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d544: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x13d544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d548: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d54c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x13D54Cu;
    {
        const bool branch_taken_0x13d54c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d54c) {
            ctx->pc = 0x13D580u;
            goto label_13d580;
        }
    }
    ctx->pc = 0x13D554u;
    // 0x13d554: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x13d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d558: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d55c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13D55Cu;
    {
        const bool branch_taken_0x13d55c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d55c) {
            ctx->pc = 0x13D580u;
            goto label_13d580;
        }
    }
    ctx->pc = 0x13D564u;
    // 0x13d564: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x13d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d568: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d56c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13D56Cu;
    {
        const bool branch_taken_0x13d56c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D56Cu;
        // 0x13d570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d56c) {
            ctx->pc = 0x13D580u;
            goto label_13d580;
        }
    }
    ctx->pc = 0x13D574u;
    // 0x13d574: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x13D574u;
    {
        const bool branch_taken_0x13d574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D574u;
        // 0x13d578: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d574) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D57Cu;
    // 0x13d57c: 0x0  nop
    ctx->pc = 0x13d57cu;
    // NOP
label_13d580:
    // 0x13d580: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x13d580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13d584: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x13d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13d588: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13d588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13d58c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13d58cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d590: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13d590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d594: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13d594u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d598: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13d598u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13d59c: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13d59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13d5a0: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x13d5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13d5a4: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13D5A4u;
    SET_GPR_U32(ctx, 31, 0x13D5ACu);
    ctx->pc = 0x13D5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5A4u;
    // 0x13d5a8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13D5A4u, 0x13D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5ACu;
label_13d5ac:
    // 0x13d5ac: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x13d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d5b0: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x13d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d5b4: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x13d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d5b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13d5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13d5bc: 0x460015c0  add.s       $f23, $f2, $f0
    ctx->pc = 0x13d5bcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13d5c0: 0x4600bd05  abs.s       $f20, $f23
    ctx->pc = 0x13d5c0u;
    ctx->f[20] = FPU_ABS_S(ctx->f[23]);
    // 0x13d5c4: 0x461aa034  c.lt.s      $f20, $f26
    ctx->pc = 0x13d5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d5c8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x13D5C8u;
    {
        const bool branch_taken_0x13d5c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d5c8) {
            ctx->pc = 0x13D630u;
            goto label_13d630;
        }
    }
    ctx->pc = 0x13D5D0u;
    // 0x13d5d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d5d4: 0x0  nop
    ctx->pc = 0x13d5d4u;
    // NOP
    // 0x13d5d8: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x13d5d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d5dc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13D5DCu;
    {
        const bool branch_taken_0x13d5dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d5dc) {
            ctx->pc = 0x13D5F8u;
            goto label_13d5f8;
        }
    }
    ctx->pc = 0x13D5E4u;
    // 0x13d5e4: 0x4618a036  c.le.s      $f20, $f24
    ctx->pc = 0x13d5e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d5e8: 0x450101f5  bc1t        . + 4 + (0x1F5 << 2)
    ctx->pc = 0x13D5E8u;
    {
        const bool branch_taken_0x13d5e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5E8u;
        // 0x13d5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5e8) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D5F0u;
    // 0x13d5f0: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x13D5F0u;
    {
        const bool branch_taken_0x13d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5F0u;
        // 0x13d5f4: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5f0) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D5F8u;
label_13d5f8:
    // 0x13d5f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d5fc: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13d5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13d600: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x13d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13d604: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x13d604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13d608: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x13d608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13d60c: 0xc04e6e8  jal         func_139BA0
    ctx->pc = 0x13D60Cu;
    SET_GPR_U32(ctx, 31, 0x13D614u);
    ctx->pc = 0x13D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D60Cu;
    // 0x13d610: 0x27a80140  addiu       $t0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BA0u, 0x13D60Cu, 0x13D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D614u;
label_13d614:
    // 0x13d614: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d618: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x13D618u;
    {
        const bool branch_taken_0x13d618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d618) {
            ctx->pc = 0x13D7E0u;
            goto label_13d7e0;
        }
    }
    ctx->pc = 0x13D620u;
    // 0x13d620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d624: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x13D624u;
    {
        const bool branch_taken_0x13d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D624u;
        // 0x13d628: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d624) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D62Cu;
    // 0x13d62c: 0x0  nop
    ctx->pc = 0x13d62cu;
    // NOP
label_13d630:
    // 0x13d630: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13d634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d638: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x13d638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d63c: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13d63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13d640: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x13d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d644: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13d644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13d648: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x13d648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d64c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x13D64Cu;
    {
        const bool branch_taken_0x13d64c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d64c) {
            ctx->pc = 0x13D678u;
            goto label_13d678;
        }
    }
    ctx->pc = 0x13D654u;
    // 0x13d654: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x13d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d658: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13d658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d65c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13D65Cu;
    {
        const bool branch_taken_0x13d65c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d65c) {
            ctx->pc = 0x13D678u;
            goto label_13d678;
        }
    }
    ctx->pc = 0x13D664u;
    // 0x13d664: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x13d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d668: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13d668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d66c: 0x450001d4  bc1f        . + 4 + (0x1D4 << 2)
    ctx->pc = 0x13D66Cu;
    {
        const bool branch_taken_0x13d66c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d66c) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D674u;
    // 0x13d674: 0x0  nop
    ctx->pc = 0x13d674u;
    // NOP
label_13d678:
    // 0x13d678: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13d67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d680: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x13d680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d684: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13d684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13d688: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x13d688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d68c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13d68cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13d690: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13d690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d694: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13D694u;
    {
        const bool branch_taken_0x13d694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d694) {
            ctx->pc = 0x13D6C0u;
            goto label_13d6c0;
        }
    }
    ctx->pc = 0x13D69Cu;
    // 0x13d69c: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x13d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d6a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d6a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d6a4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13D6A4u;
    {
        const bool branch_taken_0x13d6a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d6a4) {
            ctx->pc = 0x13D6C0u;
            goto label_13d6c0;
        }
    }
    ctx->pc = 0x13D6ACu;
    // 0x13d6ac: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x13d6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d6b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d6b4: 0x450101c2  bc1t        . + 4 + (0x1C2 << 2)
    ctx->pc = 0x13D6B4u;
    {
        const bool branch_taken_0x13d6b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d6b4) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D6BCu;
    // 0x13d6bc: 0x0  nop
    ctx->pc = 0x13d6bcu;
    // NOP
label_13d6c0:
    // 0x13d6c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13d6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d6c8: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x13d6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d6cc: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13d6ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13d6d0: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x13d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d6d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13d6d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13d6d8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x13d6d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d6dc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x13D6DCu;
    {
        const bool branch_taken_0x13d6dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d6dc) {
            ctx->pc = 0x13D708u;
            goto label_13d708;
        }
    }
    ctx->pc = 0x13D6E4u;
    // 0x13d6e4: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x13d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d6e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13d6e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d6ec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13D6ECu;
    {
        const bool branch_taken_0x13d6ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d6ec) {
            ctx->pc = 0x13D708u;
            goto label_13d708;
        }
    }
    ctx->pc = 0x13D6F4u;
    // 0x13d6f4: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x13d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d6f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13d6f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d6fc: 0x450001b0  bc1f        . + 4 + (0x1B0 << 2)
    ctx->pc = 0x13D6FCu;
    {
        const bool branch_taken_0x13d6fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d6fc) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D704u;
    // 0x13d704: 0x0  nop
    ctx->pc = 0x13d704u;
    // NOP
label_13d708:
    // 0x13d708: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13d70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d710: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x13d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d714: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13d714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13d718: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x13d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d71c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13d71cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13d720: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13d720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d724: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13D724u;
    {
        const bool branch_taken_0x13d724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d724) {
            ctx->pc = 0x13D750u;
            goto label_13d750;
        }
    }
    ctx->pc = 0x13D72Cu;
    // 0x13d72c: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x13d72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d730: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d734: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13D734u;
    {
        const bool branch_taken_0x13d734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d734) {
            ctx->pc = 0x13D750u;
            goto label_13d750;
        }
    }
    ctx->pc = 0x13D73Cu;
    // 0x13d73c: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x13d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d740: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d744: 0x4501019e  bc1t        . + 4 + (0x19E << 2)
    ctx->pc = 0x13D744u;
    {
        const bool branch_taken_0x13d744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d744) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D74Cu;
    // 0x13d74c: 0x0  nop
    ctx->pc = 0x13d74cu;
    // NOP
label_13d750:
    // 0x13d750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d754: 0x0  nop
    ctx->pc = 0x13d754u;
    // NOP
    // 0x13d758: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x13d758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d75c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x13D75Cu;
    {
        const bool branch_taken_0x13d75c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D75Cu;
        // 0x13d760: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d75c) {
            ctx->pc = 0x13D7A8u;
            goto label_13d7a8;
        }
    }
    ctx->pc = 0x13D764u;
    // 0x13d764: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d76c: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13d76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13d770: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13d774: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13D774u;
    SET_GPR_U32(ctx, 31, 0x13D77Cu);
    ctx->pc = 0x13D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D774u;
    // 0x13d778: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13D774u, 0x13D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D77Cu;
label_13d77c:
    // 0x13d77c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13d780: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d784: 0x34643070  ori         $a0, $v1, 0x3070
    ctx->pc = 0x13d784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12400);
    // 0x13d788: 0x34433070  ori         $v1, $v0, 0x3070
    ctx->pc = 0x13d788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13d78c: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x13d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13d790: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13d790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13d794: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13d794u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d798: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13d798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d79c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13D79Cu;
    {
        const bool branch_taken_0x13d79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D79Cu;
        // 0x13d7a0: 0xf8830000  sqc2        $vf3, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d79c) {
            ctx->pc = 0x13D7E0u;
            goto label_13d7e0;
        }
    }
    ctx->pc = 0x13D7A4u;
    // 0x13d7a4: 0x0  nop
    ctx->pc = 0x13d7a4u;
    // NOP
label_13d7a8:
    // 0x13d7a8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d7ac: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13d7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13d7b0: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x13d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13d7b4: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13d7b8: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x13d7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13d7bc: 0xc04e6e8  jal         func_139BA0
    ctx->pc = 0x13D7BCu;
    SET_GPR_U32(ctx, 31, 0x13D7C4u);
    ctx->pc = 0x13D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D7BCu;
    // 0x13d7c0: 0x27a80140  addiu       $t0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BA0u, 0x13D7BCu, 0x13D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D7C4u;
label_13d7c4:
    // 0x13d7c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13d7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d7c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D7C8u;
    {
        const bool branch_taken_0x13d7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d7c8) {
            ctx->pc = 0x13D7E0u;
            goto label_13d7e0;
        }
    }
    ctx->pc = 0x13D7D0u;
    // 0x13d7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d7d4: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x13D7D4u;
    {
        const bool branch_taken_0x13d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7D4u;
        // 0x13d7d8: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7d4) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13D7DCu;
    // 0x13d7dc: 0x0  nop
    ctx->pc = 0x13d7dcu;
    // NOP
label_13d7e0:
    // 0x13d7e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13d7e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13D7E4u;
    {
        const bool branch_taken_0x13d7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7E4u;
        // 0x13d7e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7e4) {
            ctx->pc = 0x13D8A8u;
            goto label_13d8a8;
        }
    }
    ctx->pc = 0x13D7ECu;
    // 0x13d7ec: 0x0  nop
    ctx->pc = 0x13d7ecu;
    // NOP
label_13d7f0:
    // 0x13d7f0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x13d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x13d7f4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x13d7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x13d7f8: 0x244248e8  addiu       $v0, $v0, 0x48E8
    ctx->pc = 0x13d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18664));
    // 0x13d7fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d800: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x13d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13d804: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13d804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d808: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x13d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x13d80c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d810: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13d810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13d814: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13d814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d818: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13d818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13d81c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d820: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13d824: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13d824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d828: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13d828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d82c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x13d82cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13d830: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13d830u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d834: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13d834u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13d838: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x13d838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x13d83c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d840: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13d840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13d844: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13d844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13d848: 0x34633070  ori         $v1, $v1, 0x3070
    ctx->pc = 0x13d848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12400);
    // 0x13d84c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d850: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x13d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13d854: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13d854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13d858: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13d858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d85c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13d85cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d860: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13d860u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13d864: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x13d864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13d868: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x13d868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13d86c: 0xc041460  jal         func_105180
    ctx->pc = 0x13D86Cu;
    SET_GPR_U32(ctx, 31, 0x13D874u);
    ctx->pc = 0x13D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D86Cu;
    // 0x13d870: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x13D86Cu, 0x13D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D874u;
label_13d874:
    // 0x13d874: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13d874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13d878: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13D878u;
    SET_GPR_U32(ctx, 31, 0x13D880u);
    ctx->pc = 0x13D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D878u;
    // 0x13d87c: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13D878u, 0x13D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D880u;
label_13d880:
    // 0x13d880: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d884: 0x0  nop
    ctx->pc = 0x13d884u;
    // NOP
    // 0x13d888: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d88c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13D88Cu;
    {
        const bool branch_taken_0x13d88c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d88c) {
            ctx->pc = 0x13D8A0u;
            goto label_13d8a0;
        }
    }
    ctx->pc = 0x13D894u;
    // 0x13d894: 0x64110003  daddiu      $s1, $zero, 0x3
    ctx->pc = 0x13d894u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x13d898: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x13d898u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d89c: 0x0  nop
    ctx->pc = 0x13d89cu;
    // NOP
label_13d8a0:
    // 0x13d8a0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13d8a4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13d8a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13d8a8:
    // 0x13d8a8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x13d8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x13d8ac: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x13d8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13d8b0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x13D8B0u;
    {
        const bool branch_taken_0x13d8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d8b0) {
            ctx->pc = 0x13D7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d7f0;
        }
    }
    ctx->pc = 0x13D8B8u;
    // 0x13d8b8: 0x16a0001b  bnez        $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x13D8B8u;
    {
        const bool branch_taken_0x13d8b8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d8b8) {
            ctx->pc = 0x13D928u;
            goto label_13d928;
        }
    }
    ctx->pc = 0x13D8C0u;
    // 0x13d8c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d8c4: 0x0  nop
    ctx->pc = 0x13d8c4u;
    // NOP
    // 0x13d8c8: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x13d8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d8cc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x13D8CCu;
    {
        const bool branch_taken_0x13d8cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8CCu;
        // 0x13d8d0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d8cc) {
            ctx->pc = 0x13D900u;
            goto label_13d900;
        }
    }
    ctx->pc = 0x13D8D4u;
    // 0x13d8d4: 0x4614d041  sub.s       $f1, $f26, $f20
    ctx->pc = 0x13d8d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[20]);
    // 0x13d8d8: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x13d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x13d8dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d8e0: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13d8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13d8e4: 0x344430b0  ori         $a0, $v0, 0x30B0
    ctx->pc = 0x13d8e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13d8e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d8ec: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13D8ECu;
    SET_GPR_U32(ctx, 31, 0x13D8F4u);
    ctx->pc = 0x13D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D8ECu;
    // 0x13d8f0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13D8ECu, 0x13D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D8F4u;
label_13d8f4:
    // 0x13d8f4: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x13D8F4u;
    {
        const bool branch_taken_0x13d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d8f4) {
            ctx->pc = 0x13DD78u;
            goto label_13dd78;
        }
    }
    ctx->pc = 0x13D8FCu;
    // 0x13d8fc: 0x0  nop
    ctx->pc = 0x13d8fcu;
    // NOP
label_13d900:
    // 0x13d900: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x13d900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x13d904: 0x4614d040  add.s       $f1, $f26, $f20
    ctx->pc = 0x13d904u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[20]);
    // 0x13d908: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d90c: 0x344430b0  ori         $a0, $v0, 0x30B0
    ctx->pc = 0x13d90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13d910: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13d910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13d914: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d918: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13D918u;
    SET_GPR_U32(ctx, 31, 0x13D920u);
    ctx->pc = 0x13D91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D918u;
    // 0x13d91c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13D918u, 0x13D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D920u;
label_13d920:
    // 0x13d920: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x13D920u;
    {
        const bool branch_taken_0x13d920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d920) {
            ctx->pc = 0x13DD78u;
            goto label_13dd78;
        }
    }
    ctx->pc = 0x13D928u;
label_13d928:
    // 0x13d928: 0x3c024f80  lui         $v0, 0x4F80
    ctx->pc = 0x13d928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20352 << 16));
    // 0x13d92c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x13d92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13d930: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13d930u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d934: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x13D934u;
    {
        const bool branch_taken_0x13d934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D934u;
        // 0x13d938: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d934) {
            ctx->pc = 0x13DD10u;
            goto label_13dd10;
        }
    }
    ctx->pc = 0x13D93Cu;
    // 0x13d93c: 0x0  nop
    ctx->pc = 0x13d93cu;
    // NOP
label_13d940:
    // 0x13d940: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x13d940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13d944: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x13d944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x13d948: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13d948u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13d94c: 0x246348e8  addiu       $v1, $v1, 0x48E8
    ctx->pc = 0x13d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18664));
    // 0x13d950: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d954: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d958: 0x34453060  ori         $a1, $v0, 0x3060
    ctx->pc = 0x13d958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    // 0x13d95c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13d95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13d960: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13d960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d964: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d968: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d96c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13d970: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13d970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d974: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13d974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13d978: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d97c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13d980: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d984: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13d984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d988: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x13d988u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13d98c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13d98cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d990: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13d990u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13d994: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d998: 0x34443050  ori         $a0, $v0, 0x3050
    ctx->pc = 0x13d998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13d99c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d9a0: 0x34453060  ori         $a1, $v0, 0x3060
    ctx->pc = 0x13d9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    // 0x13d9a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d9a8: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13D9A8u;
    SET_GPR_U32(ctx, 31, 0x13D9B0u);
    ctx->pc = 0x13D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D9A8u;
    // 0x13d9ac: 0x34463060  ori         $a2, $v0, 0x3060 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13D9A8u, 0x13D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9B0u;
label_13d9b0:
    // 0x13d9b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13d9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13d9b4: 0xc4233050  lwc1        $f3, 0x3050($at)
    ctx->pc = 0x13d9b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13d9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d9bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13d9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13d9c0: 0xc4223054  lwc1        $f2, 0x3054($at)
    ctx->pc = 0x13d9c0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d9c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13d9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13d9c8: 0xc4213058  lwc1        $f1, 0x3058($at)
    ctx->pc = 0x13d9c8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13d9cc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x13d9ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x13d9d0: 0x46020d80  add.s       $f22, $f1, $f2
    ctx->pc = 0x13d9d0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13d9d4: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x13d9d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d9d8: 0x450100c9  bc1t        . + 4 + (0xC9 << 2)
    ctx->pc = 0x13D9D8u;
    {
        const bool branch_taken_0x13d9d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9D8u;
        // 0x13d9dc: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9d8) {
            ctx->pc = 0x13DD00u;
            goto label_13dd00;
        }
    }
    ctx->pc = 0x13D9E0u;
    // 0x13d9e0: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x13d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13d9e4: 0x34443050  ori         $a0, $v0, 0x3050
    ctx->pc = 0x13d9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13d9e8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13d9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13d9ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d9ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d9f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d9f4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13d9f8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d9fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13d9fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13da00: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13da00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13da04: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13da04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13da08: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13da08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13da0c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13da10: 0x34443050  ori         $a0, $v0, 0x3050
    ctx->pc = 0x13da10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13da14: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13da14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13da18: 0x34453050  ori         $a1, $v0, 0x3050
    ctx->pc = 0x13da18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13da1c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13da20: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13DA20u;
    SET_GPR_U32(ctx, 31, 0x13DA28u);
    ctx->pc = 0x13DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA20u;
    // 0x13da24: 0x34463060  ori         $a2, $v0, 0x3060 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13DA20u, 0x13DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA28u;
label_13da28:
    // 0x13da28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13da28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13da2c: 0xc4233050  lwc1        $f3, 0x3050($at)
    ctx->pc = 0x13da2cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13da30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13da30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13da34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13da34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13da38: 0xc4223054  lwc1        $f2, 0x3054($at)
    ctx->pc = 0x13da38u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13da3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13da3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13da40: 0xc4213058  lwc1        $f1, 0x3058($at)
    ctx->pc = 0x13da40u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13da44: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x13da44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x13da48: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x13da48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13da4c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x13da4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13da50: 0x450100ab  bc1t        . + 4 + (0xAB << 2)
    ctx->pc = 0x13DA50u;
    {
        const bool branch_taken_0x13da50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13da50) {
            ctx->pc = 0x13DD00u;
            goto label_13dd00;
        }
    }
    ctx->pc = 0x13DA58u;
    // 0x13da58: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x13da58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13da5c: 0x450100a8  bc1t        . + 4 + (0xA8 << 2)
    ctx->pc = 0x13DA5Cu;
    {
        const bool branch_taken_0x13da5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13da5c) {
            ctx->pc = 0x13DD00u;
            goto label_13dd00;
        }
    }
    ctx->pc = 0x13DA64u;
    // 0x13da64: 0x0  nop
    ctx->pc = 0x13da64u;
    // NOP
    // 0x13da68: 0x0  nop
    ctx->pc = 0x13da68u;
    // NOP
    // 0x13da6c: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x13da6cu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[22]); }
    // 0x13da70: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13da74: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13da74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13da78: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13DA78u;
    SET_GPR_U32(ctx, 31, 0x13DA80u);
    ctx->pc = 0x13DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA78u;
    // 0x13da7c: 0x34453060  ori         $a1, $v0, 0x3060 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13DA78u, 0x13DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA80u;
label_13da80:
    // 0x13da80: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13da80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13da84: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13da88: 0x34643070  ori         $a0, $v1, 0x3070
    ctx->pc = 0x13da88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12400);
    // 0x13da8c: 0x34433070  ori         $v1, $v0, 0x3070
    ctx->pc = 0x13da8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13da90: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13da94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13da94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13da98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13da98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13da9c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13daa0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13daa4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13daa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13daa8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13daa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13daac: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13daacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13dab0: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13dab4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dab8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x13dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13dabc: 0xc04d80c  jal         func_136030
    ctx->pc = 0x13DABCu;
    SET_GPR_U32(ctx, 31, 0x13DAC4u);
    ctx->pc = 0x13DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DABCu;
    // 0x13dac0: 0x34443070  ori         $a0, $v0, 0x3070 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x13DABCu, 0x13DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAC4u;
label_13dac4:
    // 0x13dac4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x13dac4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x13dac8: 0x4619b036  c.le.s      $f22, $f25
    ctx->pc = 0x13dac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dacc: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x13DACCu;
    {
        const bool branch_taken_0x13dacc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13dacc) {
            ctx->pc = 0x13DBD0u;
            goto label_13dbd0;
        }
    }
    ctx->pc = 0x13DAD4u;
    // 0x13dad4: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x13dad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dad8: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x13DAD8u;
    {
        const bool branch_taken_0x13dad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13dad8) {
            ctx->pc = 0x13DBD0u;
            goto label_13dbd0;
        }
    }
    ctx->pc = 0x13DAE0u;
    // 0x13dae0: 0x46160504  c1          0x160504
    ctx->pc = 0x13dae0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[22]);
    // 0x13dae4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dae8: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13dae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13daec: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x13daecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13daf0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13daf4: 0x34423070  ori         $v0, $v0, 0x3070
    ctx->pc = 0x13daf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13daf8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13daf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dafc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13dafcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13db00: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13db00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13db04: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13db04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13db08: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13db08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13db0c: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13db0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13db10: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13db10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13db14: 0xc041472  jal         func_1051C8
    ctx->pc = 0x13DB14u;
    SET_GPR_U32(ctx, 31, 0x13DB1Cu);
    ctx->pc = 0x13DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB14u;
    // 0x13db18: 0x34453080  ori         $a1, $v0, 0x3080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x13DB14u, 0x13DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB1Cu;
label_13db1c:
    // 0x13db1c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13db20: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x13db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x13db24: 0x34443050  ori         $a0, $v0, 0x3050
    ctx->pc = 0x13db24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13db28: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13db28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13db2c: 0x34423070  ori         $v0, $v0, 0x3070
    ctx->pc = 0x13db2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13db30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13db30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13db34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13db34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13db38: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13db38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13db3c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13db40: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13db40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13db44: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13db44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13db48: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13db48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13db4c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13DB4Cu;
    SET_GPR_U32(ctx, 31, 0x13DB54u);
    ctx->pc = 0x13DB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB4Cu;
    // 0x13db50: 0x34453050  ori         $a1, $v0, 0x3050 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13DB4Cu, 0x13DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB54u;
label_13db54:
    // 0x13db54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13db54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13db58: 0x0  nop
    ctx->pc = 0x13db58u;
    // NOP
    // 0x13db5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13db5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13db60: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x13DB60u;
    {
        const bool branch_taken_0x13db60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13db60) {
            ctx->pc = 0x13DB98u;
            goto label_13db98;
        }
    }
    ctx->pc = 0x13DB68u;
    // 0x13db68: 0x4601b836  c.le.s      $f23, $f1
    ctx->pc = 0x13db68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13db6c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13DB6Cu;
    {
        const bool branch_taken_0x13db6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB6Cu;
        // 0x13db70: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db6c) {
            ctx->pc = 0x13DB90u;
            goto label_13db90;
        }
    }
    ctx->pc = 0x13DB74u;
    // 0x13db74: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13db74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13db78: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13db78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13db7c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13db7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13db80: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13DB80u;
    SET_GPR_U32(ctx, 31, 0x13DB88u);
    ctx->pc = 0x13DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB80u;
    // 0x13db84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13DB80u, 0x13DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB88u;
label_13db88:
    // 0x13db88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13DB88u;
    {
        const bool branch_taken_0x13db88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13db88) {
            ctx->pc = 0x13DBA0u;
            goto label_13dba0;
        }
    }
    ctx->pc = 0x13DB90u;
label_13db90:
    // 0x13db90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13DB90u;
    {
        const bool branch_taken_0x13db90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB90u;
        // 0x13db94: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db90) {
            ctx->pc = 0x13DBA0u;
            goto label_13dba0;
        }
    }
    ctx->pc = 0x13DB98u;
label_13db98:
    // 0x13db98: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x13db98u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x13db9c: 0x0  nop
    ctx->pc = 0x13db9cu;
    // NOP
label_13dba0:
    // 0x13dba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dba4: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x13dba4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13dba8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13dbac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13dbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dbb0: 0x346330c0  ori         $v1, $v1, 0x30C0
    ctx->pc = 0x13dbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12480);
    // 0x13dbb4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dbb8: 0x34423080  ori         $v0, $v0, 0x3080
    ctx->pc = 0x13dbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13dbbc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13dbbcu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003080u));
    // 0x13dbc0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x13dbc0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x13dbc4: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x13dbc4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x13dbc8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13dbc8u;
    runtime->Store128(rdram, ctx, 0x700030C0u, GPR_VEC(ctx, 2));
    // 0x13dbcc: 0x0  nop
    ctx->pc = 0x13dbccu;
    // NOP
label_13dbd0:
    // 0x13dbd0: 0x16a0004b  bnez        $s5, . + 4 + (0x4B << 2)
    ctx->pc = 0x13DBD0u;
    {
        const bool branch_taken_0x13dbd0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBD0u;
        // 0x13dbd4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbd0) {
            ctx->pc = 0x13DD00u;
            goto label_13dd00;
        }
    }
    ctx->pc = 0x13DBD8u;
    // 0x13dbd8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x13dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13dbdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13dbdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13dbe0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13dbe4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13dbe8: 0xc04d80c  jal         func_136030
    ctx->pc = 0x13DBE8u;
    SET_GPR_U32(ctx, 31, 0x13DBF0u);
    ctx->pc = 0x13DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DBE8u;
    // 0x13dbec: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x13DBE8u, 0x13DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBF0u;
label_13dbf0:
    // 0x13dbf0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x13dbf0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x13dbf4: 0x4619b036  c.le.s      $f22, $f25
    ctx->pc = 0x13dbf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dbf8: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x13DBF8u;
    {
        const bool branch_taken_0x13dbf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13dbf8) {
            ctx->pc = 0x13DD00u;
            goto label_13dd00;
        }
    }
    ctx->pc = 0x13DC00u;
    // 0x13dc00: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x13dc00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dc04: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x13DC04u;
    {
        const bool branch_taken_0x13dc04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13dc04) {
            ctx->pc = 0x13DD00u;
            goto label_13dd00;
        }
    }
    ctx->pc = 0x13DC0Cu;
    // 0x13dc0c: 0x46160504  c1          0x160504
    ctx->pc = 0x13dc0cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[22]);
    // 0x13dc10: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dc14: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13dc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13dc18: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x13dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13dc1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13dc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13dc20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13dc20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13dc24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13dc28: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13dc2c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13dc30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13dc30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dc34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13dc34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13dc38: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13dc38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13dc3c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13dc40: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dc44: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13dc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13dc48: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dc4c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x13DC4Cu;
    SET_GPR_U32(ctx, 31, 0x13DC54u);
    ctx->pc = 0x13DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC4Cu;
    // 0x13dc50: 0x34453080  ori         $a1, $v0, 0x3080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x13DC4Cu, 0x13DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC54u;
label_13dc54:
    // 0x13dc54: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dc58: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x13dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x13dc5c: 0x34443050  ori         $a0, $v0, 0x3050
    ctx->pc = 0x13dc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13dc60: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13dc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13dc64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13dc64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13dc68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13dc6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13dc70: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13dc74: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13dc74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dc78: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13dc78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13dc7c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13dc7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13dc80: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13dc84: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dc88: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13dc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13dc8c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dc90: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13DC90u;
    SET_GPR_U32(ctx, 31, 0x13DC98u);
    ctx->pc = 0x13DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC90u;
    // 0x13dc94: 0x34453050  ori         $a1, $v0, 0x3050 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13DC90u, 0x13DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC98u;
label_13dc98:
    // 0x13dc98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13dc98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13dc9c: 0x0  nop
    ctx->pc = 0x13dc9cu;
    // NOP
    // 0x13dca0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13dca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dca4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13DCA4u;
    {
        const bool branch_taken_0x13dca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCA4u;
        // 0x13dca8: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dca4) {
            ctx->pc = 0x13DCC8u;
            goto label_13dcc8;
        }
    }
    ctx->pc = 0x13DCACu;
    // 0x13dcac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dcb0: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13dcb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13dcb4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13dcb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13dcb8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13DCB8u;
    SET_GPR_U32(ctx, 31, 0x13DCC0u);
    ctx->pc = 0x13DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DCB8u;
    // 0x13dcbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13DCB8u, 0x13DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCC0u;
label_13dcc0:
    // 0x13dcc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13DCC0u;
    {
        const bool branch_taken_0x13dcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dcc0) {
            ctx->pc = 0x13DCD0u;
            goto label_13dcd0;
        }
    }
    ctx->pc = 0x13DCC8u;
label_13dcc8:
    // 0x13dcc8: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x13dcc8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x13dccc: 0x0  nop
    ctx->pc = 0x13dcccu;
    // NOP
label_13dcd0:
    // 0x13dcd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dcd4: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x13dcd4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13dcd8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13dcdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13dcdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dce0: 0x346330c0  ori         $v1, $v1, 0x30C0
    ctx->pc = 0x13dce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12480);
    // 0x13dce4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dce8: 0x34423080  ori         $v0, $v0, 0x3080
    ctx->pc = 0x13dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13dcec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13dcecu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003080u));
    // 0x13dcf0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x13dcf0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x13dcf4: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x13dcf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x13dcf8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13dcf8u;
    runtime->Store128(rdram, ctx, 0x700030C0u, GPR_VEC(ctx, 2));
    // 0x13dcfc: 0x0  nop
    ctx->pc = 0x13dcfcu;
    // NOP
label_13dd00:
    // 0x13dd00: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13dd04: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x13dd04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13dd08: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13dd08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13dd0c: 0x0  nop
    ctx->pc = 0x13dd0cu;
    // NOP
label_13dd10:
    // 0x13dd10: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13dd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13dd14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13dd14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13dd18: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x13dd18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13dd1c: 0x1440ff08  bnez        $v0, . + 4 + (-0xF8 << 2)
    ctx->pc = 0x13DD1Cu;
    {
        const bool branch_taken_0x13dd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dd1c) {
            ctx->pc = 0x13D940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d940;
        }
    }
    ctx->pc = 0x13DD24u;
    // 0x13dd24: 0x12a00026  beqz        $s5, . + 4 + (0x26 << 2)
    ctx->pc = 0x13DD24u;
    {
        const bool branch_taken_0x13dd24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD24u;
        // 0x13dd28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd24) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13DD2Cu;
    // 0x13dd2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13dd2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dd30: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x13dd30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13dd34: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x13dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x13dd38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13dd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dd3c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x13dd3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x13dd40: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dd44: 0x34463080  ori         $a2, $v0, 0x3080
    ctx->pc = 0x13dd44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13dd48: 0x4614d040  add.s       $f1, $f26, $f20
    ctx->pc = 0x13dd48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[20]);
    // 0x13dd4c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dd50: 0x344330c0  ori         $v1, $v0, 0x30C0
    ctx->pc = 0x13dd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12480);
    // 0x13dd54: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13dd54u;
    SET_GPR_VEC(ctx, 3, runtime->Load128(rdram, ctx, 0x700030C0u));
    // 0x13dd58: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dd5c: 0x344430b0  ori         $a0, $v0, 0x30B0
    ctx->pc = 0x13dd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13dd60: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x13dd60u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13dd64: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dd68: 0x34453080  ori         $a1, $v0, 0x3080
    ctx->pc = 0x13dd68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13dd6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13dd6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13dd70: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13DD70u;
    SET_GPR_U32(ctx, 31, 0x13DD78u);
    ctx->pc = 0x13DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD70u;
    // 0x13dd74: 0x7cc30000  sq          $v1, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13DD70u, 0x13DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD78u;
label_13dd78:
    // 0x13dd78: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13DD78u;
    {
        const bool branch_taken_0x13dd78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD78u;
        // 0x13dd7c: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd78) {
            ctx->pc = 0x13DDC0u;
            goto label_13ddc0;
        }
    }
    ctx->pc = 0x13DD80u;
    // 0x13dd80: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x13dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13dd84: 0x344330b0  ori         $v1, $v0, 0x30B0
    ctx->pc = 0x13dd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13dd88: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x13dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13dd8c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13dd8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dd90: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13dd90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13dd94: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13dd94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13dd98: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13dd98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13dd9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13dda0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13dda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dda4: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x13dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x13dda8: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x13dda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x13ddac: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x13ddacu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13ddb0: 0x8fc30fbc  lw          $v1, 0xFBC($fp)
    ctx->pc = 0x13ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4028)));
    // 0x13ddb4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x13ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13ddb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13ddbc: 0xafc20fbc  sw          $v0, 0xFBC($fp)
    ctx->pc = 0x13ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4028), GPR_U32(ctx, 2));
label_13ddc0:
    // 0x13ddc0: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x13ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x13ddc4: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x13ddc4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13ddc8: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x13ddc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x13ddcc: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x13ddccu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
label_13ddd0:
    // 0x13ddd0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x13ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x13ddd4: 0x161c3c  dsll32      $v1, $s6, 16
    ctx->pc = 0x13ddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 16));
    // 0x13ddd8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13ddd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13dddc: 0x94420850  lhu         $v0, 0x850($v0)
    ctx->pc = 0x13dddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2128)));
    // 0x13dde0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13dde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13dde4: 0x1440fda0  bnez        $v0, . + 4 + (-0x260 << 2)
    ctx->pc = 0x13DDE4u;
    {
        const bool branch_taken_0x13dde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dde4) {
            ctx->pc = 0x13D468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d468;
        }
    }
    ctx->pc = 0x13DDECu;
    // 0x13ddec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DDECu;
    {
        const bool branch_taken_0x13ddec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDECu;
        // 0x13ddf0: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddec) {
            ctx->pc = 0x13DE08u;
            goto label_13de08;
        }
    }
    ctx->pc = 0x13DDF4u;
    // 0x13ddf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13ddf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13ddf8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x13ddf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13ddfc: 0x1440fd92  bnez        $v0, . + 4 + (-0x26E << 2)
    ctx->pc = 0x13DDFCu;
    {
        const bool branch_taken_0x13ddfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ddfc) {
            ctx->pc = 0x13D448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d448;
        }
    }
    ctx->pc = 0x13DE04u;
    // 0x13de04: 0x0  nop
    ctx->pc = 0x13de04u;
    // NOP
label_13de08:
    // 0x13de08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13de08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de0c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x13de0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13de10: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x13de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13de14: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x13de14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x13de18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13de18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13de1c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13de20: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DE20u;
    {
        const bool branch_taken_0x13de20 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE20u;
        // 0x13de24: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de20) {
            ctx->pc = 0x13DE30u;
            goto label_13de30;
        }
    }
    ctx->pc = 0x13DE28u;
    // 0x13de28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13DE28u;
    {
        const bool branch_taken_0x13de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE28u;
        // 0x13de2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de28) {
            ctx->pc = 0x13DE38u;
            goto label_13de38;
        }
    }
    ctx->pc = 0x13DE30u;
label_13de30:
    // 0x13de30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13de30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de34: 0x0  nop
    ctx->pc = 0x13de34u;
    // NOP
label_13de38:
    // 0x13de38: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x13de38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13de3c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x13de3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13de40: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x13de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x13de44: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x13de44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13de48: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x13de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x13de4c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x13de4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13de50: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x13de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x13de54: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x13de54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13de58: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x13de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x13de5c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x13de5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13de60: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x13de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13de64: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x13de64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13de68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13de6c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x13de6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13de70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13de74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13de74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13de78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13de78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13de7c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE7Cu;
        // 0x13de80: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DE84u;
}

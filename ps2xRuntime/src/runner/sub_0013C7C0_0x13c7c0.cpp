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

// Function: sub_0013C7C0
// Address: 0x13c7c0 - 0x13d384
void sub_0013C7C0_0x13c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C7C0_0x13c7c0");
#endif

    switch (ctx->pc) {
        case 0x13c83cu: goto label_13c83c;
        case 0x13c884u: goto label_13c884;
        case 0x13c89cu: goto label_13c89c;
        case 0x13c8b0u: goto label_13c8b0;
        case 0x13c8c8u: goto label_13c8c8;
        case 0x13c900u: goto label_13c900;
        case 0x13ca20u: goto label_13ca20;
        case 0x13ca8cu: goto label_13ca8c;
        case 0x13cbf4u: goto label_13cbf4;
        case 0x13cc3cu: goto label_13cc3c;
        case 0x13cc68u: goto label_13cc68;
        case 0x13ccecu: goto label_13ccec;
        case 0x13ccf8u: goto label_13ccf8;
        case 0x13cd6cu: goto label_13cd6c;
        case 0x13cd98u: goto label_13cd98;
        case 0x13cdb8u: goto label_13cdb8;
        case 0x13ce28u: goto label_13ce28;
        case 0x13cea4u: goto label_13cea4;
        case 0x13cefcu: goto label_13cefc;
        case 0x13cf44u: goto label_13cf44;
        case 0x13cfa0u: goto label_13cfa0;
        case 0x13cfdcu: goto label_13cfdc;
        case 0x13d010u: goto label_13d010;
        case 0x13d084u: goto label_13d084;
        case 0x13d0ecu: goto label_13d0ec;
        case 0x13d134u: goto label_13d134;
        case 0x13d15cu: goto label_13d15c;
        case 0x13d218u: goto label_13d218;
        default: break;
    }

    ctx->pc = 0x13c7c0u;

    // 0x13c7c0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x13c7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x13c7c4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x13c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x13c7c8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x13c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x13c7cc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x13c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x13c7d0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x13c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x13c7d4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x13c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x13c7d8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x13c7d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7dc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x13c7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x13c7e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x13c7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x13c7e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13c7e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x13c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x13c7ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13c7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13c7f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13c7f4: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x13c7f4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13c7f8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x13c7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7fc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x13c7fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13c800: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x13c800u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13c804: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x13c804u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x13c808: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x13c808u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13c80c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13c80cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13c810: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13c810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13c814: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x13c814u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x13c818: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x13c818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x13c81c: 0xafaa00dc  sw          $t2, 0xDC($sp)
    ctx->pc = 0x13c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 10));
    // 0x13c820: 0x461ad642  mul.s       $f25, $f26, $f26
    ctx->pc = 0x13c820u;
    ctx->f[25] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x13c824: 0xac800fbc  sw          $zero, 0xFBC($a0)
    ctx->pc = 0x13c824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4028), GPR_U32(ctx, 0));
    // 0x13c828: 0xafa500fc  sw          $a1, 0xFC($sp)
    ctx->pc = 0x13c828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 5));
    // 0x13c82c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13c82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c834: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x13C834u;
    SET_GPR_U32(ctx, 31, 0x13C83Cu);
    ctx->pc = 0x13C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C834u;
    // 0x13c838: 0xa7a000c0  sh          $zero, 0xC0($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x13C834u, 0x13C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C83Cu;
label_13c83c:
    // 0x13c83c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x13c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13c840: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c844: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13c844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c848: 0x34473030  ori         $a3, $v0, 0x3030
    ctx->pc = 0x13c848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c84c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x13c84cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x13c850: 0x461a0e1c  madd.s      $f24, $f1, $f26
    ctx->pc = 0x13c850u;
    ctx->f[24] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[26]));
    // 0x13c854: 0x7ac80000  lq          $t0, 0x0($s6)
    ctx->pc = 0x13c854u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13c858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13c858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c85c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13c860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c864: 0x34433040  ori         $v1, $v0, 0x3040
    ctx->pc = 0x13c864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    // 0x13c868: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13c868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c86c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c870: 0x34453030  ori         $a1, $v0, 0x3030
    ctx->pc = 0x13c870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c874: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x13c874u;
    runtime->Store128(rdram, ctx, 0x70003030u, GPR_VEC(ctx, 8));
    // 0x13c878: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x13c878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c87c: 0xc04ec28  jal         func_13B0A0
    ctx->pc = 0x13C87Cu;
    SET_GPR_U32(ctx, 31, 0x13C884u);
    ctx->pc = 0x13C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C87Cu;
    // 0x13c880: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0A0u, 0x13C87Cu, 0x13C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C884u;
label_13c884:
    // 0x13c884: 0xff828538  sd          $v0, -0x7AC8($gp)
    ctx->pc = 0x13c884u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935864), GPR_U64(ctx, 2));
    // 0x13c888: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13c888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c88c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c894: 0xc04ec28  jal         func_13B0A0
    ctx->pc = 0x13C894u;
    SET_GPR_U32(ctx, 31, 0x13C89Cu);
    ctx->pc = 0x13C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C894u;
    // 0x13c898: 0x34453040  ori         $a1, $v0, 0x3040 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0A0u, 0x13C894u, 0x13C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C89Cu;
label_13c89c:
    // 0x13c89c: 0xdf838538  ld          $v1, -0x7AC8($gp)
    ctx->pc = 0x13c89cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13c8a0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x13c8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c8a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13c8a8: 0xff828538  sd          $v0, -0x7AC8($gp)
    ctx->pc = 0x13c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935864), GPR_U64(ctx, 2));
    // 0x13c8ac: 0x0  nop
    ctx->pc = 0x13c8acu;
    // NOP
label_13c8b0:
    // 0x13c8b0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x13c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13c8b4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x13c8b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13c8b8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x13c8b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8bc: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x13c8bcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x13c8c0: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x13C8C0u;
    {
        const bool branch_taken_0x13c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8C0u;
        // 0x13c8c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8c0) {
            ctx->pc = 0x13D2C8u;
            goto label_13d2c8;
        }
    }
    ctx->pc = 0x13C8C8u;
label_13c8c8:
    // 0x13c8c8: 0xdf828538  ld          $v0, -0x7AC8($gp)
    ctx->pc = 0x13c8c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13c8cc: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x13c8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13c8d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c8d4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13c8d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13c8d8: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x13c8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x13c8dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13c8e0: 0x10400275  beqz        $v0, . + 4 + (0x275 << 2)
    ctx->pc = 0x13C8E0u;
    {
        const bool branch_taken_0x13c8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c8e0) {
            ctx->pc = 0x13D2B8u;
            goto label_13d2b8;
        }
    }
    ctx->pc = 0x13C8E8u;
    // 0x13c8e8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x13c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x13c8ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13c8f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c8f4: 0x8c530cd0  lw          $s3, 0xCD0($v0)
    ctx->pc = 0x13c8f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x13c8f8: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x13C8F8u;
    {
        const bool branch_taken_0x13c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8F8u;
        // 0x13c8fc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8f8) {
            ctx->pc = 0x13D288u;
            goto label_13d288;
        }
    }
    ctx->pc = 0x13C900u;
label_13c900:
    // 0x13c900: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x13c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13c904: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x13c904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x13c908: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C908u;
    {
        const bool branch_taken_0x13c908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c908) {
            ctx->pc = 0x13C920u;
            goto label_13c920;
        }
    }
    ctx->pc = 0x13C910u;
    // 0x13c910: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x13c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x13c914: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x13c914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x13c918: 0x10400257  beqz        $v0, . + 4 + (0x257 << 2)
    ctx->pc = 0x13C918u;
    {
        const bool branch_taken_0x13c918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c918) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13C920u;
label_13c920:
    // 0x13c920: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x13c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13c924: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x13c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x13c928: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c92c: 0x10400252  beqz        $v0, . + 4 + (0x252 << 2)
    ctx->pc = 0x13C92Cu;
    {
        const bool branch_taken_0x13c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c92c) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13C934u;
    // 0x13c934: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C934u;
    {
        const bool branch_taken_0x13c934 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c934) {
            ctx->pc = 0x13C958u;
            goto label_13c958;
        }
    }
    ctx->pc = 0x13C93Cu;
    // 0x13c93c: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x13c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x13c940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c944: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C944u;
    {
        const bool branch_taken_0x13c944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13c944) {
            ctx->pc = 0x13C960u;
            goto label_13c960;
        }
    }
    ctx->pc = 0x13C94Cu;
    // 0x13c94c: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x13C94Cu;
    {
        const bool branch_taken_0x13c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c94c) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13C954u;
    // 0x13c954: 0x0  nop
    ctx->pc = 0x13c954u;
    // NOP
label_13c958:
    // 0x13c958: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x13c958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x13c95c: 0x0  nop
    ctx->pc = 0x13c95cu;
    // NOP
label_13c960:
    // 0x13c960: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c964: 0xc4203034  lwc1        $f0, 0x3034($at)
    ctx->pc = 0x13c964u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c968: 0xc6620024  lwc1        $f2, 0x24($s3)
    ctx->pc = 0x13c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13c96c: 0x461a0040  add.s       $f1, $f0, $f26
    ctx->pc = 0x13c96cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x13c970: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x13c970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c974: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x13C974u;
    {
        const bool branch_taken_0x13c974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c974) {
            ctx->pc = 0x13C9A8u;
            goto label_13c9a8;
        }
    }
    ctx->pc = 0x13C97Cu;
    // 0x13c97c: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x13c97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c980: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13c980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c984: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x13C984u;
    {
        const bool branch_taken_0x13c984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c984) {
            ctx->pc = 0x13C9A8u;
            goto label_13c9a8;
        }
    }
    ctx->pc = 0x13C98Cu;
    // 0x13c98c: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x13c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c990: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13c990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c994: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x13C994u;
    {
        const bool branch_taken_0x13c994 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C994u;
        // 0x13c998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c994) {
            ctx->pc = 0x13C9A8u;
            goto label_13c9a8;
        }
    }
    ctx->pc = 0x13C99Cu;
    // 0x13c99c: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x13C99Cu;
    {
        const bool branch_taken_0x13c99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C99Cu;
        // 0x13c9a0: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c99c) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13C9A4u;
    // 0x13c9a4: 0x0  nop
    ctx->pc = 0x13c9a4u;
    // NOP
label_13c9a8:
    // 0x13c9a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13c9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13c9ac: 0xc4203034  lwc1        $f0, 0x3034($at)
    ctx->pc = 0x13c9acu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003034u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c9b0: 0xc6620024  lwc1        $f2, 0x24($s3)
    ctx->pc = 0x13c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13c9b4: 0x461a0041  sub.s       $f1, $f0, $f26
    ctx->pc = 0x13c9b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x13c9b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13c9b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c9bc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x13C9BCu;
    {
        const bool branch_taken_0x13c9bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c9bc) {
            ctx->pc = 0x13C9F0u;
            goto label_13c9f0;
        }
    }
    ctx->pc = 0x13C9C4u;
    // 0x13c9c4: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x13c9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c9c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c9cc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13C9CCu;
    {
        const bool branch_taken_0x13c9cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c9cc) {
            ctx->pc = 0x13C9F0u;
            goto label_13c9f0;
        }
    }
    ctx->pc = 0x13C9D4u;
    // 0x13c9d4: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x13c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c9d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c9d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c9dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13C9DCu;
    {
        const bool branch_taken_0x13c9dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9DCu;
        // 0x13c9e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9dc) {
            ctx->pc = 0x13C9F0u;
            goto label_13c9f0;
        }
    }
    ctx->pc = 0x13C9E4u;
    // 0x13c9e4: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x13C9E4u;
    {
        const bool branch_taken_0x13c9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9E4u;
        // 0x13c9e8: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9e4) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13C9ECu;
    // 0x13c9ec: 0x0  nop
    ctx->pc = 0x13c9ecu;
    // NOP
label_13c9f0:
    // 0x13c9f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13c9f4: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x13c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13c9f8: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x13c9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13c9fc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x13c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x13ca00: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13ca00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13ca04: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x13ca04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ca08: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13ca08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ca0c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13ca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ca10: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13ca14: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x13ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x13ca18: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13CA18u;
    SET_GPR_U32(ctx, 31, 0x13CA20u);
    ctx->pc = 0x13CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA18u;
    // 0x13ca1c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13CA18u, 0x13CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA20u;
label_13ca20:
    // 0x13ca20: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x13ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ca24: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x13ca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ca28: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x13ca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ca2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13ca2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13ca30: 0x460015c0  add.s       $f23, $f2, $f0
    ctx->pc = 0x13ca30u;
    ctx->f[23] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13ca34: 0x4600bd05  abs.s       $f20, $f23
    ctx->pc = 0x13ca34u;
    ctx->f[20] = FPU_ABS_S(ctx->f[23]);
    // 0x13ca38: 0x461aa034  c.lt.s      $f20, $f26
    ctx->pc = 0x13ca38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ca3c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x13CA3Cu;
    {
        const bool branch_taken_0x13ca3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ca3c) {
            ctx->pc = 0x13CAA8u;
            goto label_13caa8;
        }
    }
    ctx->pc = 0x13CA44u;
    // 0x13ca44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ca44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ca48: 0x0  nop
    ctx->pc = 0x13ca48u;
    // NOP
    // 0x13ca4c: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x13ca4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ca50: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x13CA50u;
    {
        const bool branch_taken_0x13ca50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ca50) {
            ctx->pc = 0x13CA70u;
            goto label_13ca70;
        }
    }
    ctx->pc = 0x13CA58u;
    // 0x13ca58: 0x4618a036  c.le.s      $f20, $f24
    ctx->pc = 0x13ca58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ca5c: 0x45010206  bc1t        . + 4 + (0x206 << 2)
    ctx->pc = 0x13CA5Cu;
    {
        const bool branch_taken_0x13ca5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA5Cu;
        // 0x13ca60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca5c) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13CA64u;
    // 0x13ca64: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x13CA64u;
    {
        const bool branch_taken_0x13ca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA64u;
        // 0x13ca68: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca64) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13CA6Cu;
    // 0x13ca6c: 0x0  nop
    ctx->pc = 0x13ca6cu;
    // NOP
label_13ca70:
    // 0x13ca70: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13ca74: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13ca74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13ca78: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x13ca78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13ca7c: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x13ca7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13ca80: 0x34473030  ori         $a3, $v0, 0x3030
    ctx->pc = 0x13ca80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13ca84: 0xc04e6e8  jal         func_139BA0
    ctx->pc = 0x13CA84u;
    SET_GPR_U32(ctx, 31, 0x13CA8Cu);
    ctx->pc = 0x13CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA84u;
    // 0x13ca88: 0x34483040  ori         $t0, $v0, 0x3040 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BA0u, 0x13CA84u, 0x13CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA8Cu;
label_13ca8c:
    // 0x13ca8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ca90: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x13CA90u;
    {
        const bool branch_taken_0x13ca90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ca90) {
            ctx->pc = 0x13CC58u;
            goto label_13cc58;
        }
    }
    ctx->pc = 0x13CA98u;
    // 0x13ca98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ca9c: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x13CA9Cu;
    {
        const bool branch_taken_0x13ca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA9Cu;
        // 0x13caa0: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca9c) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13CAA4u;
    // 0x13caa4: 0x0  nop
    ctx->pc = 0x13caa4u;
    // NOP
label_13caa8:
    // 0x13caa8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13caac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13caacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13cab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13cab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cab4: 0xc4213030  lwc1        $f1, 0x3030($at)
    ctx->pc = 0x13cab4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cab8: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13cab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13cabc: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x13cabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13cac0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13cac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13cac4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x13cac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cac8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x13CAC8u;
    {
        const bool branch_taken_0x13cac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cac8) {
            ctx->pc = 0x13CAF0u;
            goto label_13caf0;
        }
    }
    ctx->pc = 0x13CAD0u;
    // 0x13cad0: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x13cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cad4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13cad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cad8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13CAD8u;
    {
        const bool branch_taken_0x13cad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cad8) {
            ctx->pc = 0x13CAF0u;
            goto label_13caf0;
        }
    }
    ctx->pc = 0x13CAE0u;
    // 0x13cae0: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x13cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cae4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13cae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cae8: 0x450001e3  bc1f        . + 4 + (0x1E3 << 2)
    ctx->pc = 0x13CAE8u;
    {
        const bool branch_taken_0x13cae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cae8) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13CAF0u;
label_13caf0:
    // 0x13caf0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13caf4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13caf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13caf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13caf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cafc: 0xc4213030  lwc1        $f1, 0x3030($at)
    ctx->pc = 0x13cafcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cb00: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13cb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13cb04: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x13cb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13cb08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13cb08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13cb0c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13cb0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cb10: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x13CB10u;
    {
        const bool branch_taken_0x13cb10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cb10) {
            ctx->pc = 0x13CB38u;
            goto label_13cb38;
        }
    }
    ctx->pc = 0x13CB18u;
    // 0x13cb18: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x13cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cb1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cb20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x13CB20u;
    {
        const bool branch_taken_0x13cb20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cb20) {
            ctx->pc = 0x13CB38u;
            goto label_13cb38;
        }
    }
    ctx->pc = 0x13CB28u;
    // 0x13cb28: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x13cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cb2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cb2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cb30: 0x450101d1  bc1t        . + 4 + (0x1D1 << 2)
    ctx->pc = 0x13CB30u;
    {
        const bool branch_taken_0x13cb30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cb30) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13CB38u;
label_13cb38:
    // 0x13cb38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13cb3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13cb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13cb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13cb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cb44: 0xc4213038  lwc1        $f1, 0x3038($at)
    ctx->pc = 0x13cb44u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cb48: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13cb48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13cb4c: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x13cb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13cb50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13cb50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13cb54: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x13cb54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cb58: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x13CB58u;
    {
        const bool branch_taken_0x13cb58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cb58) {
            ctx->pc = 0x13CB80u;
            goto label_13cb80;
        }
    }
    ctx->pc = 0x13CB60u;
    // 0x13cb60: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x13cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cb64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13cb64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cb68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13CB68u;
    {
        const bool branch_taken_0x13cb68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cb68) {
            ctx->pc = 0x13CB80u;
            goto label_13cb80;
        }
    }
    ctx->pc = 0x13CB70u;
    // 0x13cb70: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x13cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cb74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13cb74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cb78: 0x450001bf  bc1f        . + 4 + (0x1BF << 2)
    ctx->pc = 0x13CB78u;
    {
        const bool branch_taken_0x13cb78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cb78) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13CB80u;
label_13cb80:
    // 0x13cb80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13cb84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13cb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13cb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13cb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cb8c: 0xc4213038  lwc1        $f1, 0x3038($at)
    ctx->pc = 0x13cb8cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cb90: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x13cb90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x13cb94: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x13cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13cb98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13cb98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13cb9c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13cb9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cba0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x13CBA0u;
    {
        const bool branch_taken_0x13cba0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cba0) {
            ctx->pc = 0x13CBC8u;
            goto label_13cbc8;
        }
    }
    ctx->pc = 0x13CBA8u;
    // 0x13cba8: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x13cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cbac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cbb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x13CBB0u;
    {
        const bool branch_taken_0x13cbb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cbb0) {
            ctx->pc = 0x13CBC8u;
            goto label_13cbc8;
        }
    }
    ctx->pc = 0x13CBB8u;
    // 0x13cbb8: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x13cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cbbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cbc0: 0x450101ad  bc1t        . + 4 + (0x1AD << 2)
    ctx->pc = 0x13CBC0u;
    {
        const bool branch_taken_0x13cbc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cbc0) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13CBC8u;
label_13cbc8:
    // 0x13cbc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13cbc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cbcc: 0x0  nop
    ctx->pc = 0x13cbccu;
    // NOP
    // 0x13cbd0: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x13cbd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cbd4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x13CBD4u;
    {
        const bool branch_taken_0x13cbd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBD4u;
        // 0x13cbd8: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbd4) {
            ctx->pc = 0x13CC20u;
            goto label_13cc20;
        }
    }
    ctx->pc = 0x13CBDCu;
    // 0x13cbdc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cbe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13cbe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cbe4: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13cbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13cbe8: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13cbec: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13CBECu;
    SET_GPR_U32(ctx, 31, 0x13CBF4u);
    ctx->pc = 0x13CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CBECu;
    // 0x13cbf0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13CBECu, 0x13CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CBF4u;
label_13cbf4:
    // 0x13cbf4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13cbf8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cbfc: 0x34643070  ori         $a0, $v1, 0x3070
    ctx->pc = 0x13cbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12400);
    // 0x13cc00: 0x34433070  ori         $v1, $v0, 0x3070
    ctx->pc = 0x13cc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13cc04: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cc08: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x13cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13cc0c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13cc0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13cc10: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13cc10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13cc14: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13cc14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13cc18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13CC18u;
    {
        const bool branch_taken_0x13cc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC18u;
        // 0x13cc1c: 0xf8830000  sqc2        $vf3, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc18) {
            ctx->pc = 0x13CC58u;
            goto label_13cc58;
        }
    }
    ctx->pc = 0x13CC20u;
label_13cc20:
    // 0x13cc20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cc24: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13cc24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13cc28: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x13cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13cc2c: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x13cc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13cc30: 0x34473030  ori         $a3, $v0, 0x3030
    ctx->pc = 0x13cc30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13cc34: 0xc04e6e8  jal         func_139BA0
    ctx->pc = 0x13CC34u;
    SET_GPR_U32(ctx, 31, 0x13CC3Cu);
    ctx->pc = 0x13CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC34u;
    // 0x13cc38: 0x34483040  ori         $t0, $v0, 0x3040 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BA0u, 0x13CC34u, 0x13CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC3Cu;
label_13cc3c:
    // 0x13cc3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cc40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13CC40u;
    {
        const bool branch_taken_0x13cc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cc40) {
            ctx->pc = 0x13CC58u;
            goto label_13cc58;
        }
    }
    ctx->pc = 0x13CC48u;
    // 0x13cc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cc4c: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x13CC4Cu;
    {
        const bool branch_taken_0x13cc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC4Cu;
        // 0x13cc50: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc4c) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13CC54u;
    // 0x13cc54: 0x0  nop
    ctx->pc = 0x13cc54u;
    // NOP
label_13cc58:
    // 0x13cc58: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13cc58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc5c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13CC5Cu;
    {
        const bool branch_taken_0x13cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC5Cu;
        // 0x13cc60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc5c) {
            ctx->pc = 0x13CD20u;
            goto label_13cd20;
        }
    }
    ctx->pc = 0x13CC64u;
    // 0x13cc64: 0x0  nop
    ctx->pc = 0x13cc64u;
    // NOP
label_13cc68:
    // 0x13cc68: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x13cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x13cc6c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x13cc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x13cc70: 0x244248e8  addiu       $v0, $v0, 0x48E8
    ctx->pc = 0x13cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18664));
    // 0x13cc74: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cc78: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x13cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13cc7c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13cc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cc80: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13cc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x13cc84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cc88: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cc8c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13cc90: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13cc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13cc94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cc98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cc9c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13cca0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13cca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cca4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x13cca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13cca8: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13cca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ccac: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13ccacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ccb0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x13ccb4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ccb8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13ccbc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13ccc0: 0x34633070  ori         $v1, $v1, 0x3070
    ctx->pc = 0x13ccc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12400);
    // 0x13ccc4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13ccc8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x13ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13cccc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13ccccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13ccd0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13ccd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ccd4: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13ccd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ccd8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13ccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ccdc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x13ccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13cce0: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x13cce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13cce4: 0xc041460  jal         func_105180
    ctx->pc = 0x13CCE4u;
    SET_GPR_U32(ctx, 31, 0x13CCECu);
    ctx->pc = 0x13CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCE4u;
    // 0x13cce8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x13CCE4u, 0x13CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCECu;
label_13ccec:
    // 0x13ccec: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13ccf0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13CCF0u;
    SET_GPR_U32(ctx, 31, 0x13CCF8u);
    ctx->pc = 0x13CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCF0u;
    // 0x13ccf4: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13CCF0u, 0x13CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCF8u;
label_13ccf8:
    // 0x13ccf8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13ccf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ccfc: 0x0  nop
    ctx->pc = 0x13ccfcu;
    // NOP
    // 0x13cd00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cd00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cd04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13CD04u;
    {
        const bool branch_taken_0x13cd04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cd04) {
            ctx->pc = 0x13CD18u;
            goto label_13cd18;
        }
    }
    ctx->pc = 0x13CD0Cu;
    // 0x13cd0c: 0x64100003  daddiu      $s0, $zero, 0x3
    ctx->pc = 0x13cd0cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x13cd10: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x13cd10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13cd14: 0x0  nop
    ctx->pc = 0x13cd14u;
    // NOP
label_13cd18:
    // 0x13cd18: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x13cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13cd1c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13cd1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13cd20:
    // 0x13cd20: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13cd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x13cd24: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x13cd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13cd28: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x13CD28u;
    {
        const bool branch_taken_0x13cd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cd28) {
            ctx->pc = 0x13CC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cc68;
        }
    }
    ctx->pc = 0x13CD30u;
    // 0x13cd30: 0x16a0001b  bnez        $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x13CD30u;
    {
        const bool branch_taken_0x13cd30 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cd30) {
            ctx->pc = 0x13CDA0u;
            goto label_13cda0;
        }
    }
    ctx->pc = 0x13CD38u;
    // 0x13cd38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13cd38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cd3c: 0x0  nop
    ctx->pc = 0x13cd3cu;
    // NOP
    // 0x13cd40: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x13cd40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cd44: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x13CD44u;
    {
        const bool branch_taken_0x13cd44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD44u;
        // 0x13cd48: 0x64170001  daddiu      $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd44) {
            ctx->pc = 0x13CD78u;
            goto label_13cd78;
        }
    }
    ctx->pc = 0x13CD4Cu;
    // 0x13cd4c: 0x4614d041  sub.s       $f1, $f26, $f20
    ctx->pc = 0x13cd4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[20]);
    // 0x13cd50: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x13cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x13cd54: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cd58: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13cd5c: 0x344430b0  ori         $a0, $v0, 0x30B0
    ctx->pc = 0x13cd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13cd60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13cd60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cd64: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13CD64u;
    SET_GPR_U32(ctx, 31, 0x13CD6Cu);
    ctx->pc = 0x13CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD64u;
    // 0x13cd68: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13CD64u, 0x13CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD6Cu;
label_13cd6c:
    // 0x13cd6c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x13CD6Cu;
    {
        const bool branch_taken_0x13cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cd6c) {
            ctx->pc = 0x13D218u;
            goto label_13d218;
        }
    }
    ctx->pc = 0x13CD74u;
    // 0x13cd74: 0x0  nop
    ctx->pc = 0x13cd74u;
    // NOP
label_13cd78:
    // 0x13cd78: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x13cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x13cd7c: 0x4614d040  add.s       $f1, $f26, $f20
    ctx->pc = 0x13cd7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[20]);
    // 0x13cd80: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cd84: 0x344430b0  ori         $a0, $v0, 0x30B0
    ctx->pc = 0x13cd84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13cd88: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13cd8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13cd8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cd90: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13CD90u;
    SET_GPR_U32(ctx, 31, 0x13CD98u);
    ctx->pc = 0x13CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD90u;
    // 0x13cd94: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13CD90u, 0x13CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD98u;
label_13cd98:
    // 0x13cd98: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x13CD98u;
    {
        const bool branch_taken_0x13cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cd98) {
            ctx->pc = 0x13D218u;
            goto label_13d218;
        }
    }
    ctx->pc = 0x13CDA0u;
label_13cda0:
    // 0x13cda0: 0x3c024f80  lui         $v0, 0x4F80
    ctx->pc = 0x13cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20352 << 16));
    // 0x13cda4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x13cda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13cda8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13cda8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cdac: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x13CDACu;
    {
        const bool branch_taken_0x13cdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDACu;
        // 0x13cdb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdac) {
            ctx->pc = 0x13D1B0u;
            goto label_13d1b0;
        }
    }
    ctx->pc = 0x13CDB4u;
    // 0x13cdb4: 0x0  nop
    ctx->pc = 0x13cdb4u;
    // NOP
label_13cdb8:
    // 0x13cdb8: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x13cdb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13cdbc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x13cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x13cdc0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13cdc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13cdc4: 0x246348e8  addiu       $v1, $v1, 0x48E8
    ctx->pc = 0x13cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18664));
    // 0x13cdc8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cdcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13cdd0: 0x34453060  ori         $a1, $v0, 0x3060
    ctx->pc = 0x13cdd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    // 0x13cdd4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13cdd8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13cdd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cddc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13cddcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13cde0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cde4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cde8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13cdec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13cdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13cdf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cdf4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cdf8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13cdfc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13cdfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce00: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x13ce00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ce04: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13ce04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ce08: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ce0c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce10: 0x34443050  ori         $a0, $v0, 0x3050
    ctx->pc = 0x13ce10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13ce14: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce18: 0x34453060  ori         $a1, $v0, 0x3060
    ctx->pc = 0x13ce18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    // 0x13ce1c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce20: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13CE20u;
    SET_GPR_U32(ctx, 31, 0x13CE28u);
    ctx->pc = 0x13CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE20u;
    // 0x13ce24: 0x34463060  ori         $a2, $v0, 0x3060 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13CE20u, 0x13CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE28u;
label_13ce28:
    // 0x13ce28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ce28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce2c: 0xc4233050  lwc1        $f3, 0x3050($at)
    ctx->pc = 0x13ce2cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ce30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ce30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ce34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ce34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce38: 0xc4223054  lwc1        $f2, 0x3054($at)
    ctx->pc = 0x13ce38u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ce3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ce3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce40: 0xc4213058  lwc1        $f1, 0x3058($at)
    ctx->pc = 0x13ce40u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ce44: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x13ce44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x13ce48: 0x46020d80  add.s       $f22, $f1, $f2
    ctx->pc = 0x13ce48u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13ce4c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x13ce4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ce50: 0x450100d3  bc1t        . + 4 + (0xD3 << 2)
    ctx->pc = 0x13CE50u;
    {
        const bool branch_taken_0x13ce50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE50u;
        // 0x13ce54: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce50) {
            ctx->pc = 0x13D1A0u;
            goto label_13d1a0;
        }
    }
    ctx->pc = 0x13CE58u;
    // 0x13ce58: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce5c: 0x34643050  ori         $a0, $v1, 0x3050
    ctx->pc = 0x13ce5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12368);
    // 0x13ce60: 0x34433030  ori         $v1, $v0, 0x3030
    ctx->pc = 0x13ce60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13ce64: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13ce68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13ce68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13ce6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ce70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13ce74: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13ce78: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13ce78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ce7c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13ce7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce80: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13ce80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ce84: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ce88: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce8c: 0x34443050  ori         $a0, $v0, 0x3050
    ctx->pc = 0x13ce8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13ce90: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce94: 0x34453050  ori         $a1, $v0, 0x3050
    ctx->pc = 0x13ce94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    // 0x13ce98: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13ce9c: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13CE9Cu;
    SET_GPR_U32(ctx, 31, 0x13CEA4u);
    ctx->pc = 0x13CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE9Cu;
    // 0x13cea0: 0x34463060  ori         $a2, $v0, 0x3060 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13CE9Cu, 0x13CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEA4u;
label_13cea4:
    // 0x13cea4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13cea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13cea8: 0xc4233050  lwc1        $f3, 0x3050($at)
    ctx->pc = 0x13cea8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ceac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ceacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ceb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ceb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ceb4: 0xc4223054  lwc1        $f2, 0x3054($at)
    ctx->pc = 0x13ceb4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ceb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13cebc: 0xc4213058  lwc1        $f1, 0x3058($at)
    ctx->pc = 0x13cebcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cec0: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x13cec0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x13cec4: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x13cec4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13cec8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x13cec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cecc: 0x450100b4  bc1t        . + 4 + (0xB4 << 2)
    ctx->pc = 0x13CECCu;
    {
        const bool branch_taken_0x13cecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cecc) {
            ctx->pc = 0x13D1A0u;
            goto label_13d1a0;
        }
    }
    ctx->pc = 0x13CED4u;
    // 0x13ced4: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x13ced4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ced8: 0x450100b1  bc1t        . + 4 + (0xB1 << 2)
    ctx->pc = 0x13CED8u;
    {
        const bool branch_taken_0x13ced8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ced8) {
            ctx->pc = 0x13D1A0u;
            goto label_13d1a0;
        }
    }
    ctx->pc = 0x13CEE0u;
    // 0x13cee0: 0x0  nop
    ctx->pc = 0x13cee0u;
    // NOP
    // 0x13cee4: 0x0  nop
    ctx->pc = 0x13cee4u;
    // NOP
    // 0x13cee8: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x13cee8u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[22]); }
    // 0x13ceec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cef0: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13cef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13cef4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13CEF4u;
    SET_GPR_U32(ctx, 31, 0x13CEFCu);
    ctx->pc = 0x13CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEF4u;
    // 0x13cef8: 0x34453060  ori         $a1, $v0, 0x3060 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13CEF4u, 0x13CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEFCu;
label_13cefc:
    // 0x13cefc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf04: 0x34643070  ori         $a0, $v1, 0x3070
    ctx->pc = 0x13cf04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12400);
    // 0x13cf08: 0x34433070  ori         $v1, $v0, 0x3070
    ctx->pc = 0x13cf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13cf0c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13cf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13cf10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13cf10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13cf14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cf18: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13cf1c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13cf20: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13cf20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cf24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13cf24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cf28: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13cf28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13cf2c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13cf30: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf34: 0x34443070  ori         $a0, $v0, 0x3070
    ctx->pc = 0x13cf34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13cf38: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf3c: 0xc04d80c  jal         func_136030
    ctx->pc = 0x13CF3Cu;
    SET_GPR_U32(ctx, 31, 0x13CF44u);
    ctx->pc = 0x13CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF3Cu;
    // 0x13cf40: 0x34453030  ori         $a1, $v0, 0x3030 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x13CF3Cu, 0x13CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF44u;
label_13cf44:
    // 0x13cf44: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x13cf44u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x13cf48: 0x4619b036  c.le.s      $f22, $f25
    ctx->pc = 0x13cf48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cf4c: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x13CF4Cu;
    {
        const bool branch_taken_0x13cf4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cf4c) {
            ctx->pc = 0x13D060u;
            goto label_13d060;
        }
    }
    ctx->pc = 0x13CF54u;
    // 0x13cf54: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x13cf54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cf58: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x13CF58u;
    {
        const bool branch_taken_0x13cf58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cf58) {
            ctx->pc = 0x13D060u;
            goto label_13d060;
        }
    }
    ctx->pc = 0x13CF60u;
    // 0x13cf60: 0x46160504  c1          0x160504
    ctx->pc = 0x13cf60u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[22]);
    // 0x13cf64: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf68: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13cf68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13cf6c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf70: 0x34433030  ori         $v1, $v0, 0x3030
    ctx->pc = 0x13cf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13cf74: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf78: 0x34423070  ori         $v0, $v0, 0x3070
    ctx->pc = 0x13cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13cf7c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13cf7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13cf80: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13cf80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13cf84: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13cf84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13cf88: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13cf8c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf90: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13cf90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13cf94: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf98: 0xc041472  jal         func_1051C8
    ctx->pc = 0x13CF98u;
    SET_GPR_U32(ctx, 31, 0x13CFA0u);
    ctx->pc = 0x13CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF98u;
    // 0x13cf9c: 0x34453080  ori         $a1, $v0, 0x3080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x13CF98u, 0x13CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFA0u;
label_13cfa0:
    // 0x13cfa0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13cfa4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cfa8: 0x34643050  ori         $a0, $v1, 0x3050
    ctx->pc = 0x13cfa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12368);
    // 0x13cfac: 0x34433040  ori         $v1, $v0, 0x3040
    ctx->pc = 0x13cfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    // 0x13cfb0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cfb4: 0x34423070  ori         $v0, $v0, 0x3070
    ctx->pc = 0x13cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12400);
    // 0x13cfb8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13cfb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003040u));
    // 0x13cfbc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13cfbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003070u));
    // 0x13cfc0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13cfc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13cfc4: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13cfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13cfc8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cfcc: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13cfccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13cfd0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13cfd4: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13CFD4u;
    SET_GPR_U32(ctx, 31, 0x13CFDCu);
    ctx->pc = 0x13CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFD4u;
    // 0x13cfd8: 0x34453050  ori         $a1, $v0, 0x3050 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13CFD4u, 0x13CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFDCu;
label_13cfdc:
    // 0x13cfdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13cfdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13cfe0: 0x0  nop
    ctx->pc = 0x13cfe0u;
    // NOP
    // 0x13cfe4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cfe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cfe8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x13CFE8u;
    {
        const bool branch_taken_0x13cfe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13cfe8) {
            ctx->pc = 0x13D020u;
            goto label_13d020;
        }
    }
    ctx->pc = 0x13CFF0u;
    // 0x13cff0: 0x4601b836  c.le.s      $f23, $f1
    ctx->pc = 0x13cff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cff4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13CFF4u;
    {
        const bool branch_taken_0x13cff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFF4u;
        // 0x13cff8: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cff4) {
            ctx->pc = 0x13D018u;
            goto label_13d018;
        }
    }
    ctx->pc = 0x13CFFCu;
    // 0x13cffc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d000: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13d000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13d004: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13d004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13d008: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13D008u;
    SET_GPR_U32(ctx, 31, 0x13D010u);
    ctx->pc = 0x13D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D008u;
    // 0x13d00c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13D008u, 0x13D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D010u;
label_13d010:
    // 0x13d010: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D010u;
    {
        const bool branch_taken_0x13d010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d010) {
            ctx->pc = 0x13D028u;
            goto label_13d028;
        }
    }
    ctx->pc = 0x13D018u;
label_13d018:
    // 0x13d018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D018u;
    {
        const bool branch_taken_0x13d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D018u;
        // 0x13d01c: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d018) {
            ctx->pc = 0x13D028u;
            goto label_13d028;
        }
    }
    ctx->pc = 0x13D020u;
label_13d020:
    // 0x13d020: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x13d020u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x13d024: 0x0  nop
    ctx->pc = 0x13d024u;
    // NOP
label_13d028:
    // 0x13d028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d02c: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x13d02cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d030: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13d030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13d034: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d038: 0x346330c0  ori         $v1, $v1, 0x30C0
    ctx->pc = 0x13d038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12480);
    // 0x13d03c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x13d03cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d044: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x13d044u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x13d048: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d04c: 0x34423080  ori         $v0, $v0, 0x3080
    ctx->pc = 0x13d04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13d050: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13d050u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003080u));
    // 0x13d054: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x13d054u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x13d058: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x13d058u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x13d05c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_13d060:
    // 0x13d060: 0x16a0004f  bnez        $s5, . + 4 + (0x4F << 2)
    ctx->pc = 0x13D060u;
    {
        const bool branch_taken_0x13d060 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D060u;
        // 0x13d064: 0x101c3c  dsll32      $v1, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d060) {
            ctx->pc = 0x13D1A0u;
            goto label_13d1a0;
        }
    }
    ctx->pc = 0x13D068u;
    // 0x13d068: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d06c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13d06cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13d070: 0x34443030  ori         $a0, $v0, 0x3030
    ctx->pc = 0x13d070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13d074: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13d074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13d078: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x13d078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x13d07c: 0xc04d80c  jal         func_136030
    ctx->pc = 0x13D07Cu;
    SET_GPR_U32(ctx, 31, 0x13D084u);
    ctx->pc = 0x13D080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D07Cu;
    // 0x13d080: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x13D07Cu, 0x13D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D084u;
label_13d084:
    // 0x13d084: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x13d084u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x13d088: 0x4619b036  c.le.s      $f22, $f25
    ctx->pc = 0x13d088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d08c: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x13D08Cu;
    {
        const bool branch_taken_0x13d08c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d08c) {
            ctx->pc = 0x13D1A0u;
            goto label_13d1a0;
        }
    }
    ctx->pc = 0x13D094u;
    // 0x13d094: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x13d094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d098: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x13D098u;
    {
        const bool branch_taken_0x13d098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d098) {
            ctx->pc = 0x13D1A0u;
            goto label_13d1a0;
        }
    }
    ctx->pc = 0x13D0A0u;
    // 0x13d0a0: 0x46160504  c1          0x160504
    ctx->pc = 0x13d0a0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[22]);
    // 0x13d0a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d0a8: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13d0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13d0ac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d0b0: 0x34433030  ori         $v1, $v0, 0x3030
    ctx->pc = 0x13d0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13d0b4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13d0b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d0b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d0bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d0c0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13d0c4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d0c8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13d0c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d0cc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13d0ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d0d0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13d0d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d0d4: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13d0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13d0d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d0dc: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13d0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13d0e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d0e4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x13D0E4u;
    SET_GPR_U32(ctx, 31, 0x13D0ECu);
    ctx->pc = 0x13D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D0E4u;
    // 0x13d0e8: 0x34453080  ori         $a1, $v0, 0x3080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x13D0E4u, 0x13D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0ECu;
label_13d0ec:
    // 0x13d0ec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13d0f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d0f4: 0x34643050  ori         $a0, $v1, 0x3050
    ctx->pc = 0x13d0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12368);
    // 0x13d0f8: 0x34433040  ori         $v1, $v0, 0x3040
    ctx->pc = 0x13d0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12352);
    // 0x13d0fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13d0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13d100: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d100u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d104: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13d104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d108: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13d10c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d110: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13d110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d114: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13d114u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d118: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13d118u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d11c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13d11cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13d120: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d124: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13d124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13d128: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d12c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13D12Cu;
    SET_GPR_U32(ctx, 31, 0x13D134u);
    ctx->pc = 0x13D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D12Cu;
    // 0x13d130: 0x34453050  ori         $a1, $v0, 0x3050 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12368);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13D12Cu, 0x13D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D134u;
label_13d134:
    // 0x13d134: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d138: 0x0  nop
    ctx->pc = 0x13d138u;
    // NOP
    // 0x13d13c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d140: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x13D140u;
    {
        const bool branch_taken_0x13d140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D140u;
        // 0x13d144: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d140) {
            ctx->pc = 0x13D168u;
            goto label_13d168;
        }
    }
    ctx->pc = 0x13D148u;
    // 0x13d148: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d14c: 0x34443080  ori         $a0, $v0, 0x3080
    ctx->pc = 0x13d14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13d150: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13d150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13d154: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13D154u;
    SET_GPR_U32(ctx, 31, 0x13D15Cu);
    ctx->pc = 0x13D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D154u;
    // 0x13d158: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13D154u, 0x13D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D15Cu;
label_13d15c:
    // 0x13d15c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13D15Cu;
    {
        const bool branch_taken_0x13d15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d15c) {
            ctx->pc = 0x13D170u;
            goto label_13d170;
        }
    }
    ctx->pc = 0x13D164u;
    // 0x13d164: 0x0  nop
    ctx->pc = 0x13d164u;
    // NOP
label_13d168:
    // 0x13d168: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x13d168u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x13d16c: 0x0  nop
    ctx->pc = 0x13d16cu;
    // NOP
label_13d170:
    // 0x13d170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d174: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x13d174u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d178: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13d178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13d17c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d180: 0x346330c0  ori         $v1, $v1, 0x30C0
    ctx->pc = 0x13d180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12480);
    // 0x13d184: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d188: 0x34423080  ori         $v0, $v0, 0x3080
    ctx->pc = 0x13d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13d18c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13d18cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003080u));
    // 0x13d190: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x13d190u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x13d194: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x13d194u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x13d198: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13d198u;
    runtime->Store128(rdram, ctx, 0x700030C0u, GPR_VEC(ctx, 2));
    // 0x13d19c: 0x0  nop
    ctx->pc = 0x13d19cu;
    // NOP
label_13d1a0:
    // 0x13d1a0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x13d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13d1a4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x13d1a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d1a8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x13d1a8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x13d1ac: 0x0  nop
    ctx->pc = 0x13d1acu;
    // NOP
label_13d1b0:
    // 0x13d1b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13d1b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d1b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d1b8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x13d1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13d1bc: 0x1440fefe  bnez        $v0, . + 4 + (-0x102 << 2)
    ctx->pc = 0x13D1BCu;
    {
        const bool branch_taken_0x13d1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d1bc) {
            ctx->pc = 0x13CDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cdb8;
        }
    }
    ctx->pc = 0x13D1C4u;
    // 0x13d1c4: 0x12a0002c  beqz        $s5, . + 4 + (0x2C << 2)
    ctx->pc = 0x13D1C4u;
    {
        const bool branch_taken_0x13d1c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1C4u;
        // 0x13d1c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d1c4) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13D1CCu;
    // 0x13d1cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13d1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1d0: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x13d1d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d1d4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x13d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x13d1d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d1dc: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x13d1dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x13d1e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d1e4: 0x34463080  ori         $a2, $v0, 0x3080
    ctx->pc = 0x13d1e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13d1e8: 0x4614d040  add.s       $f1, $f26, $f20
    ctx->pc = 0x13d1e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[20]);
    // 0x13d1ec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d1f0: 0x344330c0  ori         $v1, $v0, 0x30C0
    ctx->pc = 0x13d1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12480);
    // 0x13d1f4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13d1f4u;
    SET_GPR_VEC(ctx, 3, runtime->Load128(rdram, ctx, 0x700030C0u));
    // 0x13d1f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d1fc: 0x344430b0  ori         $a0, $v0, 0x30B0
    ctx->pc = 0x13d1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13d200: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x13d200u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13d204: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d208: 0x34453080  ori         $a1, $v0, 0x3080
    ctx->pc = 0x13d208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12416);
    // 0x13d20c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d20cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d210: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13D210u;
    SET_GPR_U32(ctx, 31, 0x13D218u);
    ctx->pc = 0x13D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D210u;
    // 0x13d214: 0x7cc30000  sq          $v1, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13D210u, 0x13D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D218u;
label_13d218:
    // 0x13d218: 0x12e00017  beqz        $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x13D218u;
    {
        const bool branch_taken_0x13d218 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D218u;
        // 0x13d21c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d218) {
            ctx->pc = 0x13D278u;
            goto label_13d278;
        }
    }
    ctx->pc = 0x13D220u;
    // 0x13d220: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d224: 0x34643030  ori         $a0, $v1, 0x3030
    ctx->pc = 0x13d224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12336);
    // 0x13d228: 0x344330b0  ori         $v1, $v0, 0x30B0
    ctx->pc = 0x13d228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12464);
    // 0x13d22c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d230: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x13d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13d234: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13d234u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x700030B0u));
    // 0x13d238: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13d238u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13d23c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13d23cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d240: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13d240u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13d244: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13d248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d24c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13d24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13d250: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x13d250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13d254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13d258: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d25c: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x13d25cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x13d260: 0xe420303c  swc1        $f0, 0x303C($at)
    ctx->pc = 0x13d260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000303Cu, bits); }
    // 0x13d264: 0x8e830fbc  lw          $v1, 0xFBC($s4)
    ctx->pc = 0x13d264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4028)));
    // 0x13d268: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x13d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13d26c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13d26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13d270: 0xae820fbc  sw          $v0, 0xFBC($s4)
    ctx->pc = 0x13d270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4028), GPR_U32(ctx, 2));
    // 0x13d274: 0x0  nop
    ctx->pc = 0x13d274u;
    // NOP
label_13d278:
    // 0x13d278: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x13d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x13d27c: 0x2f43c  dsll32      $fp, $v0, 16
    ctx->pc = 0x13d27cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d280: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x13d280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x13d284: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x13d284u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
label_13d288:
    // 0x13d288: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13d28c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d28cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d290: 0x1e243c  dsll32      $a0, $fp, 16
    ctx->pc = 0x13d290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 16));
    // 0x13d294: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x13d294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x13d298: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13d298u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13d29c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x13d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x13d2a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d2a4: 0x9442095c  lhu         $v0, 0x95C($v0)
    ctx->pc = 0x13d2a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2396)));
    // 0x13d2a8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x13d2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13d2ac: 0x1440fd94  bnez        $v0, . + 4 + (-0x26C << 2)
    ctx->pc = 0x13D2ACu;
    {
        const bool branch_taken_0x13d2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d2ac) {
            ctx->pc = 0x13C900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c900;
        }
    }
    ctx->pc = 0x13D2B4u;
    // 0x13d2b4: 0x0  nop
    ctx->pc = 0x13d2b4u;
    // NOP
label_13d2b8:
    // 0x13d2b8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13d2bc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x13d2bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d2c0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13d2c0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13d2c4: 0x0  nop
    ctx->pc = 0x13d2c4u;
    // NOP
label_13d2c8:
    // 0x13d2c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13d2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13d2cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d2ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d2d0: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x13d2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x13d2d4: 0x1440fd7c  bnez        $v0, . + 4 + (-0x284 << 2)
    ctx->pc = 0x13D2D4u;
    {
        const bool branch_taken_0x13d2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d2d4) {
            ctx->pc = 0x13C8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c8c8;
        }
    }
    ctx->pc = 0x13D2DCu;
    // 0x13d2dc: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D2DCu;
    {
        const bool branch_taken_0x13d2dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2DCu;
        // 0x13d2e0: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2dc) {
            ctx->pc = 0x13D2F8u;
            goto label_13d2f8;
        }
    }
    ctx->pc = 0x13D2E4u;
    // 0x13d2e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13d2e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13d2e8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x13d2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13d2ec: 0x1440fd70  bnez        $v0, . + 4 + (-0x290 << 2)
    ctx->pc = 0x13D2ECu;
    {
        const bool branch_taken_0x13d2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d2ec) {
            ctx->pc = 0x13C8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c8b0;
        }
    }
    ctx->pc = 0x13D2F4u;
    // 0x13d2f4: 0x0  nop
    ctx->pc = 0x13d2f4u;
    // NOP
label_13d2f8:
    // 0x13d2f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13d2fc: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x13d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d300: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13d300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13d304: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13d304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d308: 0x34423030  ori         $v0, $v0, 0x3030
    ctx->pc = 0x13d308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x13d30c: 0xe4203034  swc1        $f0, 0x3034($at)
    ctx->pc = 0x13d30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003034u, bits); }
    // 0x13d310: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13d310u;
    SET_GPR_VEC(ctx, 3, runtime->Load128(rdram, ctx, 0x70003030u));
    // 0x13d314: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13d318: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13d318u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13d31c: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x13d31cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13d320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D320u;
    {
        const bool branch_taken_0x13d320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D320u;
        // 0x13d324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d320) {
            ctx->pc = 0x13D330u;
            goto label_13d330;
        }
    }
    ctx->pc = 0x13D328u;
    // 0x13d328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D328u;
    {
        const bool branch_taken_0x13d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d328) {
            ctx->pc = 0x13D338u;
            goto label_13d338;
        }
    }
    ctx->pc = 0x13D330u;
label_13d330:
    // 0x13d330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d334: 0x0  nop
    ctx->pc = 0x13d334u;
    // NOP
label_13d338:
    // 0x13d338: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x13d338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13d33c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x13d33cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13d340: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x13d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x13d344: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x13d344u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13d348: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x13d348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x13d34c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x13d34cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13d350: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x13d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x13d354: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x13d354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13d358: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x13d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x13d35c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x13d35cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13d360: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x13d360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13d364: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x13d364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d368: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13d368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13d36c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x13d36cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d370: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13d370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13d374: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13d374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d378: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13d378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d37c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D37Cu;
        // 0x13d380: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D384u;
}

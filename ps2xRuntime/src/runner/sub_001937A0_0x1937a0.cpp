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

// Function: sub_001937A0
// Address: 0x1937a0 - 0x193b00
void sub_001937A0_0x1937a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001937A0_0x1937a0");
#endif

    switch (ctx->pc) {
        case 0x193808u: goto label_193808;
        case 0x193880u: goto label_193880;
        case 0x193890u: goto label_193890;
        case 0x193904u: goto label_193904;
        case 0x193914u: goto label_193914;
        case 0x1939b0u: goto label_1939b0;
        case 0x1939bcu: goto label_1939bc;
        case 0x1939c8u: goto label_1939c8;
        case 0x193a74u: goto label_193a74;
        case 0x193a80u: goto label_193a80;
        case 0x193a8cu: goto label_193a8c;
        default: break;
    }

    ctx->pc = 0x1937a0u;

    // 0x1937a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1937a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1937a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1937a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1937a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1937a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1937ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1937acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1937b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1937b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1937b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1937b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1937b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1937b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1937bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1937bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1937c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1937c4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1937c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1937c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1937cc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1937ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1937d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1937d4: 0x26920040  addiu       $s2, $s4, 0x40
    ctx->pc = 0x1937d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1937d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1937d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1937dc: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1937dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x1937e0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1937e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1937e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1937e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1937e8: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1937e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1937ec: 0x102000b6  beqz        $at, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1937ECu;
    {
        const bool branch_taken_0x1937ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1937F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937ECu;
        // 0x1937f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937ec) {
            ctx->pc = 0x193AC8u;
            goto label_193ac8;
        }
    }
    ctx->pc = 0x1937F4u;
    // 0x1937f4: 0x27b000c8  addiu       $s0, $sp, 0xC8
    ctx->pc = 0x1937f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1937f8: 0x27b600f8  addiu       $s6, $sp, 0xF8
    ctx->pc = 0x1937f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1937fc: 0x27b700e8  addiu       $s7, $sp, 0xE8
    ctx->pc = 0x1937fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x193800: 0x27be00d4  addiu       $fp, $sp, 0xD4
    ctx->pc = 0x193800u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x193804: 0x0  nop
    ctx->pc = 0x193804u;
    // NOP
label_193808:
    // 0x193808: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x193808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x19380c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x19380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193810: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x193810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x193814: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x193814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193818: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x193818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x19381c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19381cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193820: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x193820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x193824: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x193824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193828: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x193828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19382c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19382cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193830: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193834: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x193834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193838: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x193838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x19383c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x19383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193840: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193844: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x193844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x193848: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x193848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19384c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x19384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193850: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193854: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193858: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x193858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19385c: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x19385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x193860: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x193860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193864: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193868: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x193868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x19386c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x19386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193870: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x193870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193874: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193878: 0xc065144  jal         func_194510
    ctx->pc = 0x193878u;
    SET_GPR_U32(ctx, 31, 0x193880u);
    ctx->pc = 0x19387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193878u;
    // 0x19387c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x194510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194510u, 0x193878u, 0x193880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193880u;
label_193880:
    // 0x193880: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x193880u;
    {
        const bool branch_taken_0x193880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193880u;
        // 0x193884: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193880) {
            ctx->pc = 0x193AA8u;
            goto label_193aa8;
        }
    }
    ctx->pc = 0x193888u;
    // 0x193888: 0xc065144  jal         func_194510
    ctx->pc = 0x193888u;
    SET_GPR_U32(ctx, 31, 0x193890u);
    ctx->pc = 0x19388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193888u;
    // 0x19388c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194510u, 0x193888u, 0x193890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193890u;
label_193890:
    // 0x193890: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x193890u;
    {
        const bool branch_taken_0x193890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193890) {
            ctx->pc = 0x193AA8u;
            goto label_193aa8;
        }
    }
    ctx->pc = 0x193898u;
    // 0x193898: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x193898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19389c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x19389cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1938a0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1938a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1938a4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1938a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1938a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1938a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1938ac: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1938acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1938b0: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1938b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1938b4: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1938b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1938b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1938b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1938bc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1938bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1938c0: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x1938c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1938c4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1938c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1938c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1938c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1938cc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1938ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1938d0: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x1938d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1938d4: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1938d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1938d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1938d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1938dc: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1938dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1938e0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1938e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1938e4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1938e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1938e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1938e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1938ec: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1938ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1938f0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1938f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1938f4: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1938f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1938f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1938f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1938fc: 0xc065144  jal         func_194510
    ctx->pc = 0x1938FCu;
    SET_GPR_U32(ctx, 31, 0x193904u);
    ctx->pc = 0x193900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1938FCu;
    // 0x193900: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x194510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194510u, 0x1938FCu, 0x193904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193904u;
label_193904:
    // 0x193904: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x193904u;
    {
        const bool branch_taken_0x193904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193904u;
        // 0x193908: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193904) {
            ctx->pc = 0x193AA8u;
            goto label_193aa8;
        }
    }
    ctx->pc = 0x19390Cu;
    // 0x19390c: 0xc065144  jal         func_194510
    ctx->pc = 0x19390Cu;
    SET_GPR_U32(ctx, 31, 0x193914u);
    ctx->pc = 0x193910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19390Cu;
    // 0x193910: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194510u, 0x19390Cu, 0x193914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193914u;
label_193914:
    // 0x193914: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x193914u;
    {
        const bool branch_taken_0x193914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193914) {
            ctx->pc = 0x193AA8u;
            goto label_193aa8;
        }
    }
    ctx->pc = 0x19391Cu;
    // 0x19391c: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19391Cu;
    {
        const bool branch_taken_0x19391c = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x193920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19391Cu;
        // 0x193920: 0xc6a10004  lwc1        $f1, 0x4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19391c) {
            ctx->pc = 0x193930u;
            goto label_193930;
        }
    }
    ctx->pc = 0x193924u;
    // 0x193924: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x193924u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193928: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193928u;
    {
        const bool branch_taken_0x193928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193928u;
        // 0x19392c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193928) {
            ctx->pc = 0x19394Cu;
            goto label_19394c;
        }
    }
    ctx->pc = 0x193930u;
label_193930:
    // 0x193930: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x193930u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x193934: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x193934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x193938: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x193938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19393c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19393cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193940: 0x0  nop
    ctx->pc = 0x193940u;
    // NOP
    // 0x193944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x193948: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19394c:
    // 0x19394c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19394cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193950: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x193950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x193954: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x193954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x193958: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x193958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19395c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x19395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x193960: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x193960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x193964: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x193964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19396c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x19396cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x193970: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x193970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x193974: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x193974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193978: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x193978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x19397c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x19397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193980: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193984: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193988: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x193988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x19398c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19398cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x193990: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x193990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193994: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x193994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x193998: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x193998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19399c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19399cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1939a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1939a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1939a4: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1939a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1939a8: 0xc041460  jal         func_105180
    ctx->pc = 0x1939A8u;
    SET_GPR_U32(ctx, 31, 0x1939B0u);
    ctx->pc = 0x1939ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1939A8u;
    // 0x1939ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1939A8u, 0x1939B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1939B0u;
label_1939b0:
    // 0x1939b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1939b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1939b4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1939B4u;
    SET_GPR_U32(ctx, 31, 0x1939BCu);
    ctx->pc = 0x1939B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1939B4u;
    // 0x1939b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1939B4u, 0x1939BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1939BCu;
label_1939bc:
    // 0x1939bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1939bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1939c0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1939C0u;
    SET_GPR_U32(ctx, 31, 0x1939C8u);
    ctx->pc = 0x1939C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1939C0u;
    // 0x1939c4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1939C0u, 0x1939C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1939C8u;
label_1939c8:
    // 0x1939c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1939c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1939cc: 0x0  nop
    ctx->pc = 0x1939ccu;
    // NOP
    // 0x1939d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1939d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1939d4: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x1939D4u;
    {
        const bool branch_taken_0x1939d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1939d4) {
            ctx->pc = 0x193AA8u;
            goto label_193aa8;
        }
    }
    ctx->pc = 0x1939DCu;
    // 0x1939dc: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1939DCu;
    {
        const bool branch_taken_0x1939dc = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x1939E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939DCu;
        // 0x1939e0: 0xc6a10004  lwc1        $f1, 0x4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939dc) {
            ctx->pc = 0x1939F0u;
            goto label_1939f0;
        }
    }
    ctx->pc = 0x1939E4u;
    // 0x1939e4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1939e4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1939e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1939E8u;
    {
        const bool branch_taken_0x1939e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939E8u;
        // 0x1939ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939e8) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x1939F0u;
label_1939f0:
    // 0x1939f0: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x1939f4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1939f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1939f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1939f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1939fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1939fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193a00: 0x0  nop
    ctx->pc = 0x193a00u;
    // NOP
    // 0x193a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x193a08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_193a0c:
    // 0x193a0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x193a0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193a10: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x193a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x193a14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x193a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x193a18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x193a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x193a1c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x193a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193a20: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x193a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x193a24: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x193a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193a28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193a2c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193a30: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x193a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x193a34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x193a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x193a38: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x193a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193a3c: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x193a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x193a40: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x193a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193a48: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193a4c: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x193a50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x193a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x193a54: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x193a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193a58: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x193a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x193a5c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x193a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193a64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193a68: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x193a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x193a6c: 0xc041460  jal         func_105180
    ctx->pc = 0x193A6Cu;
    SET_GPR_U32(ctx, 31, 0x193A74u);
    ctx->pc = 0x193A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A6Cu;
    // 0x193a70: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x193A6Cu, 0x193A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A74u;
label_193a74:
    // 0x193a74: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x193a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x193a78: 0xc041472  jal         func_1051C8
    ctx->pc = 0x193A78u;
    SET_GPR_U32(ctx, 31, 0x193A80u);
    ctx->pc = 0x193A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A78u;
    // 0x193a7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x193A78u, 0x193A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A80u;
label_193a80:
    // 0x193a80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x193a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x193a84: 0xc041468  jal         func_1051A0
    ctx->pc = 0x193A84u;
    SET_GPR_U32(ctx, 31, 0x193A8Cu);
    ctx->pc = 0x193A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A84u;
    // 0x193a88: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x193A84u, 0x193A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A8Cu;
label_193a8c:
    // 0x193a8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x193a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193a90: 0x0  nop
    ctx->pc = 0x193a90u;
    // NOP
    // 0x193a94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x193a94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193a98: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x193A98u;
    {
        const bool branch_taken_0x193a98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A98u;
        // 0x193a9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a98) {
            ctx->pc = 0x193AA8u;
            goto label_193aa8;
        }
    }
    ctx->pc = 0x193AA0u;
    // 0x193aa0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x193AA0u;
    {
        const bool branch_taken_0x193aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193aa0) {
            ctx->pc = 0x193AD0u;
            goto label_193ad0;
        }
    }
    ctx->pc = 0x193AA8u;
label_193aa8:
    // 0x193aa8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x193aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x193aac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x193ab0: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x193ab0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x193ab4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x193ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x193ab8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x193ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193abc: 0x1440ff52  bnez        $v0, . + 4 + (-0xAE << 2)
    ctx->pc = 0x193ABCu;
    {
        const bool branch_taken_0x193abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193ABCu;
        // 0x193ac0: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193abc) {
            ctx->pc = 0x193808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193808;
        }
    }
    ctx->pc = 0x193AC4u;
    // 0x193ac4: 0x0  nop
    ctx->pc = 0x193ac4u;
    // NOP
label_193ac8:
    // 0x193ac8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193acc: 0x0  nop
    ctx->pc = 0x193accu;
    // NOP
label_193ad0:
    // 0x193ad0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x193ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x193ad4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x193ad4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193ad8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x193ad8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193adc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x193adcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193ae0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x193ae0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193ae4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x193ae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193ae8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x193ae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193aec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193af8: 0x3e00008  jr          $ra
    ctx->pc = 0x193AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AF8u;
        // 0x193afc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193B00u;
}

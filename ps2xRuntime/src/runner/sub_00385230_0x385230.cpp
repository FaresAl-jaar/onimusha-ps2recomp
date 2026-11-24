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

// Function: sub_00385230
// Address: 0x385230 - 0x3858b4
void sub_00385230_0x385230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385230_0x385230");
#endif

    switch (ctx->pc) {
        case 0x38527cu: goto label_38527c;
        case 0x3852dcu: goto label_3852dc;
        case 0x3852fcu: goto label_3852fc;
        case 0x385394u: goto label_385394;
        case 0x3853b4u: goto label_3853b4;
        case 0x385444u: goto label_385444;
        case 0x385458u: goto label_385458;
        case 0x385478u: goto label_385478;
        case 0x3854d8u: goto label_3854d8;
        case 0x3854f8u: goto label_3854f8;
        case 0x385588u: goto label_385588;
        case 0x38559cu: goto label_38559c;
        case 0x3855bcu: goto label_3855bc;
        case 0x385618u: goto label_385618;
        case 0x385638u: goto label_385638;
        case 0x3856c8u: goto label_3856c8;
        case 0x3856dcu: goto label_3856dc;
        case 0x3856fcu: goto label_3856fc;
        case 0x385758u: goto label_385758;
        case 0x385778u: goto label_385778;
        case 0x385810u: goto label_385810;
        case 0x385830u: goto label_385830;
        default: break;
    }

    ctx->pc = 0x385230u;

    // 0x385230: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x385230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
    // 0x385234: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x385234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x385238: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x385238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x38523c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x38523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x385240: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x385240u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385244: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x385244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x385248: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x385248u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38524c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x385250: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x385250u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385254: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x385254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x385258: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x385258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38525c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x385260: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x385260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385264: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x385264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x385268: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x385268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38526c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x385270: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x385270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385274: 0xc0d0494  jal         func_341250
    ctx->pc = 0x385274u;
    SET_GPR_U32(ctx, 31, 0x38527Cu);
    ctx->pc = 0x385278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385274u;
    // 0x385278: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x385274u, 0x38527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38527Cu;
label_38527c:
    // 0x38527c: 0xc6a30020  lwc1        $f3, 0x20($s5)
    ctx->pc = 0x38527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385280: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x385280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x385284: 0xc6a20024  lwc1        $f2, 0x24($s5)
    ctx->pc = 0x385284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385288: 0x27a30290  addiu       $v1, $sp, 0x290
    ctx->pc = 0x385288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x38528c: 0xc6a10028  lwc1        $f1, 0x28($s5)
    ctx->pc = 0x38528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385290: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x385290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x385294: 0xc6a0002c  lwc1        $f0, 0x2C($s5)
    ctx->pc = 0x385294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385298: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x385298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38529c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x38529cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3852a0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3852a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3852a4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3852a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3852a8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x3852a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x3852ac: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3852acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3852b0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3852b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3852b4: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x3852b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x3852b8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3852b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3852bc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3852bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3852c0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3852c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3852c4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3852c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3852c8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3852c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3852cc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3852ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3852d0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3852d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3852d4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3852D4u;
    SET_GPR_U32(ctx, 31, 0x3852DCu);
    ctx->pc = 0x3852D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3852D4u;
    // 0x3852d8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3852D4u, 0x3852DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3852DCu;
label_3852dc:
    // 0x3852dc: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x3852dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3852e0: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x3852e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x3852e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3852e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3852e8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3852e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3852ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3852ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3852f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3852f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3852f4: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x3852F4u;
    SET_GPR_U32(ctx, 31, 0x3852FCu);
    ctx->pc = 0x3852F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3852F4u;
    // 0x3852f8: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x3852F4u, 0x3852FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3852FCu;
label_3852fc:
    // 0x3852fc: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x3852fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x385300: 0x27a803b0  addiu       $t0, $sp, 0x3B0
    ctx->pc = 0x385300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x385304: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385308: 0x27a70280  addiu       $a3, $sp, 0x280
    ctx->pc = 0x385308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x38530c: 0x27a30270  addiu       $v1, $sp, 0x270
    ctx->pc = 0x38530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x385310: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x385310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x385314: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x385314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385318: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x385318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38531c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x38531cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x385320: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x385320u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x385324: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x385324u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x385328: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x385328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x38532c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x38532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385330: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x385330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385334: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x385334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385338: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x385338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38533c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x38533cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x385340: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x385340u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x385344: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x385344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x385348: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x385348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x38534c: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x38534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385350: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x385350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385354: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x385354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385358: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x385358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38535c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x38535cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x385360: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x385360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x385364: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x385364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x385368: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x385368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x38536c: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x38536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x385370: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x385370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385374: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x385374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385378: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x385378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38537c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x38537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385380: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x385380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x385384: 0xe4420024  swc1        $f2, 0x24($v0)
    ctx->pc = 0x385384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x385388: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x385388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x38538c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x38538Cu;
    SET_GPR_U32(ctx, 31, 0x385394u);
    ctx->pc = 0x385390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38538Cu;
    // 0x385390: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x38538Cu, 0x385394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385394u;
label_385394:
    // 0x385394: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x385394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x385398: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x385398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x38539c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x38539cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3853a0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3853a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3853a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3853a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3853a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3853a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3853ac: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x3853ACu;
    SET_GPR_U32(ctx, 31, 0x3853B4u);
    ctx->pc = 0x3853B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3853ACu;
    // 0x3853b0: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x3853ACu, 0x3853B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3853B4u;
label_3853b4:
    // 0x3853b4: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x3853b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3853b8: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x3853b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x3853bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3853bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3853c0: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x3853c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x3853c4: 0x27a30250  addiu       $v1, $sp, 0x250
    ctx->pc = 0x3853c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x3853c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3853c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3853cc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3853ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3853d0: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x3853d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3853d4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3853d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3853d8: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x3853d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x3853dc: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3853dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3853e0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3853e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3853e4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3853e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3853e8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3853e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3853ec: 0xe4430030  swc1        $f3, 0x30($v0)
    ctx->pc = 0x3853ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3853f0: 0xe4420034  swc1        $f2, 0x34($v0)
    ctx->pc = 0x3853f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3853f4: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x3853f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3853f8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x3853f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x3853fc: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x3853fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385400: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x385400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385404: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x385404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385408: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x385408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38540c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x38540cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x385410: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x385410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x385414: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x385414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x385418: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x385418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x38541c: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x38541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x385420: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x385420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385424: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x385424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385428: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x385428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38542c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x38542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385430: 0xe4430040  swc1        $f3, 0x40($v0)
    ctx->pc = 0x385430u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x385434: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x385434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x385438: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x385438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x38543c: 0xc07ccf4  jal         func_1F33D0
    ctx->pc = 0x38543Cu;
    SET_GPR_U32(ctx, 31, 0x385444u);
    ctx->pc = 0x385440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38543Cu;
    // 0x385440: 0xe440004c  swc1        $f0, 0x4C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33D0u, 0x38543Cu, 0x385444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385444u;
label_385444:
    // 0x385444: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x385444u;
    {
        const bool branch_taken_0x385444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385444u;
        // 0x385448: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385444) {
            ctx->pc = 0x3854C8u;
            goto label_3854c8;
        }
    }
    ctx->pc = 0x38544Cu;
    // 0x38544c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x38544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x385450: 0xc0414ca  jal         func_105328
    ctx->pc = 0x385450u;
    SET_GPR_U32(ctx, 31, 0x385458u);
    ctx->pc = 0x385454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385450u;
    // 0x385454: 0x27a603c0  addiu       $a2, $sp, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x385450u, 0x385458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385458u;
label_385458:
    // 0x385458: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x385458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x38545c: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x38545cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x385460: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385460u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385464: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x385464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x385468: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x385468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x38546c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38546cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x385470: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x385470u;
    SET_GPR_U32(ctx, 31, 0x385478u);
    ctx->pc = 0x385474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385470u;
    // 0x385474: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x385470u, 0x385478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385478u;
label_385478:
    // 0x385478: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x385478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x38547c: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x38547cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x385480: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x385480u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x385484: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x385484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x385488: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x385488u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x38548c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x38548cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x385490: 0x70802628  paddub      $a0, $a0, $zero
    ctx->pc = 0x385490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x385494: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x385494u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x385498: 0x8ea40144  lw          $a0, 0x144($s5)
    ctx->pc = 0x385498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x38549c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x38549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3854a0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3854a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3854a4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3854a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3854a8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3854a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3854ac: 0xe4830050  swc1        $f3, 0x50($a0)
    ctx->pc = 0x3854acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x3854b0: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x3854b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x3854b4: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x3854b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x3854b8: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x3854b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x3854bc: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x3854BCu;
    {
        const bool branch_taken_0x3854bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3854C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854BCu;
        // 0x3854c0: 0xa6a32ad4  sh          $v1, 0x2AD4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 10964), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3854bc) {
            ctx->pc = 0x385878u;
            goto label_385878;
        }
    }
    ctx->pc = 0x3854C4u;
    // 0x3854c4: 0x0  nop
    ctx->pc = 0x3854c4u;
    // NOP
label_3854c8:
    // 0x3854c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3854c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3854cc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3854ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3854d0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3854D0u;
    SET_GPR_U32(ctx, 31, 0x3854D8u);
    ctx->pc = 0x3854D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3854D0u;
    // 0x3854d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3854D0u, 0x3854D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3854D8u;
label_3854d8:
    // 0x3854d8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x3854d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3854dc: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x3854dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x3854e0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3854e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3854e4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3854e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3854e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3854e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3854ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3854ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3854f0: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x3854F0u;
    SET_GPR_U32(ctx, 31, 0x3854F8u);
    ctx->pc = 0x3854F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3854F0u;
    // 0x3854f4: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x3854F0u, 0x3854F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3854F8u;
label_3854f8:
    // 0x3854f8: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x3854f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3854fc: 0x27a60350  addiu       $a2, $sp, 0x350
    ctx->pc = 0x3854fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x385500: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385504: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x385504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x385508: 0x27a30220  addiu       $v1, $sp, 0x220
    ctx->pc = 0x385508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x38550c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385510: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x385510u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x385514: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x385514u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x385518: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x385518u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x38551c: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x38551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x385520: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x385520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385524: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x385524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385528: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x385528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38552c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x38552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385530: 0xe4430050  swc1        $f3, 0x50($v0)
    ctx->pc = 0x385530u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x385534: 0xe4420054  swc1        $f2, 0x54($v0)
    ctx->pc = 0x385534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x385538: 0xe4410058  swc1        $f1, 0x58($v0)
    ctx->pc = 0x385538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x38553c: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x38553cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x385540: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x385540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385544: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x385544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385548: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x385548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38554c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x38554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385550: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x385550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x385554: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x385554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x385558: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x385558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x38555c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x38555cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x385560: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x385560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x385564: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x385564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385568: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x385568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38556c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x38556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385570: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x385570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385574: 0xe4430060  swc1        $f3, 0x60($v0)
    ctx->pc = 0x385574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x385578: 0xe4420064  swc1        $f2, 0x64($v0)
    ctx->pc = 0x385578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x38557c: 0xe4410068  swc1        $f1, 0x68($v0)
    ctx->pc = 0x38557cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x385580: 0xc07ccf4  jal         func_1F33D0
    ctx->pc = 0x385580u;
    SET_GPR_U32(ctx, 31, 0x385588u);
    ctx->pc = 0x385584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385580u;
    // 0x385584: 0xe440006c  swc1        $f0, 0x6C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33D0u, 0x385580u, 0x385588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385588u;
label_385588:
    // 0x385588: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x385588u;
    {
        const bool branch_taken_0x385588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385588u;
        // 0x38558c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385588) {
            ctx->pc = 0x385608u;
            goto label_385608;
        }
    }
    ctx->pc = 0x385590u;
    // 0x385590: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x385590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x385594: 0xc0414ca  jal         func_105328
    ctx->pc = 0x385594u;
    SET_GPR_U32(ctx, 31, 0x38559Cu);
    ctx->pc = 0x385598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385594u;
    // 0x385598: 0x27a603c0  addiu       $a2, $sp, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x385594u, 0x38559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38559Cu;
label_38559c:
    // 0x38559c: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x38559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3855a0: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x3855a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x3855a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3855a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3855a8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3855a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3855ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3855acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3855b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3855b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3855b4: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x3855B4u;
    SET_GPR_U32(ctx, 31, 0x3855BCu);
    ctx->pc = 0x3855B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3855B4u;
    // 0x3855b8: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x3855B4u, 0x3855BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3855BCu;
label_3855bc:
    // 0x3855bc: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x3855bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3855c0: 0x27a60330  addiu       $a2, $sp, 0x330
    ctx->pc = 0x3855c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x3855c4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3855c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3855c8: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x3855c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x3855cc: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x3855ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x3855d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3855d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3855d4: 0x70802628  paddub      $a0, $a0, $zero
    ctx->pc = 0x3855d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x3855d8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x3855d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x3855dc: 0x8ea40144  lw          $a0, 0x144($s5)
    ctx->pc = 0x3855dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x3855e0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3855e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3855e4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3855e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3855e8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3855e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3855ec: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3855ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3855f0: 0xe4830070  swc1        $f3, 0x70($a0)
    ctx->pc = 0x3855f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x3855f4: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x3855f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x3855f8: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x3855f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x3855fc: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x3855fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x385600: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x385600u;
    {
        const bool branch_taken_0x385600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385600u;
        // 0x385604: 0xa6a32ad4  sh          $v1, 0x2AD4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 10964), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385600) {
            ctx->pc = 0x385878u;
            goto label_385878;
        }
    }
    ctx->pc = 0x385608u;
label_385608:
    // 0x385608: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x385608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38560c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x38560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x385610: 0xc0414ca  jal         func_105328
    ctx->pc = 0x385610u;
    SET_GPR_U32(ctx, 31, 0x385618u);
    ctx->pc = 0x385614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385610u;
    // 0x385614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x385610u, 0x385618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385618u;
label_385618:
    // 0x385618: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x385618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x38561c: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x38561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x385620: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385620u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385624: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x385624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x385628: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x385628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x38562c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38562cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x385630: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x385630u;
    SET_GPR_U32(ctx, 31, 0x385638u);
    ctx->pc = 0x385634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385630u;
    // 0x385634: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x385630u, 0x385638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385638u;
label_385638:
    // 0x385638: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x385638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x38563c: 0x27a60310  addiu       $a2, $sp, 0x310
    ctx->pc = 0x38563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x385640: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385644: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x385644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x385648: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x385648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x38564c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385650: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x385650u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x385654: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x385654u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x385658: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x385658u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x38565c: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x38565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x385660: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x385660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385664: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x385664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385668: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x385668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38566c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x38566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385670: 0xe4430070  swc1        $f3, 0x70($v0)
    ctx->pc = 0x385670u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x385674: 0xe4420074  swc1        $f2, 0x74($v0)
    ctx->pc = 0x385674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x385678: 0xe4410078  swc1        $f1, 0x78($v0)
    ctx->pc = 0x385678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x38567c: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x38567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x385680: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x385680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385684: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x385684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385688: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x385688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38568c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x38568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385690: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x385690u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x385694: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x385694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x385698: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x385698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x38569c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x38569cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3856a0: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x3856a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x3856a4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3856a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3856a8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3856a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3856ac: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3856acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3856b0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3856b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3856b4: 0xe4430080  swc1        $f3, 0x80($v0)
    ctx->pc = 0x3856b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x3856b8: 0xe4420084  swc1        $f2, 0x84($v0)
    ctx->pc = 0x3856b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x3856bc: 0xe4410088  swc1        $f1, 0x88($v0)
    ctx->pc = 0x3856bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x3856c0: 0xc07ccf4  jal         func_1F33D0
    ctx->pc = 0x3856C0u;
    SET_GPR_U32(ctx, 31, 0x3856C8u);
    ctx->pc = 0x3856C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856C0u;
    // 0x3856c4: 0xe440008c  swc1        $f0, 0x8C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33D0u, 0x3856C0u, 0x3856C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856C8u;
label_3856c8:
    // 0x3856c8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3856C8u;
    {
        const bool branch_taken_0x3856c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856C8u;
        // 0x3856cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3856c8) {
            ctx->pc = 0x385748u;
            goto label_385748;
        }
    }
    ctx->pc = 0x3856D0u;
    // 0x3856d0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3856d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3856d4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3856D4u;
    SET_GPR_U32(ctx, 31, 0x3856DCu);
    ctx->pc = 0x3856D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856D4u;
    // 0x3856d8: 0x27a603c0  addiu       $a2, $sp, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3856D4u, 0x3856DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856DCu;
label_3856dc:
    // 0x3856dc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x3856dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3856e0: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x3856e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x3856e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3856e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3856e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3856e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3856ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3856ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3856f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3856f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3856f4: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x3856F4u;
    SET_GPR_U32(ctx, 31, 0x3856FCu);
    ctx->pc = 0x3856F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856F4u;
    // 0x3856f8: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x3856F4u, 0x3856FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856FCu;
label_3856fc:
    // 0x3856fc: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x3856fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x385700: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x385700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x385704: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x385704u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x385708: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x385708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x38570c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x38570cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x385710: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x385710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x385714: 0x70802628  paddub      $a0, $a0, $zero
    ctx->pc = 0x385714u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x385718: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x385718u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x38571c: 0x8ea40144  lw          $a0, 0x144($s5)
    ctx->pc = 0x38571cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x385720: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x385720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385724: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x385724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385728: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x385728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38572c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x38572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385730: 0xe4830090  swc1        $f3, 0x90($a0)
    ctx->pc = 0x385730u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x385734: 0xe4820094  swc1        $f2, 0x94($a0)
    ctx->pc = 0x385734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x385738: 0xe4810098  swc1        $f1, 0x98($a0)
    ctx->pc = 0x385738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x38573c: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x38573cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x385740: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x385740u;
    {
        const bool branch_taken_0x385740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385740u;
        // 0x385744: 0xa6a32ad4  sh          $v1, 0x2AD4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 10964), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385740) {
            ctx->pc = 0x385878u;
            goto label_385878;
        }
    }
    ctx->pc = 0x385748u;
label_385748:
    // 0x385748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x385748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38574c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x38574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x385750: 0xc0414ca  jal         func_105328
    ctx->pc = 0x385750u;
    SET_GPR_U32(ctx, 31, 0x385758u);
    ctx->pc = 0x385754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385750u;
    // 0x385754: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x385750u, 0x385758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385758u;
label_385758:
    // 0x385758: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x385758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x38575c: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x38575cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x385760: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385760u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385764: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x385764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x385768: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x385768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x38576c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38576cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x385770: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x385770u;
    SET_GPR_U32(ctx, 31, 0x385778u);
    ctx->pc = 0x385774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385770u;
    // 0x385774: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x385770u, 0x385778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385778u;
label_385778:
    // 0x385778: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x385778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x38577c: 0x27a802d0  addiu       $t0, $sp, 0x2D0
    ctx->pc = 0x38577cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x385780: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385784: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x385784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x385788: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x385788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x38578c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x38578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x385790: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x385790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385794: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x385794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x385798: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x385798u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x38579c: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x38579cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3857a0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3857a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3857a4: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x3857a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x3857a8: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x3857a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3857ac: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x3857acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3857b0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3857b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3857b4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3857b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3857b8: 0xe4430090  swc1        $f3, 0x90($v0)
    ctx->pc = 0x3857b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x3857bc: 0xe4420094  swc1        $f2, 0x94($v0)
    ctx->pc = 0x3857bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x3857c0: 0xe4410098  swc1        $f1, 0x98($v0)
    ctx->pc = 0x3857c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x3857c4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x3857c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x3857c8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x3857c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3857cc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3857ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3857d0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3857d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3857d4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3857d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3857d8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3857d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3857dc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3857dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3857e0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3857e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3857e4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3857e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3857e8: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x3857e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x3857ec: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3857ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3857f0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3857f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3857f4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3857f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3857f8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3857f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3857fc: 0xe44300a0  swc1        $f3, 0xA0($v0)
    ctx->pc = 0x3857fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x385800: 0xe44200a4  swc1        $f2, 0xA4($v0)
    ctx->pc = 0x385800u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x385804: 0xe44100a8  swc1        $f1, 0xA8($v0)
    ctx->pc = 0x385804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x385808: 0xc0414ca  jal         func_105328
    ctx->pc = 0x385808u;
    SET_GPR_U32(ctx, 31, 0x385810u);
    ctx->pc = 0x38580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385808u;
    // 0x38580c: 0xe44000ac  swc1        $f0, 0xAC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x385808u, 0x385810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385810u;
label_385810:
    // 0x385810: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x385810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x385814: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x385814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x385818: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385818u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38581c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x385820: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x385820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x385824: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x385824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x385828: 0xc0414b0  jal         func_1052C0
    ctx->pc = 0x385828u;
    SET_GPR_U32(ctx, 31, 0x385830u);
    ctx->pc = 0x38582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385828u;
    // 0x38582c: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x385828u, 0x385830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385830u;
label_385830:
    // 0x385830: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x385830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x385834: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x385834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x385838: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x385838u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38583c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x38583cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x385840: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x385840u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x385844: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x385844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x385848: 0x70802628  paddub      $a0, $a0, $zero
    ctx->pc = 0x385848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x38584c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x38584cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x385850: 0x8ea40144  lw          $a0, 0x144($s5)
    ctx->pc = 0x385850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x385854: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x385854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385858: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x385858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38585c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x38585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385860: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x385860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385864: 0xe48300b0  swc1        $f3, 0xB0($a0)
    ctx->pc = 0x385864u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x385868: 0xe48200b4  swc1        $f2, 0xB4($a0)
    ctx->pc = 0x385868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x38586c: 0xe48100b8  swc1        $f1, 0xB8($a0)
    ctx->pc = 0x38586cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x385870: 0xe48000bc  swc1        $f0, 0xBC($a0)
    ctx->pc = 0x385870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
    // 0x385874: 0xa6a32ad4  sh          $v1, 0x2AD4($s5)
    ctx->pc = 0x385874u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10964), (uint16_t)GPR_U32(ctx, 3));
label_385878:
    // 0x385878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38587c: 0x16e30002  bne         $s7, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38587Cu;
    {
        const bool branch_taken_0x38587c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x385880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38587Cu;
        // 0x385880: 0xa6b62ace  sh          $s6, 0x2ACE($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 10958), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38587c) {
            ctx->pc = 0x385888u;
            goto label_385888;
        }
    }
    ctx->pc = 0x385884u;
    // 0x385884: 0xa2a3011a  sb          $v1, 0x11A($s5)
    ctx->pc = 0x385884u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 282), (uint8_t)GPR_U32(ctx, 3));
label_385888:
    // 0x385888: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x385888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38588c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x38588cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x385890: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x385890u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x385894: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x385894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x385898: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x385898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38589c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38589cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3858a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3858a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3858a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3858a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3858a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3858a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3858ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3858ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3858B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3858ACu;
        // 0x3858b0: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3858ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3858B4u;
}

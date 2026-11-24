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

// Function: sub_00194250
// Address: 0x194250 - 0x194480
void sub_00194250_0x194250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194250_0x194250");
#endif

    switch (ctx->pc) {
        case 0x194320u: goto label_194320;
        case 0x194334u: goto label_194334;
        case 0x194350u: goto label_194350;
        case 0x1943d0u: goto label_1943d0;
        case 0x1943e4u: goto label_1943e4;
        case 0x194400u: goto label_194400;
        default: break;
    }

    ctx->pc = 0x194250u;

    // 0x194250: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x194250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x194254: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x194254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x194258: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x194258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19425c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19425cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x194260: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x194260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x194264: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x194264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x194268: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x194268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19426c: 0x27be00ac  addiu       $fp, $sp, 0xAC
    ctx->pc = 0x19426cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x194270: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x194270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x194274: 0x27b700a8  addiu       $s7, $sp, 0xA8
    ctx->pc = 0x194274u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x194278: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x194278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19427c: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x19427cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x194280: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x194280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x194284: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x194284u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19428c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19428cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194290: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194294: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19429c: 0x27b200b4  addiu       $s2, $sp, 0xB4
    ctx->pc = 0x19429cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1942a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1942a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1942a4: 0x27b100b8  addiu       $s1, $sp, 0xB8
    ctx->pc = 0x1942a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1942a8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1942a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1942ac: 0x27b000bc  addiu       $s0, $sp, 0xBC
    ctx->pc = 0x1942acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1942b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1942b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1942b4: 0x26930040  addiu       $s3, $s4, 0x40
    ctx->pc = 0x1942b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1942b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1942b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1942bc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1942bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1942c0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1942c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1942c4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1942c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1942c8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1942c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1942cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1942ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1942d0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1942d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1942d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1942d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1942d8: 0xc4a20040  lwc1        $f2, 0x40($a1)
    ctx->pc = 0x1942d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1942dc: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x1942dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1942e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1942e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1942e4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1942e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1942e8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1942e8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1942ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1942ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1942f0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1942f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1942f4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1942f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1942f8: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x1942f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1942fc: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x1942fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194300: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x194300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194304: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x194304u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x194308: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x194308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19430c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x19430cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x194310: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x194310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194314: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x194314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x194318: 0xc065144  jal         func_194510
    ctx->pc = 0x194318u;
    SET_GPR_U32(ctx, 31, 0x194320u);
    ctx->pc = 0x19431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194318u;
    // 0x19431c: 0xafc30000  sw          $v1, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194510u, 0x194318u, 0x194320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194320u;
label_194320:
    // 0x194320: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x194320u;
    {
        const bool branch_taken_0x194320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194320u;
        // 0x194324: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194320) {
            ctx->pc = 0x194340u;
            goto label_194340;
        }
    }
    ctx->pc = 0x194328u;
    // 0x194328: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x194328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19432c: 0xc052550  jal         func_149540
    ctx->pc = 0x19432Cu;
    SET_GPR_U32(ctx, 31, 0x194334u);
    ctx->pc = 0x194330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19432Cu;
    // 0x194330: 0x2406fc00  addiu       $a2, $zero, -0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149540u, 0x19432Cu, 0x194334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194334u;
label_194334:
    // 0x194334: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x194334u;
    {
        const bool branch_taken_0x194334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194334) {
            ctx->pc = 0x194350u;
            goto label_194350;
        }
    }
    ctx->pc = 0x19433Cu;
    // 0x19433c: 0x0  nop
    ctx->pc = 0x19433cu;
    // NOP
label_194340:
    // 0x194340: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x194340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x194344: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x194344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194348: 0xc052550  jal         func_149540
    ctx->pc = 0x194348u;
    SET_GPR_U32(ctx, 31, 0x194350u);
    ctx->pc = 0x19434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194348u;
    // 0x19434c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149540u, 0x194348u, 0x194350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194350u;
label_194350:
    // 0x194350: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x194350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x194354: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x194354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194358: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x194358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19435c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x19435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194360: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194364: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x194364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x194368: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x194368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19436c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19436cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194370: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x194370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x194374: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x194374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x194378: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x194378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19437c: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x19437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194380: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x194380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194384: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x194384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x194388: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x194388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x19438c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x19438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194390: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x194390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194394: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x194394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194398: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x194398u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x19439c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x19439cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1943a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1943a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1943a4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1943a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1943a8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1943a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1943ac: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x1943acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1943b0: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x1943b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1943b4: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1943b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1943b8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1943b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1943bc: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1943bcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1943c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1943c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1943c4: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1943c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1943c8: 0xc065144  jal         func_194510
    ctx->pc = 0x1943C8u;
    SET_GPR_U32(ctx, 31, 0x1943D0u);
    ctx->pc = 0x1943CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943C8u;
    // 0x1943cc: 0xafc30000  sw          $v1, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194510u, 0x1943C8u, 0x1943D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1943D0u;
label_1943d0:
    // 0x1943d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1943D0u;
    {
        const bool branch_taken_0x1943d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943D0u;
        // 0x1943d4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943d0) {
            ctx->pc = 0x1943F0u;
            goto label_1943f0;
        }
    }
    ctx->pc = 0x1943D8u;
    // 0x1943d8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1943d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1943dc: 0xc052550  jal         func_149540
    ctx->pc = 0x1943DCu;
    SET_GPR_U32(ctx, 31, 0x1943E4u);
    ctx->pc = 0x1943E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943DCu;
    // 0x1943e0: 0x2406fc00  addiu       $a2, $zero, -0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149540u, 0x1943DCu, 0x1943E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1943E4u;
label_1943e4:
    // 0x1943e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1943E4u;
    {
        const bool branch_taken_0x1943e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1943e4) {
            ctx->pc = 0x194400u;
            goto label_194400;
        }
    }
    ctx->pc = 0x1943ECu;
    // 0x1943ec: 0x0  nop
    ctx->pc = 0x1943ecu;
    // NOP
label_1943f0:
    // 0x1943f0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1943f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1943f4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1943f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1943f8: 0xc052550  jal         func_149540
    ctx->pc = 0x1943F8u;
    SET_GPR_U32(ctx, 31, 0x194400u);
    ctx->pc = 0x1943FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943F8u;
    // 0x1943fc: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149540u, 0x1943F8u, 0x194400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194400u;
label_194400:
    // 0x194400: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x194400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x194404: 0xc6a80000  lwc1        $f8, 0x0($s5)
    ctx->pc = 0x194404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x194408: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x194408u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19440c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x19440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194410: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x194410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194414: 0xc6a90008  lwc1        $f9, 0x8($s5)
    ctx->pc = 0x194414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x194418: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x194418u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19441c: 0xc6850008  lwc1        $f5, 0x8($s4)
    ctx->pc = 0x19441cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x194420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194424: 0xc6630010  lwc1        $f3, 0x10($s3)
    ctx->pc = 0x194424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x194428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19442c: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x19442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194434: 0xc7a600c0  lwc1        $f6, 0xC0($sp)
    ctx->pc = 0x194434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x194438: 0x460041c1  sub.s       $f7, $f8, $f0
    ctx->pc = 0x194438u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x19443c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19443cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194440: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x194440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194444: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x194444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x194448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x194448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19444c: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x19444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194450: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x194450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194454: 0x46054941  sub.s       $f5, $f9, $f5
    ctx->pc = 0x194454u;
    ctx->f[5] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x194458: 0x4606381a  mula.s      $f7, $f6
    ctx->pc = 0x194458u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x19445c: 0x460340c1  sub.s       $f3, $f8, $f3
    ctx->pc = 0x19445cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x194460: 0x4604291c  madd.s      $f4, $f5, $f4
    ctx->pc = 0x194460u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x194464: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x194464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x194468: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x194468u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x19446c: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x19446cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x194470: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x194470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x194474: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x194474u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x194478: 0x3e00008  jr          $ra
    ctx->pc = 0x194478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194478u;
        // 0x19447c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194480u;
}

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

// Function: sub_0015A790
// Address: 0x15a790 - 0x15aa58
void sub_0015A790_0x15a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A790_0x15a790");
#endif

    switch (ctx->pc) {
        case 0x15a884u: goto label_15a884;
        case 0x15a8dcu: goto label_15a8dc;
        case 0x15a908u: goto label_15a908;
        case 0x15a9bcu: goto label_15a9bc;
        case 0x15aa20u: goto label_15aa20;
        case 0x15aa48u: goto label_15aa48;
        default: break;
    }

    ctx->pc = 0x15a790u;

    // 0x15a790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a798: 0xac851a34  sw          $a1, 0x1A34($a0)
    ctx->pc = 0x15a798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6708), GPR_U32(ctx, 5));
    // 0x15a79c: 0xa4801a08  sh          $zero, 0x1A08($a0)
    ctx->pc = 0x15a79cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6664), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a7a0: 0x8c831a34  lw          $v1, 0x1A34($a0)
    ctx->pc = 0x15a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a7a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x15a7a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a7a8: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x15A7A8u;
    {
        const bool branch_taken_0x15a7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a7a8) {
            ctx->pc = 0x15A910u;
            goto label_15a910;
        }
    }
    ctx->pc = 0x15A7B0u;
    // 0x15a7b0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x15a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a7b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15a7b8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a7bc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x15a7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a7c0: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x15a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
    // 0x15a7c4: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x15a7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
    // 0x15a7c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a7cc: 0x0  nop
    ctx->pc = 0x15a7ccu;
    // NOP
    // 0x15a7d0: 0xe4216ca0  swc1        $f1, 0x6CA0($at)
    ctx->pc = 0x15a7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA0u, _value); } while (0); }
    // 0x15a7d4: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a7d8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a7dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x15a7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15a7e0: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x15a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a7e4: 0xe4216ca4  swc1        $f1, 0x6CA4($at)
    ctx->pc = 0x15a7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA4u, _value); } while (0); }
    // 0x15a7e8: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a7ec: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a7f0: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x15a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a7f4: 0xe4216ca8  swc1        $f1, 0x6CA8($at)
    ctx->pc = 0x15a7f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA8u, _value); } while (0); }
    // 0x15a7f8: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a7fc: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a800: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x15a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a804: 0xe4216cb0  swc1        $f1, 0x6CB0($at)
    ctx->pc = 0x15a804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CB0u, _value); } while (0); }
    // 0x15a808: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a80c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a810: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x15a810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a814: 0xe4216cb4  swc1        $f1, 0x6CB4($at)
    ctx->pc = 0x15a814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CB4u, _value); } while (0); }
    // 0x15a818: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a81c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a820: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x15a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a824: 0xe4216cb8  swc1        $f1, 0x6CB8($at)
    ctx->pc = 0x15a824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CB8u, _value); } while (0); }
    // 0x15a828: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a82c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a830: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x15a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a834: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x15a834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x15a838: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15a838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15a83c: 0xe4206cd8  swc1        $f0, 0x6CD8($at)
    ctx->pc = 0x15a83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CD8u, _value); } while (0); }
    // 0x15a840: 0x8c831a34  lw          $v1, 0x1A34($a0)
    ctx->pc = 0x15a840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a844: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x15a844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x15a848: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15A848u;
    {
        const bool branch_taken_0x15a848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a848) {
            ctx->pc = 0x15A8A8u;
            goto label_15a8a8;
        }
    }
    ctx->pc = 0x15A850u;
    // 0x15a850: 0xc4610084  lwc1        $f1, 0x84($v1)
    ctx->pc = 0x15a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a854: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15a854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15a858: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15a858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15a85c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x15a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x15a860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a864: 0x0  nop
    ctx->pc = 0x15a864u;
    // NOP
    // 0x15a868: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15a868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15a86c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x15a86cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x15a870: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15a870u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a874: 0x0  nop
    ctx->pc = 0x15a874u;
    // NOP
    // 0x15a878: 0x0  nop
    ctx->pc = 0x15a878u;
    // NOP
    // 0x15a87c: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x15A87Cu;
    SET_GPR_U32(ctx, 31, 0x15A884u);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x15A87Cu, 0x15A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A884u;
label_15a884:
    // 0x15a884: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x15a884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x15a888: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a88c: 0x0  nop
    ctx->pc = 0x15a88cu;
    // NOP
    // 0x15a890: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15a890u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a894: 0x0  nop
    ctx->pc = 0x15a894u;
    // NOP
    // 0x15a898: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a89c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15A89Cu;
    {
        const bool branch_taken_0x15a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A89Cu;
        // 0x15a8a0: 0xe4206ce4  swc1        $f0, 0x6CE4($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a89c) {
            ctx->pc = 0x15A8F8u;
            goto label_15a8f8;
        }
    }
    ctx->pc = 0x15A8A4u;
    // 0x15a8a4: 0x0  nop
    ctx->pc = 0x15a8a4u;
    // NOP
label_15a8a8:
    // 0x15a8a8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x15a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x15a8ac: 0xc4610084  lwc1        $f1, 0x84($v1)
    ctx->pc = 0x15a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a8b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a8b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x15a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x15a8b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15a8b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15a8bc: 0x0  nop
    ctx->pc = 0x15a8bcu;
    // NOP
    // 0x15a8c0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15a8c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15a8c4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x15a8c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x15a8c8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15a8c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a8cc: 0x0  nop
    ctx->pc = 0x15a8ccu;
    // NOP
    // 0x15a8d0: 0x0  nop
    ctx->pc = 0x15a8d0u;
    // NOP
    // 0x15a8d4: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x15A8D4u;
    SET_GPR_U32(ctx, 31, 0x15A8DCu);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x15A8D4u, 0x15A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8DCu;
label_15a8dc:
    // 0x15a8dc: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15a8e0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a8e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a8e8: 0x0  nop
    ctx->pc = 0x15a8e8u;
    // NOP
    // 0x15a8ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15a8ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a8f0: 0xe4206ce4  swc1        $f0, 0x6CE4($at)
    ctx->pc = 0x15a8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CE4u, _value); } while (0); }
    // 0x15a8f4: 0x0  nop
    ctx->pc = 0x15a8f4u;
    // NOP
label_15a8f8:
    // 0x15a8f8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x15a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x15a8fc: 0x24846ca0  addiu       $a0, $a0, 0x6CA0
    ctx->pc = 0x15a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    // 0x15a900: 0xc04bc7c  jal         func_12F1F0
    ctx->pc = 0x15A900u;
    SET_GPR_U32(ctx, 31, 0x15A908u);
    ctx->pc = 0x15A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A900u;
    // 0x15a904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1F0u, 0x15A900u, 0x15A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A908u;
label_15a908:
    // 0x15a908: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x15A908u;
    {
        const bool branch_taken_0x15a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a908) {
            ctx->pc = 0x15AA48u;
            goto label_15aa48;
        }
    }
    ctx->pc = 0x15A910u;
label_15a910:
    // 0x15a910: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a914: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x15a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a918: 0xe4206ca0  swc1        $f0, 0x6CA0($at)
    ctx->pc = 0x15a918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA0u, _value); } while (0); }
    // 0x15a91c: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a920: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a924: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x15a924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a928: 0xe4206ca4  swc1        $f0, 0x6CA4($at)
    ctx->pc = 0x15a928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA4u, _value); } while (0); }
    // 0x15a92c: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a930: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a934: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x15a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a938: 0xe4206ca8  swc1        $f0, 0x6CA8($at)
    ctx->pc = 0x15a938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA8u, _value); } while (0); }
    // 0x15a93c: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a940: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a944: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x15a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a948: 0xe4206cd0  swc1        $f0, 0x6CD0($at)
    ctx->pc = 0x15a948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CD0u, _value); } while (0); }
    // 0x15a94c: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a950: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a954: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x15a954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a958: 0xe4206cd4  swc1        $f0, 0x6CD4($at)
    ctx->pc = 0x15a958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CD4u, _value); } while (0); }
    // 0x15a95c: 0x8c821a34  lw          $v0, 0x1A34($a0)
    ctx->pc = 0x15a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a960: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a964: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x15a964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a968: 0xe4206cd8  swc1        $f0, 0x6CD8($at)
    ctx->pc = 0x15a968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CD8u, _value); } while (0); }
    // 0x15a96c: 0x8c831a34  lw          $v1, 0x1A34($a0)
    ctx->pc = 0x15a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15a970: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x15a970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x15a974: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15A974u;
    {
        const bool branch_taken_0x15a974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a974) {
            ctx->pc = 0x15A9E0u;
            goto label_15a9e0;
        }
    }
    ctx->pc = 0x15A97Cu;
    // 0x15a97c: 0xc4620084  lwc1        $f2, 0x84($v1)
    ctx->pc = 0x15a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a980: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15a980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15a984: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15a984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15a988: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15a988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15a98c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x15a98cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15a990: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x15a990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a994: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x15a994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x15a998: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15a998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a9a0: 0x0  nop
    ctx->pc = 0x15a9a0u;
    // NOP
    // 0x15a9a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15a9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15a9a8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15a9a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a9ac: 0x0  nop
    ctx->pc = 0x15a9acu;
    // NOP
    // 0x15a9b0: 0x0  nop
    ctx->pc = 0x15a9b0u;
    // NOP
    // 0x15a9b4: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x15A9B4u;
    SET_GPR_U32(ctx, 31, 0x15A9BCu);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x15A9B4u, 0x15A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9BCu;
label_15a9bc:
    // 0x15a9bc: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x15a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x15a9c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a9c4: 0x0  nop
    ctx->pc = 0x15a9c4u;
    // NOP
    // 0x15a9c8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15a9c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a9cc: 0x0  nop
    ctx->pc = 0x15a9ccu;
    // NOP
    // 0x15a9d0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15a9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15a9d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15A9D4u;
    {
        const bool branch_taken_0x15a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9D4u;
        // 0x15a9d8: 0xe4206ce4  swc1        $f0, 0x6CE4($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9d4) {
            ctx->pc = 0x15AA38u;
            goto label_15aa38;
        }
    }
    ctx->pc = 0x15A9DCu;
    // 0x15a9dc: 0x0  nop
    ctx->pc = 0x15a9dcu;
    // NOP
label_15a9e0:
    // 0x15a9e0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15a9e4: 0xc4620084  lwc1        $f2, 0x84($v1)
    ctx->pc = 0x15a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a9e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15a9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a9ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a9f0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x15a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x15a9f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a9f8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x15a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x15a9fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x15a9fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15aa00: 0x0  nop
    ctx->pc = 0x15aa00u;
    // NOP
    // 0x15aa04: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x15aa04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15aa08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15aa08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15aa0c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15aa0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15aa10: 0x0  nop
    ctx->pc = 0x15aa10u;
    // NOP
    // 0x15aa14: 0x0  nop
    ctx->pc = 0x15aa14u;
    // NOP
    // 0x15aa18: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x15AA18u;
    SET_GPR_U32(ctx, 31, 0x15AA20u);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x15AA18u, 0x15AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA20u;
label_15aa20:
    // 0x15aa20: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15aa24: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15aa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15aa28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15aa28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15aa2c: 0x0  nop
    ctx->pc = 0x15aa2cu;
    // NOP
    // 0x15aa30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15aa30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15aa34: 0xe4206ce4  swc1        $f0, 0x6CE4($at)
    ctx->pc = 0x15aa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CE4u, _value); } while (0); }
label_15aa38:
    // 0x15aa38: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x15aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x15aa3c: 0x24846ca0  addiu       $a0, $a0, 0x6CA0
    ctx->pc = 0x15aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    // 0x15aa40: 0xc04bc7c  jal         func_12F1F0
    ctx->pc = 0x15AA40u;
    SET_GPR_U32(ctx, 31, 0x15AA48u);
    ctx->pc = 0x15AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AA40u;
    // 0x15aa44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1F0u, 0x15AA40u, 0x15AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA48u;
label_15aa48:
    // 0x15aa48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15aa4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15aa50: 0x3e00008  jr          $ra
    ctx->pc = 0x15AA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA50u;
        // 0x15aa54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AA58u;
}

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

// Function: sub_003BE8D0
// Address: 0x3be8d0 - 0x3bea9c
void sub_003BE8D0_0x3be8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE8D0_0x3be8d0");
#endif

    switch (ctx->pc) {
        case 0x3be948u: goto label_3be948;
        case 0x3be988u: goto label_3be988;
        case 0x3be9b8u: goto label_3be9b8;
        case 0x3be9d8u: goto label_3be9d8;
        case 0x3bea14u: goto label_3bea14;
        default: break;
    }

    ctx->pc = 0x3be8d0u;

    // 0x3be8d0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3be8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3be8d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3be8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3be8d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3be8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3be8dc: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x3be8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3be8e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3be8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3be8e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3be8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3be8e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3be8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3be8ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3be8ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be8f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3be8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3be8f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3be8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3be8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3be8fc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3be8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3be900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3be900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3be904: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60
    ctx->pc = 0x3be904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
    // 0x3be908: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3be908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3be90c: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x3be90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3be910: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3be910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3be914: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3be914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be918: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3be918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3be91c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3be91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be920: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3be920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3be924: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x3be924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be928: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3be928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3be92c: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x3be92cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x3be930: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x3be930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3be934: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x3be934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x3be938: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x3be938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x3be93c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3be93cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E1A0u));
    // 0x3be940: 0xc0996b8  jal         func_265AE0
    ctx->pc = 0x3BE940u;
    SET_GPR_U32(ctx, 31, 0x3BE948u);
    ctx->pc = 0x3BE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE940u;
    // 0x3be944: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AE0u, 0x3BE940u, 0x3BE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE948u;
label_3be948:
    // 0x3be948: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x3be948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3be94c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3be94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3be950: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x3be950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3be954: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3be954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3be958: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3be958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3be95c: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3be95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3be960: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x3be960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
    // 0x3be964: 0xc4820110  lwc1        $f2, 0x110($a0)
    ctx->pc = 0x3be964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3be968: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x3be968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
    // 0x3be96c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3be96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3be970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3be970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3be974: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3be974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3be978: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3be978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3be97c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3be97cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3be980: 0xc099778  jal         func_265DE0
    ctx->pc = 0x3BE980u;
    SET_GPR_U32(ctx, 31, 0x3BE988u);
    ctx->pc = 0x3BE984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE980u;
    // 0x3be984: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x3BE980u, 0x3BE988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE988u;
label_3be988:
    // 0x3be988: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x3be988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3be98c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3be98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3be990: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3be990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3be994: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3be994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3be998: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3be998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3be99c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3be99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3be9a0: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x3be9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3be9a4: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x3be9a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3be9a8: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x3be9a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3be9ac: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x3be9acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3be9b0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3BE9B0u;
    SET_GPR_U32(ctx, 31, 0x3BE9B8u);
    ctx->pc = 0x3BE9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE9B0u;
    // 0x3be9b4: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3BE9B0u, 0x3BE9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE9B8u;
label_3be9b8:
    // 0x3be9b8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3be9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3be9bc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3be9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3be9c0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3be9c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3be9c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3be9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3be9c8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3be9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3be9cc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3be9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3be9d0: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x3BE9D0u;
    SET_GPR_U32(ctx, 31, 0x3BE9D8u);
    ctx->pc = 0x3BE9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE9D0u;
    // 0x3be9d4: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3BE9D0u, 0x3BE9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE9D8u;
label_3be9d8:
    // 0x3be9d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3be9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3be9dc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3be9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3be9e0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3be9e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3be9e4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3be9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3be9e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3be9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3be9ec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3be9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3be9f0: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x3be9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3be9f4: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3be9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3be9f8: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3be9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3be9fc: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x3be9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bea00: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bea00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bea04: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bea04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bea08: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bea08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bea0c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BEA0Cu;
    SET_GPR_U32(ctx, 31, 0x3BEA14u);
    ctx->pc = 0x3BEA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEA0Cu;
    // 0x3bea10: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BEA0Cu, 0x3BEA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEA14u;
label_3bea14:
    // 0x3bea14: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3bea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bea18: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3bea18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3bea1c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3bea1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bea20: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3bea20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bea24: 0x27a60124  addiu       $a2, $sp, 0x124
    ctx->pc = 0x3bea24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x3bea28: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3bea28u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3bea2c: 0x70601e28  paddub      $v1, $v1, $zero
    ctx->pc = 0x3bea2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3bea30: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3bea30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3bea34: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x3bea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bea38: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BEA38u;
    {
        const bool branch_taken_0x3bea38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA38u;
        // 0x3bea3c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bea38) {
            ctx->pc = 0x3BEA58u;
            goto label_3bea58;
        }
    }
    ctx->pc = 0x3BEA40u;
    // 0x3bea40: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x3bea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bea44: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x3bea44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x3bea48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bea48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bea4c: 0x0  nop
    ctx->pc = 0x3bea4cu;
    // NOP
    // 0x3bea50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3bea50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bea54: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3bea54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3bea58:
    // 0x3bea58: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x3bea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bea5c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3bea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bea60: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3bea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bea64: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3bea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bea68: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3bea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bea6c: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x3bea6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x3bea70: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x3bea70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x3bea74: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x3bea74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x3bea78: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x3bea78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x3bea7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3bea7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bea80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3bea80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bea84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bea84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bea88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bea88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bea8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bea8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bea90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bea90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bea94: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA94u;
        // 0x3bea98: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEA9Cu;
}

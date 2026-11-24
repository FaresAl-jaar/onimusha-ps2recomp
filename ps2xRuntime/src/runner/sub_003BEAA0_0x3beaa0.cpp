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

// Function: sub_003BEAA0
// Address: 0x3beaa0 - 0x3bec6c
void sub_003BEAA0_0x3beaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEAA0_0x3beaa0");
#endif

    switch (ctx->pc) {
        case 0x3beb18u: goto label_3beb18;
        case 0x3beb58u: goto label_3beb58;
        case 0x3beb88u: goto label_3beb88;
        case 0x3beba8u: goto label_3beba8;
        case 0x3bebe4u: goto label_3bebe4;
        default: break;
    }

    ctx->pc = 0x3beaa0u;

    // 0x3beaa0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3beaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3beaa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3beaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3beaa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3beaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3beaac: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x3beaacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3beab0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3beab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3beab4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3beab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3beab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3beab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3beabc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3beabcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3beac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3beac4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3beac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3beac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3beacc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3beaccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3bead0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bead4: 0x24a5e1b0  addiu       $a1, $a1, -0x1E50
    ctx->pc = 0x3bead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959536));
    // 0x3bead8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3bead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3beadc: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x3beadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3beae0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3beae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3beae4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3beae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beae8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3beae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3beaec: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3beaecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beaf0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3beaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3beaf4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x3beaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beaf8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3beaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3beafc: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x3beafcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x3beb00: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x3beb00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3beb04: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x3beb04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x3beb08: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x3beb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x3beb0c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3beb0cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E1B0u));
    // 0x3beb10: 0xc0996b8  jal         func_265AE0
    ctx->pc = 0x3BEB10u;
    SET_GPR_U32(ctx, 31, 0x3BEB18u);
    ctx->pc = 0x3BEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEB10u;
    // 0x3beb14: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AE0u, 0x3BEB10u, 0x3BEB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEB18u;
label_3beb18:
    // 0x3beb18: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x3beb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3beb1c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3beb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3beb20: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x3beb20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3beb24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3beb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3beb28: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3beb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3beb2c: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3beb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3beb30: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x3beb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
    // 0x3beb34: 0xc4820110  lwc1        $f2, 0x110($a0)
    ctx->pc = 0x3beb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3beb38: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x3beb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
    // 0x3beb3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3beb3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3beb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3beb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3beb44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3beb44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3beb48: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3beb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3beb4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3beb4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3beb50: 0xc099778  jal         func_265DE0
    ctx->pc = 0x3BEB50u;
    SET_GPR_U32(ctx, 31, 0x3BEB58u);
    ctx->pc = 0x3BEB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEB50u;
    // 0x3beb54: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x3BEB50u, 0x3BEB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEB58u;
label_3beb58:
    // 0x3beb58: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x3beb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3beb5c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3beb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3beb60: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3beb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3beb64: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3beb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3beb68: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3beb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3beb6c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3beb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3beb70: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x3beb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3beb74: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x3beb74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3beb78: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x3beb78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3beb7c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x3beb7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3beb80: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3BEB80u;
    SET_GPR_U32(ctx, 31, 0x3BEB88u);
    ctx->pc = 0x3BEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEB80u;
    // 0x3beb84: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3BEB80u, 0x3BEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEB88u;
label_3beb88:
    // 0x3beb88: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3beb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3beb8c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3beb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3beb90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3beb90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3beb94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3beb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3beb98: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3beb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3beb9c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3beb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3beba0: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x3BEBA0u;
    SET_GPR_U32(ctx, 31, 0x3BEBA8u);
    ctx->pc = 0x3BEBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEBA0u;
    // 0x3beba4: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3BEBA0u, 0x3BEBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEBA8u;
label_3beba8:
    // 0x3beba8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3beba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3bebac: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3bebacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3bebb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3bebb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bebb4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3bebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3bebb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bebbc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3bebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3bebc0: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x3bebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bebc4: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3bebc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bebc8: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3bebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bebcc: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x3bebccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bebd0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bebd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bebd4: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bebd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bebd8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bebd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bebdc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BEBDCu;
    SET_GPR_U32(ctx, 31, 0x3BEBE4u);
    ctx->pc = 0x3BEBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEBDCu;
    // 0x3bebe0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BEBDCu, 0x3BEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEBE4u;
label_3bebe4:
    // 0x3bebe4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3bebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bebe8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3bebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3bebec: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3bebecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bebf0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3bebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bebf4: 0x27a60124  addiu       $a2, $sp, 0x124
    ctx->pc = 0x3bebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x3bebf8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3bebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3bebfc: 0x70601e28  paddub      $v1, $v1, $zero
    ctx->pc = 0x3bebfcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3bec00: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3bec00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3bec04: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x3bec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bec08: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BEC08u;
    {
        const bool branch_taken_0x3bec08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEC08u;
        // 0x3bec0c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bec08) {
            ctx->pc = 0x3BEC28u;
            goto label_3bec28;
        }
    }
    ctx->pc = 0x3BEC10u;
    // 0x3bec10: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x3bec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bec14: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x3bec14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x3bec18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bec18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bec1c: 0x0  nop
    ctx->pc = 0x3bec1cu;
    // NOP
    // 0x3bec20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3bec20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bec24: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3bec24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3bec28:
    // 0x3bec28: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x3bec28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bec2c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3bec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bec30: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3bec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bec34: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3bec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bec38: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3bec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bec3c: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x3bec3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x3bec40: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x3bec40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x3bec44: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x3bec44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x3bec48: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x3bec48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x3bec4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3bec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bec50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3bec50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bec54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bec54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bec58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bec58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bec5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bec5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bec60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bec60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bec64: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEC64u;
        // 0x3bec68: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEC6Cu;
}

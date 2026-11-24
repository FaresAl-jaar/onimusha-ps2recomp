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

// Function: sub_0017E630
// Address: 0x17e630 - 0x17eaac
void sub_0017E630_0x17e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E630_0x17e630");
#endif

    switch (ctx->pc) {
        case 0x17e6acu: goto label_17e6ac;
        case 0x17e704u: goto label_17e704;
        case 0x17e718u: goto label_17e718;
        case 0x17e828u: goto label_17e828;
        case 0x17e838u: goto label_17e838;
        case 0x17e924u: goto label_17e924;
        case 0x17e950u: goto label_17e950;
        case 0x17e960u: goto label_17e960;
        case 0x17ea5cu: goto label_17ea5c;
        case 0x17ea70u: goto label_17ea70;
        case 0x17ea84u: goto label_17ea84;
        default: break;
    }

    ctx->pc = 0x17e630u;

    // 0x17e630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17e634: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17e638: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17e638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17e63c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17e63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17e640: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17e640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e644: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e648: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17e648u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e64c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e650: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x17e650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17e654: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e65c: 0xac940074  sw          $s4, 0x74($a0)
    ctx->pc = 0x17e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 20));
    // 0x17e660: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x17e660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x17e664: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x17e664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x17e668: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x17e668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e66c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x17e66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17e670: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x17e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e674: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17e674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x17e678: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x17e678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e67c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x17e67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17e680: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x17e680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x17e684: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x17e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e688: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x17e688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x17e68c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x17e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e690: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x17e690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x17e694: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x17e694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e698: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x17e698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x17e69c: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x17e69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x17e6a0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x17e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x17e6a4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x17E6A4u;
    SET_GPR_U32(ctx, 31, 0x17E6ACu);
    ctx->pc = 0x17E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6A4u;
    // 0x17e6a8: 0x26a40030  addiu       $a0, $s5, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x17E6A4u, 0x17E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E6ACu;
label_17e6ac:
    // 0x17e6ac: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x17e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x17e6b0: 0x3c10007e  lui         $s0, 0x7E
    ctx->pc = 0x17e6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)126 << 16));
    // 0x17e6b4: 0x26106ae8  addiu       $s0, $s0, 0x6AE8
    ctx->pc = 0x17e6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27368));
    // 0x17e6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6bc: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x17e6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x17e6c0: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x17e6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x17e6c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17e6c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17e6c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17e6cc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x17e6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x17e6d0: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x17e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x17e6d4: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x17e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x17e6d8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x17e6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x17e6dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17e6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17e6e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17e6e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17e6e4: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x17e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x17e6e8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x17e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17e6ec: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x17e6f0: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x17e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x17e6f4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x17e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17e6f8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x17e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17e6fc: 0xc04c010  jal         func_130040
    ctx->pc = 0x17E6FCu;
    SET_GPR_U32(ctx, 31, 0x17E704u);
    ctx->pc = 0x17E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6FCu;
    // 0x17e700: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130040u, 0x17E6FCu, 0x17E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E704u;
label_17e704:
    // 0x17e704: 0x2451ff80  addiu       $s1, $v0, -0x80
    ctx->pc = 0x17e704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x17e708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e70c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e710: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x17E710u;
    SET_GPR_U32(ctx, 31, 0x17E718u);
    ctx->pc = 0x17E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E710u;
    // 0x17e714: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x17E710u, 0x17E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E718u;
label_17e718:
    // 0x17e718: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17e718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e71c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17e71cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e720: 0xaeb30048  sw          $s3, 0x48($s5)
    ctx->pc = 0x17e720u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 19));
    // 0x17e724: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x17e724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e728: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x17e728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e72c: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x17e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e730: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x17e730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17e734: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17e734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e738: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x17e738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17e73c: 0xaeb3004c  sw          $s3, 0x4C($s5)
    ctx->pc = 0x17e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 19));
    // 0x17e740: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x17e740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e744: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e748: 0x70821018  mult1       $v0, $a0, $v0
    ctx->pc = 0x17e748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e74c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e750: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17e750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17e754: 0xaeb30040  sw          $s3, 0x40($s5)
    ctx->pc = 0x17e754u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 19));
    // 0x17e758: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x17e758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e75c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e760: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x17e760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e768: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17e768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17e76c: 0xaeb30044  sw          $s3, 0x44($s5)
    ctx->pc = 0x17e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 19));
    // 0x17e770: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x17e770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e774: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e778: 0x70821018  mult1       $v0, $a0, $v0
    ctx->pc = 0x17e778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e77c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e780: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17e784: 0xaeb30050  sw          $s3, 0x50($s5)
    ctx->pc = 0x17e784u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 19));
    // 0x17e788: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x17e788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e78c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e790: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x17e790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e794: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e798: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17e798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17e79c: 0xaeb30054  sw          $s3, 0x54($s5)
    ctx->pc = 0x17e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 19));
    // 0x17e7a0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x17e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e7a4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e7a8: 0x70821018  mult1       $v0, $a0, $v0
    ctx->pc = 0x17e7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e7ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e7b0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17e7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17e7b4: 0xaeb30058  sw          $s3, 0x58($s5)
    ctx->pc = 0x17e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 19));
    // 0x17e7b8: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x17e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e7bc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e7c0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x17e7c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e7c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e7c8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17e7c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17e7cc: 0xaeb3005c  sw          $s3, 0x5C($s5)
    ctx->pc = 0x17e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 19));
    // 0x17e7d0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x17e7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e7d4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e7d8: 0x70821018  mult1       $v0, $a0, $v0
    ctx->pc = 0x17e7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e7dc: 0xaea00060  sw          $zero, 0x60($s5)
    ctx->pc = 0x17e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 0));
    // 0x17e7e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e7e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17e7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17e7e8: 0xaeb30068  sw          $s3, 0x68($s5)
    ctx->pc = 0x17e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 19));
    // 0x17e7ec: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x17e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e7f0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e7f4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x17e7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e7f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17e7fc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17e7fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17e800: 0xaeb3006c  sw          $s3, 0x6C($s5)
    ctx->pc = 0x17e800u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 19));
    // 0x17e804: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e808: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x17e808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17e80c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x17e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17e810: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x17e810u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17e814: 0x70a42018  mult1       $a0, $a1, $a0
    ctx->pc = 0x17e814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17e818: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17e818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e81c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x17E81Cu;
    {
        const bool branch_taken_0x17e81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E81Cu;
        // 0x17e820: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e81c) {
            ctx->pc = 0x17E8D0u;
            goto label_17e8d0;
        }
    }
    ctx->pc = 0x17E824u;
    // 0x17e824: 0x0  nop
    ctx->pc = 0x17e824u;
    // NOP
label_17e828:
    // 0x17e828: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x17e828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e82c: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x17e82cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17e830: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x17E830u;
    {
        const bool branch_taken_0x17e830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E830u;
        // 0x17e834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e830) {
            ctx->pc = 0x17E8B8u;
            goto label_17e8b8;
        }
    }
    ctx->pc = 0x17E838u;
label_17e838:
    // 0x17e838: 0x8ea40048  lw          $a0, 0x48($s5)
    ctx->pc = 0x17e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x17e83c: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x17e83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17e840: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x17e840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17e844: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17e844u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17e848: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17e848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17e84c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17e850: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x17e850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e854: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x17e854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x17e858: 0x70652818  mult1       $a1, $v1, $a1
    ctx->pc = 0x17e858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17e85c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x17e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17e860: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17e860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17e864: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17e868: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17e868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17e86c: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x17e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e870: 0x8ea40040  lw          $a0, 0x40($s5)
    ctx->pc = 0x17e870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x17e874: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x17e874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17e878: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x17e878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17e87c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17e880: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17e884: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17e884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17e888: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x17e888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e88c: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x17e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x17e890: 0x70652818  mult1       $a1, $v1, $a1
    ctx->pc = 0x17e890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17e894: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x17e894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17e898: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17e898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17e89c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e8a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17e8a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17e8a8: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x17e8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e8ac: 0x45202b  sltu        $a0, $v0, $a1
    ctx->pc = 0x17e8acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17e8b0: 0x1480ffe1  bnez        $a0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x17E8B0u;
    {
        const bool branch_taken_0x17e8b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e8b0) {
            ctx->pc = 0x17E838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e838;
        }
    }
    ctx->pc = 0x17E8B8u;
label_17e8b8:
    // 0x17e8b8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e8bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17e8c0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x17e8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17e8c4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x17E8C4u;
    {
        const bool branch_taken_0x17e8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e8c4) {
            ctx->pc = 0x17E828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e828;
        }
    }
    ctx->pc = 0x17E8CCu;
    // 0x17e8cc: 0x0  nop
    ctx->pc = 0x17e8ccu;
    // NOP
label_17e8d0:
    // 0x17e8d0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17e8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17e8d4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x17e8d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x17e8d8: 0x2462fcfa  addiu       $v0, $v1, -0x306
    ctx->pc = 0x17e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966522));
    // 0x17e8dc: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x17e8dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x17e8e0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E8E0u;
    {
        const bool branch_taken_0x17e8e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8E0u;
        // 0x17e8e4: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8e0) {
            ctx->pc = 0x17E900u;
            goto label_17e900;
        }
    }
    ctx->pc = 0x17E8E8u;
    // 0x17e8e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E8E8u;
    {
        const bool branch_taken_0x17e8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17e8e8) {
            ctx->pc = 0x17E900u;
            goto label_17e900;
        }
    }
    ctx->pc = 0x17E8F0u;
    // 0x17e8f0: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x17e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x17e8f4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17E8F4u;
    {
        const bool branch_taken_0x17e8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e8f4) {
            ctx->pc = 0x17E928u;
            goto label_17e928;
        }
    }
    ctx->pc = 0x17E8FCu;
    // 0x17e8fc: 0x0  nop
    ctx->pc = 0x17e8fcu;
    // NOP
label_17e900:
    // 0x17e900: 0xaeb30060  sw          $s3, 0x60($s5)
    ctx->pc = 0x17e900u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 19));
    // 0x17e904: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x17e904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17e908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e90c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17e910: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x17e910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x17e914: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17e914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e918: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x17e918u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e91c: 0xc049590  jal         func_125640
    ctx->pc = 0x17E91Cu;
    SET_GPR_U32(ctx, 31, 0x17E924u);
    ctx->pc = 0x17E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E91Cu;
    // 0x17e920: 0x2669821  addu        $s3, $s3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x17E91Cu, 0x17E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E924u;
label_17e924:
    // 0x17e924: 0x0  nop
    ctx->pc = 0x17e924u;
    // NOP
label_17e928:
    // 0x17e928: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x17e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17e92c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x17e92cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17e930: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x17E930u;
    {
        const bool branch_taken_0x17e930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E930u;
        // 0x17e934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e930) {
            ctx->pc = 0x17EA50u;
            goto label_17ea50;
        }
    }
    ctx->pc = 0x17E938u;
    // 0x17e938: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x17e938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x17e93c: 0x3c048060  lui         $a0, 0x8060
    ctx->pc = 0x17e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32864 << 16));
    // 0x17e940: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x17e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17e944: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x17e944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x17e948: 0x34886060  ori         $t0, $a0, 0x6060
    ctx->pc = 0x17e948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24672);
    // 0x17e94c: 0x0  nop
    ctx->pc = 0x17e94cu;
    // NOP
label_17e950:
    // 0x17e950: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x17e950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17e954: 0x7082b  sltu        $at, $zero, $a3
    ctx->pc = 0x17e954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x17e958: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x17E958u;
    {
        const bool branch_taken_0x17e958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E958u;
        // 0x17e95c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e958) {
            ctx->pc = 0x17EA38u;
            goto label_17ea38;
        }
    }
    ctx->pc = 0x17E960u;
label_17e960:
    // 0x17e960: 0xa02026  xor         $a0, $a1, $zero
    ctx->pc = 0x17e960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
    // 0x17e964: 0xc74818  mult        $t1, $a2, $a3
    ctx->pc = 0x17e964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x17e968: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17e968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17e96c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x17e96cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17e970: 0x8ea70068  lw          $a3, 0x68($s5)
    ctx->pc = 0x17e970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x17e974: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x17e974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x17e978: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x17e978u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x17e97c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x17e97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x17e980: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x17e980u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x17e984: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x17e984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x17e988: 0x74840  sll         $t1, $a3, 1
    ctx->pc = 0x17e988u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x17e98c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17e98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17e990: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x17e990u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x17e994: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x17e994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x17e998: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17e998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17e99c: 0xe33826  xor         $a3, $a3, $v1
    ctx->pc = 0x17e99cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x17e9a0: 0xac27f004  sw          $a3, -0xFFC($at)
    ctx->pc = 0x17e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 7));
    // 0x17e9a4: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x17e9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x17e9a8: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x17e9a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17e9ac: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x17e9acu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x17e9b0: 0x70c94818  mult1       $t1, $a2, $t1
    ctx->pc = 0x17e9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x17e9b4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x17e9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x17e9b8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x17e9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x17e9bc: 0x8ea70068  lw          $a3, 0x68($s5)
    ctx->pc = 0x17e9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x17e9c0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x17e9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x17e9c4: 0x4810  mfhi        $t1
    ctx->pc = 0x17e9c4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x17e9c8: 0xa4e90002  sh          $t1, 0x2($a3)
    ctx->pc = 0x17e9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x17e9cc: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x17e9ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17e9d0: 0x8ea70068  lw          $a3, 0x68($s5)
    ctx->pc = 0x17e9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x17e9d4: 0xc94818  mult        $t1, $a2, $t1
    ctx->pc = 0x17e9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x17e9d8: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x17e9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x17e9dc: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x17e9dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x17e9e0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x17e9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x17e9e4: 0xa4e60004  sh          $a2, 0x4($a3)
    ctx->pc = 0x17e9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x17e9e8: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x17e9e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17e9ec: 0x8ea70068  lw          $a3, 0x68($s5)
    ctx->pc = 0x17e9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x17e9f0: 0x70c94818  mult1       $t1, $a2, $t1
    ctx->pc = 0x17e9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x17e9f4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x17e9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x17e9f8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x17e9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x17e9fc: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x17e9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x17ea00: 0xa4e40006  sh          $a0, 0x6($a3)
    ctx->pc = 0x17ea00u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ea04: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x17ea04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17ea08: 0x8ea4006c  lw          $a0, 0x6C($s5)
    ctx->pc = 0x17ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x17ea0c: 0xc73818  mult        $a3, $a2, $a3
    ctx->pc = 0x17ea0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x17ea10: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x17ea10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17ea14: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x17ea14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x17ea18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17ea1c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x17ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17ea20: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x17ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x17ea24: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x17ea24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17ea28: 0xa7202b  sltu        $a0, $a1, $a3
    ctx->pc = 0x17ea28u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x17ea2c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x17EA2Cu;
    {
        const bool branch_taken_0x17ea2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ea2c) {
            ctx->pc = 0x17E960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e960;
        }
    }
    ctx->pc = 0x17EA34u;
    // 0x17ea34: 0x0  nop
    ctx->pc = 0x17ea34u;
    // NOP
label_17ea38:
    // 0x17ea38: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x17ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17ea3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17ea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17ea40: 0xc4202b  sltu        $a0, $a2, $a0
    ctx->pc = 0x17ea40u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17ea44: 0x1480ffc2  bnez        $a0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x17EA44u;
    {
        const bool branch_taken_0x17ea44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ea44) {
            ctx->pc = 0x17E950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e950;
        }
    }
    ctx->pc = 0x17EA4Cu;
    // 0x17ea4c: 0x0  nop
    ctx->pc = 0x17ea4cu;
    // NOP
label_17ea50:
    // 0x17ea50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17ea50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea54: 0xc0720e0  jal         func_1C8380
    ctx->pc = 0x17EA54u;
    SET_GPR_U32(ctx, 31, 0x17EA5Cu);
    ctx->pc = 0x17EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA54u;
    // 0x17ea58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8380u, 0x17EA54u, 0x17EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA5Cu;
label_17ea5c:
    // 0x17ea5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ea60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17ea60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea64: 0xaea20078  sw          $v0, 0x78($s5)
    ctx->pc = 0x17ea64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 2));
    // 0x17ea68: 0xc05faac  jal         func_17EAB0
    ctx->pc = 0x17EA68u;
    SET_GPR_U32(ctx, 31, 0x17EA70u);
    ctx->pc = 0x17EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA68u;
    // 0x17ea6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EAB0u, 0x17EA68u, 0x17EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA70u;
label_17ea70:
    // 0x17ea70: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x17ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17ea74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea78: 0x2223023  subu        $a2, $s1, $v0
    ctx->pc = 0x17ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ea7c: 0xc04bffc  jal         func_12FFF0
    ctx->pc = 0x17EA7Cu;
    SET_GPR_U32(ctx, 31, 0x17EA84u);
    ctx->pc = 0x17EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA7Cu;
    // 0x17ea80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FFF0u, 0x17EA7Cu, 0x17EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA84u;
label_17ea84:
    // 0x17ea84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17ea84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ea88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ea88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17ea8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ea90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17ea90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ea94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17ea94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ea98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ea98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ea9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ea9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eaa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17eaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x17EAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAA4u;
        // 0x17eaa8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EAACu;
}

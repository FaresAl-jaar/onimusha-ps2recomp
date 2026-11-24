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

// Function: sub_001E6800
// Address: 0x1e6800 - 0x1e696c
void sub_001E6800_0x1e6800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6800_0x1e6800");
#endif

    switch (ctx->pc) {
        case 0x1e6840u: goto label_1e6840;
        case 0x1e684cu: goto label_1e684c;
        case 0x1e68a4u: goto label_1e68a4;
        case 0x1e68b4u: goto label_1e68b4;
        case 0x1e68c8u: goto label_1e68c8;
        case 0x1e6950u: goto label_1e6950;
        default: break;
    }

    ctx->pc = 0x1e6800u;

    // 0x1e6800: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e6800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1e6804: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e6804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e6808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e680c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6818: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e6818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e681c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E681Cu;
    {
        const bool branch_taken_0x1e681c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E681Cu;
        // 0x1e6820: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e681c) {
            ctx->pc = 0x1E6830u;
            goto label_1e6830;
        }
    }
    ctx->pc = 0x1E6824u;
    // 0x1e6824: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1E6824u;
    {
        const bool branch_taken_0x1e6824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6824u;
        // 0x1e6828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6824) {
            ctx->pc = 0x1E6958u;
            goto label_1e6958;
        }
    }
    ctx->pc = 0x1E682Cu;
    // 0x1e682c: 0x0  nop
    ctx->pc = 0x1e682cu;
    // NOP
label_1e6830:
    // 0x1e6830: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e6830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6834: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e6834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6838: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E6838u;
    SET_GPR_U32(ctx, 31, 0x1E6840u);
    ctx->pc = 0x1E683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6838u;
    // 0x1e683c: 0x26260080  addiu       $a2, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E6838u, 0x1E6840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6840u;
label_1e6840:
    // 0x1e6840: 0x86250040  lh          $a1, 0x40($s1)
    ctx->pc = 0x1e6840u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1e6844: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1E6844u;
    SET_GPR_U32(ctx, 31, 0x1E684Cu);
    ctx->pc = 0x1E6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6844u;
    // 0x1e6848: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1E6844u, 0x1E684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E684Cu;
label_1e684c:
    // 0x1e684c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e684cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e6850: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e6850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e6854: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e6854u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e6858: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x1e6858u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e685c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6860: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e6860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e6864: 0x24a56c20  addiu       $a1, $a1, 0x6C20
    ctx->pc = 0x1e6864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
    // 0x1e6868: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e6868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e686c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e6870: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x1e6870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
    // 0x1e6874: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e6874u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e6878: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e6878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e687c: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x1e687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x1e6880: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e6880u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e6884: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e6884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e6888: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x1e6888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x1e688c: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e688cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e6890: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e6890u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e6894: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x1e6894u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e6898: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e6898u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e689c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E689Cu;
    SET_GPR_U32(ctx, 31, 0x1E68A4u);
    ctx->pc = 0x1E68A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E689Cu;
    // 0x1e68a0: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E689Cu, 0x1E68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68A4u;
label_1e68a4:
    // 0x1e68a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e68a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e68a8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e68ac: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E68ACu;
    SET_GPR_U32(ctx, 31, 0x1E68B4u);
    ctx->pc = 0x1E68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68ACu;
    // 0x1e68b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E68ACu, 0x1E68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68B4u;
label_1e68b4:
    // 0x1e68b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e68b8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e68b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e68bc: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e68bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e68c0: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E68C0u;
    SET_GPR_U32(ctx, 31, 0x1E68C8u);
    ctx->pc = 0x1E68C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68C0u;
    // 0x1e68c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E68C0u, 0x1E68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68C8u;
label_1e68c8:
    // 0x1e68c8: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x1e68c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e68cc: 0x103c3c  dsll32      $a3, $s0, 16
    ctx->pc = 0x1e68ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e68d0: 0x27a800fc  addiu       $t0, $sp, 0xFC
    ctx->pc = 0x1e68d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1e68d4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1e68d4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1e68d8: 0x27a6010c  addiu       $a2, $sp, 0x10C
    ctx->pc = 0x1e68d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1e68dc: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x1e68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1e68e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e68e4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e68e8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1e68e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1e68ec: 0x7a220060  lq          $v0, 0x60($s1)
    ctx->pc = 0x1e68ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e68f0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1e68f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1e68f4: 0x7a220070  lq          $v0, 0x70($s1)
    ctx->pc = 0x1e68f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1e68f8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1e68f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1e68fc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e6900: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1e6900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6904: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6904u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6908: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1e6908u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1e690c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e6910: 0x70471018  mult1       $v0, $v0, $a3
    ctx->pc = 0x1e6910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6914: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6918: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e6918u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e691c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6920: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1e6920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6924: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6928: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e6928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e692c: 0x92230033  lbu         $v1, 0x33($s1)
    ctx->pc = 0x1e692cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
    // 0x1e6930: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x1e6930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6934: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x1e6934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1e6938: 0xc62d003c  lwc1        $f13, 0x3C($s1)
    ctx->pc = 0x1e6938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e693c: 0x92260032  lbu         $a2, 0x32($s1)
    ctx->pc = 0x1e693cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1e6940: 0x92290031  lbu         $t1, 0x31($s1)
    ctx->pc = 0x1e6940u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x1e6944: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1e6944u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6948: 0xc0b97b4  jal         func_2E5ED0
    ctx->pc = 0x1E6948u;
    SET_GPR_U32(ctx, 31, 0x1E6950u);
    ctx->pc = 0x1E694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6948u;
    // 0x1e694c: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5ED0u, 0x1E6948u, 0x1E6950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6950u;
label_1e6950:
    // 0x1e6950: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e6950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6954: 0x0  nop
    ctx->pc = 0x1e6954u;
    // NOP
label_1e6958:
    // 0x1e6958: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e695c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e695cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6964: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6964u;
        // 0x1e6968: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E696Cu;
}

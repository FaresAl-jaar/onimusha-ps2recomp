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

// Function: sub_001E60A0
// Address: 0x1e60a0 - 0x1e61fc
void sub_001E60A0_0x1e60a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E60A0_0x1e60a0");
#endif

    switch (ctx->pc) {
        case 0x1e60e0u: goto label_1e60e0;
        case 0x1e60ecu: goto label_1e60ec;
        case 0x1e6144u: goto label_1e6144;
        case 0x1e6154u: goto label_1e6154;
        case 0x1e6168u: goto label_1e6168;
        case 0x1e61e0u: goto label_1e61e0;
        default: break;
    }

    ctx->pc = 0x1e60a0u;

    // 0x1e60a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e60a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1e60a4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e60a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e60a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e60ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e60acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e60b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e60b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e60b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e60b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60b8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e60bc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E60BCu;
    {
        const bool branch_taken_0x1e60bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60BCu;
        // 0x1e60c0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60bc) {
            ctx->pc = 0x1E60D0u;
            goto label_1e60d0;
        }
    }
    ctx->pc = 0x1E60C4u;
    // 0x1e60c4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1E60C4u;
    {
        const bool branch_taken_0x1e60c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60C4u;
        // 0x1e60c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60c4) {
            ctx->pc = 0x1E61E8u;
            goto label_1e61e8;
        }
    }
    ctx->pc = 0x1E60CCu;
    // 0x1e60cc: 0x0  nop
    ctx->pc = 0x1e60ccu;
    // NOP
label_1e60d0:
    // 0x1e60d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e60d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60d4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e60d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e60d8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E60D8u;
    SET_GPR_U32(ctx, 31, 0x1E60E0u);
    ctx->pc = 0x1E60DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60D8u;
    // 0x1e60dc: 0x26260080  addiu       $a2, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E60D8u, 0x1E60E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60E0u;
label_1e60e0:
    // 0x1e60e0: 0x86250040  lh          $a1, 0x40($s1)
    ctx->pc = 0x1e60e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1e60e4: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1E60E4u;
    SET_GPR_U32(ctx, 31, 0x1E60ECu);
    ctx->pc = 0x1E60E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60E4u;
    // 0x1e60e8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1E60E4u, 0x1E60ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60ECu;
label_1e60ec:
    // 0x1e60ec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e60ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e60f0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e60f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e60f4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e60f4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e60f8: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x1e60f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e60fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6100: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e6100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e6104: 0x24a56c20  addiu       $a1, $a1, 0x6C20
    ctx->pc = 0x1e6104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
    // 0x1e6108: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e6108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e610c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e610cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e6110: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x1e6110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
    // 0x1e6114: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e6114u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e6118: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e6118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e611c: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x1e611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x1e6120: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e6120u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e6124: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e6124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e6128: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x1e6128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x1e612c: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e612cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e6130: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e6130u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e6134: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x1e6134u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e6138: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e6138u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e613c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E613Cu;
    SET_GPR_U32(ctx, 31, 0x1E6144u);
    ctx->pc = 0x1E6140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E613Cu;
    // 0x1e6140: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E613Cu, 0x1E6144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6144u;
label_1e6144:
    // 0x1e6144: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e6144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e6148: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e614c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E614Cu;
    SET_GPR_U32(ctx, 31, 0x1E6154u);
    ctx->pc = 0x1E6150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E614Cu;
    // 0x1e6150: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E614Cu, 0x1E6154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6154u;
label_1e6154:
    // 0x1e6154: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e6154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e6158: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e6158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e615c: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e6160: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E6160u;
    SET_GPR_U32(ctx, 31, 0x1E6168u);
    ctx->pc = 0x1E6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6160u;
    // 0x1e6164: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E6160u, 0x1E6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6168u;
label_1e6168:
    // 0x1e6168: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x1e6168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e616c: 0x103c3c  dsll32      $a3, $s0, 16
    ctx->pc = 0x1e616cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e6170: 0x27a800fc  addiu       $t0, $sp, 0xFC
    ctx->pc = 0x1e6170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1e6174: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1e6174u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1e6178: 0x27a6010c  addiu       $a2, $sp, 0x10C
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1e617c: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x1e617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1e6180: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e6180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e6184: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1e6184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1e6188: 0x7a220060  lq          $v0, 0x60($s1)
    ctx->pc = 0x1e6188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e618c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1e618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1e6190: 0x7a220070  lq          $v0, 0x70($s1)
    ctx->pc = 0x1e6190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1e6194: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1e6194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1e6198: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e6198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e619c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1e619cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e61a0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e61a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e61a4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1e61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1e61a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e61ac: 0x70471018  mult1       $v0, $v0, $a3
    ctx->pc = 0x1e61acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e61b0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e61b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e61b4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e61b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e61bc: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1e61bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e61c0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e61c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e61c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e61c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e61c8: 0x92260032  lbu         $a2, 0x32($s1)
    ctx->pc = 0x1e61c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1e61cc: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x1e61ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e61d0: 0xc62d003c  lwc1        $f13, 0x3C($s1)
    ctx->pc = 0x1e61d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e61d4: 0x92270031  lbu         $a3, 0x31($s1)
    ctx->pc = 0x1e61d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x1e61d8: 0xc0b9820  jal         func_2E6080
    ctx->pc = 0x1E61D8u;
    SET_GPR_U32(ctx, 31, 0x1E61E0u);
    ctx->pc = 0x1E61DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E61D8u;
    // 0x1e61dc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6080u, 0x1E61D8u, 0x1E61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61E0u;
label_1e61e0:
    // 0x1e61e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e61e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e61e4: 0x0  nop
    ctx->pc = 0x1e61e4u;
    // NOP
label_1e61e8:
    // 0x1e61e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e61e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e61ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e61ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e61f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e61f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e61f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E61F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61F4u;
        // 0x1e61f8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E61F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E61FCu;
}

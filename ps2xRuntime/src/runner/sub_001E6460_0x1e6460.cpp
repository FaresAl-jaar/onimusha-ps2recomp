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

// Function: sub_001E6460
// Address: 0x1e6460 - 0x1e65b0
void sub_001E6460_0x1e6460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6460_0x1e6460");
#endif

    switch (ctx->pc) {
        case 0x1e64a4u: goto label_1e64a4;
        case 0x1e64f8u: goto label_1e64f8;
        case 0x1e6508u: goto label_1e6508;
        case 0x1e651cu: goto label_1e651c;
        case 0x1e6594u: goto label_1e6594;
        default: break;
    }

    ctx->pc = 0x1e6460u;

    // 0x1e6460: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e6460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1e6464: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e6464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e6468: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e6468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e646c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e6470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6474: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e6474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e647c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e647cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6480: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e6480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6484: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6484u;
    {
        const bool branch_taken_0x1e6484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6484u;
        // 0x1e6488: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6484) {
            ctx->pc = 0x1E6498u;
            goto label_1e6498;
        }
    }
    ctx->pc = 0x1E648Cu;
    // 0x1e648c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1E648Cu;
    {
        const bool branch_taken_0x1e648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E648Cu;
        // 0x1e6490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e648c) {
            ctx->pc = 0x1E6598u;
            goto label_1e6598;
        }
    }
    ctx->pc = 0x1E6494u;
    // 0x1e6494: 0x0  nop
    ctx->pc = 0x1e6494u;
    // NOP
label_1e6498:
    // 0x1e6498: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e6498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e649c: 0xc076538  jal         func_1D94E0
    ctx->pc = 0x1E649Cu;
    SET_GPR_U32(ctx, 31, 0x1E64A4u);
    ctx->pc = 0x1E64A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E649Cu;
    // 0x1e64a0: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94E0u, 0x1E649Cu, 0x1E64A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E64A4u;
label_1e64a4:
    // 0x1e64a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e64a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e64a8: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x1e64a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e64ac: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e64acu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e64b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e64b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e64b8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e64b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e64bc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e64bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e64c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e64c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e64c4: 0x7fa90080  sq          $t1, 0x80($sp)
    ctx->pc = 0x1e64c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 9));
    // 0x1e64c8: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e64c8u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e64cc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e64ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e64d0: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x1e64d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
    // 0x1e64d4: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e64d4u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e64d8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e64d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e64dc: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x1e64dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
    // 0x1e64e0: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e64e0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e64e4: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e64e4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e64e8: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x1e64e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1e64ec: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e64ecu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e64f0: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E64F0u;
    SET_GPR_U32(ctx, 31, 0x1E64F8u);
    ctx->pc = 0x1E64F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64F0u;
    // 0x1e64f4: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E64F0u, 0x1E64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E64F8u;
label_1e64f8:
    // 0x1e64f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e64fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e64fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6500: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E6500u;
    SET_GPR_U32(ctx, 31, 0x1E6508u);
    ctx->pc = 0x1E6504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6500u;
    // 0x1e6504: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E6500u, 0x1E6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6508u;
label_1e6508:
    // 0x1e6508: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e6508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e650c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e650cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e6510: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e6510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e6514: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E6514u;
    SET_GPR_U32(ctx, 31, 0x1E651Cu);
    ctx->pc = 0x1E6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6514u;
    // 0x1e6518: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E6514u, 0x1E651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E651Cu;
label_1e651c:
    // 0x1e651c: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x1e651cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1e6520: 0x103c3c  dsll32      $a3, $s0, 16
    ctx->pc = 0x1e6520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e6524: 0x27a8010c  addiu       $t0, $sp, 0x10C
    ctx->pc = 0x1e6524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1e6528: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1e6528u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1e652c: 0x27a6011c  addiu       $a2, $sp, 0x11C
    ctx->pc = 0x1e652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1e6530: 0x27a3012c  addiu       $v1, $sp, 0x12C
    ctx->pc = 0x1e6530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1e6534: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e6534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e6538: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1e6538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1e653c: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x1e653cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1e6540: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1e6540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1e6544: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x1e6544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1e6548: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1e6548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1e654c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e6550: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1e6550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6554: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6558: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1e6558u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1e655c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e6560: 0x70471018  mult1       $v0, $v0, $a3
    ctx->pc = 0x1e6560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6564: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6568: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e6568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e656c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6570: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1e6570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6574: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6578: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e6578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e657c: 0x92460032  lbu         $a2, 0x32($s2)
    ctx->pc = 0x1e657cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1e6580: 0xc64c0038  lwc1        $f12, 0x38($s2)
    ctx->pc = 0x1e6580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6584: 0xc64d003c  lwc1        $f13, 0x3C($s2)
    ctx->pc = 0x1e6584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e6588: 0x92470031  lbu         $a3, 0x31($s2)
    ctx->pc = 0x1e6588u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1e658c: 0xc0b9820  jal         func_2E6080
    ctx->pc = 0x1E658Cu;
    SET_GPR_U32(ctx, 31, 0x1E6594u);
    ctx->pc = 0x1E6590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E658Cu;
    // 0x1e6590: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6080u, 0x1E658Cu, 0x1E6594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6594u;
label_1e6594:
    // 0x1e6594: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e6594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6598:
    // 0x1e6598: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e6598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e659c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e659cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e65a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e65a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e65a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e65a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e65a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E65A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65A8u;
        // 0x1e65ac: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E65A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E65B0u;
}

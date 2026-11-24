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

// Function: sub_002843F0
// Address: 0x2843f0 - 0x2847b8
void sub_002843F0_0x2843f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002843F0_0x2843f0");
#endif

    switch (ctx->pc) {
        case 0x28442cu: goto label_28442c;
        case 0x28445cu: goto label_28445c;
        case 0x28447cu: goto label_28447c;
        case 0x2844a4u: goto label_2844a4;
        case 0x2844b8u: goto label_2844b8;
        case 0x2844d4u: goto label_2844d4;
        case 0x2844f4u: goto label_2844f4;
        case 0x284520u: goto label_284520;
        case 0x284550u: goto label_284550;
        case 0x28457cu: goto label_28457c;
        case 0x2845b0u: goto label_2845b0;
        case 0x2846dcu: goto label_2846dc;
        case 0x284710u: goto label_284710;
        case 0x284728u: goto label_284728;
        case 0x28474cu: goto label_28474c;
        case 0x28476cu: goto label_28476c;
        case 0x284788u: goto label_284788;
        default: break;
    }

    ctx->pc = 0x2843f0u;

    // 0x2843f0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2843f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2843f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2843f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2843f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2843f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2843fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2843fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x284400: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x284400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x284404: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x284404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x284408: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x284408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28440c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28440cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284410: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x284410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x284414: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x284414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x284418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28441c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284420: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x284420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284424: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x284424u;
    SET_GPR_U32(ctx, 31, 0x28442Cu);
    ctx->pc = 0x284428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284424u;
    // 0x284428: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x284424u, 0x28442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28442Cu;
label_28442c:
    // 0x28442c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x28442cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x284430: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x284430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x284434: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x284434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x284438: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x284438u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28443c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28443cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284440: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x284440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x284444: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x284444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284448: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x284448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x28444c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x28444cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x284450: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x284450u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284454: 0xc09e644  jal         func_279910
    ctx->pc = 0x284454u;
    SET_GPR_U32(ctx, 31, 0x28445Cu);
    ctx->pc = 0x284458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284454u;
    // 0x284458: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x284454u, 0x28445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28445Cu;
label_28445c:
    // 0x28445c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x28445cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x284460: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x284460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x284464: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x284464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x284468: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x284468u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28446c: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x28446cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x284470: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x284470u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x284474: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x284474u;
    SET_GPR_U32(ctx, 31, 0x28447Cu);
    ctx->pc = 0x284478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284474u;
    // 0x284478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x284474u, 0x28447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28447Cu;
label_28447c:
    // 0x28447c: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x28447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x284480: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x284480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x284484: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x284484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x284488: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x284488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28448c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x28448cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x284490: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x284490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x284494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284498: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x284498u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28449c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28449Cu;
    SET_GPR_U32(ctx, 31, 0x2844A4u);
    ctx->pc = 0x2844A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28449Cu;
    // 0x2844a0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28449Cu, 0x2844A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844A4u;
label_2844a4:
    // 0x2844a4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2844a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2844a8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2844a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2844ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2844acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2844b0: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2844B0u;
    SET_GPR_U32(ctx, 31, 0x2844B8u);
    ctx->pc = 0x2844B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844B0u;
    // 0x2844b4: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2844B0u, 0x2844B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844B8u;
label_2844b8:
    // 0x2844b8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2844b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2844bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2844bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2844c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2844c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844c4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2844c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2844c8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2844c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2844cc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2844CCu;
    SET_GPR_U32(ctx, 31, 0x2844D4u);
    ctx->pc = 0x2844D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844CCu;
    // 0x2844d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2844CCu, 0x2844D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844D4u;
label_2844d4:
    // 0x2844d4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2844d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2844d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2844d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2844dc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x2844dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x2844e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2844e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2844e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2844e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2844e8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2844e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2844ec: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x2844ECu;
    SET_GPR_U32(ctx, 31, 0x2844F4u);
    ctx->pc = 0x2844F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2844ECu;
    // 0x2844f0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x2844ECu, 0x2844F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844F4u;
label_2844f4:
    // 0x2844f4: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x2844f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2844f8: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x2844f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2844fc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2844fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x284500: 0x10200081  beqz        $at, . + 4 + (0x81 << 2)
    ctx->pc = 0x284500u;
    {
        const bool branch_taken_0x284500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x284504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284500u;
        // 0x284504: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284500) {
            ctx->pc = 0x284708u;
            goto label_284708;
        }
    }
    ctx->pc = 0x284508u;
    // 0x284508: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x284508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28450c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x28450cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x284510: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x284510u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284514: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x284514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284518: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x284518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x28451c: 0x0  nop
    ctx->pc = 0x28451cu;
    // NOP
label_284520:
    // 0x284520: 0x8ea4007c  lw          $a0, 0x7C($s5)
    ctx->pc = 0x284520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x284524: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x284524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x284528: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x284528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28452c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x28452cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x284530: 0x86220020  lh          $v0, 0x20($s1)
    ctx->pc = 0x284530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x284534: 0x1043006a  beq         $v0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x284534u;
    {
        const bool branch_taken_0x284534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x284534) {
            ctx->pc = 0x2846E0u;
            goto label_2846e0;
        }
    }
    ctx->pc = 0x28453Cu;
    // 0x28453c: 0x92260024  lbu         $a2, 0x24($s1)
    ctx->pc = 0x28453cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x284540: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x284540u;
    {
        const bool branch_taken_0x284540 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x284544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284540u;
        // 0x284544: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284540) {
            ctx->pc = 0x284570u;
            goto label_284570;
        }
    }
    ctx->pc = 0x284548u;
    // 0x284548: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x284548u;
    SET_GPR_U32(ctx, 31, 0x284550u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x284548u, 0x284550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284550u;
label_284550:
    // 0x284550: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x284550u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x284554: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284558: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x284558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28455c: 0x94520006  lhu         $s2, 0x6($v0)
    ctx->pc = 0x28455cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x284560: 0x263b821  addu        $s7, $s3, $v1
    ctx->pc = 0x284560u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x284564: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x284564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x284568: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x284568u;
    {
        const bool branch_taken_0x284568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284568u;
        // 0x28456c: 0x242f021  addu        $fp, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284568) {
            ctx->pc = 0x2845A0u;
            goto label_2845a0;
        }
    }
    ctx->pc = 0x284570u;
label_284570:
    // 0x284570: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x284570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x284574: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x284574u;
    SET_GPR_U32(ctx, 31, 0x28457Cu);
    ctx->pc = 0x284578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284574u;
    // 0x284578: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x284574u, 0x28457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28457Cu;
label_28457c:
    // 0x28457c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28457cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284580: 0x8fb300f0  lw          $s3, 0xF0($sp)
    ctx->pc = 0x284580u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x284584: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x284584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x284588: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x284588u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28458c: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x28458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x284590: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x284590u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284594: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x284594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x284598: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x284598u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28459c: 0x0  nop
    ctx->pc = 0x28459cu;
    // NOP
label_2845a0:
    // 0x2845a0: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2845a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2845a4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2845a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2845a8: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x2845A8u;
    SET_GPR_U32(ctx, 31, 0x2845B0u);
    ctx->pc = 0x2845ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2845A8u;
    // 0x2845ac: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x2845A8u, 0x2845B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845B0u;
label_2845b0:
    // 0x2845b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2845b4: 0x86240022  lh          $a0, 0x22($s1)
    ctx->pc = 0x2845b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x2845b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2845b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2845bc: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x2845bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x2845c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2845c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2845c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2845c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2845c8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2845c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2845cc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2845ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2845d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2845d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2845d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2845d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2845d8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2845d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2845dc: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x2845dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2845e0: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x2845e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x2845e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2845e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2845e8: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x2845e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x2845ec: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2845ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2845f0: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x2845f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2845f4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2845F4u;
    {
        const bool branch_taken_0x2845f4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2845F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845F4u;
        // 0x2845f8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845f4) {
            ctx->pc = 0x284608u;
            goto label_284608;
        }
    }
    ctx->pc = 0x2845FCu;
    // 0x2845fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2845fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284600: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284600u;
    {
        const bool branch_taken_0x284600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284600u;
        // 0x284604: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284600) {
            ctx->pc = 0x284620u;
            goto label_284620;
        }
    }
    ctx->pc = 0x284608u;
label_284608:
    // 0x284608: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x284608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28460c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28460cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x284610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284614: 0x0  nop
    ctx->pc = 0x284614u;
    // NOP
    // 0x284618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28461c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28461cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_284620:
    // 0x284620: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x284620u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284624: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x284624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x284628: 0x21023  negu        $v0, $v0
    ctx->pc = 0x284628u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x28462c: 0x8ead0070  lw          $t5, 0x70($s5)
    ctx->pc = 0x28462cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x284630: 0x860b000a  lh          $t3, 0xA($s0)
    ctx->pc = 0x284630u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x284634: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x284634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x284638: 0x860c0008  lh          $t4, 0x8($s0)
    ctx->pc = 0x284638u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28463c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28463cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284640: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x284640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284644: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x284644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28464c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x28464cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284650: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x284650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x284654: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x284654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284658: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x284658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28465c: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x28465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x284660: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x284660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284664: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x284664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x284668: 0x27aa0140  addiu       $t2, $sp, 0x140
    ctx->pc = 0x284668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x28466c: 0xc5a0001c  lwc1        $f0, 0x1C($t5)
    ctx->pc = 0x28466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284670: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x284670u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x284674: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x284674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x284678: 0xc5b10018  lwc1        $f17, 0x18($t5)
    ctx->pc = 0x284678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28467c: 0x468019a0  cvt.s.w     $f6, $f3
    ctx->pc = 0x28467cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x284680: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x284680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x284684: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x284684u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x284688: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x284688u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28468c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28468cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284690: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x284690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x284694: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x284694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x284698: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x284698u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28469c: 0x46032843  div.s       $f1, $f5, $f3
    ctx->pc = 0x28469cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x2846a0: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2846a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2846a4: 0x46016342  mul.s       $f13, $f12, $f1
    ctx->pc = 0x2846a4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2846a8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2846a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2846ac: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x2846acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2846b0: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x2846b0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x2846b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2846b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2846b8: 0x0  nop
    ctx->pc = 0x2846b8u;
    // NOP
    // 0x2846bc: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x2846bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x2846c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2846c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2846c4: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x2846c4u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x2846c8: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x2846c8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2846cc: 0x0  nop
    ctx->pc = 0x2846ccu;
    // NOP
    // 0x2846d0: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2846d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2846d4: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x2846D4u;
    SET_GPR_U32(ctx, 31, 0x2846DCu);
    ctx->pc = 0x2846D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846D4u;
    // 0x2846d8: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x2846D4u, 0x2846DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846DCu;
label_2846dc:
    // 0x2846dc: 0x0  nop
    ctx->pc = 0x2846dcu;
    // NOP
label_2846e0:
    // 0x2846e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2846e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2846e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2846e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2846e8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2846e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2846ec: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2846ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2846f0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x2846f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2846f4: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x2846f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2846f8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2846f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2846fc: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x2846FCu;
    {
        const bool branch_taken_0x2846fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846FCu;
        // 0x284700: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846fc) {
            ctx->pc = 0x284520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284520;
        }
    }
    ctx->pc = 0x284704u;
    // 0x284704: 0x0  nop
    ctx->pc = 0x284704u;
    // NOP
label_284708:
    // 0x284708: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x284708u;
    SET_GPR_U32(ctx, 31, 0x284710u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x284708u, 0x284710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284710u;
label_284710:
    // 0x284710: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x284710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x284714: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x284714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x284718: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x284718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28471c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x284720: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x284720u;
    SET_GPR_U32(ctx, 31, 0x284728u);
    ctx->pc = 0x284724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284720u;
    // 0x284724: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x284720u, 0x284728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284728u;
label_284728:
    // 0x284728: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x284728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28472c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x28472cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x284730: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x284730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x284734: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x284734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x284738: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x284738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x28473c: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x28473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x284740: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x284740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x284744: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x284744u;
    SET_GPR_U32(ctx, 31, 0x28474Cu);
    ctx->pc = 0x284748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284744u;
    // 0x284748: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x284744u, 0x28474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28474Cu;
label_28474c:
    // 0x28474c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x28474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x284750: 0x38283  sra         $s0, $v1, 10
    ctx->pc = 0x284750u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
    // 0x284754: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x284754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x284758: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x284758u;
    {
        const bool branch_taken_0x284758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284758) {
            ctx->pc = 0x284788u;
            goto label_284788;
        }
    }
    ctx->pc = 0x284760u;
    // 0x284760: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x284760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x284764: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x284764u;
    SET_GPR_U32(ctx, 31, 0x28476Cu);
    ctx->pc = 0x284768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284764u;
    // 0x284768: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x284764u, 0x28476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28476Cu;
label_28476c:
    // 0x28476c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x28476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x284770: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x284770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x284774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x284774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x284778: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x284778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x28477c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x28477cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x284780: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x284780u;
    SET_GPR_U32(ctx, 31, 0x284788u);
    ctx->pc = 0x284784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284780u;
    // 0x284784: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x284780u, 0x284788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284788u;
label_284788:
    // 0x284788: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x284788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28478c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28478cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x284790: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x284790u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284794: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x284794u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284798: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x284798u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28479c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28479cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2847a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2847a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2847a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2847a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2847a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2847a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2847ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2847acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2847b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2847B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2847B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847B0u;
        // 0x2847b4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2847B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2847B8u;
}

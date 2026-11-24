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

// Function: sub_0028D720
// Address: 0x28d720 - 0x28e0c0
void sub_0028D720_0x28d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D720_0x28d720");
#endif

    switch (ctx->pc) {
        case 0x28d75cu: goto label_28d75c;
        case 0x28d788u: goto label_28d788;
        case 0x28d7b4u: goto label_28d7b4;
        case 0x28d7dcu: goto label_28d7dc;
        case 0x28d7e4u: goto label_28d7e4;
        case 0x28d800u: goto label_28d800;
        case 0x28d820u: goto label_28d820;
        case 0x28d848u: goto label_28d848;
        case 0x28d878u: goto label_28d878;
        case 0x28d8a4u: goto label_28d8a4;
        case 0x28d8d8u: goto label_28d8d8;
        case 0x28d9f0u: goto label_28d9f0;
        case 0x28da20u: goto label_28da20;
        case 0x28da38u: goto label_28da38;
        case 0x28da50u: goto label_28da50;
        case 0x28da8cu: goto label_28da8c;
        case 0x28dab4u: goto label_28dab4;
        case 0x28dabcu: goto label_28dabc;
        case 0x28dad4u: goto label_28dad4;
        case 0x28daf0u: goto label_28daf0;
        case 0x28db18u: goto label_28db18;
        case 0x28db48u: goto label_28db48;
        case 0x28db74u: goto label_28db74;
        case 0x28dba8u: goto label_28dba8;
        case 0x28dcc0u: goto label_28dcc0;
        case 0x28dcf0u: goto label_28dcf0;
        case 0x28dd08u: goto label_28dd08;
        case 0x28dd20u: goto label_28dd20;
        case 0x28dd5cu: goto label_28dd5c;
        case 0x28dd84u: goto label_28dd84;
        case 0x28dd8cu: goto label_28dd8c;
        case 0x28dda4u: goto label_28dda4;
        case 0x28ddc0u: goto label_28ddc0;
        case 0x28dde8u: goto label_28dde8;
        case 0x28de08u: goto label_28de08;
        case 0x28de48u: goto label_28de48;
        case 0x28de7cu: goto label_28de7c;
        case 0x28deb0u: goto label_28deb0;
        case 0x28dfdcu: goto label_28dfdc;
        case 0x28e018u: goto label_28e018;
        case 0x28e030u: goto label_28e030;
        case 0x28e054u: goto label_28e054;
        case 0x28e074u: goto label_28e074;
        case 0x28e090u: goto label_28e090;
        default: break;
    }

    ctx->pc = 0x28d720u;

    // 0x28d720: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x28d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x28d724: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28d728: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28d728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28d72c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28d72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28d730: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28d730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28d734: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28d734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28d738: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28d738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28d73c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28d73cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d740: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28d740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28d744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28d748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d74c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d750: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28d750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d754: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x28D754u;
    SET_GPR_U32(ctx, 31, 0x28D75Cu);
    ctx->pc = 0x28D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D754u;
    // 0x28d758: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x28D754u, 0x28D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D75Cu;
label_28d75c:
    // 0x28d75c: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x28d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x28d760: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x28d760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x28d764: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x28d764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28d768: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x28d768u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28d76c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28d76cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28d770: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x28d770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x28d774: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28d774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28d778: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x28d778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x28d77c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x28d77cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x28d780: 0xc09e644  jal         func_279910
    ctx->pc = 0x28D780u;
    SET_GPR_U32(ctx, 31, 0x28D788u);
    ctx->pc = 0x28D784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D780u;
    // 0x28d784: 0xa7a20140  sh          $v0, 0x140($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x28D780u, 0x28D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D788u;
label_28d788:
    // 0x28d788: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x28d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x28d78c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x28d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x28d790: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x28d790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28d794: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x28d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x28d798: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x28d798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28d79c: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x28d79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x28d7a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28d7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d7a8: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x28d7a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d7ac: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28D7ACu;
    SET_GPR_U32(ctx, 31, 0x28D7B4u);
    ctx->pc = 0x28D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7ACu;
    // 0x28d7b0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28D7ACu, 0x28D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7B4u;
label_28d7b4:
    // 0x28d7b4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x28d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28d7b8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x28d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x28d7bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d7c0: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x28d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x28d7c4: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28d7c8: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x28d7c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d7cc: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x28d7ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x28d7d0: 0x90480021  lbu         $t0, 0x21($v0)
    ctx->pc = 0x28d7d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x28d7d4: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x28D7D4u;
    SET_GPR_U32(ctx, 31, 0x28D7DCu);
    ctx->pc = 0x28D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7D4u;
    // 0x28d7d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x28D7D4u, 0x28D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7DCu;
label_28d7dc:
    // 0x28d7dc: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x28D7DCu;
    SET_GPR_U32(ctx, 31, 0x28D7E4u);
    ctx->pc = 0x28D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7DCu;
    // 0x28d7e0: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x28D7DCu, 0x28D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7E4u;
label_28d7e4:
    // 0x28d7e4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x28d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28d7e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28d7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d7ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28d7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7f0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x28d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28d7f4: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x28d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28d7f8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28D7F8u;
    SET_GPR_U32(ctx, 31, 0x28D800u);
    ctx->pc = 0x28D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7F8u;
    // 0x28d7fc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28D7F8u, 0x28D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D800u;
label_28d800:
    // 0x28d800: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x28d800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28d804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d808: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x28d808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x28d80c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x28d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28d810: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28d810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28d814: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x28d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28d818: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x28D818u;
    SET_GPR_U32(ctx, 31, 0x28D820u);
    ctx->pc = 0x28D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D818u;
    // 0x28d81c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x28D818u, 0x28D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D820u;
label_28d820:
    // 0x28d820: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x28d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x28d824: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x28d824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28d828: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28d828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28d82c: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
    ctx->pc = 0x28D82Cu;
    {
        const bool branch_taken_0x28d82c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D82Cu;
        // 0x28d830: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d82c) {
            ctx->pc = 0x28DA18u;
            goto label_28da18;
        }
    }
    ctx->pc = 0x28D834u;
    // 0x28d834: 0x87a20140  lh          $v0, 0x140($sp)
    ctx->pc = 0x28d834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28d838: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28d838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d83c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x28d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x28d840: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x28d840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d844: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x28d844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_28d848:
    // 0x28d848: 0x8ea4007c  lw          $a0, 0x7C($s5)
    ctx->pc = 0x28d848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x28d84c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28d850: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28d854: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x28d854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28d858: 0x86220020  lh          $v0, 0x20($s1)
    ctx->pc = 0x28d858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28d85c: 0x10430064  beq         $v0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x28D85Cu;
    {
        const bool branch_taken_0x28d85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28d85c) {
            ctx->pc = 0x28D9F0u;
            goto label_28d9f0;
        }
    }
    ctx->pc = 0x28D864u;
    // 0x28d864: 0x92260024  lbu         $a2, 0x24($s1)
    ctx->pc = 0x28d864u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x28d868: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x28D868u;
    {
        const bool branch_taken_0x28d868 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D868u;
        // 0x28d86c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d868) {
            ctx->pc = 0x28D898u;
            goto label_28d898;
        }
    }
    ctx->pc = 0x28D870u;
    // 0x28d870: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x28D870u;
    SET_GPR_U32(ctx, 31, 0x28D878u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x28D870u, 0x28D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D878u;
label_28d878:
    // 0x28d878: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x28d878u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d87c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d880: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x28d880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28d884: 0x94520006  lhu         $s2, 0x6($v0)
    ctx->pc = 0x28d884u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x28d888: 0x263b821  addu        $s7, $s3, $v1
    ctx->pc = 0x28d888u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28d88c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x28d88cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28d890: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28D890u;
    {
        const bool branch_taken_0x28d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D890u;
        // 0x28d894: 0x242f021  addu        $fp, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d890) {
            ctx->pc = 0x28D8C8u;
            goto label_28d8c8;
        }
    }
    ctx->pc = 0x28D898u;
label_28d898:
    // 0x28d898: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x28d898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28d89c: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x28D89Cu;
    SET_GPR_U32(ctx, 31, 0x28D8A4u);
    ctx->pc = 0x28D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D89Cu;
    // 0x28d8a0: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x28D89Cu, 0x28D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8A4u;
label_28d8a4:
    // 0x28d8a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8a8: 0x8fb30250  lw          $s3, 0x250($sp)
    ctx->pc = 0x28d8a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x28d8ac: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x28d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x28d8b0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x28d8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d8b4: 0x27a20280  addiu       $v0, $sp, 0x280
    ctx->pc = 0x28d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x28d8b8: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x28d8b8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d8bc: 0x27a20284  addiu       $v0, $sp, 0x284
    ctx->pc = 0x28d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x28d8c0: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x28d8c0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d8c4: 0x0  nop
    ctx->pc = 0x28d8c4u;
    // NOP
label_28d8c8:
    // 0x28d8c8: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28d8cc: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x28d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x28d8d0: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x28D8D0u;
    SET_GPR_U32(ctx, 31, 0x28D8D8u);
    ctx->pc = 0x28D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D8D0u;
    // 0x28d8d4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x28D8D0u, 0x28D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8D8u;
label_28d8d8:
    // 0x28d8d8: 0x27a2029c  addiu       $v0, $sp, 0x29C
    ctx->pc = 0x28d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
    // 0x28d8dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d8e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28d8e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d8e8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x28d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28d8ec: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28d8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28d8f0: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x28d8f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x28d8f4: 0x27a2029c  addiu       $v0, $sp, 0x29C
    ctx->pc = 0x28d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
    // 0x28d8f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28d8fc: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x28d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x28d900: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x28d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28d904: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x28d904u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x28d908: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D908u;
    {
        const bool branch_taken_0x28d908 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x28D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D908u;
        // 0x28d90c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d908) {
            ctx->pc = 0x28D91Cu;
            goto label_28d91c;
        }
    }
    ctx->pc = 0x28D910u;
    // 0x28d910: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28d910u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d914: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28D914u;
    {
        const bool branch_taken_0x28d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D914u;
        // 0x28d918: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d914) {
            ctx->pc = 0x28D934u;
            goto label_28d934;
        }
    }
    ctx->pc = 0x28D91Cu;
label_28d91c:
    // 0x28d91c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28d920: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28d920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28d924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d928: 0x0  nop
    ctx->pc = 0x28d928u;
    // NOP
    // 0x28d92c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28d92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28d930: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28d930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28d934:
    // 0x28d934: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28d934u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28d938: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x28d938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28d93c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x28d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x28d940: 0x8ead0070  lw          $t5, 0x70($s5)
    ctx->pc = 0x28d940u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28d944: 0x860b000a  lh          $t3, 0xA($s0)
    ctx->pc = 0x28d944u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x28d948: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28d94c: 0x860c0008  lh          $t4, 0x8($s0)
    ctx->pc = 0x28d94cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28d950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d954: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28d954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d958: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28d958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d960: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x28d960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d964: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x28d964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28d968: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x28d968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d96c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28d96cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28d970: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x28d970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x28d974: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x28d974u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d978: 0x27a90290  addiu       $t1, $sp, 0x290
    ctx->pc = 0x28d978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x28d97c: 0x27aa02a0  addiu       $t2, $sp, 0x2A0
    ctx->pc = 0x28d97cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x28d980: 0xc5a0002c  lwc1        $f0, 0x2C($t5)
    ctx->pc = 0x28d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d984: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x28d984u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d988: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x28d988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28d98c: 0xc5b10028  lwc1        $f17, 0x28($t5)
    ctx->pc = 0x28d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28d990: 0x468019a0  cvt.s.w     $f6, $f3
    ctx->pc = 0x28d990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28d994: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x28d994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28d998: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x28d998u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28d99c: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x28d99cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d9a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28d9a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d9a4: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x28d9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28d9a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28d9a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28d9ac: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x28d9acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28d9b0: 0x46032843  div.s       $f1, $f5, $f3
    ctx->pc = 0x28d9b0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x28d9b4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x28d9b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x28d9b8: 0x46016342  mul.s       $f13, $f12, $f1
    ctx->pc = 0x28d9b8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28d9bc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x28d9bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28d9c0: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x28d9c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x28d9c4: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x28d9c4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x28d9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d9cc: 0x0  nop
    ctx->pc = 0x28d9ccu;
    // NOP
    // 0x28d9d0: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x28d9d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x28d9d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28d9d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28d9d8: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x28d9d8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x28d9dc: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x28d9dcu;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28d9e0: 0x0  nop
    ctx->pc = 0x28d9e0u;
    // NOP
    // 0x28d9e4: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x28d9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x28d9e8: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x28D9E8u;
    SET_GPR_U32(ctx, 31, 0x28D9F0u);
    ctx->pc = 0x28D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9E8u;
    // 0x28d9ec: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x28D9E8u, 0x28D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D9F0u;
label_28d9f0:
    // 0x28d9f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28d9f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d9f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d9f8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x28d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x28d9fc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x28d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x28da00: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x28da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x28da04: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x28da04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28da08: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x28da08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28da0c: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x28DA0Cu;
    {
        const bool branch_taken_0x28da0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA0Cu;
        // 0x28da10: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da0c) {
            ctx->pc = 0x28D848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d848;
        }
    }
    ctx->pc = 0x28DA14u;
    // 0x28da14: 0x0  nop
    ctx->pc = 0x28da14u;
    // NOP
label_28da18:
    // 0x28da18: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x28DA18u;
    SET_GPR_U32(ctx, 31, 0x28DA20u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x28DA18u, 0x28DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA20u;
label_28da20:
    // 0x28da20: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x28da20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28da24: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x28da24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x28da28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28da28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28da2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28da30: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x28DA30u;
    SET_GPR_U32(ctx, 31, 0x28DA38u);
    ctx->pc = 0x28DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA30u;
    // 0x28da34: 0xafa30130  sw          $v1, 0x130($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x28DA30u, 0x28DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA38u;
label_28da38:
    // 0x28da38: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x28da38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28da3c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x28da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x28da40: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x28da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28da44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28da44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28da48: 0xc09e644  jal         func_279910
    ctx->pc = 0x28DA48u;
    SET_GPR_U32(ctx, 31, 0x28DA50u);
    ctx->pc = 0x28DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA48u;
    // 0x28da4c: 0xafa30160  sw          $v1, 0x160($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x28DA48u, 0x28DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA50u;
label_28da50:
    // 0x28da50: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28da54: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x28da54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x28da58: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x28da58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x28da5c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28da60: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x28da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28da64: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x28da64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28da68: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x28da68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28da6c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x28da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x28da70: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x28da70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x28da74: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x28da74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x28da78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28da78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28da7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28da80: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x28da80u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28da84: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28DA84u;
    SET_GPR_U32(ctx, 31, 0x28DA8Cu);
    ctx->pc = 0x28DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA84u;
    // 0x28da88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28DA84u, 0x28DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA8Cu;
label_28da8c:
    // 0x28da8c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x28da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28da90: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x28da90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x28da94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28da94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28da98: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x28da98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x28da9c: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28daa0: 0x9045001c  lbu         $a1, 0x1C($v0)
    ctx->pc = 0x28daa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x28daa4: 0x9046001d  lbu         $a2, 0x1D($v0)
    ctx->pc = 0x28daa4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29)));
    // 0x28daa8: 0x90480021  lbu         $t0, 0x21($v0)
    ctx->pc = 0x28daa8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x28daac: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x28DAACu;
    SET_GPR_U32(ctx, 31, 0x28DAB4u);
    ctx->pc = 0x28DAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAACu;
    // 0x28dab0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x28DAACu, 0x28DAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAB4u;
label_28dab4:
    // 0x28dab4: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x28DAB4u;
    SET_GPR_U32(ctx, 31, 0x28DABCu);
    ctx->pc = 0x28DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAB4u;
    // 0x28dab8: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x28DAB4u, 0x28DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DABCu;
label_28dabc:
    // 0x28dabc: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x28dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28dac0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28dac4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28dac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dac8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28dacc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28DACCu;
    SET_GPR_U32(ctx, 31, 0x28DAD4u);
    ctx->pc = 0x28DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DACCu;
    // 0x28dad0: 0x2032021  addu        $a0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28DACCu, 0x28DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAD4u;
label_28dad4:
    // 0x28dad4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x28dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28dad8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28dadc: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x28dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x28dae0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x28dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28dae4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28dae8: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x28DAE8u;
    SET_GPR_U32(ctx, 31, 0x28DAF0u);
    ctx->pc = 0x28DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAE8u;
    // 0x28daec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x28DAE8u, 0x28DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAF0u;
label_28daf0:
    // 0x28daf0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x28daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x28daf4: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x28daf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28daf8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28daf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28dafc: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
    ctx->pc = 0x28DAFCu;
    {
        const bool branch_taken_0x28dafc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAFCu;
        // 0x28db00: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dafc) {
            ctx->pc = 0x28DCE8u;
            goto label_28dce8;
        }
    }
    ctx->pc = 0x28DB04u;
    // 0x28db04: 0x87a20140  lh          $v0, 0x140($sp)
    ctx->pc = 0x28db04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28db08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28db08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db0c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x28db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x28db10: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x28db10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db14: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x28db14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_28db18:
    // 0x28db18: 0x8ea40084  lw          $a0, 0x84($s5)
    ctx->pc = 0x28db18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    // 0x28db1c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x28db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28db20: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28db24: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x28db24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28db28: 0x86220020  lh          $v0, 0x20($s1)
    ctx->pc = 0x28db28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28db2c: 0x10430064  beq         $v0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x28DB2Cu;
    {
        const bool branch_taken_0x28db2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28db2c) {
            ctx->pc = 0x28DCC0u;
            goto label_28dcc0;
        }
    }
    ctx->pc = 0x28DB34u;
    // 0x28db34: 0x92260024  lbu         $a2, 0x24($s1)
    ctx->pc = 0x28db34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x28db38: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x28DB38u;
    {
        const bool branch_taken_0x28db38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB38u;
        // 0x28db3c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db38) {
            ctx->pc = 0x28DB68u;
            goto label_28db68;
        }
    }
    ctx->pc = 0x28DB40u;
    // 0x28db40: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x28DB40u;
    SET_GPR_U32(ctx, 31, 0x28DB48u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x28DB40u, 0x28DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB48u;
label_28db48:
    // 0x28db48: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x28db48u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28db4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28db4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db50: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x28db50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28db54: 0x94520006  lhu         $s2, 0x6($v0)
    ctx->pc = 0x28db54u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x28db58: 0x263b821  addu        $s7, $s3, $v1
    ctx->pc = 0x28db58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28db5c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x28db5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28db60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28DB60u;
    {
        const bool branch_taken_0x28db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB60u;
        // 0x28db64: 0x242f021  addu        $fp, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db60) {
            ctx->pc = 0x28DB98u;
            goto label_28db98;
        }
    }
    ctx->pc = 0x28DB68u;
label_28db68:
    // 0x28db68: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x28db68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28db6c: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x28DB6Cu;
    SET_GPR_U32(ctx, 31, 0x28DB74u);
    ctx->pc = 0x28DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB6Cu;
    // 0x28db70: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x28DB6Cu, 0x28DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB74u;
label_28db74:
    // 0x28db74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28db74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db78: 0x8fb301e0  lw          $s3, 0x1E0($sp)
    ctx->pc = 0x28db78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x28db7c: 0x27a201e4  addiu       $v0, $sp, 0x1E4
    ctx->pc = 0x28db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x28db80: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x28db80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28db84: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x28db84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x28db88: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x28db88u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28db8c: 0x27a20214  addiu       $v0, $sp, 0x214
    ctx->pc = 0x28db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
    // 0x28db90: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x28db90u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28db94: 0x0  nop
    ctx->pc = 0x28db94u;
    // NOP
label_28db98:
    // 0x28db98: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28db9c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x28db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x28dba0: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x28DBA0u;
    SET_GPR_U32(ctx, 31, 0x28DBA8u);
    ctx->pc = 0x28DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBA0u;
    // 0x28dba4: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x28DBA0u, 0x28DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBA8u;
label_28dba8:
    // 0x28dba8: 0x27a2022c  addiu       $v0, $sp, 0x22C
    ctx->pc = 0x28dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x28dbac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dbb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28dbb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28dbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28dbb8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28dbbc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28dbbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28dbc0: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x28dbc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x28dbc4: 0x27a2022c  addiu       $v0, $sp, 0x22C
    ctx->pc = 0x28dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x28dbc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28dbcc: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x28dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x28dbd0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x28dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28dbd4: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x28dbd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x28dbd8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DBD8u;
    {
        const bool branch_taken_0x28dbd8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x28DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBD8u;
        // 0x28dbdc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbd8) {
            ctx->pc = 0x28DBECu;
            goto label_28dbec;
        }
    }
    ctx->pc = 0x28DBE0u;
    // 0x28dbe0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28dbe0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dbe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28DBE4u;
    {
        const bool branch_taken_0x28dbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBE4u;
        // 0x28dbe8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbe4) {
            ctx->pc = 0x28DC04u;
            goto label_28dc04;
        }
    }
    ctx->pc = 0x28DBECu;
label_28dbec:
    // 0x28dbec: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28dbf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28dbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28dbf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28dbf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dbf8: 0x0  nop
    ctx->pc = 0x28dbf8u;
    // NOP
    // 0x28dbfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28dbfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28dc00: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28dc00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28dc04:
    // 0x28dc04: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28dc04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28dc08: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x28dc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28dc0c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x28dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x28dc10: 0x8ead0070  lw          $t5, 0x70($s5)
    ctx->pc = 0x28dc10u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28dc14: 0x860b000a  lh          $t3, 0xA($s0)
    ctx->pc = 0x28dc14u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x28dc18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28dc1c: 0x860c0008  lh          $t4, 0x8($s0)
    ctx->pc = 0x28dc1cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28dc20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28dc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28dc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28dc2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dc30: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x28dc30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc34: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x28dc34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28dc38: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x28dc38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28dc3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28dc40: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x28dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x28dc44: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x28dc44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28dc48: 0x27a90220  addiu       $t1, $sp, 0x220
    ctx->pc = 0x28dc48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x28dc4c: 0x27aa0230  addiu       $t2, $sp, 0x230
    ctx->pc = 0x28dc4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x28dc50: 0xc5a00034  lwc1        $f0, 0x34($t5)
    ctx->pc = 0x28dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dc54: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x28dc54u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28dc58: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x28dc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28dc5c: 0xc5b10030  lwc1        $f17, 0x30($t5)
    ctx->pc = 0x28dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28dc60: 0x468019a0  cvt.s.w     $f6, $f3
    ctx->pc = 0x28dc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28dc64: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x28dc64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28dc68: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x28dc68u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28dc6c: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x28dc6cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28dc70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28dc70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28dc74: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x28dc74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28dc78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28dc78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28dc7c: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x28dc7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28dc80: 0x46032843  div.s       $f1, $f5, $f3
    ctx->pc = 0x28dc80u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x28dc84: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x28dc84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x28dc88: 0x46016342  mul.s       $f13, $f12, $f1
    ctx->pc = 0x28dc88u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28dc8c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x28dc8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28dc90: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x28dc90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x28dc94: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x28dc94u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x28dc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28dc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dc9c: 0x0  nop
    ctx->pc = 0x28dc9cu;
    // NOP
    // 0x28dca0: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x28dca0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x28dca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28dca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28dca8: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x28dca8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x28dcac: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x28dcacu;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28dcb0: 0x0  nop
    ctx->pc = 0x28dcb0u;
    // NOP
    // 0x28dcb4: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x28dcb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x28dcb8: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x28DCB8u;
    SET_GPR_U32(ctx, 31, 0x28DCC0u);
    ctx->pc = 0x28DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DCB8u;
    // 0x28dcbc: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x28DCB8u, 0x28DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCC0u;
label_28dcc0:
    // 0x28dcc0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x28dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28dcc4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28dcc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28dcc8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x28dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x28dccc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x28dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x28dcd0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x28dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x28dcd4: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x28dcd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28dcd8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x28dcd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28dcdc: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x28DCDCu;
    {
        const bool branch_taken_0x28dcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCDCu;
        // 0x28dce0: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcdc) {
            ctx->pc = 0x28DB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28db18;
        }
    }
    ctx->pc = 0x28DCE4u;
    // 0x28dce4: 0x0  nop
    ctx->pc = 0x28dce4u;
    // NOP
label_28dce8:
    // 0x28dce8: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x28DCE8u;
    SET_GPR_U32(ctx, 31, 0x28DCF0u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x28DCE8u, 0x28DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCF0u;
label_28dcf0:
    // 0x28dcf0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x28dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28dcf4: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x28dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x28dcf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28dcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28dcfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28dd00: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x28DD00u;
    SET_GPR_U32(ctx, 31, 0x28DD08u);
    ctx->pc = 0x28DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD00u;
    // 0x28dd04: 0xafa30120  sw          $v1, 0x120($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x28DD00u, 0x28DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD08u;
label_28dd08:
    // 0x28dd08: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x28dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28dd0c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x28dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x28dd10: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x28dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28dd14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28dd18: 0xc09e644  jal         func_279910
    ctx->pc = 0x28DD18u;
    SET_GPR_U32(ctx, 31, 0x28DD20u);
    ctx->pc = 0x28DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD18u;
    // 0x28dd1c: 0xafa30160  sw          $v1, 0x160($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x28DD18u, 0x28DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD20u;
label_28dd20:
    // 0x28dd20: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28dd24: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x28dd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x28dd28: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x28dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x28dd2c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28dd30: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x28dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28dd34: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x28dd34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28dd38: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x28dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28dd3c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x28dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x28dd40: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x28dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x28dd44: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x28dd44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x28dd48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28dd4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28dd50: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x28dd50u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dd54: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28DD54u;
    SET_GPR_U32(ctx, 31, 0x28DD5Cu);
    ctx->pc = 0x28DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD54u;
    // 0x28dd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28DD54u, 0x28DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD5Cu;
label_28dd5c:
    // 0x28dd5c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x28dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28dd60: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x28dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x28dd64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28dd68: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x28dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x28dd6c: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28dd70: 0x90450010  lbu         $a1, 0x10($v0)
    ctx->pc = 0x28dd70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28dd74: 0x90460011  lbu         $a2, 0x11($v0)
    ctx->pc = 0x28dd74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x28dd78: 0x90480021  lbu         $t0, 0x21($v0)
    ctx->pc = 0x28dd78u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x28dd7c: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x28DD7Cu;
    SET_GPR_U32(ctx, 31, 0x28DD84u);
    ctx->pc = 0x28DD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD7Cu;
    // 0x28dd80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x28DD7Cu, 0x28DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD84u;
label_28dd84:
    // 0x28dd84: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x28DD84u;
    SET_GPR_U32(ctx, 31, 0x28DD8Cu);
    ctx->pc = 0x28DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD84u;
    // 0x28dd88: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x28DD84u, 0x28DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD8Cu;
label_28dd8c:
    // 0x28dd8c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x28dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28dd90: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28dd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28dd94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28dd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28dd9c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28DD9Cu;
    SET_GPR_U32(ctx, 31, 0x28DDA4u);
    ctx->pc = 0x28DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD9Cu;
    // 0x28dda0: 0x2032021  addu        $a0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28DD9Cu, 0x28DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDA4u;
label_28dda4:
    // 0x28dda4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x28dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28dda8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ddac: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x28ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x28ddb0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28ddb4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28ddb8: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x28DDB8u;
    SET_GPR_U32(ctx, 31, 0x28DDC0u);
    ctx->pc = 0x28DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DDB8u;
    // 0x28ddbc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x28DDB8u, 0x28DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DDC0u;
label_28ddc0:
    // 0x28ddc0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x28ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x28ddc4: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x28ddc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28ddc8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28ddc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ddcc: 0x10200090  beqz        $at, . + 4 + (0x90 << 2)
    ctx->pc = 0x28DDCCu;
    {
        const bool branch_taken_0x28ddcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDCCu;
        // 0x28ddd0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddcc) {
            ctx->pc = 0x28E010u;
            goto label_28e010;
        }
    }
    ctx->pc = 0x28DDD4u;
    // 0x28ddd4: 0x87a20140  lh          $v0, 0x140($sp)
    ctx->pc = 0x28ddd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28ddd8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28ddd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dddc: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x28dddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dde0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x28dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x28dde4: 0x0  nop
    ctx->pc = 0x28dde4u;
    // NOP
label_28dde8:
    // 0x28dde8: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28ddec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28ddecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ddf0: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x28ddf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x28ddf4: 0x2c31018  mult        $v0, $s6, $v1
    ctx->pc = 0x28ddf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28ddf8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28ddf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28ddfc: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x28DDFCu;
    {
        const bool branch_taken_0x28ddfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDFCu;
        // 0x28de00: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddfc) {
            ctx->pc = 0x28DFF8u;
            goto label_28dff8;
        }
    }
    ctx->pc = 0x28DE04u;
    // 0x28de04: 0x0  nop
    ctx->pc = 0x28de04u;
    // NOP
label_28de08:
    // 0x28de08: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x28de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28de0c: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x28de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x28de10: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x28de10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28de14: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x28de14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x28de18: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x28de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28de1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x28de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28de20: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28de24: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x28de24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28de28: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x28de28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28de2c: 0x1062006c  beq         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x28DE2Cu;
    {
        const bool branch_taken_0x28de2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28de2c) {
            ctx->pc = 0x28DFE0u;
            goto label_28dfe0;
        }
    }
    ctx->pc = 0x28DE34u;
    // 0x28de34: 0x92260024  lbu         $a2, 0x24($s1)
    ctx->pc = 0x28de34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x28de38: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x28DE38u;
    {
        const bool branch_taken_0x28de38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE38u;
        // 0x28de3c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de38) {
            ctx->pc = 0x28DE70u;
            goto label_28de70;
        }
    }
    ctx->pc = 0x28DE40u;
    // 0x28de40: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x28DE40u;
    SET_GPR_U32(ctx, 31, 0x28DE48u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x28DE40u, 0x28DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE48u;
label_28de48:
    // 0x28de48: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x28de48u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28de4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28de4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de50: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x28de50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28de54: 0x94520006  lhu         $s2, 0x6($v0)
    ctx->pc = 0x28de54u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x28de58: 0x263f021  addu        $fp, $s3, $v1
    ctx->pc = 0x28de58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28de5c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x28de5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28de60: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x28de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28de64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28DE64u;
    {
        const bool branch_taken_0x28de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE64u;
        // 0x28de68: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de64) {
            ctx->pc = 0x28DEA0u;
            goto label_28dea0;
        }
    }
    ctx->pc = 0x28DE6Cu;
    // 0x28de6c: 0x0  nop
    ctx->pc = 0x28de6cu;
    // NOP
label_28de70:
    // 0x28de70: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x28de70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28de74: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x28DE74u;
    SET_GPR_U32(ctx, 31, 0x28DE7Cu);
    ctx->pc = 0x28DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE74u;
    // 0x28de78: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x28DE74u, 0x28DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE7Cu;
label_28de7c:
    // 0x28de7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28de7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de80: 0x8fb30170  lw          $s3, 0x170($sp)
    ctx->pc = 0x28de80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28de84: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x28de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x28de88: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x28de88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28de8c: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x28de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x28de90: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x28de90u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28de94: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x28de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x28de98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28de9c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x28de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_28dea0:
    // 0x28dea0: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28dea4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x28dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x28dea8: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x28DEA8u;
    SET_GPR_U32(ctx, 31, 0x28DEB0u);
    ctx->pc = 0x28DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEA8u;
    // 0x28deac: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x28DEA8u, 0x28DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DEB0u;
label_28deb0:
    // 0x28deb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28deb4: 0x86240022  lh          $a0, 0x22($s1)
    ctx->pc = 0x28deb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x28deb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28deb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28debc: 0x27a201bc  addiu       $v0, $sp, 0x1BC
    ctx->pc = 0x28debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x28dec0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dec4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x28dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28dec8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28dec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28decc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x28deccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x28ded0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28ded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28ded4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28ded4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28ded8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28ded8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28dedc: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x28dedcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x28dee0: 0x27a201bc  addiu       $v0, $sp, 0x1BC
    ctx->pc = 0x28dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x28dee4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28dee8: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x28dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x28deec: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x28deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x28def0: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x28def0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x28def4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DEF4u;
    {
        const bool branch_taken_0x28def4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x28DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEF4u;
        // 0x28def8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28def4) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DEFCu;
    // 0x28defc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28defcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28df00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28DF00u;
    {
        const bool branch_taken_0x28df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF00u;
        // 0x28df04: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df00) {
            ctx->pc = 0x28DF20u;
            goto label_28df20;
        }
    }
    ctx->pc = 0x28DF08u;
label_28df08:
    // 0x28df08: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28df0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28df0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28df10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28df10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28df14: 0x0  nop
    ctx->pc = 0x28df14u;
    // NOP
    // 0x28df18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28df18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28df1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28df1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28df20:
    // 0x28df20: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28df20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28df24: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x28df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28df28: 0x21023  negu        $v0, $v0
    ctx->pc = 0x28df28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x28df2c: 0x8ead0070  lw          $t5, 0x70($s5)
    ctx->pc = 0x28df2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28df30: 0x860b000a  lh          $t3, 0xA($s0)
    ctx->pc = 0x28df30u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x28df34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28df34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28df38: 0x860c0008  lh          $t4, 0x8($s0)
    ctx->pc = 0x28df38u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28df3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28df3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28df40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28df44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28df48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28df4c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x28df4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df50: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x28df50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28df54: 0x8fa80110  lw          $t0, 0x110($sp)
    ctx->pc = 0x28df54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28df58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28df58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28df5c: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x28df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x28df60: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x28df60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28df64: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x28df64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x28df68: 0x27aa01c0  addiu       $t2, $sp, 0x1C0
    ctx->pc = 0x28df68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x28df6c: 0xc5a0002c  lwc1        $f0, 0x2C($t5)
    ctx->pc = 0x28df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28df70: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x28df70u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28df74: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x28df74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28df78: 0xc5b10028  lwc1        $f17, 0x28($t5)
    ctx->pc = 0x28df78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28df7c: 0x468019a0  cvt.s.w     $f6, $f3
    ctx->pc = 0x28df7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28df80: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x28df80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28df84: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x28df84u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28df88: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x28df88u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28df8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28df8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28df90: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x28df90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28df94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28df94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28df98: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x28df98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28df9c: 0x46032843  div.s       $f1, $f5, $f3
    ctx->pc = 0x28df9cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x28dfa0: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x28dfa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x28dfa4: 0x46016342  mul.s       $f13, $f12, $f1
    ctx->pc = 0x28dfa4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28dfa8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x28dfa8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x28dfac: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x28dfacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x28dfb0: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x28dfb0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x28dfb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28dfb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dfb8: 0x0  nop
    ctx->pc = 0x28dfb8u;
    // NOP
    // 0x28dfbc: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x28dfbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x28dfc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28dfc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28dfc4: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x28dfc4u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x28dfc8: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x28dfc8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28dfcc: 0x0  nop
    ctx->pc = 0x28dfccu;
    // NOP
    // 0x28dfd0: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x28dfd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x28dfd4: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x28DFD4u;
    SET_GPR_U32(ctx, 31, 0x28DFDCu);
    ctx->pc = 0x28DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFD4u;
    // 0x28dfd8: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x28DFD4u, 0x28DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFDCu;
label_28dfdc:
    // 0x28dfdc: 0x0  nop
    ctx->pc = 0x28dfdcu;
    // NOP
label_28dfe0:
    // 0x28dfe0: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28dfe4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28dfe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28dfe8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x28dfe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x28dfec: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x28dfecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28dff0: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x28DFF0u;
    {
        const bool branch_taken_0x28dff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dff0) {
            ctx->pc = 0x28DE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28de08;
        }
    }
    ctx->pc = 0x28DFF8u;
label_28dff8:
    // 0x28dff8: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x28dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x28dffc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28dffcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x28e000: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x28e000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e004: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x28e004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28e008: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x28E008u;
    {
        const bool branch_taken_0x28e008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E008u;
        // 0x28e00c: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e008) {
            ctx->pc = 0x28DDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dde8;
        }
    }
    ctx->pc = 0x28E010u;
label_28e010:
    // 0x28e010: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x28E010u;
    SET_GPR_U32(ctx, 31, 0x28E018u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x28E010u, 0x28E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E018u;
label_28e018:
    // 0x28e018: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x28e018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28e01c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x28e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x28e020: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28e020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e028: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x28E028u;
    SET_GPR_U32(ctx, 31, 0x28E030u);
    ctx->pc = 0x28E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E028u;
    // 0x28e02c: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x28E028u, 0x28E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E030u;
label_28e030:
    // 0x28e030: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x28e030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28e034: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x28e034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x28e038: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28e03c: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x28e03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x28e040: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x28e044: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x28e048: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e04c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x28E04Cu;
    SET_GPR_U32(ctx, 31, 0x28E054u);
    ctx->pc = 0x28E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E04Cu;
    // 0x28e050: 0xafa30160  sw          $v1, 0x160($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x28E04Cu, 0x28E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E054u;
label_28e054:
    // 0x28e054: 0x8fa302c8  lw          $v1, 0x2C8($sp)
    ctx->pc = 0x28e054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x28e058: 0x38283  sra         $s0, $v1, 10
    ctx->pc = 0x28e058u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
    // 0x28e05c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x28e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28e060: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28E060u;
    {
        const bool branch_taken_0x28e060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e060) {
            ctx->pc = 0x28E090u;
            goto label_28e090;
        }
    }
    ctx->pc = 0x28E068u;
    // 0x28e068: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x28e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28e06c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x28E06Cu;
    SET_GPR_U32(ctx, 31, 0x28E074u);
    ctx->pc = 0x28E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E06Cu;
    // 0x28e070: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x28E06Cu, 0x28E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E074u;
label_28e074:
    // 0x28e074: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x28e074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28e078: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x28e078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28e07c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e080: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x28e080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x28e084: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x28e084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28e088: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x28E088u;
    SET_GPR_U32(ctx, 31, 0x28E090u);
    ctx->pc = 0x28E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E088u;
    // 0x28e08c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x28E088u, 0x28E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E090u;
label_28e090:
    // 0x28e090: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28e090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e094: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28e094u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e098: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28e098u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e09c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28e09cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e0a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28e0a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e0a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28e0a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e0a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28e0a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e0ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28e0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e0b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e0b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x28E0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E0B8u;
        // 0x28e0bc: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E0C0u;
}

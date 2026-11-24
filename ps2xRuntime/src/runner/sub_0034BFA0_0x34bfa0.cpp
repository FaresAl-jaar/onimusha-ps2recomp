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

// Function: sub_0034BFA0
// Address: 0x34bfa0 - 0x34c46c
void sub_0034BFA0_0x34bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BFA0_0x34bfa0");
#endif

    switch (ctx->pc) {
        case 0x34bfe0u: goto label_34bfe0;
        case 0x34c02cu: goto label_34c02c;
        case 0x34c034u: goto label_34c034;
        case 0x34c040u: goto label_34c040;
        case 0x34c05cu: goto label_34c05c;
        case 0x34c070u: goto label_34c070;
        case 0x34c080u: goto label_34c080;
        case 0x34c08cu: goto label_34c08c;
        case 0x34c094u: goto label_34c094;
        case 0x34c184u: goto label_34c184;
        case 0x34c198u: goto label_34c198;
        case 0x34c1acu: goto label_34c1ac;
        case 0x34c1c0u: goto label_34c1c0;
        case 0x34c200u: goto label_34c200;
        case 0x34c21cu: goto label_34c21c;
        case 0x34c238u: goto label_34c238;
        case 0x34c260u: goto label_34c260;
        case 0x34c278u: goto label_34c278;
        case 0x34c284u: goto label_34c284;
        case 0x34c298u: goto label_34c298;
        case 0x34c2a4u: goto label_34c2a4;
        case 0x34c2b0u: goto label_34c2b0;
        case 0x34c2c0u: goto label_34c2c0;
        case 0x34c2d4u: goto label_34c2d4;
        case 0x34c2fcu: goto label_34c2fc;
        case 0x34c308u: goto label_34c308;
        case 0x34c31cu: goto label_34c31c;
        case 0x34c398u: goto label_34c398;
        case 0x34c3c4u: goto label_34c3c4;
        case 0x34c3dcu: goto label_34c3dc;
        case 0x34c3f8u: goto label_34c3f8;
        case 0x34c40cu: goto label_34c40c;
        case 0x34c424u: goto label_34c424;
        case 0x34c438u: goto label_34c438;
        default: break;
    }

    ctx->pc = 0x34bfa0u;

    // 0x34bfa0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x34bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x34bfa4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x34bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x34bfa8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x34bfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x34bfac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x34bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x34bfb0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x34bfb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bfb4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x34bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x34bfb8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x34bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x34bfbc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x34bfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x34bfc0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34bfc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bfc4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x34bfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x34bfc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x34bfcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34bfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34bfd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34bfd4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34bfd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34bfd8: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x34BFD8u;
    SET_GPR_U32(ctx, 31, 0x34BFE0u);
    ctx->pc = 0x34BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BFD8u;
    // 0x34bfdc: 0xa7a600be  sh          $a2, 0xBE($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 190), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x34BFD8u, 0x34BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BFE0u;
label_34bfe0:
    // 0x34bfe0: 0x8ea800b0  lw          $t0, 0xB0($s5)
    ctx->pc = 0x34bfe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x34bfe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34bfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bfe8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34bfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34bfec: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x34bfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x34bff0: 0x34210080  ori         $at, $at, 0x80
    ctx->pc = 0x34bff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)128);
    // 0x34bff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34bff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bff8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34bff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bffc: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x34bffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x34c000: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x34c000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x34c004: 0x91050008  lbu         $a1, 0x8($t0)
    ctx->pc = 0x34c004u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x34c008: 0x91060009  lbu         $a2, 0x9($t0)
    ctx->pc = 0x34c008u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x34c00c: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x34c00cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34c010: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x34c010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34c014: 0x2931018  mult        $v0, $s4, $s3
    ctx->pc = 0x34c014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34c018: 0x9108000c  lbu         $t0, 0xC($t0)
    ctx->pc = 0x34c018u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x34c01c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x34c020: 0x41b021  addu        $s6, $v0, $at
    ctx->pc = 0x34c020u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x34c024: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x34C024u;
    SET_GPR_U32(ctx, 31, 0x34C02Cu);
    ctx->pc = 0x34C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C024u;
    // 0x34c028: 0x2c2b821  addu        $s7, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x34C024u, 0x34C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C02Cu;
label_34c02c:
    // 0x34c02c: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x34C02Cu;
    SET_GPR_U32(ctx, 31, 0x34C034u);
    ctx->pc = 0x34C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C02Cu;
    // 0x34c030: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x34C02Cu, 0x34C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C034u;
label_34c034:
    // 0x34c034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34c034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c038: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x34C038u;
    SET_GPR_U32(ctx, 31, 0x34C040u);
    ctx->pc = 0x34C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C038u;
    // 0x34c03c: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x34C038u, 0x34C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C040u;
label_34c040:
    // 0x34c040: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x34c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x34c044: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34c044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c048: 0x26a400a0  addiu       $a0, $s5, 0xA0
    ctx->pc = 0x34c048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    // 0x34c04c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34c050: 0x90680002  lbu         $t0, 0x2($v1)
    ctx->pc = 0x34c050u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34c054: 0xc074458  jal         func_1D1160
    ctx->pc = 0x34C054u;
    SET_GPR_U32(ctx, 31, 0x34C05Cu);
    ctx->pc = 0x34C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C054u;
    // 0x34c058: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x34C054u, 0x34C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C05Cu;
label_34c05c:
    // 0x34c05c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34c05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c060: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x34c060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x34c064: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x34c064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x34c068: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x34C068u;
    SET_GPR_U32(ctx, 31, 0x34C070u);
    ctx->pc = 0x34C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C068u;
    // 0x34c06c: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x34C068u, 0x34C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C070u;
label_34c070:
    // 0x34c070: 0xc6ac0080  lwc1        $f12, 0x80($s5)
    ctx->pc = 0x34c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c074: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x34c074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x34c078: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x34C078u;
    SET_GPR_U32(ctx, 31, 0x34C080u);
    ctx->pc = 0x34C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C078u;
    // 0x34c07c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x34C078u, 0x34C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C080u;
label_34c080:
    // 0x34c080: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x34c080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x34c084: 0xc076654  jal         func_1D9950
    ctx->pc = 0x34C084u;
    SET_GPR_U32(ctx, 31, 0x34C08Cu);
    ctx->pc = 0x34C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C084u;
    // 0x34c088: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x34C084u, 0x34C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C08Cu;
label_34c08c:
    // 0x34c08c: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x34C08Cu;
    SET_GPR_U32(ctx, 31, 0x34C094u);
    ctx->pc = 0x34C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C08Cu;
    // 0x34c090: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x34C08Cu, 0x34C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C094u;
label_34c094:
    // 0x34c094: 0x8ea700b0  lw          $a3, 0xB0($s5)
    ctx->pc = 0x34c094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x34c098: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x34c098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
    // 0x34c09c: 0x87a200be  lh          $v0, 0xBE($sp)
    ctx->pc = 0x34c09cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 190)));
    // 0x34c0a0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x34c0a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34c0a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34c0a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c0ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34c0acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x34c0b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34c0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c0b4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x34c0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x34c0b8: 0x78e70020  lq          $a3, 0x20($a3)
    ctx->pc = 0x34c0b8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x34c0bc: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x34c0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c0c0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x34c0c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34c0c4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x34c0c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x34c0c8: 0x7c270040  sq          $a3, 0x40($at)
    ctx->pc = 0x34c0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 7));
    // 0x34c0cc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x34c0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34c0d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c0d4: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x34c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x34c0d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34c0d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34c0dc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x34c0dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34c0e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c0e4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x34c0e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x34c0e8: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x34c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x34c0ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c0f0: 0x78220040  lq          $v0, 0x40($at)
    ctx->pc = 0x34c0f0u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000040u));
    // 0x34c0f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c0f8: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x34c0f8u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x34c0fc: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x34c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x34c100: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c104: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x34c104u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x34c108: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x34c108u;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x34c10c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c110: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x34c110u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x34c114: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x34c114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34c118: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c11c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x34c11cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x34c120: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x34c120u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x34c124: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c128: 0x78220060  lq          $v0, 0x60($at)
    ctx->pc = 0x34c128u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000060u));
    // 0x34c12c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x34c12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x34c130: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x34c130u;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x34c134: 0xc6a000b4  lwc1        $f0, 0xB4($s5)
    ctx->pc = 0x34c134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c138: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x34c138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x34c13c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c13cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34c140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c144: 0x0  nop
    ctx->pc = 0x34c144u;
    // NOP
    // 0x34c148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34c148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34c14c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x34c14cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x34c150: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x34c150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x34c154: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x34c154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c158: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x34c158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x34c15c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c160: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x34c160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x34c164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34c164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c168: 0x0  nop
    ctx->pc = 0x34c168u;
    // NOP
    // 0x34c16c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34c16cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34c170: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x34c170u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x34c174: 0x0  nop
    ctx->pc = 0x34c174u;
    // NOP
    // 0x34c178: 0x0  nop
    ctx->pc = 0x34c178u;
    // NOP
    // 0x34c17c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x34C17Cu;
    SET_GPR_U32(ctx, 31, 0x34C184u);
    ctx->pc = 0x34C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C17Cu;
    // 0x34c180: 0xe7a00194  swc1        $f0, 0x194($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x34C17Cu, 0x34C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C184u;
label_34c184:
    // 0x34c184: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c188: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x34c188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x34c18c: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x34c18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x34c190: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x34C190u;
    SET_GPR_U32(ctx, 31, 0x34C198u);
    ctx->pc = 0x34C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C190u;
    // 0x34c194: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x34C190u, 0x34C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C198u;
label_34c198:
    // 0x34c198: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c19c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x34c19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x34c1a0: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x34c1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x34c1a4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x34C1A4u;
    SET_GPR_U32(ctx, 31, 0x34C1ACu);
    ctx->pc = 0x34C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1A4u;
    // 0x34c1a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x34C1A4u, 0x34C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1ACu;
label_34c1ac:
    // 0x34c1ac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c1b0: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x34c1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x34c1b4: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x34c1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x34c1b8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x34C1B8u;
    SET_GPR_U32(ctx, 31, 0x34C1C0u);
    ctx->pc = 0x34C1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1B8u;
    // 0x34c1bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x34C1B8u, 0x34C1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1C0u;
label_34c1c0:
    // 0x34c1c0: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x34c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x34c1c4: 0x90490006  lbu         $t1, 0x6($v0)
    ctx->pc = 0x34c1c4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x34c1c8: 0x90480005  lbu         $t0, 0x5($v0)
    ctx->pc = 0x34c1c8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x34c1cc: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x34c1ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x34c1d0: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x34c1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34c1d4: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x34c1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x34c1d8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x34c1d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x34c1dc: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x34c1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x34c1e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34c1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x34c1e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34c1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34c1e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C1E8u;
    {
        const bool branch_taken_0x34c1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C1E8u;
        // 0x34c1ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c1e8) {
            ctx->pc = 0x34C208u;
            goto label_34c208;
        }
    }
    ctx->pc = 0x34C1F0u;
    // 0x34c1f0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34c1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34c1f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x34c1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c1f8: 0xc076b04  jal         func_1DAC10
    ctx->pc = 0x34C1F8u;
    SET_GPR_U32(ctx, 31, 0x34C200u);
    ctx->pc = 0x34C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1F8u;
    // 0x34c1fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAC10u, 0x34C1F8u, 0x34C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C200u;
label_34c200:
    // 0x34c200: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34C200u;
    {
        const bool branch_taken_0x34c200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c200) {
            ctx->pc = 0x34C220u;
            goto label_34c220;
        }
    }
    ctx->pc = 0x34C208u;
label_34c208:
    // 0x34c208: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x34c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c20c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x34c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x34c210: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x34c210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c214: 0xc076a34  jal         func_1DA8D0
    ctx->pc = 0x34C214u;
    SET_GPR_U32(ctx, 31, 0x34C21Cu);
    ctx->pc = 0x34C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C214u;
    // 0x34c218: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA8D0u, 0x34C214u, 0x34C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C21Cu;
label_34c21c:
    // 0x34c21c: 0x0  nop
    ctx->pc = 0x34c21cu;
    // NOP
label_34c220:
    // 0x34c220: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c224: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x34c224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c228: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x34c228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c22c: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x34c22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x34c230: 0xc076b74  jal         func_1DADD0
    ctx->pc = 0x34C230u;
    SET_GPR_U32(ctx, 31, 0x34C238u);
    ctx->pc = 0x34C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C230u;
    // 0x34c234: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DADD0u, 0x34C230u, 0x34C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C238u;
label_34c238:
    // 0x34c238: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x34c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x34c23c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c240: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x34c240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x34c244: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x34c244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x34c248: 0xc46d0014  lwc1        $f13, 0x14($v1)
    ctx->pc = 0x34c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34c24c: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x34c24cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x34c250: 0x90660004  lbu         $a2, 0x4($v1)
    ctx->pc = 0x34c250u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x34c254: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x34c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c258: 0xc074d30  jal         func_1D34C0
    ctx->pc = 0x34C258u;
    SET_GPR_U32(ctx, 31, 0x34C260u);
    ctx->pc = 0x34C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C258u;
    // 0x34c25c: 0x460da3c0  add.s       $f15, $f20, $f13 (Delay Slot)
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34C0u, 0x34C258u, 0x34C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C260u;
label_34c260:
    // 0x34c260: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x34c260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x34c264: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x34c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x34c268: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x34c268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x34c26c: 0x24c65c70  addiu       $a2, $a2, 0x5C70
    ctx->pc = 0x34c26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23664));
    // 0x34c270: 0xc0972fc  jal         func_25CBF0
    ctx->pc = 0x34C270u;
    SET_GPR_U32(ctx, 31, 0x34C278u);
    ctx->pc = 0x34C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C270u;
    // 0x34c274: 0x26a70040  addiu       $a3, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBF0u, 0x34C270u, 0x34C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C278u;
label_34c278:
    // 0x34c278: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x34c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34c27c: 0xc0766ec  jal         func_1D9BB0
    ctx->pc = 0x34C27Cu;
    SET_GPR_U32(ctx, 31, 0x34C284u);
    ctx->pc = 0x34C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C27Cu;
    // 0x34c280: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BB0u, 0x34C27Cu, 0x34C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C284u;
label_34c284:
    // 0x34c284: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x34c284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x34c288: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x34c288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x34c28c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x34c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34c290: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x34C290u;
    SET_GPR_U32(ctx, 31, 0x34C298u);
    ctx->pc = 0x34C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C290u;
    // 0x34c294: 0x24c66ca0  addiu       $a2, $a2, 0x6CA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x34C290u, 0x34C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C298u;
label_34c298:
    // 0x34c298: 0xc7ad0184  lwc1        $f13, 0x184($sp)
    ctx->pc = 0x34c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x34c29c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x34C29Cu;
    SET_GPR_U32(ctx, 31, 0x34C2A4u);
    ctx->pc = 0x34C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C29Cu;
    // 0x34c2a0: 0xc7ac0188  lwc1        $f12, 0x188($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x34C29Cu, 0x34C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C2A4u;
label_34c2a4:
    // 0x34c2a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x34c2a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x34c2a8: 0xc07671c  jal         func_1D9C70
    ctx->pc = 0x34C2A8u;
    SET_GPR_U32(ctx, 31, 0x34C2B0u);
    ctx->pc = 0x34C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C2A8u;
    // 0x34c2ac: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C70u, 0x34C2A8u, 0x34C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C2B0u;
label_34c2b0:
    // 0x34c2b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x34c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x34c2b4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x34c2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x34c2b8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x34C2B8u;
    SET_GPR_U32(ctx, 31, 0x34C2C0u);
    ctx->pc = 0x34C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C2B8u;
    // 0x34c2bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x34C2B8u, 0x34C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C2C0u;
label_34c2c0:
    // 0x34c2c0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x34c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x34c2c4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x34c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x34c2c8: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x34c2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x34c2cc: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x34C2CCu;
    SET_GPR_U32(ctx, 31, 0x34C2D4u);
    ctx->pc = 0x34C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C2CCu;
    // 0x34c2d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x34C2CCu, 0x34C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C2D4u;
label_34c2d4:
    // 0x34c2d4: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x34c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x34c2d8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x34c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x34c2dc: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x34c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x34c2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c2e4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x34c2e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x34c2e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x34c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34c2ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c2f0: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x34c2f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c2f4: 0xc074648  jal         func_1D1920
    ctx->pc = 0x34C2F4u;
    SET_GPR_U32(ctx, 31, 0x34C2FCu);
    ctx->pc = 0x34C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C2F4u;
    // 0x34c2f8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x34C2F4u, 0x34C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C2FCu;
label_34c2fc:
    // 0x34c2fc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x34c2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x34c300: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x34C300u;
    SET_GPR_U32(ctx, 31, 0x34C308u);
    ctx->pc = 0x34C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C300u;
    // 0x34c304: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x34C300u, 0x34C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C308u;
label_34c308:
    // 0x34c308: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x34c308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x34c30c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34c310: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x34c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x34c314: 0xc074648  jal         func_1D1920
    ctx->pc = 0x34C314u;
    SET_GPR_U32(ctx, 31, 0x34C31Cu);
    ctx->pc = 0x34C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C314u;
    // 0x34c318: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x34C314u, 0x34C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C31Cu;
label_34c31c:
    // 0x34c31c: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x34c31cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x34c320: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x34c320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x34c324: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x34c324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x34c328: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x34c328u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34c32c: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x34c32cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x34c330: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x34c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34c334: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x34c334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x34c338: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x34c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34c33c: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x34c33cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x34c340: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x34c340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x34c344: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x34c344u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x34c348: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x34c348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x34c34c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x34c34cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x34c350: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x34c350u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x34c354: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x34c354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x34c358: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x34c358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x34c35c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x34c35cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x34c360: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x34c360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x34c364: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34c364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c368: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x34c368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x34c36c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x34c36cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x34c370: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34c370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34c374: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x34c374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x34c378: 0x34e7000f  ori         $a3, $a3, 0xF
    ctx->pc = 0x34c378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)15);
    // 0x34c37c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x34c37cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x34c380: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x34c380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x34c384: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x34c384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x34c388: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x34c388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x34c38c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x34c38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x34c390: 0xc074648  jal         func_1D1920
    ctx->pc = 0x34C390u;
    SET_GPR_U32(ctx, 31, 0x34C398u);
    ctx->pc = 0x34C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C390u;
    // 0x34c394: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x34C390u, 0x34C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C398u;
label_34c398:
    // 0x34c398: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x34c398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x34c39c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x34c39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3a0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x34c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x34c3a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x34c3a8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x34c3a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3ac: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x34c3acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3b0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x34c3b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3b4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x34c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x34c3b8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x34c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x34c3bc: 0xc07603c  jal         func_1D80F0
    ctx->pc = 0x34C3BCu;
    SET_GPR_U32(ctx, 31, 0x34C3C4u);
    ctx->pc = 0x34C3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C3BCu;
    // 0x34c3c0: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D80F0u, 0x34C3BCu, 0x34C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C3C4u;
label_34c3c4:
    // 0x34c3c4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x34c3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x34c3c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x34c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34c3cc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x34c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x34c3d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34c3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3d4: 0xc074648  jal         func_1D1920
    ctx->pc = 0x34C3D4u;
    SET_GPR_U32(ctx, 31, 0x34C3DCu);
    ctx->pc = 0x34C3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C3D4u;
    // 0x34c3d8: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x34C3D4u, 0x34C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C3DCu;
label_34c3dc:
    // 0x34c3dc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x34c3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x34c3e0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x34c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x34c3e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x34c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x34c3e8: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x34c3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x34c3ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34c3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34c3f0: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x34C3F0u;
    SET_GPR_U32(ctx, 31, 0x34C3F8u);
    ctx->pc = 0x34C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C3F0u;
    // 0x34c3f4: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x34C3F0u, 0x34C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C3F8u;
label_34c3f8:
    // 0x34c3f8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x34c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x34c3fc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x34c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x34c400: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x34c400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x34c404: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x34C404u;
    SET_GPR_U32(ctx, 31, 0x34C40Cu);
    ctx->pc = 0x34C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C404u;
    // 0x34c408: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x34C404u, 0x34C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C40Cu;
label_34c40c:
    // 0x34c40c: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x34c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x34c410: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x34C410u;
    {
        const bool branch_taken_0x34c410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C410u;
        // 0x34c414: 0x38283  sra         $s0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c410) {
            ctx->pc = 0x34C438u;
            goto label_34c438;
        }
    }
    ctx->pc = 0x34C418u;
    // 0x34c418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c41c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x34C41Cu;
    SET_GPR_U32(ctx, 31, 0x34C424u);
    ctx->pc = 0x34C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C41Cu;
    // 0x34c420: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x34C41Cu, 0x34C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C424u;
label_34c424:
    // 0x34c424: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x34c424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x34c428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c42c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34c42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c430: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x34C430u;
    SET_GPR_U32(ctx, 31, 0x34C438u);
    ctx->pc = 0x34C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C430u;
    // 0x34c434: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x34C430u, 0x34C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C438u;
label_34c438:
    // 0x34c438: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x34c438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34c43c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x34c43cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34c440: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34c440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34c444: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x34c444u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34c448: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x34c448u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34c44c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x34c44cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34c450: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x34c450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34c454: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x34c454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34c458: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34c458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34c45c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34c45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c460: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34c460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c464: 0x3e00008  jr          $ra
    ctx->pc = 0x34C464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C464u;
        // 0x34c468: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C46Cu;
}

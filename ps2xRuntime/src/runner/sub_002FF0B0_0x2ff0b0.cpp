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

// Function: sub_002FF0B0
// Address: 0x2ff0b0 - 0x2ff498
void sub_002FF0B0_0x2ff0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF0B0_0x2ff0b0");
#endif

    switch (ctx->pc) {
        case 0x2ff0e4u: goto label_2ff0e4;
        case 0x2ff128u: goto label_2ff128;
        case 0x2ff130u: goto label_2ff130;
        case 0x2ff13cu: goto label_2ff13c;
        case 0x2ff158u: goto label_2ff158;
        case 0x2ff16cu: goto label_2ff16c;
        case 0x2ff17cu: goto label_2ff17c;
        case 0x2ff198u: goto label_2ff198;
        case 0x2ff1c8u: goto label_2ff1c8;
        case 0x2ff1d8u: goto label_2ff1d8;
        case 0x2ff2c8u: goto label_2ff2c8;
        case 0x2ff2dcu: goto label_2ff2dc;
        case 0x2ff2f0u: goto label_2ff2f0;
        case 0x2ff304u: goto label_2ff304;
        case 0x2ff32cu: goto label_2ff32c;
        case 0x2ff338u: goto label_2ff338;
        case 0x2ff34cu: goto label_2ff34c;
        case 0x2ff3c8u: goto label_2ff3c8;
        case 0x2ff3f8u: goto label_2ff3f8;
        case 0x2ff410u: goto label_2ff410;
        case 0x2ff42cu: goto label_2ff42c;
        case 0x2ff440u: goto label_2ff440;
        case 0x2ff458u: goto label_2ff458;
        case 0x2ff46cu: goto label_2ff46c;
        default: break;
    }

    ctx->pc = 0x2ff0b0u;

    // 0x2ff0b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ff0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ff0b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ff0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ff0b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ff0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ff0bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ff0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ff0c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ff0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ff0c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ff0c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff0c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ff0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ff0cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ff0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ff0d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ff0d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ff0d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ff0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff0dc: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2FF0DCu;
    SET_GPR_U32(ctx, 31, 0x2FF0E4u);
    ctx->pc = 0x2FF0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF0DCu;
    // 0x2ff0e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2FF0DCu, 0x2FF0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF0E4u;
label_2ff0e4:
    // 0x2ff0e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ff0e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff0e8: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2ff0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2ff0ec: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ff0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ff0f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ff0f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ff0f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ff0f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ff0f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ff0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ff0fc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2ff0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ff100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff104: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ff104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff108: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x2ff108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2ff10c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ff10cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2ff110: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x2ff110u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ff114: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x2ff114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ff118: 0x90660005  lbu         $a2, 0x5($v1)
    ctx->pc = 0x2ff118u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x2ff11c: 0x9068000a  lbu         $t0, 0xA($v1)
    ctx->pc = 0x2ff11cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2ff120: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2FF120u;
    SET_GPR_U32(ctx, 31, 0x2FF128u);
    ctx->pc = 0x2FF124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF120u;
    // 0x2ff124: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2FF120u, 0x2FF128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF128u;
label_2ff128:
    // 0x2ff128: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x2FF128u;
    SET_GPR_U32(ctx, 31, 0x2FF130u);
    ctx->pc = 0x2FF12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF128u;
    // 0x2ff12c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x2FF128u, 0x2FF130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF130u;
label_2ff130:
    // 0x2ff130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff134: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x2FF134u;
    SET_GPR_U32(ctx, 31, 0x2FF13Cu);
    ctx->pc = 0x2FF138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF134u;
    // 0x2ff138: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x2FF134u, 0x2FF13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF13Cu;
label_2ff13c:
    // 0x2ff13c: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x2ff13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2ff140: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ff140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff144: 0x26a400a0  addiu       $a0, $s5, 0xA0
    ctx->pc = 0x2ff144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    // 0x2ff148: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x2ff148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff14c: 0x9068000b  lbu         $t0, 0xB($v1)
    ctx->pc = 0x2ff14cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x2ff150: 0xc074458  jal         func_1D1160
    ctx->pc = 0x2FF150u;
    SET_GPR_U32(ctx, 31, 0x2FF158u);
    ctx->pc = 0x2FF154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF150u;
    // 0x2ff154: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x2FF150u, 0x2FF158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF158u;
label_2ff158:
    // 0x2ff158: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ff158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff15c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ff15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ff160: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x2ff160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x2ff164: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x2FF164u;
    SET_GPR_U32(ctx, 31, 0x2FF16Cu);
    ctx->pc = 0x2FF168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF164u;
    // 0x2ff168: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x2FF164u, 0x2FF16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF16Cu;
label_2ff16c:
    // 0x2ff16c: 0xc6ac0080  lwc1        $f12, 0x80($s5)
    ctx->pc = 0x2ff16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ff170: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ff170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ff174: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x2FF174u;
    SET_GPR_U32(ctx, 31, 0x2FF17Cu);
    ctx->pc = 0x2FF178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF174u;
    // 0x2ff178: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x2FF174u, 0x2FF17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF17Cu;
label_2ff17c:
    // 0x2ff17c: 0x8ea400b0  lw          $a0, 0xB0($s5)
    ctx->pc = 0x2ff17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2ff180: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x2ff180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ff184: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2ff184u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ff188: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FF188u;
    {
        const bool branch_taken_0x2ff188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF188u;
        // 0x2ff18c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff188) {
            ctx->pc = 0x2FF1F8u;
            goto label_2ff1f8;
        }
    }
    ctx->pc = 0x2FF190u;
    // 0x2ff190: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2ff190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff194: 0x34500080  ori         $s0, $v0, 0x80
    ctx->pc = 0x2ff194u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_2ff198:
    // 0x2ff198: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2ff198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ff19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff1a0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2ff1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ff1a4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x2ff1a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff1a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2ff1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ff1ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ff1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ff1b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ff1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ff1b4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2ff1b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ff1b8: 0x0  nop
    ctx->pc = 0x2ff1b8u;
    // NOP
    // 0x2ff1bc: 0x0  nop
    ctx->pc = 0x2ff1bcu;
    // NOP
    // 0x2ff1c0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x2FF1C0u;
    SET_GPR_U32(ctx, 31, 0x2FF1C8u);
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x2FF1C0u, 0x2FF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1C8u;
label_2ff1c8:
    // 0x2ff1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff1cc: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x2ff1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2ff1d0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x2FF1D0u;
    SET_GPR_U32(ctx, 31, 0x2FF1D8u);
    ctx->pc = 0x2FF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1D0u;
    // 0x2ff1d4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x2FF1D0u, 0x2FF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1D8u;
label_2ff1d8:
    // 0x2ff1d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ff1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff1dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ff1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ff1e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2ff1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2ff1e4: 0x8ea400b0  lw          $a0, 0xB0($s5)
    ctx->pc = 0x2ff1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2ff1e8: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x2ff1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ff1ec: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x2ff1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ff1f0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2FF1F0u;
    {
        const bool branch_taken_0x2ff1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1F0u;
        // 0x2ff1f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff1f0) {
            ctx->pc = 0x2FF198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff198;
        }
    }
    ctx->pc = 0x2FF1F8u;
label_2ff1f8:
    // 0x2ff1f8: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2ff1f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ff1fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff200: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x2ff200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2ff204: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ff204u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ff208: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ff208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ff20c: 0x7c220040  sq          $v0, 0x40($at)
    ctx->pc = 0x2ff20cu;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 2));
    // 0x2ff210: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2ff210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff214: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff218: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ff218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff21c: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x2ff21cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x2ff220: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ff220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ff224: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff228: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ff228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2ff22c: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x2ff22cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x2ff230: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff234: 0x78220040  lq          $v0, 0x40($at)
    ctx->pc = 0x2ff234u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000040u));
    // 0x2ff238: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff23c: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x2ff23cu;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x2ff240: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x2ff240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2ff244: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff248: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2ff248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ff24c: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x2ff24cu;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x2ff250: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff254: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x2ff254u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x2ff258: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x2ff258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ff25c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff260: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ff260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2ff264: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x2ff264u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x2ff268: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff26c: 0x78220060  lq          $v0, 0x60($at)
    ctx->pc = 0x2ff26cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000060u));
    // 0x2ff270: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2ff270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff274: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x2ff274u;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x2ff278: 0xc6a000b4  lwc1        $f0, 0xB4($s5)
    ctx->pc = 0x2ff278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff27c: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x2ff27cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ff280: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2ff280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ff284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff288: 0x0  nop
    ctx->pc = 0x2ff288u;
    // NOP
    // 0x2ff28c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ff28cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ff290: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ff290u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ff294: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2ff294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ff298: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x2ff298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff29c: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x2ff29cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2ff2a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2ff2a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ff2a4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2ff2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2ff2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff2ac: 0x0  nop
    ctx->pc = 0x2ff2acu;
    // NOP
    // 0x2ff2b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ff2b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ff2b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ff2b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ff2b8: 0x0  nop
    ctx->pc = 0x2ff2b8u;
    // NOP
    // 0x2ff2bc: 0x0  nop
    ctx->pc = 0x2ff2bcu;
    // NOP
    // 0x2ff2c0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x2FF2C0u;
    SET_GPR_U32(ctx, 31, 0x2FF2C8u);
    ctx->pc = 0x2FF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF2C0u;
    // 0x2ff2c4: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x2FF2C0u, 0x2FF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF2C8u;
label_2ff2c8:
    // 0x2ff2c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2ff2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff2cc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ff2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ff2d0: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x2ff2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2ff2d4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x2FF2D4u;
    SET_GPR_U32(ctx, 31, 0x2FF2DCu);
    ctx->pc = 0x2FF2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF2D4u;
    // 0x2ff2d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x2FF2D4u, 0x2FF2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF2DCu;
label_2ff2dc:
    // 0x2ff2dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2ff2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff2e0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ff2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ff2e4: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x2ff2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2ff2e8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x2FF2E8u;
    SET_GPR_U32(ctx, 31, 0x2FF2F0u);
    ctx->pc = 0x2FF2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF2E8u;
    // 0x2ff2ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x2FF2E8u, 0x2FF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF2F0u;
label_2ff2f0:
    // 0x2ff2f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2ff2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff2f4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ff2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ff2f8: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x2ff2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x2ff2fc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x2FF2FCu;
    SET_GPR_U32(ctx, 31, 0x2FF304u);
    ctx->pc = 0x2FF300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF2FCu;
    // 0x2ff300: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x2FF2FCu, 0x2FF304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF304u;
label_2ff304:
    // 0x2ff304: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x2ff304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2ff308: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2ff308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2ff30c: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2ff30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2ff310: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ff310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff314: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x2ff314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x2ff318: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ff318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ff31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ff320: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2ff320u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ff324: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2FF324u;
    SET_GPR_U32(ctx, 31, 0x2FF32Cu);
    ctx->pc = 0x2FF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF324u;
    // 0x2ff328: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2FF324u, 0x2FF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF32Cu;
label_2ff32c:
    // 0x2ff32c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2ff32cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ff330: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2FF330u;
    SET_GPR_U32(ctx, 31, 0x2FF338u);
    ctx->pc = 0x2FF334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF330u;
    // 0x2ff334: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2FF330u, 0x2FF338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF338u;
label_2ff338:
    // 0x2ff338: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x2ff338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2ff33c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ff33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff340: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x2ff340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2ff344: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2FF344u;
    SET_GPR_U32(ctx, 31, 0x2FF34Cu);
    ctx->pc = 0x2FF348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF344u;
    // 0x2ff348: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2FF344u, 0x2FF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF34Cu;
label_2ff34c:
    // 0x2ff34c: 0x86470008  lh          $a3, 0x8($s2)
    ctx->pc = 0x2ff34cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ff350: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2ff350u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ff354: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2ff354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2ff358: 0x96460004  lhu         $a2, 0x4($s2)
    ctx->pc = 0x2ff358u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ff35c: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x2ff35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2ff360: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x2ff360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2ff364: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x2ff364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2ff368: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ff368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ff36c: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x2ff36cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x2ff370: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2ff370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ff374: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x2ff374u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2ff378: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2ff378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff37c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2ff37cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2ff380: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ff380u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2ff384: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2ff384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff388: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ff388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ff38c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2ff38cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2ff390: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x2ff390u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x2ff394: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ff394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff398: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2ff398u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2ff39c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ff39cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ff3a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff3a4: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x2ff3a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x2ff3a8: 0x34e7000f  ori         $a3, $a3, 0xF
    ctx->pc = 0x2ff3a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)15);
    // 0x2ff3ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff3acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff3b0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x2ff3b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2ff3b4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2ff3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2ff3b8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2ff3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2ff3bc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2ff3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2ff3c0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2FF3C0u;
    SET_GPR_U32(ctx, 31, 0x2FF3C8u);
    ctx->pc = 0x2FF3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3C0u;
    // 0x2ff3c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2FF3C0u, 0x2FF3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3C8u;
label_2ff3c8:
    // 0x2ff3c8: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x2ff3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2ff3cc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x2ff3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x2ff3d0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2ff3d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ff3d4: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x2ff3d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2ff3d8: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2ff3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2ff3dc: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x2ff3dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x2ff3e0: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x2ff3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2ff3e4: 0x90680008  lbu         $t0, 0x8($v1)
    ctx->pc = 0x2ff3e4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ff3e8: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x2ff3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ff3ec: 0x90690001  lbu         $t1, 0x1($v1)
    ctx->pc = 0x2ff3ecu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2ff3f0: 0xc075cb8  jal         func_1D72E0
    ctx->pc = 0x2FF3F0u;
    SET_GPR_U32(ctx, 31, 0x2FF3F8u);
    ctx->pc = 0x2FF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3F0u;
    // 0x2ff3f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D72E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D72E0u, 0x2FF3F0u, 0x2FF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3F8u;
label_2ff3f8:
    // 0x2ff3f8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2ff3f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ff3fc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ff3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ff400: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2ff400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2ff404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ff404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff408: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2FF408u;
    SET_GPR_U32(ctx, 31, 0x2FF410u);
    ctx->pc = 0x2FF40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF408u;
    // 0x2ff40c: 0x2c22021  addu        $a0, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2FF408u, 0x2FF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF410u;
label_2ff410:
    // 0x2ff410: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2ff410u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ff414: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2ff414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ff418: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2ff418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2ff41c: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x2ff41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2ff420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ff420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff424: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x2FF424u;
    SET_GPR_U32(ctx, 31, 0x2FF42Cu);
    ctx->pc = 0x2FF428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF424u;
    // 0x2ff428: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x2FF424u, 0x2FF42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF42Cu;
label_2ff42c:
    // 0x2ff42c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2ff42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2ff430: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ff430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ff434: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x2ff434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x2ff438: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x2FF438u;
    SET_GPR_U32(ctx, 31, 0x2FF440u);
    ctx->pc = 0x2FF43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF438u;
    // 0x2ff43c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x2FF438u, 0x2FF440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF440u;
label_2ff440:
    // 0x2ff440: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2ff440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ff444: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2FF444u;
    {
        const bool branch_taken_0x2ff444 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF444u;
        // 0x2ff448: 0x38283  sra         $s0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff444) {
            ctx->pc = 0x2FF470u;
            goto label_2ff470;
        }
    }
    ctx->pc = 0x2FF44Cu;
    // 0x2ff44c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ff44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff450: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2FF450u;
    SET_GPR_U32(ctx, 31, 0x2FF458u);
    ctx->pc = 0x2FF454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF450u;
    // 0x2ff454: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2FF450u, 0x2FF458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF458u;
label_2ff458:
    // 0x2ff458: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2ff458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ff45c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ff45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff460: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ff460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff464: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2FF464u;
    SET_GPR_U32(ctx, 31, 0x2FF46Cu);
    ctx->pc = 0x2FF468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF464u;
    // 0x2ff468: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2FF464u, 0x2FF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF46Cu;
label_2ff46c:
    // 0x2ff46c: 0x0  nop
    ctx->pc = 0x2ff46cu;
    // NOP
label_2ff470:
    // 0x2ff470: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ff470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ff474: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ff474u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ff478: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ff478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ff47c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ff47cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ff480: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ff480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ff484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ff484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff48c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff490: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF490u;
        // 0x2ff494: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF498u;
}

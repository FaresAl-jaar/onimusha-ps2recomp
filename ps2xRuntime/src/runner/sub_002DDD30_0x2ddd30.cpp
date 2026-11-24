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

// Function: sub_002DDD30
// Address: 0x2ddd30 - 0x2de0b0
void sub_002DDD30_0x2ddd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDD30_0x2ddd30");
#endif

    switch (ctx->pc) {
        case 0x2ddd6cu: goto label_2ddd6c;
        case 0x2ddd9cu: goto label_2ddd9c;
        case 0x2dddbcu: goto label_2dddbc;
        case 0x2ddde4u: goto label_2ddde4;
        case 0x2dddf8u: goto label_2dddf8;
        case 0x2dde14u: goto label_2dde14;
        case 0x2dde34u: goto label_2dde34;
        case 0x2dde60u: goto label_2dde60;
        case 0x2dde80u: goto label_2dde80;
        case 0x2ddeb0u: goto label_2ddeb0;
        case 0x2ddfe0u: goto label_2ddfe0;
        case 0x2de008u: goto label_2de008;
        case 0x2de020u: goto label_2de020;
        case 0x2de044u: goto label_2de044;
        case 0x2de064u: goto label_2de064;
        case 0x2de080u: goto label_2de080;
        default: break;
    }

    ctx->pc = 0x2ddd30u;

    // 0x2ddd30: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2ddd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2ddd34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ddd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ddd38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ddd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2ddd3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ddd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ddd40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ddd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ddd44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ddd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ddd48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ddd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ddd4c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ddd4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ddd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ddd54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ddd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ddd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ddd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ddd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ddd60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ddd60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd64: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2DDD64u;
    SET_GPR_U32(ctx, 31, 0x2DDD6Cu);
    ctx->pc = 0x2DDD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD64u;
    // 0x2ddd68: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2DDD64u, 0x2DDD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD6Cu;
label_2ddd6c:
    // 0x2ddd6c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2ddd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2ddd70: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2ddd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2ddd74: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ddd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ddd78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ddd78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ddd7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ddd7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ddd80: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ddd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ddd84: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2ddd84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ddd88: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2ddd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2ddd8c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ddd8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2ddd90: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2ddd90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ddd94: 0xc09e644  jal         func_279910
    ctx->pc = 0x2DDD94u;
    SET_GPR_U32(ctx, 31, 0x2DDD9Cu);
    ctx->pc = 0x2DDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD94u;
    // 0x2ddd98: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x2DDD94u, 0x2DDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD9Cu;
label_2ddd9c:
    // 0x2ddd9c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2ddd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2ddda0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ddda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ddda4: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2ddda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2ddda8: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x2ddda8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dddac: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x2dddacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2dddb0: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x2dddb0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x2dddb4: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2DDDB4u;
    SET_GPR_U32(ctx, 31, 0x2DDDBCu);
    ctx->pc = 0x2DDDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDB4u;
    // 0x2dddb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2DDDB4u, 0x2DDDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDBCu;
label_2dddbc:
    // 0x2dddbc: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x2dddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dddc0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2dddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2dddc4: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2dddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2dddc8: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2dddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2dddcc: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x2dddccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2dddd0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2dddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2dddd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dddd8: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2dddd8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddddc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DDDDCu;
    SET_GPR_U32(ctx, 31, 0x2DDDE4u);
    ctx->pc = 0x2DDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDDCu;
    // 0x2ddde0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DDDDCu, 0x2DDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDE4u;
label_2ddde4:
    // 0x2ddde4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2ddde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ddde8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ddde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2dddec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dddf0: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2DDDF0u;
    SET_GPR_U32(ctx, 31, 0x2DDDF8u);
    ctx->pc = 0x2DDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDF0u;
    // 0x2dddf4: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2DDDF0u, 0x2DDDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDF8u;
label_2dddf8:
    // 0x2dddf8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2dddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dddfc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2dddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dde00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dde00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde04: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2dde04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dde08: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2dde08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2dde0c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DDE0Cu;
    SET_GPR_U32(ctx, 31, 0x2DDE14u);
    ctx->pc = 0x2DDE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDE0Cu;
    // 0x2dde10: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DDE0Cu, 0x2DDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE14u;
label_2dde14:
    // 0x2dde14: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2dde14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dde18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dde18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dde1c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2dde1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2dde20: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2dde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dde24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2dde24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dde28: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2dde28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2dde2c: 0xc0755cc  jal         func_1D5730
    ctx->pc = 0x2DDE2Cu;
    SET_GPR_U32(ctx, 31, 0x2DDE34u);
    ctx->pc = 0x2DDE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDE2Cu;
    // 0x2dde30: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5730u, 0x2DDE2Cu, 0x2DDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE34u;
label_2dde34:
    // 0x2dde34: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x2dde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2dde38: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x2dde38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2dde3c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2dde3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dde40: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x2DDE40u;
    {
        const bool branch_taken_0x2dde40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE40u;
        // 0x2dde44: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde40) {
            ctx->pc = 0x2DE000u;
            goto label_2de000;
        }
    }
    ctx->pc = 0x2DDE48u;
    // 0x2dde48: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dde48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dde4c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2dde4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dde50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dde54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dde54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde58: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2dde58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2dde5c: 0x0  nop
    ctx->pc = 0x2dde5cu;
    // NOP
label_2dde60:
    // 0x2dde60: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x2dde60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x2dde64: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x2dde64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2dde68: 0x779021  addu        $s2, $v1, $s7
    ctx->pc = 0x2dde68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2dde6c: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x2dde6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2dde70: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2DDE70u;
    {
        const bool branch_taken_0x2dde70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE70u;
        // 0x2dde74: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dde70) {
            ctx->pc = 0x2DDFE0u;
            goto label_2ddfe0;
        }
    }
    ctx->pc = 0x2DDE78u;
    // 0x2dde78: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x2DDE78u;
    SET_GPR_U32(ctx, 31, 0x2DDE80u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x2DDE78u, 0x2DDE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE80u;
label_2dde80:
    // 0x2dde80: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x2dde80u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dde84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dde84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde88: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x2dde88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dde8c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2dde8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2dde90: 0x94560006  lhu         $s6, 0x6($v0)
    ctx->pc = 0x2dde90u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2dde94: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x2dde94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2dde98: 0x265f021  addu        $fp, $s3, $a1
    ctx->pc = 0x2dde98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2dde9c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x2dde9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2ddea0: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x2ddea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2ddea4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2ddea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2ddea8: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x2DDEA8u;
    SET_GPR_U32(ctx, 31, 0x2DDEB0u);
    ctx->pc = 0x2DDEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDEA8u;
    // 0x2ddeac: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x2DDEA8u, 0x2DDEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEB0u;
label_2ddeb0:
    // 0x2ddeb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ddeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ddeb4: 0x86440022  lh          $a0, 0x22($s2)
    ctx->pc = 0x2ddeb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x2ddeb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ddeb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddebc: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x2ddebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2ddec0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ddec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddec4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ddec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ddec8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2ddec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ddecc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ddeccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2dded0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dded4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dded4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dded8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dded8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ddedc: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x2ddedcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2ddee0: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x2ddee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2ddee4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ddee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ddee8: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x2ddee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x2ddeec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ddeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ddef0: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x2ddef0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2ddef4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDEF4u;
    {
        const bool branch_taken_0x2ddef4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2DDEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEF4u;
        // 0x2ddef8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddef4) {
            ctx->pc = 0x2DDF08u;
            goto label_2ddf08;
        }
    }
    ctx->pc = 0x2DDEFCu;
    // 0x2ddefc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ddefcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddf00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDF00u;
    {
        const bool branch_taken_0x2ddf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF00u;
        // 0x2ddf04: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf00) {
            ctx->pc = 0x2DDF20u;
            goto label_2ddf20;
        }
    }
    ctx->pc = 0x2DDF08u;
label_2ddf08:
    // 0x2ddf08: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2ddf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ddf0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ddf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ddf10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ddf10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddf14: 0x0  nop
    ctx->pc = 0x2ddf14u;
    // NOP
    // 0x2ddf18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ddf18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ddf1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ddf1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ddf20:
    // 0x2ddf20: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2ddf20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ddf24: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2ddf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ddf28: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2ddf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2ddf2c: 0x8eae0070  lw          $t6, 0x70($s5)
    ctx->pc = 0x2ddf2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2ddf30: 0x862c000a  lh          $t4, 0xA($s1)
    ctx->pc = 0x2ddf30u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2ddf34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ddf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ddf38: 0x862d0008  lh          $t5, 0x8($s1)
    ctx->pc = 0x2ddf38u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ddf3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ddf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf40: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2ddf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf44: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2ddf44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ddf48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddf4c: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x2ddf4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ddf50: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2ddf50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ddf54: 0x96450026  lhu         $a1, 0x26($s2)
    ctx->pc = 0x2ddf54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x2ddf58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2ddf58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ddf5c: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x2ddf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x2ddf60: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x2ddf60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ddf64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ddf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf68: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2ddf68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ddf6c: 0x27ab0100  addiu       $t3, $sp, 0x100
    ctx->pc = 0x2ddf6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ddf70: 0xc5c0001c  lwc1        $f0, 0x1C($t6)
    ctx->pc = 0x2ddf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddf74: 0x448c1800  mtc1        $t4, $f3
    ctx->pc = 0x2ddf74u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ddf78: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2ddf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ddf7c: 0xc5d10018  lwc1        $f17, 0x18($t6)
    ctx->pc = 0x2ddf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2ddf80: 0x468019a0  cvt.s.w     $f6, $f3
    ctx->pc = 0x2ddf80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2ddf84: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2ddf84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2ddf88: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x2ddf88u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ddf8c: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x2ddf8cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ddf90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ddf90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddf94: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x2ddf94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2ddf98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ddf98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ddf9c: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x2ddf9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2ddfa0: 0x46032843  div.s       $f1, $f5, $f3
    ctx->pc = 0x2ddfa0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x2ddfa4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2ddfa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2ddfa8: 0x46016342  mul.s       $f13, $f12, $f1
    ctx->pc = 0x2ddfa8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2ddfac: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2ddfacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2ddfb0: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x2ddfb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2ddfb4: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x2ddfb4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x2ddfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ddfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddfbc: 0x0  nop
    ctx->pc = 0x2ddfbcu;
    // NOP
    // 0x2ddfc0: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x2ddfc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x2ddfc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ddfc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ddfc8: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x2ddfc8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x2ddfcc: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x2ddfccu;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ddfd0: 0x0  nop
    ctx->pc = 0x2ddfd0u;
    // NOP
    // 0x2ddfd4: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2ddfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2ddfd8: 0xc075604  jal         func_1D5810
    ctx->pc = 0x2DDFD8u;
    SET_GPR_U32(ctx, 31, 0x2DDFE0u);
    ctx->pc = 0x2DDFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDFD8u;
    // 0x2ddfdc: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5810u, 0x2DDFD8u, 0x2DDFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDFE0u;
label_2ddfe0:
    // 0x2ddfe0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x2ddfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2ddfe4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ddfe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ddfe8: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x2ddfe8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x2ddfec: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x2ddfecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ddff0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2ddff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ddff4: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x2DDFF4u;
    {
        const bool branch_taken_0x2ddff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFF4u;
        // 0x2ddff8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddff4) {
            ctx->pc = 0x2DDE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dde60;
        }
    }
    ctx->pc = 0x2DDFFCu;
    // 0x2ddffc: 0x0  nop
    ctx->pc = 0x2ddffcu;
    // NOP
label_2de000:
    // 0x2de000: 0xc0755dc  jal         func_1D5770
    ctx->pc = 0x2DE000u;
    SET_GPR_U32(ctx, 31, 0x2DE008u);
    ctx->pc = 0x1D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5770u, 0x2DE000u, 0x2DE008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE008u;
label_2de008:
    // 0x2de008: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2de008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2de00c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2de00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2de010: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2de010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de014: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de018: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x2DE018u;
    SET_GPR_U32(ctx, 31, 0x2DE020u);
    ctx->pc = 0x2DE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE018u;
    // 0x2de01c: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x2DE018u, 0x2DE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE020u;
label_2de020:
    // 0x2de020: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2de020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2de024: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2de024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2de028: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2de028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2de02c: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x2de02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2de030: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2de030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2de034: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x2de034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x2de038: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de03c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x2DE03Cu;
    SET_GPR_U32(ctx, 31, 0x2DE044u);
    ctx->pc = 0x2DE040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE03Cu;
    // 0x2de040: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x2DE03Cu, 0x2DE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE044u;
label_2de044:
    // 0x2de044: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2de044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2de048: 0x38283  sra         $s0, $v1, 10
    ctx->pc = 0x2de048u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
    // 0x2de04c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2de04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2de050: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DE050u;
    {
        const bool branch_taken_0x2de050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de050) {
            ctx->pc = 0x2DE080u;
            goto label_2de080;
        }
    }
    ctx->pc = 0x2DE058u;
    // 0x2de058: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2de058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2de05c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2DE05Cu;
    SET_GPR_U32(ctx, 31, 0x2DE064u);
    ctx->pc = 0x2DE060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE05Cu;
    // 0x2de060: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2DE05Cu, 0x2DE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE064u;
label_2de064:
    // 0x2de064: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2de064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2de068: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2de068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2de06c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de070: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x2de070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x2de074: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2de074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2de078: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2DE078u;
    SET_GPR_U32(ctx, 31, 0x2DE080u);
    ctx->pc = 0x2DE07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE078u;
    // 0x2de07c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2DE078u, 0x2DE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE080u;
label_2de080:
    // 0x2de080: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2de080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2de084: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2de084u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2de088: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2de088u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2de08c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2de08cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de090: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2de090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2de094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2de098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de09c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de09cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de0a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de0a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0A8u;
        // 0x2de0ac: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE0B0u;
}

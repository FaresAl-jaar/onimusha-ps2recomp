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

// Function: sub_00306F70
// Address: 0x306f70 - 0x307390
void sub_00306F70_0x306f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306F70_0x306f70");
#endif

    switch (ctx->pc) {
        case 0x306facu: goto label_306fac;
        case 0x306fdcu: goto label_306fdc;
        case 0x307008u: goto label_307008;
        case 0x307030u: goto label_307030;
        case 0x307038u: goto label_307038;
        case 0x307054u: goto label_307054;
        case 0x307074u: goto label_307074;
        case 0x307098u: goto label_307098;
        case 0x3070b8u: goto label_3070b8;
        case 0x3070f8u: goto label_3070f8;
        case 0x30712cu: goto label_30712c;
        case 0x307160u: goto label_307160;
        case 0x3072acu: goto label_3072ac;
        case 0x3072e8u: goto label_3072e8;
        case 0x307300u: goto label_307300;
        case 0x307324u: goto label_307324;
        case 0x307344u: goto label_307344;
        case 0x307360u: goto label_307360;
        default: break;
    }

    ctx->pc = 0x306f70u;

    // 0x306f70: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x306f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x306f74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x306f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x306f78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x306f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x306f7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x306f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x306f80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x306f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x306f84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x306f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x306f88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x306f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x306f8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x306f8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306f90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x306f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x306f94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x306f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x306f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x306f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x306f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x306fa0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x306fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306fa4: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x306FA4u;
    SET_GPR_U32(ctx, 31, 0x306FACu);
    ctx->pc = 0x306FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306FA4u;
    // 0x306fa8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x306FA4u, 0x306FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FACu;
label_306fac:
    // 0x306fac: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x306facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x306fb0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x306fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x306fb4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x306fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x306fb8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x306fb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x306fbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x306fc0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x306fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x306fc4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x306fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x306fc8: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x306fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x306fcc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x306fccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x306fd0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x306fd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306fd4: 0xc09e644  jal         func_279910
    ctx->pc = 0x306FD4u;
    SET_GPR_U32(ctx, 31, 0x306FDCu);
    ctx->pc = 0x306FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306FD4u;
    // 0x306fd8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x306FD4u, 0x306FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FDCu;
label_306fdc:
    // 0x306fdc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x306fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x306fe0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x306fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x306fe4: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x306fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x306fe8: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x306fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x306fec: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x306fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x306ff0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x306ff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x306ff4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x306ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x306ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306ffc: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x306ffcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307000: 0xc074648  jal         func_1D1920
    ctx->pc = 0x307000u;
    SET_GPR_U32(ctx, 31, 0x307008u);
    ctx->pc = 0x307004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307000u;
    // 0x307004: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x307000u, 0x307008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307008u;
label_307008:
    // 0x307008: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x307008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30700c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x30700cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x307010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x307010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307014: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x307014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x307018: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x307018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x30701c: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x30701cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307020: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x307020u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x307024: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x307024u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x307028: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x307028u;
    SET_GPR_U32(ctx, 31, 0x307030u);
    ctx->pc = 0x30702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307028u;
    // 0x30702c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x307028u, 0x307030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307030u;
label_307030:
    // 0x307030: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x307030u;
    SET_GPR_U32(ctx, 31, 0x307038u);
    ctx->pc = 0x307034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307030u;
    // 0x307034: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x307030u, 0x307038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307038u;
label_307038:
    // 0x307038: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x307038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30703c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x30703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x307040: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x307040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307044: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x307044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x307048: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x307048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x30704c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x30704Cu;
    SET_GPR_U32(ctx, 31, 0x307054u);
    ctx->pc = 0x307050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30704Cu;
    // 0x307050: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x30704Cu, 0x307054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307054u;
label_307054:
    // 0x307054: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x307054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x307058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x307058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30705c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x30705cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x307060: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x307060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x307064: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x307064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x307068: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x307068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x30706c: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x30706Cu;
    SET_GPR_U32(ctx, 31, 0x307074u);
    ctx->pc = 0x307070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30706Cu;
    // 0x307070: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x30706Cu, 0x307074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307074u;
label_307074:
    // 0x307074: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x307074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x307078: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x307078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x30707c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x30707cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x307080: 0x10200097  beqz        $at, . + 4 + (0x97 << 2)
    ctx->pc = 0x307080u;
    {
        const bool branch_taken_0x307080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x307084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307080u;
        // 0x307084: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307080) {
            ctx->pc = 0x3072E0u;
            goto label_3072e0;
        }
    }
    ctx->pc = 0x307088u;
    // 0x307088: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x307088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30708c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30708cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307090: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x307090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x307094: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x307094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_307098:
    // 0x307098: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x307098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x30709c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30709cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3070a0: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x3070a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3070a4: 0x2c31018  mult        $v0, $s6, $v1
    ctx->pc = 0x3070a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3070a8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3070a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3070ac: 0x10200086  beqz        $at, . + 4 + (0x86 << 2)
    ctx->pc = 0x3070ACu;
    {
        const bool branch_taken_0x3070ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3070B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070ACu;
        // 0x3070b0: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3070ac) {
            ctx->pc = 0x3072C8u;
            goto label_3072c8;
        }
    }
    ctx->pc = 0x3070B4u;
    // 0x3070b4: 0x0  nop
    ctx->pc = 0x3070b4u;
    // NOP
label_3070b8:
    // 0x3070b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3070b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3070bc: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x3070bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x3070c0: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x3070c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3070c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3070c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3070c8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3070c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3070cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3070ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3070d0: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x3070d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x3070d4: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x3070d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3070d8: 0x86230034  lh          $v1, 0x34($s1)
    ctx->pc = 0x3070d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3070dc: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x3070DCu;
    {
        const bool branch_taken_0x3070dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3070dc) {
            ctx->pc = 0x3072B0u;
            goto label_3072b0;
        }
    }
    ctx->pc = 0x3070E4u;
    // 0x3070e4: 0x9226003a  lbu         $a2, 0x3A($s1)
    ctx->pc = 0x3070e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x3070e8: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3070E8u;
    {
        const bool branch_taken_0x3070e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3070ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070E8u;
        // 0x3070ec: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3070e8) {
            ctx->pc = 0x307120u;
            goto label_307120;
        }
    }
    ctx->pc = 0x3070F0u;
    // 0x3070f0: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x3070F0u;
    SET_GPR_U32(ctx, 31, 0x3070F8u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x3070F0u, 0x3070F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070F8u;
label_3070f8:
    // 0x3070f8: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x3070f8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3070fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3070fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307100: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x307100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x307104: 0x94520006  lhu         $s2, 0x6($v0)
    ctx->pc = 0x307104u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x307108: 0x263f021  addu        $fp, $s3, $v1
    ctx->pc = 0x307108u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x30710c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x30710cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x307110: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x307110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x307114: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x307114u;
    {
        const bool branch_taken_0x307114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307114u;
        // 0x307118: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307114) {
            ctx->pc = 0x307150u;
            goto label_307150;
        }
    }
    ctx->pc = 0x30711Cu;
    // 0x30711c: 0x0  nop
    ctx->pc = 0x30711cu;
    // NOP
label_307120:
    // 0x307120: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x307120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x307124: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x307124u;
    SET_GPR_U32(ctx, 31, 0x30712Cu);
    ctx->pc = 0x307128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307124u;
    // 0x307128: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x307124u, 0x30712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30712Cu;
label_30712c:
    // 0x30712c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30712cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307130: 0x8fb30100  lw          $s3, 0x100($sp)
    ctx->pc = 0x307130u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x307134: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x307134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x307138: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x307138u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30713c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x30713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x307140: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x307140u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307144: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x307144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x307148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x307148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30714c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x30714cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_307150:
    // 0x307150: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x307150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x307154: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x307154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x307158: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x307158u;
    SET_GPR_U32(ctx, 31, 0x307160u);
    ctx->pc = 0x30715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307158u;
    // 0x30715c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x307158u, 0x307160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307160u;
label_307160:
    // 0x307160: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x307160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x307164: 0x86240038  lh          $a0, 0x38($s1)
    ctx->pc = 0x307164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x307168: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x307168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30716c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x30716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x307170: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x307170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x307174: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x307174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x307178: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x307178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30717c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30717cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x307180: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x307180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x307184: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x307184u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x307188: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x307188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x30718c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x30718cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x307190: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x307190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x307194: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x307194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x307198: 0x94440012  lhu         $a0, 0x12($v0)
    ctx->pc = 0x307198u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x30719c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30719Cu;
    {
        const bool branch_taken_0x30719c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3071A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30719Cu;
        // 0x3071a0: 0xc621003c  lwc1        $f1, 0x3C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30719c) {
            ctx->pc = 0x3071B0u;
            goto label_3071b0;
        }
    }
    ctx->pc = 0x3071A4u;
    // 0x3071a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3071a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3071a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3071A8u;
    {
        const bool branch_taken_0x3071a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3071ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071A8u;
        // 0x3071ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071a8) {
            ctx->pc = 0x3071CCu;
            goto label_3071cc;
        }
    }
    ctx->pc = 0x3071B0u;
label_3071b0:
    // 0x3071b0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3071b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3071b4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3071b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3071b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3071b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3071bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3071bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3071c0: 0x0  nop
    ctx->pc = 0x3071c0u;
    // NOP
    // 0x3071c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3071c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3071c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3071c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3071cc:
    // 0x3071cc: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x3071ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3071d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3071d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3071d4: 0x0  nop
    ctx->pc = 0x3071d4u;
    // NOP
    // 0x3071d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3071d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3071dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3071DCu;
    {
        const bool branch_taken_0x3071dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3071dc) {
            ctx->pc = 0x3071E8u;
            goto label_3071e8;
        }
    }
    ctx->pc = 0x3071E4u;
    // 0x3071e4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x3071e4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_3071e8:
    // 0x3071e8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x3071e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3071ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3071ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3071f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3071f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3071f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3071f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3071f8: 0x860e000a  lh          $t6, 0xA($s0)
    ctx->pc = 0x3071f8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3071fc: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x3071fcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
    // 0x307200: 0x3c0c3d80  lui         $t4, 0x3D80
    ctx->pc = 0x307200u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)15744 << 16));
    // 0x307204: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x307204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x307208: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x307208u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
    // 0x30720c: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x30720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x307210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x307210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307214: 0x860f0008  lh          $t7, 0x8($s0)
    ctx->pc = 0x307214u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x307218: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x307218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30721c: 0x860b0000  lh          $t3, 0x0($s0)
    ctx->pc = 0x30721cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307220: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x307220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307224: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x307224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x307228: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x307228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30722c: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x30722cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x307230: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x307230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x307234: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x307234u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307238: 0x448e1800  mtc1        $t6, $f3
    ctx->pc = 0x307238u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30723c: 0x0  nop
    ctx->pc = 0x30723cu;
    // NOP
    // 0x307240: 0x46020302  mul.s       $f12, $f0, $f2
    ctx->pc = 0x307240u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x307244: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x307244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307248: 0x448d8800  mtc1        $t5, $f17
    ctx->pc = 0x307248u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x30724c: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x30724cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x307250: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x307250u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x307254: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x307254u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307258: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x307258u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30725c: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x30725cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x307260: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x307260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x307264: 0x46016082  mul.s       $f2, $f12, $f1
    ctx->pc = 0x307264u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x307268: 0x46038843  div.s       $f1, $f17, $f3
    ctx->pc = 0x307268u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[17], ctx->f[3]); }
    // 0x30726c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x30726cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x307270: 0x448c2000  mtc1        $t4, $f4
    ctx->pc = 0x307270u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x307274: 0x46016342  mul.s       $f13, $f12, $f1
    ctx->pc = 0x307274u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x307278: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x307278u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x30727c: 0x46052042  mul.s       $f1, $f4, $f5
    ctx->pc = 0x30727cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x307280: 0x460388c3  div.s       $f3, $f17, $f3
    ctx->pc = 0x307280u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[17], ctx->f[3]); }
    // 0x307284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x307284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307288: 0x0  nop
    ctx->pc = 0x307288u;
    // NOP
    // 0x30728c: 0x46018843  div.s       $f1, $f17, $f1
    ctx->pc = 0x30728cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[17], ctx->f[1]); }
    // 0x307290: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x307290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x307294: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x307294u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x307298: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x307298u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x30729c: 0x0  nop
    ctx->pc = 0x30729cu;
    // NOP
    // 0x3072a0: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x3072a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x3072a4: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x3072A4u;
    SET_GPR_U32(ctx, 31, 0x3072ACu);
    ctx->pc = 0x3072A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072A4u;
    // 0x3072a8: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x3072A4u, 0x3072ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072ACu;
label_3072ac:
    // 0x3072ac: 0x0  nop
    ctx->pc = 0x3072acu;
    // NOP
label_3072b0:
    // 0x3072b0: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x3072b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x3072b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3072b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3072b8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3072b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3072bc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3072bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3072c0: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x3072C0u;
    {
        const bool branch_taken_0x3072c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3072c0) {
            ctx->pc = 0x3070B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3070b8;
        }
    }
    ctx->pc = 0x3072C8u;
label_3072c8:
    // 0x3072c8: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3072c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x3072cc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3072ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3072d0: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x3072d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3072d4: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x3072d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3072d8: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x3072D8u;
    {
        const bool branch_taken_0x3072d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3072DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072D8u;
        // 0x3072dc: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3072d8) {
            ctx->pc = 0x307098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307098;
        }
    }
    ctx->pc = 0x3072E0u;
label_3072e0:
    // 0x3072e0: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x3072E0u;
    SET_GPR_U32(ctx, 31, 0x3072E8u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x3072E0u, 0x3072E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072E8u;
label_3072e8:
    // 0x3072e8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3072e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3072ec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3072ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3072f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3072f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3072f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3072f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3072f8: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x3072F8u;
    SET_GPR_U32(ctx, 31, 0x307300u);
    ctx->pc = 0x3072FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072F8u;
    // 0x3072fc: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x3072F8u, 0x307300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307300u;
label_307300:
    // 0x307300: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x307300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x307304: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x307304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x307308: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x307308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30730c: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x30730cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x307310: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x307310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x307314: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x307314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x307318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x307318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30731c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x30731Cu;
    SET_GPR_U32(ctx, 31, 0x307324u);
    ctx->pc = 0x307320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30731Cu;
    // 0x307320: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x30731Cu, 0x307324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307324u;
label_307324:
    // 0x307324: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x307324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x307328: 0x38283  sra         $s0, $v1, 10
    ctx->pc = 0x307328u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
    // 0x30732c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x30732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x307330: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x307330u;
    {
        const bool branch_taken_0x307330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307330) {
            ctx->pc = 0x307360u;
            goto label_307360;
        }
    }
    ctx->pc = 0x307338u;
    // 0x307338: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x307338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x30733c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x30733Cu;
    SET_GPR_U32(ctx, 31, 0x307344u);
    ctx->pc = 0x307340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30733Cu;
    // 0x307340: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x30733Cu, 0x307344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307344u;
label_307344:
    // 0x307344: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x307344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x307348: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x307348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x30734c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30734cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307350: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x307350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x307354: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x307354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x307358: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x307358u;
    SET_GPR_U32(ctx, 31, 0x307360u);
    ctx->pc = 0x30735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307358u;
    // 0x30735c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x307358u, 0x307360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307360u;
label_307360:
    // 0x307360: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x307360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x307364: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x307364u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x307368: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x307368u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30736c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30736cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x307370: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x307370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x307374: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x307374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307378: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x307378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30737c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30737cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x307380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307388: 0x3e00008  jr          $ra
    ctx->pc = 0x307388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307388u;
        // 0x30738c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307390u;
}

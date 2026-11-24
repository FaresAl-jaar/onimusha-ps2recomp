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

// Function: sub_00351FE0
// Address: 0x351fe0 - 0x352138
void sub_00351FE0_0x351fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351FE0_0x351fe0");
#endif

    switch (ctx->pc) {
        case 0x35205cu: goto label_35205c;
        case 0x352070u: goto label_352070;
        case 0x3520b0u: goto label_3520b0;
        case 0x3520d0u: goto label_3520d0;
        case 0x352110u: goto label_352110;
        default: break;
    }

    ctx->pc = 0x351fe0u;

    // 0x351fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x351fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x351fe4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x351fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x351fe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x351fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x351fec: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x351fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x351ff0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x351ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x351ff4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x351ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x351ff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x351ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x351ffc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x351ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x352000: 0x58c3c  dsll32      $s1, $a1, 16
    ctx->pc = 0x352000u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 16));
    // 0x352004: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x352004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x352008: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x352008u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x35200c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x35200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x352010: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x352010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352014: 0x94258598  lhu         $a1, -0x7A68($at)
    ctx->pc = 0x352014u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294935960)));
    // 0x352018: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x352018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x35201c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x35201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x352020: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352024: 0x8422859a  lh          $v0, -0x7A66($at)
    ctx->pc = 0x352024u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x65859Au));
    // 0x352028: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35202c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x352030: 0x9027859c  lbu         $a3, -0x7A64($at)
    ctx->pc = 0x352030u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x65859Cu));
    // 0x352034: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352038: 0x9028859d  lbu         $t0, -0x7A63($at)
    ctx->pc = 0x352038u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x65859Du));
    // 0x35203c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35203cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352040: 0x9029859e  lbu         $t1, -0x7A62($at)
    ctx->pc = 0x352040u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x65859Eu));
    // 0x352044: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352048: 0x902a859f  lbu         $t2, -0x7A61($at)
    ctx->pc = 0x352048u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x65859Fu));
    // 0x35204c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35204cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352050: 0x902b85a0  lbu         $t3, -0x7A60($at)
    ctx->pc = 0x352050u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x6585A0u));
    // 0x352054: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x352054u;
    SET_GPR_U32(ctx, 31, 0x35205Cu);
    ctx->pc = 0x352058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352054u;
    // 0x352058: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x352054u, 0x35205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35205Cu;
label_35205c:
    // 0x35205c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35205Cu;
    {
        const bool branch_taken_0x35205c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35205c) {
            ctx->pc = 0x3520C0u;
            goto label_3520c0;
        }
    }
    ctx->pc = 0x352064u;
    // 0x352064: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x352064u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x352068: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x352068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35206c: 0x26108210  addiu       $s0, $s0, -0x7DF0
    ctx->pc = 0x35206cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935056));
label_352070:
    // 0x352070: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x352070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x352074: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x352074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x352078: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x352078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x35207c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x35207cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x352080: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x352080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x352084: 0x920b0014  lbu         $t3, 0x14($s0)
    ctx->pc = 0x352084u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x352088: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x352088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35208c: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x35208cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x352090: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x352090u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x352094: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x352094u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x352098: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x352098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35209c: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x35209cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3520a0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3520a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3520a4: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x3520a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3520a8: 0xc0d471c  jal         func_351C70
    ctx->pc = 0x3520A8u;
    SET_GPR_U32(ctx, 31, 0x3520B0u);
    ctx->pc = 0x3520ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520A8u;
    // 0x3520ac: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C70u, 0x3520A8u, 0x3520B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520B0u;
label_3520b0:
    // 0x3520b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3520b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3520b4: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x3520b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3520b8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3520B8u;
    {
        const bool branch_taken_0x3520b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3520BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520B8u;
        // 0x3520bc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520b8) {
            ctx->pc = 0x352070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352070;
        }
    }
    ctx->pc = 0x3520C0u;
label_3520c0:
    // 0x3520c0: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3520c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3520c4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3520c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3520c8: 0x26108258  addiu       $s0, $s0, -0x7DA8
    ctx->pc = 0x3520c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935128));
    // 0x3520cc: 0x0  nop
    ctx->pc = 0x3520ccu;
    // NOP
label_3520d0:
    // 0x3520d0: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x3520d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x3520d4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3520d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3520d8: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x3520d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3520dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3520dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3520e0: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x3520e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3520e4: 0x920b0014  lbu         $t3, 0x14($s0)
    ctx->pc = 0x3520e4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3520e8: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x3520e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3520ec: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x3520ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3520f0: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x3520f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3520f4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x3520f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3520f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3520f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3520fc: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x3520fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x352100: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x352100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x352104: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x352104u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x352108: 0xc0d471c  jal         func_351C70
    ctx->pc = 0x352108u;
    SET_GPR_U32(ctx, 31, 0x352110u);
    ctx->pc = 0x35210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352108u;
    // 0x35210c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C70u, 0x352108u, 0x352110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352110u;
label_352110:
    // 0x352110: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x352110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x352114: 0x2e430005  sltiu       $v1, $s2, 0x5
    ctx->pc = 0x352114u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x352118: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x352118u;
    {
        const bool branch_taken_0x352118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352118u;
        // 0x35211c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352118) {
            ctx->pc = 0x3520D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3520d0;
        }
    }
    ctx->pc = 0x352120u;
    // 0x352120: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x352120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x352124: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x352124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352128: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x352128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35212c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35212cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352130: 0x3e00008  jr          $ra
    ctx->pc = 0x352130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352130u;
        // 0x352134: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352138u;
}

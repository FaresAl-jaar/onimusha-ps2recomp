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

// Function: sub_00114F50
// Address: 0x114f50 - 0x115104
void sub_00114F50_0x114f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114F50_0x114f50");
#endif

    switch (ctx->pc) {
        case 0x114f90u: goto label_114f90;
        case 0x114fa8u: goto label_114fa8;
        case 0x114fd0u: goto label_114fd0;
        case 0x115040u: goto label_115040;
        case 0x115080u: goto label_115080;
        case 0x115090u: goto label_115090;
        case 0x115098u: goto label_115098;
        case 0x1150acu: goto label_1150ac;
        case 0x1150bcu: goto label_1150bc;
        case 0x1150ccu: goto label_1150cc;
        case 0x1150d4u: goto label_1150d4;
        default: break;
    }

    ctx->pc = 0x114f50u;

    // 0x114f50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x114f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x114f54: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114f58: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114f60: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x114f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x114f64: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x114f64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114f68: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x114f6c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x114f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x114f70: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x114f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x114f74: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x114f74u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x114f78: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x114f7c: 0x26f2ec80  addiu       $s2, $s7, -0x1380
    ctx->pc = 0x114f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962304));
    // 0x114f80: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x114f84: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114f88: 0xc044b50  jal         func_112D40
    ctx->pc = 0x114F88u;
    SET_GPR_U32(ctx, 31, 0x114F90u);
    ctx->pc = 0x114F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F88u;
    // 0x114f8c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x114F88u, 0x114F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F90u;
label_114f90:
    // 0x114f90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x114f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x114f94: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x114f94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x114f98: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114F98u;
    {
        const bool branch_taken_0x114f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114f98) {
            ctx->pc = 0x114F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114F98u;
            // 0x114f9c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114FACu;
            goto label_114fac;
        }
    }
    ctx->pc = 0x114FA0u;
    // 0x114fa0: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x114FA0u;
    SET_GPR_U32(ctx, 31, 0x114FA8u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x114FA0u, 0x114FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FA8u;
label_114fa8:
    // 0x114fa8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x114fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_114fac:
    // 0x114fac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x114facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x114fb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fb4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x114FB4u;
    {
        const bool branch_taken_0x114fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FB4u;
        // 0x114fb8: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fb4) {
            ctx->pc = 0x114FF8u;
            goto label_114ff8;
        }
    }
    ctx->pc = 0x114FBCu;
    // 0x114fbc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x114fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x114fc0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114fc4: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x114fc4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x114fc8: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x114fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x114fcc: 0x0  nop
    ctx->pc = 0x114fccu;
    // NOP
label_114fd0:
    // 0x114fd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x114fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x114fd4: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x114fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114fd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114FD8u;
    {
        const bool branch_taken_0x114fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FD8u;
        // 0x114fdc: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fd8) {
            ctx->pc = 0x115008u;
            goto label_115008;
        }
    }
    ctx->pc = 0x114FE0u;
    // 0x114fe0: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x114fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x114fe4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114fe8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x114FE8u;
    {
        const bool branch_taken_0x114fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x114FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FE8u;
        // 0x114fec: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fe8) {
            ctx->pc = 0x114FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114fd0;
        }
    }
    ctx->pc = 0x114FF0u;
    // 0x114ff0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114FF0u;
    {
        const bool branch_taken_0x114ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FF0u;
        // 0x114ff4: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ff0) {
            ctx->pc = 0x11500Cu;
            goto label_11500c;
        }
    }
    ctx->pc = 0x114FF8u;
label_114ff8:
    // 0x114ff8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x114ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x114ffc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115000: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x115000u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x115004: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x115004u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
label_115008:
    // 0x115008: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_11500c:
    // 0x11500c: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11500Cu;
    {
        const bool branch_taken_0x11500c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11500c) {
            ctx->pc = 0x115010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11500Cu;
            // 0x115010: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115020u;
            goto label_115020;
        }
    }
    ctx->pc = 0x115014u;
    // 0x115014: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x115014u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x115018: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x115018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11501c: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x11501cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_115020:
    // 0x115020: 0x24a32858  addiu       $v1, $a1, 0x2858
    ctx->pc = 0x115020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10328));
    // 0x115024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115028: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11502c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x11502cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x115030: 0x2694f8c0  addiu       $s4, $s4, -0x740
    ctx->pc = 0x115030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965440));
    // 0x115034: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x115034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x115038: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x115038u;
    SET_GPR_U32(ctx, 31, 0x115040u);
    ctx->pc = 0x11503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115038u;
    // 0x11503c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x115038u, 0x115040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115040u;
label_115040:
    // 0x115040: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x115040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115044: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x115044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x115048: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11504c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x11504cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x115050: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x115050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x115054: 0x26a40380  addiu       $a0, $s5, 0x380
    ctx->pc = 0x115054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 896));
    // 0x115058: 0x26e7ec80  addiu       $a3, $s7, -0x1380
    ctx->pc = 0x115058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962304));
    // 0x11505c: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x11505cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x115060: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115064: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x115064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x115068: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11506c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11506cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115070: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x115070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115074: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115078: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x115078u;
    SET_GPR_U32(ctx, 31, 0x115080u);
    ctx->pc = 0x11507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115078u;
    // 0x11507c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x115078u, 0x115080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115080u;
label_115080:
    // 0x115080: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115080u;
    {
        const bool branch_taken_0x115080 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x115084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115080u;
        // 0x115084: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115080) {
            ctx->pc = 0x1150A0u;
            goto label_1150a0;
        }
    }
    ctx->pc = 0x115088u;
    // 0x115088: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115088u;
    SET_GPR_U32(ctx, 31, 0x115090u);
    ctx->pc = 0x11508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115088u;
    // 0x11508c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115088u, 0x115090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115090u;
label_115090:
    // 0x115090: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115090u;
    SET_GPR_U32(ctx, 31, 0x115098u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115090u, 0x115098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115098u;
label_115098:
    // 0x115098: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115098u;
    {
        const bool branch_taken_0x115098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115098u;
        // 0x11509c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115098) {
            ctx->pc = 0x1150D8u;
            goto label_1150d8;
        }
    }
    ctx->pc = 0x1150A0u;
label_1150a0:
    // 0x1150a0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1150a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1150a4: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1150A4u;
    SET_GPR_U32(ctx, 31, 0x1150ACu);
    ctx->pc = 0x1150A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150A4u;
    // 0x1150a8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1150A4u, 0x1150ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150ACu;
label_1150ac:
    // 0x1150ac: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1150ACu;
    {
        const bool branch_taken_0x1150ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1150ac) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x1150B4u;
    // 0x1150b4: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1150B4u;
    SET_GPR_U32(ctx, 31, 0x1150BCu);
    ctx->pc = 0x1150B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150B4u;
    // 0x1150b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1150B4u, 0x1150BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150BCu;
label_1150bc:
    // 0x1150bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1150BCu;
    {
        const bool branch_taken_0x1150bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150BCu;
        // 0x1150c0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150bc) {
            ctx->pc = 0x1150D8u;
            goto label_1150d8;
        }
    }
    ctx->pc = 0x1150C4u;
label_1150c4:
    // 0x1150c4: 0xc043808  jal         func_10E020
    ctx->pc = 0x1150C4u;
    SET_GPR_U32(ctx, 31, 0x1150CCu);
    ctx->pc = 0x1150C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150C4u;
    // 0x1150c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x1150C4u, 0x1150CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150CCu;
label_1150cc:
    // 0x1150cc: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1150CCu;
    SET_GPR_U32(ctx, 31, 0x1150D4u);
    ctx->pc = 0x1150D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150CCu;
    // 0x1150d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1150CCu, 0x1150D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150D4u;
label_1150d4:
    // 0x1150d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1150d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1150d8:
    // 0x1150d8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1150d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1150dc: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1150dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1150e0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1150e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1150e4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1150e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1150e8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1150e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1150ec: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1150ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1150f0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1150f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1150f4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1150f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1150f8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1150f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1150fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1150FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150FCu;
        // 0x115100: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1150FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115104u;
}

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

// Function: sub_00114268
// Address: 0x114268 - 0x114450
void sub_00114268_0x114268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114268_0x114268");
#endif

    switch (ctx->pc) {
        case 0x1142b0u: goto label_1142b0;
        case 0x1142bcu: goto label_1142bc;
        case 0x1142d4u: goto label_1142d4;
        case 0x1142f0u: goto label_1142f0;
        case 0x114310u: goto label_114310;
        case 0x114334u: goto label_114334;
        case 0x114368u: goto label_114368;
        case 0x114394u: goto label_114394;
        case 0x1143ccu: goto label_1143cc;
        case 0x1143dcu: goto label_1143dc;
        case 0x1143e4u: goto label_1143e4;
        case 0x1143f8u: goto label_1143f8;
        case 0x114408u: goto label_114408;
        case 0x114418u: goto label_114418;
        case 0x114420u: goto label_114420;
        default: break;
    }

    ctx->pc = 0x114268u;

    // 0x114268: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x114268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11426c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x11426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x114270: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x114274: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x114274u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114278: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11427c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11427cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114280: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114284: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x114284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114288: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x114288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11428c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x11428cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114290: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114294: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x114294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114298: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11429c: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x11429cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x1142a0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1142a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1142a4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1142a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1142a8: 0xc044a30  jal         func_1128C0
    ctx->pc = 0x1142A8u;
    SET_GPR_U32(ctx, 31, 0x1142B0u);
    ctx->pc = 0x1142ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1142A8u;
    // 0x1142ac: 0x26d1ec80  addiu       $s1, $s6, -0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1128C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1128C0u, 0x1142A8u, 0x1142B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142B0u;
label_1142b0:
    // 0x1142b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1142b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142b4: 0xc044b50  jal         func_112D40
    ctx->pc = 0x1142B4u;
    SET_GPR_U32(ctx, 31, 0x1142BCu);
    ctx->pc = 0x1142B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1142B4u;
    // 0x1142b8: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x1142B4u, 0x1142BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142BCu;
label_1142bc:
    // 0x1142bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1142bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1142c0: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x1142c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x1142c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1142C4u;
    {
        const bool branch_taken_0x1142c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1142c4) {
            ctx->pc = 0x1142D4u;
            goto label_1142d4;
        }
    }
    ctx->pc = 0x1142CCu;
    // 0x1142cc: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x1142CCu;
    SET_GPR_U32(ctx, 31, 0x1142D4u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x1142CCu, 0x1142D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142D4u;
label_1142d4:
    // 0x1142d4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1142D4u;
    {
        const bool branch_taken_0x1142d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1142d4) {
            ctx->pc = 0x1142E8u;
            goto label_1142e8;
        }
    }
    ctx->pc = 0x1142DCu;
    // 0x1142dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1142dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1142e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1142E0u;
    {
        const bool branch_taken_0x1142e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1142E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E0u;
        // 0x1142e4: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142e0) {
            ctx->pc = 0x1142F8u;
            goto label_1142f8;
        }
    }
    ctx->pc = 0x1142E8u;
label_1142e8:
    // 0x1142e8: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1142E8u;
    SET_GPR_U32(ctx, 31, 0x1142F0u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1142E8u, 0x1142F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142F0u;
label_1142f0:
    // 0x1142f0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1142F0u;
    {
        const bool branch_taken_0x1142f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F0u;
        // 0x1142f4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f0) {
            ctx->pc = 0x114424u;
            goto label_114424;
        }
    }
    ctx->pc = 0x1142F8u;
label_1142f8:
    // 0x1142f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1142F8u;
    {
        const bool branch_taken_0x1142f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F8u;
        // 0x1142fc: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f8) {
            ctx->pc = 0x114308u;
            goto label_114308;
        }
    }
    ctx->pc = 0x114300u;
    // 0x114300: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114300u;
    {
        const bool branch_taken_0x114300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114300) {
            ctx->pc = 0x114318u;
            goto label_114318;
        }
    }
    ctx->pc = 0x114308u;
label_114308:
    // 0x114308: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114308u;
    SET_GPR_U32(ctx, 31, 0x114310u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114308u, 0x114310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114310u;
label_114310:
    // 0x114310: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x114310u;
    {
        const bool branch_taken_0x114310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114310u;
        // 0x114314: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114310) {
            ctx->pc = 0x114424u;
            goto label_114424;
        }
    }
    ctx->pc = 0x114318u;
label_114318:
    // 0x114318: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114318u;
    {
        const bool branch_taken_0x114318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114318u;
        // 0x11431c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114318) {
            ctx->pc = 0x114328u;
            goto label_114328;
        }
    }
    ctx->pc = 0x114320u;
    // 0x114320: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114320u;
    {
        const bool branch_taken_0x114320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114320u;
        // 0x114324: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114320) {
            ctx->pc = 0x114334u;
            goto label_114334;
        }
    }
    ctx->pc = 0x114328u;
label_114328:
    // 0x114328: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x114328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x11432c: 0xc049522  jal         func_125488
    ctx->pc = 0x11432Cu;
    SET_GPR_U32(ctx, 31, 0x114334u);
    ctx->pc = 0x114330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11432Cu;
    // 0x114330: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x11432Cu, 0x114334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114334u;
label_114334:
    // 0x114334: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x114334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x114338: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x114338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x11433c: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x11433cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x114340: 0x244227b0  addiu       $v0, $v0, 0x27B0
    ctx->pc = 0x114340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10160));
    // 0x114344: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x114344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x114348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11434c: 0xae33041c  sw          $s3, 0x41C($s1)
    ctx->pc = 0x11434cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 19));
    // 0x114350: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114354: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x114354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x114358: 0x26d0ec80  addiu       $s0, $s6, -0x1380
    ctx->pc = 0x114358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962304));
    // 0x11435c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x11435cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x114360: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x114360u;
    SET_GPR_U32(ctx, 31, 0x114368u);
    ctx->pc = 0x114364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114360u;
    // 0x114364: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x114360u, 0x114368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114368u;
label_114368:
    // 0x114368: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x114368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11436c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114370: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x114370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114374: 0xae340418  sw          $s4, 0x418($s1)
    ctx->pc = 0x114374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 20));
    // 0x114378: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x114378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11437c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11437cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114380: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x114380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x114384: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x114384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x114388: 0xae370414  sw          $s7, 0x414($s1)
    ctx->pc = 0x114388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 23));
    // 0x11438c: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x11438Cu;
    SET_GPR_U32(ctx, 31, 0x114394u);
    ctx->pc = 0x114390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11438Cu;
    // 0x114390: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x11438Cu, 0x114394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114394u;
label_114394:
    // 0x114394: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x114394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x114398: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x114398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11439c: 0x2451f8c0  addiu       $s1, $v0, -0x740
    ctx->pc = 0x11439cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x1143a0: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x1143a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x1143a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1143a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1143a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1143ac: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1143acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1143b0: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1143b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1143b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1143b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143b8: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x1143b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1143bc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1143bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1143c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1143c4: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x1143C4u;
    SET_GPR_U32(ctx, 31, 0x1143CCu);
    ctx->pc = 0x1143C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143C4u;
    // 0x1143c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x1143C4u, 0x1143CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143CCu;
label_1143cc:
    // 0x1143cc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1143CCu;
    {
        const bool branch_taken_0x1143cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1143D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143CCu;
        // 0x1143d0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143cc) {
            ctx->pc = 0x1143ECu;
            goto label_1143ec;
        }
    }
    ctx->pc = 0x1143D4u;
    // 0x1143d4: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1143D4u;
    SET_GPR_U32(ctx, 31, 0x1143DCu);
    ctx->pc = 0x1143D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143D4u;
    // 0x1143d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1143D4u, 0x1143DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143DCu;
label_1143dc:
    // 0x1143dc: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1143DCu;
    SET_GPR_U32(ctx, 31, 0x1143E4u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1143DCu, 0x1143E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143E4u;
label_1143e4:
    // 0x1143e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1143E4u;
    {
        const bool branch_taken_0x1143e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E4u;
        // 0x1143e8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143e4) {
            ctx->pc = 0x114424u;
            goto label_114424;
        }
    }
    ctx->pc = 0x1143ECu;
label_1143ec:
    // 0x1143ec: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1143ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1143f0: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1143F0u;
    SET_GPR_U32(ctx, 31, 0x1143F8u);
    ctx->pc = 0x1143F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143F0u;
    // 0x1143f4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1143F0u, 0x1143F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143F8u;
label_1143f8:
    // 0x1143f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1143F8u;
    {
        const bool branch_taken_0x1143f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1143f8) {
            ctx->pc = 0x114410u;
            goto label_114410;
        }
    }
    ctx->pc = 0x114400u;
    // 0x114400: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114400u;
    SET_GPR_U32(ctx, 31, 0x114408u);
    ctx->pc = 0x114404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114400u;
    // 0x114404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114400u, 0x114408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114408u;
label_114408:
    // 0x114408: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114408u;
    {
        const bool branch_taken_0x114408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114408u;
        // 0x11440c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114408) {
            ctx->pc = 0x114424u;
            goto label_114424;
        }
    }
    ctx->pc = 0x114410u;
label_114410:
    // 0x114410: 0xc043808  jal         func_10E020
    ctx->pc = 0x114410u;
    SET_GPR_U32(ctx, 31, 0x114418u);
    ctx->pc = 0x114414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114410u;
    // 0x114414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x114410u, 0x114418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114418u;
label_114418:
    // 0x114418: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114418u;
    SET_GPR_U32(ctx, 31, 0x114420u);
    ctx->pc = 0x11441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114418u;
    // 0x11441c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114418u, 0x114420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114420u;
label_114420:
    // 0x114420: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114424:
    // 0x114424: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x114424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x114428: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x114428u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11442c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11442cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114430: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x114430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114434: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x114434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114438: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11443c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11443cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114440: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114444: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114448: 0x3e00008  jr          $ra
    ctx->pc = 0x114448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114448u;
        // 0x11444c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114450u;
}

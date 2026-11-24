#include <cstdio>
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

// Function: sub_002AF2A0
// Address: 0x2af2a0 - 0x2af904
void sub_002AF2A0_0x2af2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF2A0_0x2af2a0");
#endif
    { static uint32_t n=0; ++n; if (n<=5 || (n%600)==0) fprintf(stderr,"[probe e2af2a0] call %u a0=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x2af2e0u: goto label_2af2e0;
        case 0x2af2f0u: goto label_2af2f0;
        case 0x2af300u: goto label_2af300;
        case 0x2af318u: goto label_2af318;
        case 0x2af328u: goto label_2af328;
        case 0x2af340u: goto label_2af340;
        case 0x2af368u: goto label_2af368;
        case 0x2af3a4u: goto label_2af3a4;
        case 0x2af3b0u: goto label_2af3b0;
        case 0x2af3b8u: goto label_2af3b8;
        case 0x2af3c0u: goto label_2af3c0;
        case 0x2af484u: goto label_2af484;
        case 0x2af824u: goto label_2af824;
        case 0x2af834u: goto label_2af834;
        case 0x2af844u: goto label_2af844;
        case 0x2af85cu: goto label_2af85c;
        case 0x2af864u: goto label_2af864;
        case 0x2af8acu: goto label_2af8ac;
        case 0x2af8d8u: goto label_2af8d8;
        case 0x2af8e4u: goto label_2af8e4;
        default: break;
    }

    ctx->pc = 0x2af2a0u;

    // 0x2af2a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2af2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2af2a4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2af2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2af2a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2af2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2af2ac: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2af2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2af2b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2af2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2af2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2af2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2af2bc: 0x3c14008d  lui         $s4, 0x8D
    ctx->pc = 0x2af2bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)141 << 16));
    // 0x2af2c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2af2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2af2c4: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2af2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2af2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2af2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2af2cc: 0x269456e0  addiu       $s4, $s4, 0x56E0
    ctx->pc = 0x2af2ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 22240));
    // 0x2af2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2af2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2af2d4: 0x267357a8  addiu       $s3, $s3, 0x57A8
    ctx->pc = 0x2af2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22440));
    // 0x2af2d8: 0xc04c92c  jal         func_1324B0
    ctx->pc = 0x2AF2D8u;
    SET_GPR_U32(ctx, 31, 0x2AF2E0u);
    ctx->pc = 0x2AF2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF2D8u;
    // 0x2af2dc: 0xaf8089a8  sw          $zero, -0x7658($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324B0u, 0x2AF2D8u, 0x2AF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF2E0u;
label_2af2e0:
    // 0x2af2e0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2af2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2af2e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af2e8: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AF2E8u;
    SET_GPR_U32(ctx, 31, 0x2AF2F0u);
    ctx->pc = 0x2AF2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF2E8u;
    // 0x2af2ec: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AF2E8u, 0x2AF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF2F0u;
label_2af2f0:
    // 0x2af2f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2af2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af2f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2af2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2af2f8: 0xc0abbf0  jal         func_2AEFC0
    ctx->pc = 0x2AF2F8u;
    SET_GPR_U32(ctx, 31, 0x2AF300u);
    ctx->pc = 0x2AF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF2F8u;
    // 0x2af2fc: 0xaf828998  sw          $v0, -0x7668($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936984), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEFC0u, 0x2AF2F8u, 0x2AF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF300u;
label_2af300:
    // 0x2af300: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af304: 0x9022ceaa  lbu         $v0, -0x3156($at)
    ctx->pc = 0x2af304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEAAu));
    // 0x2af308: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2af308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af30c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2af30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2af310: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF310u;
    {
        const bool branch_taken_0x2af310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af310) {
            ctx->pc = 0x2AF340u;
            goto label_2af340;
        }
    }
    ctx->pc = 0x2AF318u;
label_2af318:
    // 0x2af318: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2af318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2af31c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2af31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2af320: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AF320u;
    SET_GPR_U32(ctx, 31, 0x2AF328u);
    ctx->pc = 0x2AF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF320u;
    // 0x2af324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AF320u, 0x2AF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF328u;
label_2af328:
    // 0x2af328: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af32c: 0x9022ceaa  lbu         $v0, -0x3156($at)
    ctx->pc = 0x2af32cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEAAu));
    // 0x2af330: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2af330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af334: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2af334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2af338: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AF338u;
    {
        const bool branch_taken_0x2af338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af338) {
            ctx->pc = 0x2AF318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af318;
        }
    }
    ctx->pc = 0x2AF340u;
label_2af340:
    // 0x2af340: 0x8f8589a8  lw          $a1, -0x7658($gp)
    ctx->pc = 0x2af340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x2af344: 0x2ca1000b  sltiu       $at, $a1, 0xB
    ctx->pc = 0x2af344u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2af348: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AF348u;
    {
        const bool branch_taken_0x2af348 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF348u;
        // 0x2af34c: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af348) {
            ctx->pc = 0x2AF398u;
            goto label_2af398;
        }
    }
    ctx->pc = 0x2AF350u;
    // 0x2af350: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x2af350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x2af354: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2af354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2af358: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF358u;
    {
        const bool branch_taken_0x2af358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF358u;
        // 0x2af35c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af358) {
            ctx->pc = 0x2AF398u;
            goto label_2af398;
        }
    }
    ctx->pc = 0x2AF360u;
    // 0x2af360: 0xc05551c  jal         func_155470
    ctx->pc = 0x2AF360u;
    SET_GPR_U32(ctx, 31, 0x2AF368u);
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x2AF360u, 0x2AF368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF368u;
label_2af368:
    // 0x2af368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2af368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af36c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF36Cu;
    {
        const bool branch_taken_0x2af36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF36Cu;
        // 0x2af370: 0x3c010087  lui         $at, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af36c) {
            ctx->pc = 0x2AF388u;
            goto label_2af388;
        }
    }
    ctx->pc = 0x2AF374u;
    // 0x2af374: 0x9022c638  lbu         $v0, -0x39C8($at)
    ctx->pc = 0x2af374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952504)));
    // 0x2af378: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2af378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2af37c: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x2af37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x2af380: 0xa022c638  sb          $v0, -0x39C8($at)
    ctx->pc = 0x2af380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x86C638u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x86C638u, _value); } while (0);
    // 0x2af384: 0x0  nop
    ctx->pc = 0x2af384u;
    // NOP
label_2af388:
    // 0x2af388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af38c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x2AF38Cu;
    {
        const bool branch_taken_0x2af38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF38Cu;
        // 0x2af390: 0xaf828994  sw          $v0, -0x766C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af38c) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF394u;
    // 0x2af394: 0x0  nop
    ctx->pc = 0x2af394u;
    // NOP
label_2af398:
    // 0x2af398: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2af398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2af39c: 0xc0caa44  jal         func_32A910
    ctx->pc = 0x2AF39Cu;
    SET_GPR_U32(ctx, 31, 0x2AF3A4u);
    ctx->pc = 0x2AF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF39Cu;
    // 0x2af3a0: 0x24845860  addiu       $a0, $a0, 0x5860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A910u, 0x2AF39Cu, 0x2AF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3A4u;
label_2af3a4:
    // 0x2af3a4: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x2af3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2af3a8: 0xc0abc3c  jal         func_2AF0F0
    ctx->pc = 0x2AF3A8u;
    SET_GPR_U32(ctx, 31, 0x2AF3B0u);
    ctx->pc = 0x2AF3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3A8u;
    // 0x2af3ac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0F0u, 0x2AF3A8u, 0x2AF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3B0u;
label_2af3b0:
    // 0x2af3b0: 0xc0abc54  jal         func_2AF150
    ctx->pc = 0x2AF3B0u;
    SET_GPR_U32(ctx, 31, 0x2AF3B8u);
    ctx->pc = 0x2AF3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3B0u;
    // 0x2af3b4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF150u, 0x2AF3B0u, 0x2AF3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3B8u;
label_2af3b8:
    // 0x2af3b8: 0xc0abe44  jal         func_2AF910
    ctx->pc = 0x2AF3B8u;
    SET_GPR_U32(ctx, 31, 0x2AF3C0u);
    ctx->pc = 0x2AF3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3B8u;
    // 0x2af3bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF910u, 0x2AF3B8u, 0x2AF3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3C0u;
label_2af3c0:
    // 0x2af3c0: 0x14400123  bnez        $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x2AF3C0u;
    {
        const bool branch_taken_0x2af3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af3c0) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF3C8u;
    // 0x2af3c8: 0x82620048  lb          $v0, 0x48($s3)
    ctx->pc = 0x2af3c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2af3cc: 0x4400116  bltz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x2AF3CCu;
    {
        const bool branch_taken_0x2af3cc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3CCu;
        // 0x2af3d0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3cc) {
            ctx->pc = 0x2AF828u;
            goto label_2af828;
        }
    }
    ctx->pc = 0x2AF3D4u;
    // 0x2af3d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2af3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af3d8: 0x9024ceaa  lbu         $a0, -0x3156($at)
    ctx->pc = 0x2af3d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954666)));
    // 0x2af3dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af3e0: 0xdc23f238  ld          $v1, -0xDC8($at)
    ctx->pc = 0x2af3e0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x81F238u));
    // 0x2af3e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af3e8: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x2af3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x2af3ec: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2af3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2af3f0: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x2af3f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af3f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2af3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2af3f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AF3F8u;
    {
        const bool branch_taken_0x2af3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3F8u;
        // 0x2af3fc: 0x11883f  dsra32      $s1, $s1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3f8) {
            ctx->pc = 0x2AF458u;
            goto label_2af458;
        }
    }
    ctx->pc = 0x2AF400u;
    // 0x2af400: 0x8f83820c  lw          $v1, -0x7DF4($gp)
    ctx->pc = 0x2af400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935052)));
    // 0x2af404: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2af404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2af408: 0x24424b50  addiu       $v0, $v0, 0x4B50
    ctx->pc = 0x2af408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19280));
    // 0x2af40c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2af40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2af410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af414: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2af414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2af418: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2af418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2af41c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF41Cu;
    {
        const bool branch_taken_0x2af41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af41c) {
            ctx->pc = 0x2AF458u;
            goto label_2af458;
        }
    }
    ctx->pc = 0x2AF424u;
    // 0x2af424: 0x93838980  lbu         $v1, -0x7680($gp)
    ctx->pc = 0x2af424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x2af428: 0x801027  not         $v0, $a0
    ctx->pc = 0x2af428u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x2af42c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2af42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2af430: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2af430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2af434: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF434u;
    {
        const bool branch_taken_0x2af434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af434) {
            ctx->pc = 0x2AF448u;
            goto label_2af448;
        }
    }
    ctx->pc = 0x2AF43Cu;
    // 0x2af43c: 0x2410fff8  addiu       $s0, $zero, -0x8
    ctx->pc = 0x2af43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x2af440: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2af440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2af444: 0x44800a  movz        $s0, $v0, $a0
    ctx->pc = 0x2af444u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2af448:
    // 0x2af448: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF448u;
    {
        const bool branch_taken_0x2af448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF448u;
        // 0x2af44c: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af448) {
            ctx->pc = 0x2AF458u;
            goto label_2af458;
        }
    }
    ctx->pc = 0x2AF450u;
    // 0x2af450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af454: 0xa3828980  sb          $v0, -0x7680($gp)
    ctx->pc = 0x2af454u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936960), (uint8_t)GPR_U32(ctx, 2));
label_2af458:
    // 0x2af458: 0x82630048  lb          $v1, 0x48($s3)
    ctx->pc = 0x2af458u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2af45c: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2af45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2af460: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x2af460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x2af464: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2af464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2af468: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af46c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2af46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2af470: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2af470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2af474: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2af474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af478: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x2af478u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2af47c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2AF47Cu;
    SET_GPR_U32(ctx, 31, 0x2AF484u);
    ctx->pc = 0x2AF480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF47Cu;
    // 0x2af480: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2AF47Cu, 0x2AF484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF484u;
label_2af484:
    // 0x2af484: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2AF484u;
    {
        const bool branch_taken_0x2af484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF484u;
        // 0x2af488: 0x3c0a1000  lui         $t2, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af484) {
            ctx->pc = 0x2AF828u;
            goto label_2af828;
        }
    }
    ctx->pc = 0x2AF48Cu;
    // 0x2af48c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2af48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af490: 0x35430003  ori         $v1, $t2, 0x3
    ctx->pc = 0x2af490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)3);
    // 0x2af494: 0x3c0b5000  lui         $t3, 0x5000
    ctx->pc = 0x2af494u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)20480 << 16));
    // 0x2af498: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2af498u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2af49c: 0xa383c  dsll32      $a3, $t2, 0
    ctx->pc = 0x2af49cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2af4a0: 0x35630003  ori         $v1, $t3, 0x3
    ctx->pc = 0x2af4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)3);
    // 0x2af4a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2af4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2af4a8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2af4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2af4ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2af4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af4b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2af4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af4b4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2af4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2af4b8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2af4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2af4bc: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x2af4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2af4c0: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x2af4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x2af4c4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2af4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2af4c8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2af4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2af4cc: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x2af4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x2af4d0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x2af4d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2af4d4: 0x24090052  addiu       $t1, $zero, 0x52
    ctx->pc = 0x2af4d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2af4d8: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x2af4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x2af4dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af4e0: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x2af4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2af4e4: 0xfcc90008  sd          $t1, 0x8($a2)
    ctx->pc = 0x2af4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 9));
    // 0x2af4e8: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x2af4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x2af4ec: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x2af4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2af4f0: 0x31080020  andi        $t0, $t0, 0x20
    ctx->pc = 0x2af4f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
    // 0x2af4f4: 0x11000046  beqz        $t0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2AF4F4u;
    {
        const bool branch_taken_0x2af4f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4F4u;
        // 0x2af4f8: 0x3568000a  ori         $t0, $t3, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4f4) {
            ctx->pc = 0x2AF610u;
            goto label_2af610;
        }
    }
    ctx->pc = 0x2AF4FCu;
    // 0x2af4fc: 0x354a000a  ori         $t2, $t2, 0xA
    ctx->pc = 0x2af4fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)10);
    // 0x2af500: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2af500u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2af504: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x2af504u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x2af508: 0x350d1000  ori         $t5, $t0, 0x1000
    ctx->pc = 0x2af508u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4096);
    // 0x2af50c: 0x350c0080  ori         $t4, $t0, 0x80
    ctx->pc = 0x2af50cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x2af510: 0xd583c  dsll32      $t3, $t5, 0
    ctx->pc = 0x2af510u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2af514: 0x34088009  ori         $t0, $zero, 0x8009
    ctx->pc = 0x2af514u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x2af518: 0x1ab5825  or          $t3, $t5, $t3
    ctx->pc = 0x2af518u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x2af51c: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x2af51cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2af520: 0xfccb0010  sd          $t3, 0x10($a2)
    ctx->pc = 0x2af520u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 11));
    // 0x2af524: 0x3c073a00  lui         $a3, 0x3A00
    ctx->pc = 0x2af524u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14848 << 16));
    // 0x2af528: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2af528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2af52c: 0x240b004d  addiu       $t3, $zero, 0x4D
    ctx->pc = 0x2af52cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2af530: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x2af530u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x2af534: 0x34e700c0  ori         $a3, $a3, 0xC0
    ctx->pc = 0x2af534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)192);
    // 0x2af538: 0xfcc90008  sd          $t1, 0x8($a2)
    ctx->pc = 0x2af538u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 9));
    // 0x2af53c: 0xe35025  or          $t2, $a3, $v1
    ctx->pc = 0x2af53cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2af540: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x2af540u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x2af544: 0x2409004f  addiu       $t1, $zero, 0x4F
    ctx->pc = 0x2af544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2af548: 0xfcc50018  sd          $a1, 0x18($a2)
    ctx->pc = 0x2af548u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 5));
    // 0x2af54c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x2af54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x2af550: 0xfccc0020  sd          $t4, 0x20($a2)
    ctx->pc = 0x2af550u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 12));
    // 0x2af554: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2af554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af558: 0xfccb0028  sd          $t3, 0x28($a2)
    ctx->pc = 0x2af558u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 11));
    // 0x2af55c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x2af55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x2af560: 0xfcca0030  sd          $t2, 0x30($a2)
    ctx->pc = 0x2af560u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 10));
    // 0x2af564: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2af564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2af568: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2af568u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2af56c: 0xfcc90038  sd          $t1, 0x38($a2)
    ctx->pc = 0x2af56cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 9));
    // 0x2af570: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x2af570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2af574: 0xfcc80040  sd          $t0, 0x40($a2)
    ctx->pc = 0x2af574u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 8));
    // 0x2af578: 0xfcc70048  sd          $a3, 0x48($a2)
    ctx->pc = 0x2af578u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 7));
    // 0x2af57c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2af57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2af580: 0xfcc30050  sd          $v1, 0x50($a2)
    ctx->pc = 0x2af580u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 3));
    // 0x2af584: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x2af584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x2af588: 0xfcc50058  sd          $a1, 0x58($a2)
    ctx->pc = 0x2af588u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 5));
    // 0x2af58c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2af58cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af590: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2af590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2af594: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2af594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2af598: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2af598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2af59c: 0xfcc30060  sd          $v1, 0x60($a2)
    ctx->pc = 0x2af59cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 3));
    // 0x2af5a0: 0x24070306  addiu       $a3, $zero, 0x306
    ctx->pc = 0x2af5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    // 0x2af5a4: 0xfcc50068  sd          $a1, 0x68($a2)
    ctx->pc = 0x2af5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 5));
    // 0x2af5a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2af5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2af5ac: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2af5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af5b0: 0xfcc70070  sd          $a3, 0x70($a2)
    ctx->pc = 0x2af5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 112), GPR_U64(ctx, 7));
    // 0x2af5b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2af5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2af5b8: 0xfcc00078  sd          $zero, 0x78($a2)
    ctx->pc = 0x2af5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 120), GPR_U64(ctx, 0));
    // 0x2af5bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2af5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2af5c0: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x2af5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2af5c4: 0xfcc50080  sd          $a1, 0x80($a2)
    ctx->pc = 0x2af5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 128), GPR_U64(ctx, 5));
    // 0x2af5c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2af5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af5cc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2af5ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af5d0: 0xfcc40088  sd          $a0, 0x88($a2)
    ctx->pc = 0x2af5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 136), GPR_U64(ctx, 4));
    // 0x2af5d4: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x2af5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x2af5d8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2af5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2af5dc: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x2af5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x2af5e0: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x2af5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2af5e4: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x2af5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x2af5e8: 0x70052b89  pcpyld      $a1, $zero, $a1
    ctx->pc = 0x2af5e8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x2af5ec: 0xfcc50090  sd          $a1, 0x90($a2)
    ctx->pc = 0x2af5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 144), GPR_U64(ctx, 5));
    // 0x2af5f0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x2af5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x2af5f4: 0xfcc40098  sd          $a0, 0x98($a2)
    ctx->pc = 0x2af5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 152), GPR_U64(ctx, 4));
    // 0x2af5f8: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x2af5f8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2af5fc: 0xfcc300a0  sd          $v1, 0xA0($a2)
    ctx->pc = 0x2af5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 160), GPR_U64(ctx, 3));
    // 0x2af600: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2af600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2af604: 0xfcc300a8  sd          $v1, 0xA8($a2)
    ctx->pc = 0x2af604u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 168), GPR_U64(ctx, 3));
    // 0x2af608: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AF608u;
    {
        const bool branch_taken_0x2af608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF608u;
        // 0x2af60c: 0x24c600b0  addiu       $a2, $a2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af608) {
            ctx->pc = 0x2AF640u;
            goto label_2af640;
        }
    }
    ctx->pc = 0x2AF610u;
label_2af610:
    // 0x2af610: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2af610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2af614: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2af614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2af618: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2af618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af61c: 0x8f838988  lw          $v1, -0x7678($gp)
    ctx->pc = 0x2af61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936968)));
    // 0x2af620: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x2af620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x2af624: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2af624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af628: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2af628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2af62c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2af62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2af630: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2af630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2af634: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2af634u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2af638: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2af638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2af63c: 0x0  nop
    ctx->pc = 0x2af63cu;
    // NOP
label_2af640:
    // 0x2af640: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x2af640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2af644: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x2af644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2af648: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2af648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2af64c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2af64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2af650: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af654: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2af654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af658: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2af658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2af65c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2af65cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x2af660: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2af660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2af664: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2af664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2af668: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2af668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x2af66c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2af66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2af670: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2AF670u;
    {
        const bool branch_taken_0x2af670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF670u;
        // 0x2af674: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af670) {
            ctx->pc = 0x2AF800u;
            goto label_2af800;
        }
    }
    ctx->pc = 0x2AF678u;
    // 0x2af678: 0x3483000f  ori         $v1, $a0, 0xF
    ctx->pc = 0x2af678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
    // 0x2af67c: 0x26117900  addiu       $s1, $s0, 0x7900
    ctx->pc = 0x2af67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 30976));
    // 0x2af680: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2af680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2af684: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x2af684u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2af688: 0x3485000f  ori         $a1, $a0, 0xF
    ctx->pc = 0x2af688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
    // 0x2af68c: 0x26107fff  addiu       $s0, $s0, 0x7FFF
    ctx->pc = 0x2af68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32767));
    // 0x2af690: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2af690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af694: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x2af694u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x2af698: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2af698u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2af69c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2af69cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2af6a0: 0x3403800e  ori         $v1, $zero, 0x800E
    ctx->pc = 0x2af6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x2af6a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af6a8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2af6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2af6ac: 0x240f004d  addiu       $t7, $zero, 0x4D
    ctx->pc = 0x2af6acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2af6b0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2af6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2af6b4: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x2af6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x2af6b8: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x2af6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x2af6bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2af6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af6c0: 0x8c27f014  lw          $a3, -0xFEC($at)
    ctx->pc = 0x2af6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x2af6c4: 0x3c036402  lui         $v1, 0x6402
    ctx->pc = 0x2af6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25602 << 16));
    // 0x2af6c8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2af6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2af6cc: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x2af6ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2af6d0: 0x647025  or          $t6, $v1, $a0
    ctx->pc = 0x2af6d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2af6d4: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x2af6d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2af6d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2af6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2af6dc: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x2af6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x2af6e0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2af6e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2af6e4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2af6e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2af6e8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x2af6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x2af6ec: 0x240b0015  addiu       $t3, $zero, 0x15
    ctx->pc = 0x2af6ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2af6f0: 0xdce30020  ld          $v1, 0x20($a3)
    ctx->pc = 0x2af6f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2af6f4: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x2af6f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2af6f8: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2af6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x2af6fc: 0x240a003f  addiu       $t2, $zero, 0x3F
    ctx->pc = 0x2af6fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2af700: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x2af700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2af704: 0x24090316  addiu       $t1, $zero, 0x316
    ctx->pc = 0x2af704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x2af708: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x2af708u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2af70c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2af70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2af710: 0x26100701  addiu       $s0, $s0, 0x701
    ctx->pc = 0x2af710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1793));
    // 0x2af714: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af718: 0xfcc30020  sd          $v1, 0x20($a2)
    ctx->pc = 0x2af718u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 3));
    // 0x2af71c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2af71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af720: 0xfccf0028  sd          $t7, 0x28($a2)
    ctx->pc = 0x2af720u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 15));
    // 0x2af724: 0x111c38  dsll        $v1, $s1, 16
    ctx->pc = 0x2af724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << 16);
    // 0x2af728: 0xfcce0030  sd          $t6, 0x30($a2)
    ctx->pc = 0x2af728u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 14));
    // 0x2af72c: 0x10783c  dsll32      $t7, $s0, 0
    ctx->pc = 0x2af72cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2af730: 0xfccd0038  sd          $t5, 0x38($a2)
    ctx->pc = 0x2af730u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 13));
    // 0x2af734: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x2af734u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x2af738: 0xfccc0040  sd          $t4, 0x40($a2)
    ctx->pc = 0x2af738u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 12));
    // 0x2af73c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x2af73cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af740: 0xfccb0048  sd          $t3, 0x48($a2)
    ctx->pc = 0x2af740u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 11));
    // 0x2af744: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x2af744u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2af748: 0xfcc00050  sd          $zero, 0x50($a2)
    ctx->pc = 0x2af748u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 0));
    // 0x2af74c: 0x240c7000  addiu       $t4, $zero, 0x7000
    ctx->pc = 0x2af74cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x2af750: 0xfcca0058  sd          $t2, 0x58($a2)
    ctx->pc = 0x2af750u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 10));
    // 0x2af754: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x2af754u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x2af758: 0xfcc90060  sd          $t1, 0x60($a2)
    ctx->pc = 0x2af758u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 9));
    // 0x2af75c: 0x700c5389  pcpyld      $t2, $zero, $t4
    ctx->pc = 0x2af75cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 12)));
    // 0x2af760: 0xfcc00068  sd          $zero, 0x68($a2)
    ctx->pc = 0x2af760u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 0));
    // 0x2af764: 0x6a5025  or          $t2, $v1, $t2
    ctx->pc = 0x2af764u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x2af768: 0xfcc80070  sd          $t0, 0x70($a2)
    ctx->pc = 0x2af768u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 112), GPR_U64(ctx, 8));
    // 0x2af76c: 0x3c030df9  lui         $v1, 0xDF9
    ctx->pc = 0x2af76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3577 << 16));
    // 0x2af770: 0xfcc70078  sd          $a3, 0x78($a2)
    ctx->pc = 0x2af770u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 120), GPR_U64(ctx, 7));
    // 0x2af774: 0x34681ff9  ori         $t0, $v1, 0x1FF9
    ctx->pc = 0x2af774u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8185);
    // 0x2af778: 0xfcc50080  sd          $a1, 0x80($a2)
    ctx->pc = 0x2af778u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 128), GPR_U64(ctx, 5));
    // 0x2af77c: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x2af77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x2af780: 0xfcc40088  sd          $a0, 0x88($a2)
    ctx->pc = 0x2af780u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 136), GPR_U64(ctx, 4));
    // 0x2af784: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x2af784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x2af788: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x2af788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2af78c: 0xfcca0090  sd          $t2, 0x90($a2)
    ctx->pc = 0x2af78cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 144), GPR_U64(ctx, 10));
    // 0x2af790: 0xfcc90098  sd          $t1, 0x98($a2)
    ctx->pc = 0x2af790u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 152), GPR_U64(ctx, 9));
    // 0x2af794: 0xf7438  dsll        $t6, $t7, 16
    ctx->pc = 0x2af794u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 16);
    // 0x2af798: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x2af798u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2af79c: 0xfcc800a0  sd          $t0, 0xA0($a2)
    ctx->pc = 0x2af79cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 160), GPR_U64(ctx, 8));
    // 0x2af7a0: 0x1c33825  or          $a3, $t6, $v1
    ctx->pc = 0x2af7a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
    // 0x2af7a4: 0xfcc400a8  sd          $a0, 0xA8($a2)
    ctx->pc = 0x2af7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 168), GPR_U64(ctx, 4));
    // 0x2af7a8: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x2af7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x2af7ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2af7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2af7b0: 0xfcc700b0  sd          $a3, 0xB0($a2)
    ctx->pc = 0x2af7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 176), GPR_U64(ctx, 7));
    // 0x2af7b4: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x2af7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x2af7b8: 0xfcc500b8  sd          $a1, 0xB8($a2)
    ctx->pc = 0x2af7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 184), GPR_U64(ctx, 5));
    // 0x2af7bc: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x2af7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2af7c0: 0xfcc300c0  sd          $v1, 0xC0($a2)
    ctx->pc = 0x2af7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 192), GPR_U64(ctx, 3));
    // 0x2af7c4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2af7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2af7c8: 0xfcc400c8  sd          $a0, 0xC8($a2)
    ctx->pc = 0x2af7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 200), GPR_U64(ctx, 4));
    // 0x2af7cc: 0x3463020b  ori         $v1, $v1, 0x20B
    ctx->pc = 0x2af7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)523);
    // 0x2af7d0: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2af7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2af7d4: 0xfcc300d0  sd          $v1, 0xD0($a2)
    ctx->pc = 0x2af7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 208), GPR_U64(ctx, 3));
    // 0x2af7d8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x2af7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2af7dc: 0xfcc300d8  sd          $v1, 0xD8($a2)
    ctx->pc = 0x2af7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 216), GPR_U64(ctx, 3));
    // 0x2af7e0: 0x8c25f014  lw          $a1, -0xFEC($at)
    ctx->pc = 0x2af7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x2af7e4: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x2af7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2af7e8: 0xdca50040  ld          $a1, 0x40($a1)
    ctx->pc = 0x2af7e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2af7ec: 0xfcc500e0  sd          $a1, 0xE0($a2)
    ctx->pc = 0x2af7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 224), GPR_U64(ctx, 5));
    // 0x2af7f0: 0xfcc400e8  sd          $a0, 0xE8($a2)
    ctx->pc = 0x2af7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 232), GPR_U64(ctx, 4));
    // 0x2af7f4: 0xfcc300f0  sd          $v1, 0xF0($a2)
    ctx->pc = 0x2af7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 240), GPR_U64(ctx, 3));
    // 0x2af7f8: 0xfccb00f8  sd          $t3, 0xF8($a2)
    ctx->pc = 0x2af7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 248), GPR_U64(ctx, 11));
    // 0x2af7fc: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x2af7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
label_2af800:
    // 0x2af800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af804: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2af804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2af808: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2af808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2af80c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2af80cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2af810: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x2af810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x2af814: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2af814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2af818: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2af818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af81c: 0xc061c60  jal         func_187180
    ctx->pc = 0x2AF81Cu;
    SET_GPR_U32(ctx, 31, 0x2AF824u);
    ctx->pc = 0x2AF820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF81Cu;
    // 0x2af820: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x2AF81Cu, 0x2AF824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF824u;
label_2af824:
    // 0x2af824: 0x0  nop
    ctx->pc = 0x2af824u;
    // NOP
label_2af828:
    // 0x2af828: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x2af828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x2af82c: 0xc056234  jal         func_1588D0
    ctx->pc = 0x2AF82Cu;
    SET_GPR_U32(ctx, 31, 0x2AF834u);
    ctx->pc = 0x2AF830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF82Cu;
    // 0x2af830: 0x248495a0  addiu       $a0, $a0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588D0u, 0x2AF82Cu, 0x2AF834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF834u;
label_2af834:
    // 0x2af834: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2af834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2af838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af83c: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AF83Cu;
    SET_GPR_U32(ctx, 31, 0x2AF844u);
    ctx->pc = 0x2AF840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF83Cu;
    // 0x2af840: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AF83Cu, 0x2AF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF844u;
label_2af844:
    // 0x2af844: 0x1000febe  b           . + 4 + (-0x142 << 2)
    ctx->pc = 0x2AF844u;
    {
        const bool branch_taken_0x2af844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af844) {
            ctx->pc = 0x2AF340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af340;
        }
    }
    ctx->pc = 0x2AF84Cu;
    // 0x2af84c: 0x0  nop
    ctx->pc = 0x2af84cu;
    // NOP
label_2af850:
    // 0x2af850: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2af850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2af854: 0xc0caa40  jal         func_32A900
    ctx->pc = 0x2AF854u;
    SET_GPR_U32(ctx, 31, 0x2AF85Cu);
    ctx->pc = 0x2AF858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF854u;
    // 0x2af858: 0x24845860  addiu       $a0, $a0, 0x5860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A900u, 0x2AF854u, 0x2AF85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF85Cu;
label_2af85c:
    // 0x2af85c: 0xc0abff8  jal         func_2AFFE0
    ctx->pc = 0x2AF85Cu;
    SET_GPR_U32(ctx, 31, 0x2AF864u);
    ctx->pc = 0x2AF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF85Cu;
    // 0x2af860: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFFE0u, 0x2AF85Cu, 0x2AF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF864u;
label_2af864:
    // 0x2af864: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af868: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x2af868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x2af86c: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x2af86cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2af870: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2af870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2af874: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x2af874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x2af878: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2af878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2af87c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2af87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2af880: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2af880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2af884: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af888: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2af888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2af88c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af890: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x2af890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x2af894: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af898: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2af898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2af89c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2af89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af8a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af8a4: 0xc04c918  jal         func_132460
    ctx->pc = 0x2AF8A4u;
    SET_GPR_U32(ctx, 31, 0x2AF8ACu);
    ctx->pc = 0x2AF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8A4u;
    // 0x2af8a8: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2AF8A4u, 0x2AF8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8ACu;
label_2af8ac:
    // 0x2af8ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af8b0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2af8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2af8b4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2af8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2af8b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2af8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2af8bc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2af8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2af8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8c4: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2af8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2af8c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2af8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af8cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af8d0: 0xc04c934  jal         func_1324D0
    ctx->pc = 0x2AF8D0u;
    SET_GPR_U32(ctx, 31, 0x2AF8D8u);
    ctx->pc = 0x2AF8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8D0u;
    // 0x2af8d4: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324D0u, 0x2AF8D0u, 0x2AF8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8D8u;
label_2af8d8:
    // 0x2af8d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2af8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2af8dc: 0xc04c928  jal         func_1324A0
    ctx->pc = 0x2AF8DCu;
    SET_GPR_U32(ctx, 31, 0x2AF8E4u);
    ctx->pc = 0x2AF8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8DCu;
    // 0x2af8e0: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324A0u, 0x2AF8DCu, 0x2AF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8E4u;
label_2af8e4:
    // 0x2af8e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2af8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af8e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2af8e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af8ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2af8ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af8f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2af8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af8f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2af8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8FCu;
        // 0x2af900: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF904u;
}

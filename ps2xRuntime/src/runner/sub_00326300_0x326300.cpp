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

// Function: sub_00326300
// Address: 0x326300 - 0x32673c
void sub_00326300_0x326300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326300_0x326300");
#endif

    switch (ctx->pc) {
        case 0x326364u: goto label_326364;
        case 0x326398u: goto label_326398;
        case 0x326460u: goto label_326460;
        case 0x32646cu: goto label_32646c;
        case 0x3264acu: goto label_3264ac;
        case 0x3264c0u: goto label_3264c0;
        case 0x3264e8u: goto label_3264e8;
        case 0x3265d8u: goto label_3265d8;
        case 0x326610u: goto label_326610;
        case 0x326618u: goto label_326618;
        case 0x326620u: goto label_326620;
        case 0x326628u: goto label_326628;
        case 0x32668cu: goto label_32668c;
        case 0x326720u: goto label_326720;
        case 0x326728u: goto label_326728;
        default: break;
    }

    ctx->pc = 0x326300u;

    // 0x326300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x326304: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x326308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32630c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x32630cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x326314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x326318: 0x9023ad8e  lbu         $v1, -0x5272($at)
    ctx->pc = 0x326318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946190)));
    // 0x32631c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x32631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x326320: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x326320u;
    {
        const bool branch_taken_0x326320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326320u;
        // 0x326324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326320) {
            ctx->pc = 0x326370u;
            goto label_326370;
        }
    }
    ctx->pc = 0x326328u;
    // 0x326328: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32632c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32632cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x326330: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x326330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x326334: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326334u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326338: 0xa023ad8e  sb          $v1, -0x5272($at)
    ctx->pc = 0x326338u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946190), (uint8_t)GPR_U32(ctx, 3));
    // 0x32633c: 0x2402ffcf  addiu       $v0, $zero, -0x31
    ctx->pc = 0x32633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x326340: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x326340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x326344: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x326344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x326348: 0x9031fe71  lbu         $s1, -0x18F($at)
    ctx->pc = 0x326348u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)FAST_READ8(0x82FE71u));
    // 0x32634c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32634cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326350: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326350u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326354: 0x9023ad8e  lbu         $v1, -0x5272($at)
    ctx->pc = 0x326354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946190)));
    // 0x326358: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x326358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32635c: 0xc05ec78  jal         func_17B1E0
    ctx->pc = 0x32635Cu;
    SET_GPR_U32(ctx, 31, 0x326364u);
    ctx->pc = 0x326360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32635Cu;
    // 0x326360: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1E0u, 0x32635Cu, 0x326364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326364u;
label_326364:
    // 0x326364: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x326364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x326368: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x326368u;
    {
        const bool branch_taken_0x326368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326368u;
        // 0x32636c: 0xa031fe71  sb          $s1, -0x18F($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966897), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326368) {
            ctx->pc = 0x326398u;
            goto label_326398;
        }
    }
    ctx->pc = 0x326370u;
label_326370:
    // 0x326370: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x326370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x326374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x326374u;
    {
        const bool branch_taken_0x326374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326374u;
        // 0x326378: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326374) {
            ctx->pc = 0x326398u;
            goto label_326398;
        }
    }
    ctx->pc = 0x32637Cu;
    // 0x32637c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32637cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x326380: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326380u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326384: 0xa020ad8e  sb          $zero, -0x5272($at)
    ctx->pc = 0x326384u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946190), (uint8_t)GPR_U32(ctx, 0));
    // 0x326388: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x326388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x32638c: 0x9025fe71  lbu         $a1, -0x18F($at)
    ctx->pc = 0x32638cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x82FE71u));
    // 0x326390: 0xc05ec78  jal         func_17B1E0
    ctx->pc = 0x326390u;
    SET_GPR_U32(ctx, 31, 0x326398u);
    ctx->pc = 0x326394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326390u;
    // 0x326394: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1E0u, 0x326390u, 0x326398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326398u;
label_326398:
    // 0x326398: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x326398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x32639c: 0x8c22fe60  lw          $v0, -0x1A0($at)
    ctx->pc = 0x32639cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x82FE60u));
    // 0x3263a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3263a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3263a4: 0x3401ae40  ori         $at, $zero, 0xAE40
    ctx->pc = 0x3263a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44608);
    // 0x3263a8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3263a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3263ac: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x3263acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3263b0: 0x3401ae50  ori         $at, $zero, 0xAE50
    ctx->pc = 0x3263b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44624);
    // 0x3263b4: 0x2013021  addu        $a2, $s0, $at
    ctx->pc = 0x3263b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3263b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3263b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3263bc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3263bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3263c0: 0x7c22ae30  sq          $v0, -0x51D0($at)
    ctx->pc = 0x3263c0u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294946352), GPR_VEC(ctx, 2));
    // 0x3263c4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3263c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3263c8: 0x8c22fe64  lw          $v0, -0x19C($at)
    ctx->pc = 0x3263c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x82FE64u));
    // 0x3263cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3263ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3263d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3263d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3263d4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3263d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3263d8: 0x7c22ae40  sq          $v0, -0x51C0($at)
    ctx->pc = 0x3263d8u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294946368), GPR_VEC(ctx, 2));
    // 0x3263dc: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3263dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3263e0: 0x8c22fe68  lw          $v0, -0x198($at)
    ctx->pc = 0x3263e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x82FE68u));
    // 0x3263e4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3263e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3263e8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3263e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3263ec: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3263ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3263f0: 0x7c22ae50  sq          $v0, -0x51B0($at)
    ctx->pc = 0x3263f0u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294946384), GPR_VEC(ctx, 2));
    // 0x3263f4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3263f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3263f8: 0x8c22feb8  lw          $v0, -0x148($at)
    ctx->pc = 0x3263f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x82FEB8u));
    // 0x3263fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3263fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326400: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326400u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326404: 0xac22ad94  sw          $v0, -0x526C($at)
    ctx->pc = 0x326404u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946196), GPR_U32(ctx, 2));
    // 0x326408: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x326408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x32640c: 0x8022fe73  lb          $v0, -0x18D($at)
    ctx->pc = 0x32640cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x82FE73u));
    // 0x326410: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326414: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326414u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326418: 0xa022ad8f  sb          $v0, -0x5271($at)
    ctx->pc = 0x326418u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946191), (uint8_t)GPR_U32(ctx, 2));
    // 0x32641c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32641cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x326420: 0x9022fe6c  lbu         $v0, -0x194($at)
    ctx->pc = 0x326420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x82FE6Cu));
    // 0x326424: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326428: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326428u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x32642c: 0xa422ada4  sh          $v0, -0x525C($at)
    ctx->pc = 0x32642cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946212), (uint16_t)GPR_U32(ctx, 2));
    // 0x326430: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x326430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x326434: 0x9022ff62  lbu         $v0, -0x9E($at)
    ctx->pc = 0x326434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x82FF62u));
    // 0x326438: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x326438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32643c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32643cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326440: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x326440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x326444: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326444u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x326448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32644c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x32644cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x326450: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326454: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x326454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x326458: 0xc0414d0  jal         func_105340
    ctx->pc = 0x326458u;
    SET_GPR_U32(ctx, 31, 0x326460u);
    ctx->pc = 0x32645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326458u;
    // 0x32645c: 0xfc22adf0  sd          $v0, -0x5210($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946288), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x326458u, 0x326460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326460u;
label_326460:
    // 0x326460: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x326460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x326464: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x326464u;
    SET_GPR_U32(ctx, 31, 0x32646Cu);
    ctx->pc = 0x326468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326464u;
    // 0x326468: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x326464u, 0x32646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32646Cu;
label_32646c:
    // 0x32646c: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x32646cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x326470: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x326470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x326474: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x326474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x326478: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x326478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x32647c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32647cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x326480: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326484: 0x24426c60  addiu       $v0, $v0, 0x6C60
    ctx->pc = 0x326484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27744));
    // 0x326488: 0x24846c40  addiu       $a0, $a0, 0x6C40
    ctx->pc = 0x326488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27712));
    // 0x32648c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32648cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326490: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x326490u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x326494: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326494u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32649c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32649cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3264a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3264a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3264a4: 0xc049590  jal         func_125640
    ctx->pc = 0x3264A4u;
    SET_GPR_U32(ctx, 31, 0x3264ACu);
    ctx->pc = 0x3264A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264A4u;
    // 0x3264a8: 0xa422ad92  sh          $v0, -0x526E($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3264A4u, 0x3264ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264ACu;
label_3264ac:
    // 0x3264ac: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3264acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3264b0: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x3264b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x3264b4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3264b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3264b8: 0x24636c40  addiu       $v1, $v1, 0x6C40
    ctx->pc = 0x3264b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27712));
    // 0x3264bc: 0x0  nop
    ctx->pc = 0x3264bcu;
    // NOP
label_3264c0:
    // 0x3264c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3264c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3264c4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3264c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3264c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3264c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3264cc: 0xa0440027  sb          $a0, 0x27($v0)
    ctx->pc = 0x3264ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 39), (uint8_t)GPR_U32(ctx, 4));
    // 0x3264d0: 0x0  nop
    ctx->pc = 0x3264d0u;
    // NOP
    // 0x3264d4: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3264D4u;
    {
        const bool branch_taken_0x3264d4 = (GPR_S64(ctx, 5) > 0);
        if (branch_taken_0x3264d4) {
            ctx->pc = 0x3264C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3264c0;
        }
    }
    ctx->pc = 0x3264DCu;
    // 0x3264dc: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3264dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3264e0: 0xc054738  jal         func_151CE0
    ctx->pc = 0x3264E0u;
    SET_GPR_U32(ctx, 31, 0x3264E8u);
    ctx->pc = 0x3264E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264E0u;
    // 0x3264e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151CE0u, 0x3264E0u, 0x3264E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264E8u;
label_3264e8:
    // 0x3264e8: 0x9c430004  lwu         $v1, 0x4($v0)
    ctx->pc = 0x3264e8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3264ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3264ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3264f0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3264f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3264f4: 0x9c420000  lwu         $v0, 0x0($v0)
    ctx->pc = 0x3264f4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3264f8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x3264f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x3264fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3264fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x326500: 0xfc22ae18  sd          $v0, -0x51E8($at)
    ctx->pc = 0x326500u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946328), GPR_U64(ctx, 2));
    // 0x326504: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326508: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326508u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x32650c: 0x9024ad8b  lbu         $a0, -0x5275($at)
    ctx->pc = 0x32650cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946187)));
    // 0x326510: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326514: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326514u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326518: 0x9023ada6  lbu         $v1, -0x525A($at)
    ctx->pc = 0x326518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946214)));
    // 0x32651c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x32651cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x326520: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x326520u;
    {
        const bool branch_taken_0x326520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x326524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326520u;
        // 0x326524: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326520) {
            ctx->pc = 0x326548u;
            goto label_326548;
        }
    }
    ctx->pc = 0x326528u;
    // 0x326528: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326528u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x32652c: 0x9022ad8a  lbu         $v0, -0x5276($at)
    ctx->pc = 0x32652cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946186)));
    // 0x326530: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x326530u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326534: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x326534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x326538: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x326538u;
    {
        const bool branch_taken_0x326538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x326538) {
            ctx->pc = 0x326570u;
            goto label_326570;
        }
    }
    ctx->pc = 0x326540u;
    // 0x326540: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x326540u;
    {
        const bool branch_taken_0x326540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326540u;
        // 0x326544: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326540) {
            ctx->pc = 0x326570u;
            goto label_326570;
        }
    }
    ctx->pc = 0x326548u;
label_326548:
    // 0x326548: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x326548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32654c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x32654Cu;
    {
        const bool branch_taken_0x32654c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x326550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32654Cu;
        // 0x326550: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32654c) {
            ctx->pc = 0x326570u;
            goto label_326570;
        }
    }
    ctx->pc = 0x326554u;
    // 0x326554: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326554u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326558: 0x9022ad8a  lbu         $v0, -0x5276($at)
    ctx->pc = 0x326558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946186)));
    // 0x32655c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x32655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326560: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x326560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x326564: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x326564u;
    {
        const bool branch_taken_0x326564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x326564) {
            ctx->pc = 0x326570u;
            goto label_326570;
        }
    }
    ctx->pc = 0x32656Cu;
    // 0x32656c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32656cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_326570:
    // 0x326570: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326574: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326574u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326578: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x326578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x32657c: 0xa024ad8b  sb          $a0, -0x5275($at)
    ctx->pc = 0x32657cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946187), (uint8_t)GPR_U32(ctx, 4));
    // 0x326580: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x326580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x326584: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326588: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x326588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32658c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x32658cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326590: 0x9024ad8b  lbu         $a0, -0x5275($at)
    ctx->pc = 0x326590u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946187)));
    // 0x326594: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326598: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326598u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x32659c: 0x9023ad8c  lbu         $v1, -0x5274($at)
    ctx->pc = 0x32659cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946188)));
    // 0x3265a0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x3265a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3265a4: 0x3401ae60  ori         $at, $zero, 0xAE60
    ctx->pc = 0x3265a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44640);
    // 0x3265a8: 0x2013821  addu        $a3, $s0, $at
    ctx->pc = 0x3265a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3265ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3265acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3265b0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3265b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3265b4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3265b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3265b8: 0xdc26ade8  ld          $a2, -0x5218($at)
    ctx->pc = 0x3265b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 4294946280)));
    // 0x3265bc: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3265bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3265c0: 0x1010  mfhi        $v0
    ctx->pc = 0x3265c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3265c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3265c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3265c8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x3265c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x3265cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3265ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3265d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3265d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3265d4: 0x0  nop
    ctx->pc = 0x3265d4u;
    // NOP
label_3265d8:
    // 0x3265d8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3265d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3265dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3265DCu;
    {
        const bool branch_taken_0x3265dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265DCu;
        // 0x3265e0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265dc) {
            ctx->pc = 0x3265E8u;
            goto label_3265e8;
        }
    }
    ctx->pc = 0x3265E4u;
    // 0x3265e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3265e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3265e8:
    // 0x3265e8: 0xa0e20012  sb          $v0, 0x12($a3)
    ctx->pc = 0x3265e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3265ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3265ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3265f0: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x3265f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x3265f4: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3265F4u;
    {
        const bool branch_taken_0x3265f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3265F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265F4u;
        // 0x3265f8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265f4) {
            ctx->pc = 0x3265D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3265d8;
        }
    }
    ctx->pc = 0x3265FCu;
    // 0x3265fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3265fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326604: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326604u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326608: 0xc0c90a8  jal         func_3242A0
    ctx->pc = 0x326608u;
    SET_GPR_U32(ctx, 31, 0x326610u);
    ctx->pc = 0x32660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326608u;
    // 0x32660c: 0xfc20ae10  sd          $zero, -0x51F0($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946320), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3242A0u, 0x326608u, 0x326610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326610u;
label_326610:
    // 0x326610: 0xc0c9100  jal         func_324400
    ctx->pc = 0x326610u;
    SET_GPR_U32(ctx, 31, 0x326618u);
    ctx->pc = 0x326614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326610u;
    // 0x326614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324400u, 0x326610u, 0x326618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326618u;
label_326618:
    // 0x326618: 0xc0c966c  jal         func_3259B0
    ctx->pc = 0x326618u;
    SET_GPR_U32(ctx, 31, 0x326620u);
    ctx->pc = 0x32661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326618u;
    // 0x32661c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3259B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3259B0u, 0x326618u, 0x326620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326620u;
label_326620:
    // 0x326620: 0xc0c93ec  jal         func_324FB0
    ctx->pc = 0x326620u;
    SET_GPR_U32(ctx, 31, 0x326628u);
    ctx->pc = 0x326624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326620u;
    // 0x326624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324FB0u, 0x326620u, 0x326628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326628u;
label_326628:
    // 0x326628: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32662c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x32662cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326630: 0xdc22ae10  ld          $v0, -0x51F0($at)
    ctx->pc = 0x326630u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294946320)));
    // 0x326634: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x326634u;
    {
        const bool branch_taken_0x326634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326634) {
            ctx->pc = 0x326690u;
            goto label_326690;
        }
    }
    ctx->pc = 0x32663Cu;
    // 0x32663c: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x32663cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x326640: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x326640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x326644: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x326644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x326648: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x326648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x32664c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326650: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x326650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x326654: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x326654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x326658: 0x24a56c40  addiu       $a1, $a1, 0x6C40
    ctx->pc = 0x326658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    // 0x32665c: 0xac226c58  sw          $v0, 0x6C58($at)
    ctx->pc = 0x32665cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27736), GPR_U32(ctx, 2));
    // 0x326660: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326664: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326664u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326668: 0xdc22ae10  ld          $v0, -0x51F0($at)
    ctx->pc = 0x326668u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294946320)));
    // 0x32666c: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x32666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x326670: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x326670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x326674: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x326674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x326678: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x326678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x32667c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326680: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x326680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x326684: 0xc054704  jal         func_151C10
    ctx->pc = 0x326684u;
    SET_GPR_U32(ctx, 31, 0x32668Cu);
    ctx->pc = 0x326688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326684u;
    // 0x326688: 0xac226c5c  sw          $v0, 0x6C5C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C10u, 0x326684u, 0x32668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32668Cu;
label_32668c:
    // 0x32668c: 0x0  nop
    ctx->pc = 0x32668cu;
    // NOP
label_326690:
    // 0x326690: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326694: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x326694u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x326698: 0xdc23ae10  ld          $v1, -0x51F0($at)
    ctx->pc = 0x326698u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294946320)));
    // 0x32669c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32669cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3266a0: 0x601827  not         $v1, $v1
    ctx->pc = 0x3266a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x3266a4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3266a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3266a8: 0xdc22ae08  ld          $v0, -0x51F8($at)
    ctx->pc = 0x3266a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294946312)));
    // 0x3266ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3266acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3266b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3266b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3266b4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3266b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3266b8: 0xfc22ae08  sd          $v0, -0x51F8($at)
    ctx->pc = 0x3266b8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946312), GPR_U64(ctx, 2));
    // 0x3266bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3266bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3266c0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3266c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3266c4: 0xdc22ae08  ld          $v0, -0x51F8($at)
    ctx->pc = 0x3266c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294946312)));
    // 0x3266c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3266C8u;
    {
        const bool branch_taken_0x3266c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3266c8) {
            ctx->pc = 0x326720u;
            goto label_326720;
        }
    }
    ctx->pc = 0x3266D0u;
    // 0x3266d0: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x3266d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x3266d4: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x3266d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x3266d8: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x3266d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x3266dc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3266dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3266e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3266e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3266e4: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x3266e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x3266e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3266e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3266ec: 0x24a56c40  addiu       $a1, $a1, 0x6C40
    ctx->pc = 0x3266ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    // 0x3266f0: 0xac226c48  sw          $v0, 0x6C48($at)
    ctx->pc = 0x3266f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27720), GPR_U32(ctx, 2));
    // 0x3266f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3266f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3266f8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x3266f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x3266fc: 0xdc22ae08  ld          $v0, -0x51F8($at)
    ctx->pc = 0x3266fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294946312)));
    // 0x326700: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x326700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x326704: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x326704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x326708: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x326708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x32670c: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x32670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x326710: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326714: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x326714u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x326718: 0xc054704  jal         func_151C10
    ctx->pc = 0x326718u;
    SET_GPR_U32(ctx, 31, 0x326720u);
    ctx->pc = 0x32671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326718u;
    // 0x32671c: 0xac226c4c  sw          $v0, 0x6C4C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27724), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C10u, 0x326718u, 0x326720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326720u;
label_326720:
    // 0x326720: 0xc054bdc  jal         func_152F70
    ctx->pc = 0x326720u;
    SET_GPR_U32(ctx, 31, 0x326728u);
    ctx->pc = 0x152F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F70u, 0x326720u, 0x326728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326728u;
label_326728:
    // 0x326728: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x326728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32672c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32672cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326734: 0x3e00008  jr          $ra
    ctx->pc = 0x326734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326734u;
        // 0x326738: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32673Cu;
}

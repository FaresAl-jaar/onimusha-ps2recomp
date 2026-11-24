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

// Function: sub_001F2330
// Address: 0x1f2330 - 0x1f2520
void sub_001F2330_0x1f2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2330_0x1f2330");
#endif

    switch (ctx->pc) {
        case 0x1f2370u: goto label_1f2370;
        case 0x1f2384u: goto label_1f2384;
        case 0x1f23b0u: goto label_1f23b0;
        case 0x1f23e8u: goto label_1f23e8;
        case 0x1f240cu: goto label_1f240c;
        case 0x1f244cu: goto label_1f244c;
        case 0x1f2464u: goto label_1f2464;
        case 0x1f24a0u: goto label_1f24a0;
        case 0x1f24b4u: goto label_1f24b4;
        case 0x1f24f8u: goto label_1f24f8;
        default: break;
    }

    ctx->pc = 0x1f2330u;

    // 0x1f2330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f2330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f2334: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f2334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f2338: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f2338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f233c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f2340: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f2340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f2348: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f2348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f234c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f2350: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f2350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2354: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1f2354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1f2358: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f2358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f235c: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x1f235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x1f2360: 0x3405a3e0  ori         $a1, $zero, 0xA3E0
    ctx->pc = 0x1f2360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41952);
    // 0x1f2364: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f2368: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x1F2368u;
    SET_GPR_U32(ctx, 31, 0x1F2370u);
    ctx->pc = 0x1F236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2368u;
    // 0x1f236c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x1F2368u, 0x1F2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2370u;
label_1f2370:
    // 0x1f2370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f2370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f237c: 0xc049590  jal         func_125640
    ctx->pc = 0x1F237Cu;
    SET_GPR_U32(ctx, 31, 0x1F2384u);
    ctx->pc = 0x1F2380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F237Cu;
    // 0x1f2380: 0x3406a3e0  ori         $a2, $zero, 0xA3E0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41952);
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1F237Cu, 0x1F2384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2384u;
label_1f2384:
    // 0x1f2384: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F2384u;
    {
        const bool branch_taken_0x1f2384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2384u;
        // 0x1f2388: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2384) {
            ctx->pc = 0x1F23D0u;
            goto label_1f23d0;
        }
    }
    ctx->pc = 0x1F238Cu;
    // 0x1f238c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f238cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f2390: 0x24427360  addiu       $v0, $v0, 0x7360
    ctx->pc = 0x1f2390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29536));
    // 0x1f2394: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2394u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2398: 0x26040700  addiu       $a0, $s0, 0x700
    ctx->pc = 0x1f2398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
    // 0x1f239c: 0xac22a3dc  sw          $v0, -0x5C24($at)
    ctx->pc = 0x1f239cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943708), GPR_U32(ctx, 2));
    // 0x1f23a0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x1f23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x1f23a4: 0x3401a300  ori         $at, $zero, 0xA300
    ctx->pc = 0x1f23a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41728);
    // 0x1f23a8: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x1f23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x1f23ac: 0x2011021  addu        $v0, $s0, $at
    ctx->pc = 0x1f23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f23b0:
    // 0x1f23b0: 0xac8304d4  sw          $v1, 0x4D4($a0)
    ctx->pc = 0x1f23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 3));
    // 0x1f23b4: 0x248404e0  addiu       $a0, $a0, 0x4E0
    ctx->pc = 0x1f23b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1248));
    // 0x1f23b8: 0x0  nop
    ctx->pc = 0x1f23b8u;
    // NOP
    // 0x1f23bc: 0x0  nop
    ctx->pc = 0x1f23bcu;
    // NOP
    // 0x1f23c0: 0x0  nop
    ctx->pc = 0x1f23c0u;
    // NOP
    // 0x1f23c4: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F23C4u;
    {
        const bool branch_taken_0x1f23c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f23c4) {
            ctx->pc = 0x1F23B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f23b0;
        }
    }
    ctx->pc = 0x1F23CCu;
    // 0x1f23cc: 0x0  nop
    ctx->pc = 0x1f23ccu;
    // NOP
label_1f23d0:
    // 0x1f23d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f23d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f23d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f23d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f23dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23e0: 0xc07c72c  jal         func_1F1CB0
    ctx->pc = 0x1F23E0u;
    SET_GPR_U32(ctx, 31, 0x1F23E8u);
    ctx->pc = 0x1F23E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23E0u;
    // 0x1f23e4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1CB0u, 0x1F23E0u, 0x1F23E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23E8u;
label_1f23e8:
    // 0x1f23e8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1f23e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1f23ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f23ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f23f0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F23F0u;
    {
        const bool branch_taken_0x1f23f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f23f0) {
            ctx->pc = 0x1F24C0u;
            goto label_1f24c0;
        }
    }
    ctx->pc = 0x1F23F8u;
    // 0x1f23f8: 0x938289b4  lbu         $v0, -0x764C($gp)
    ctx->pc = 0x1f23f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x1f23fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F23FCu;
    {
        const bool branch_taken_0x1f23fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f23fc) {
            ctx->pc = 0x1F2410u;
            goto label_1f2410;
        }
    }
    ctx->pc = 0x1F2404u;
    // 0x1f2404: 0xc0acb4c  jal         func_2B2D30
    ctx->pc = 0x1F2404u;
    SET_GPR_U32(ctx, 31, 0x1F240Cu);
    ctx->pc = 0x2B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2D30u, 0x1F2404u, 0x1F240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F240Cu;
label_1f240c:
    // 0x1f240c: 0x0  nop
    ctx->pc = 0x1f240cu;
    // NOP
label_1f2410:
    // 0x1f2410: 0x938289b8  lbu         $v0, -0x7648($gp)
    ctx->pc = 0x1f2410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x1f2414: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F2414u;
    {
        const bool branch_taken_0x1f2414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2414u;
        // 0x1f2418: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2414) {
            ctx->pc = 0x1F24C0u;
            goto label_1f24c0;
        }
    }
    ctx->pc = 0x1F241Cu;
    // 0x1f241c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x1f241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x1f2420: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x1f2420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x1f2424: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f2428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f242c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f242cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2430: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2430u;
    {
        const bool branch_taken_0x1f2430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2430) {
            ctx->pc = 0x1F2468u;
            goto label_1f2468;
        }
    }
    ctx->pc = 0x1F2438u;
    // 0x1f2438: 0x8e252ab4  lw          $a1, 0x2AB4($s1)
    ctx->pc = 0x1f2438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10932)));
    // 0x1f243c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F243Cu;
    {
        const bool branch_taken_0x1f243c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F243Cu;
        // 0x1f2440: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f243c) {
            ctx->pc = 0x1F2450u;
            goto label_1f2450;
        }
    }
    ctx->pc = 0x1F2444u;
    // 0x1f2444: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x1F2444u;
    SET_GPR_U32(ctx, 31, 0x1F244Cu);
    ctx->pc = 0x1F2448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2444u;
    // 0x1f2448: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x1F2444u, 0x1F244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F244Cu;
label_1f244c:
    // 0x1f244c: 0x0  nop
    ctx->pc = 0x1f244cu;
    // NOP
label_1f2450:
    // 0x1f2450: 0x8e252ab8  lw          $a1, 0x2AB8($s1)
    ctx->pc = 0x1f2450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10936)));
    // 0x1f2454: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2454u;
    {
        const bool branch_taken_0x1f2454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2454u;
        // 0x1f2458: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2454) {
            ctx->pc = 0x1F2468u;
            goto label_1f2468;
        }
    }
    ctx->pc = 0x1F245Cu;
    // 0x1f245c: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x1F245Cu;
    SET_GPR_U32(ctx, 31, 0x1F2464u);
    ctx->pc = 0x1F2460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F245Cu;
    // 0x1f2460: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x1F245Cu, 0x1F2464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2464u;
label_1f2464:
    // 0x1f2464: 0x0  nop
    ctx->pc = 0x1f2464u;
    // NOP
label_1f2468:
    // 0x1f2468: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x1f2468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x1f246c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x1f246cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x1f2470: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x1f2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x1f2474: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1f2474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1f2478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f2478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f247c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2480: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f2480u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2484: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2484u;
    {
        const bool branch_taken_0x1f2484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2484) {
            ctx->pc = 0x1F24B8u;
            goto label_1f24b8;
        }
    }
    ctx->pc = 0x1F248Cu;
    // 0x1f248c: 0x8e252ab4  lw          $a1, 0x2AB4($s1)
    ctx->pc = 0x1f248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10932)));
    // 0x1f2490: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2490u;
    {
        const bool branch_taken_0x1f2490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2490u;
        // 0x1f2494: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2490) {
            ctx->pc = 0x1F24A0u;
            goto label_1f24a0;
        }
    }
    ctx->pc = 0x1F2498u;
    // 0x1f2498: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x1F2498u;
    SET_GPR_U32(ctx, 31, 0x1F24A0u);
    ctx->pc = 0x1F249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2498u;
    // 0x1f249c: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x1F2498u, 0x1F24A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24A0u;
label_1f24a0:
    // 0x1f24a0: 0x8e252ab8  lw          $a1, 0x2AB8($s1)
    ctx->pc = 0x1f24a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10936)));
    // 0x1f24a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F24A4u;
    {
        const bool branch_taken_0x1f24a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24A4u;
        // 0x1f24a8: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24a4) {
            ctx->pc = 0x1F24B8u;
            goto label_1f24b8;
        }
    }
    ctx->pc = 0x1F24ACu;
    // 0x1f24ac: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x1F24ACu;
    SET_GPR_U32(ctx, 31, 0x1F24B4u);
    ctx->pc = 0x1F24B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24ACu;
    // 0x1f24b0: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x1F24ACu, 0x1F24B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24B4u;
label_1f24b4:
    // 0x1f24b4: 0x0  nop
    ctx->pc = 0x1f24b4u;
    // NOP
label_1f24b8:
    // 0x1f24b8: 0xa38089b8  sb          $zero, -0x7648($gp)
    ctx->pc = 0x1f24b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937016), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f24bc: 0x0  nop
    ctx->pc = 0x1f24bcu;
    // NOP
label_1f24c0:
    // 0x1f24c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f24c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f24c4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f24c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f24c8: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f24c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f24cc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1f24ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1f24d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F24D0u;
    {
        const bool branch_taken_0x1f24d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24D0u;
        // 0x1f24d4: 0x3c010083  lui         $at, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24d0) {
            ctx->pc = 0x1F24E8u;
            goto label_1f24e8;
        }
    }
    ctx->pc = 0x1F24D8u;
    // 0x1f24d8: 0x8c22cc34  lw          $v0, -0x33CC($at)
    ctx->pc = 0x1f24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
    // 0x1f24dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f24dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f24e0: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1f24e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x1f24e4: 0xac22cc34  sw          $v0, -0x33CC($at)
    ctx->pc = 0x1f24e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CC34u, _value); } while (0);
label_1f24e8:
    // 0x1f24e8: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1f24e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1f24ec: 0x248414c0  addiu       $a0, $a0, 0x14C0
    ctx->pc = 0x1f24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
    // 0x1f24f0: 0xc07cc04  jal         func_1F3010
    ctx->pc = 0x1F24F0u;
    SET_GPR_U32(ctx, 31, 0x1F24F8u);
    ctx->pc = 0x1F24F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24F0u;
    // 0x1f24f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3010u, 0x1F24F0u, 0x1F24F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24F8u;
label_1f24f8:
    // 0x1f24f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f24f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1f24fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f24fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2500: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f2500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2504: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f2504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f2508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f250c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f250cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2518: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2518u;
        // 0x1f251c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2520u;
}

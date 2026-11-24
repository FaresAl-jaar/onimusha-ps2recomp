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

// Function: sub_002694B0
// Address: 0x2694b0 - 0x269674
void sub_002694B0_0x2694b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002694B0_0x2694b0");
#endif

    switch (ctx->pc) {
        case 0x26956cu: goto label_26956c;
        case 0x26958cu: goto label_26958c;
        case 0x2695b0u: goto label_2695b0;
        case 0x2695d0u: goto label_2695d0;
        case 0x2695f0u: goto label_2695f0;
        case 0x269610u: goto label_269610;
        case 0x269628u: goto label_269628;
        case 0x269644u: goto label_269644;
        case 0x269664u: goto label_269664;
        default: break;
    }

    ctx->pc = 0x2694b0u;

    // 0x2694b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2694b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2694b4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2694b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2694b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2694b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2694bc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2694bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2694c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2694c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2694c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2694c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2694c8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2694c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2694cc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2694ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2694d0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2694d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2694d4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2694d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2694d8: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x2694d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x2694dc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2694dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2694e0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2694e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2694e4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2694e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2694e8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2694e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2694ec: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2694ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2694f0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2694f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2694f4: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x2694f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x2694f8: 0x94860024  lhu         $a2, 0x24($a0)
    ctx->pc = 0x2694f8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2694fc: 0x10c30054  beq         $a2, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2694FCu;
    {
        const bool branch_taken_0x2694fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2694fc) {
            ctx->pc = 0x269650u;
            goto label_269650;
        }
    }
    ctx->pc = 0x269504u;
    // 0x269504: 0x10c0004a  beqz        $a2, . + 4 + (0x4A << 2)
    ctx->pc = 0x269504u;
    {
        const bool branch_taken_0x269504 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x269508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269504u;
        // 0x269508: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269504) {
            ctx->pc = 0x269630u;
            goto label_269630;
        }
    }
    ctx->pc = 0x26950Cu;
    // 0x26950c: 0x10c30042  beq         $a2, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x26950Cu;
    {
        const bool branch_taken_0x26950c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x26950c) {
            ctx->pc = 0x269618u;
            goto label_269618;
        }
    }
    ctx->pc = 0x269514u;
    // 0x269514: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x269514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x269518: 0x10c30037  beq         $a2, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x269518u;
    {
        const bool branch_taken_0x269518 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x26951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269518u;
        // 0x26951c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269518) {
            ctx->pc = 0x2695F8u;
            goto label_2695f8;
        }
    }
    ctx->pc = 0x269520u;
    // 0x269520: 0x10c3002d  beq         $a2, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x269520u;
    {
        const bool branch_taken_0x269520 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x269520) {
            ctx->pc = 0x2695D8u;
            goto label_2695d8;
        }
    }
    ctx->pc = 0x269528u;
    // 0x269528: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x269528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26952c: 0x10c30022  beq         $a2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x26952Cu;
    {
        const bool branch_taken_0x26952c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x269530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26952Cu;
        // 0x269530: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26952c) {
            ctx->pc = 0x2695B8u;
            goto label_2695b8;
        }
    }
    ctx->pc = 0x269534u;
    // 0x269534: 0x10c30018  beq         $a2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x269534u;
    {
        const bool branch_taken_0x269534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x269534) {
            ctx->pc = 0x269598u;
            goto label_269598;
        }
    }
    ctx->pc = 0x26953Cu;
    // 0x26953c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269540: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x269540u;
    {
        const bool branch_taken_0x269540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x269544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269540u;
        // 0x269544: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269540) {
            ctx->pc = 0x269578u;
            goto label_269578;
        }
    }
    ctx->pc = 0x269548u;
    // 0x269548: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x269548u;
    {
        const bool branch_taken_0x269548 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x269548) {
            ctx->pc = 0x269558u;
            goto label_269558;
        }
    }
    ctx->pc = 0x269550u;
    // 0x269550: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x269550u;
    {
        const bool branch_taken_0x269550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269550) {
            ctx->pc = 0x269668u;
            goto label_269668;
        }
    }
    ctx->pc = 0x269558u;
label_269558:
    // 0x269558: 0x84870026  lh          $a3, 0x26($a0)
    ctx->pc = 0x269558u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26955c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26955cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269560: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x269560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269564: 0xc0d78f0  jal         func_35E3C0
    ctx->pc = 0x269564u;
    SET_GPR_U32(ctx, 31, 0x26956Cu);
    ctx->pc = 0x269568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269564u;
    // 0x269568: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E3C0u, 0x269564u, 0x26956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26956Cu;
label_26956c:
    // 0x26956c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x26956Cu;
    {
        const bool branch_taken_0x26956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26956c) {
            ctx->pc = 0x269668u;
            goto label_269668;
        }
    }
    ctx->pc = 0x269574u;
    // 0x269574: 0x0  nop
    ctx->pc = 0x269574u;
    // NOP
label_269578:
    // 0x269578: 0x84870026  lh          $a3, 0x26($a0)
    ctx->pc = 0x269578u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26957c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26957cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269580: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x269580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269584: 0xc0ab48c  jal         func_2AD230
    ctx->pc = 0x269584u;
    SET_GPR_U32(ctx, 31, 0x26958Cu);
    ctx->pc = 0x269588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269584u;
    // 0x269588: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD230u, 0x269584u, 0x26958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26958Cu;
label_26958c:
    // 0x26958c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x26958Cu;
    {
        const bool branch_taken_0x26958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26958c) {
            ctx->pc = 0x269668u;
            goto label_269668;
        }
    }
    ctx->pc = 0x269594u;
    // 0x269594: 0x0  nop
    ctx->pc = 0x269594u;
    // NOP
label_269598:
    // 0x269598: 0x84880026  lh          $t0, 0x26($a0)
    ctx->pc = 0x269598u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26959c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x26959cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2695a0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2695a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2695a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2695a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695a8: 0xc0ab010  jal         func_2AC040
    ctx->pc = 0x2695A8u;
    SET_GPR_U32(ctx, 31, 0x2695B0u);
    ctx->pc = 0x2695ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695A8u;
    // 0x2695ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC040u, 0x2695A8u, 0x2695B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695B0u;
label_2695b0:
    // 0x2695b0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2695B0u;
    {
        const bool branch_taken_0x2695b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2695b0) {
            ctx->pc = 0x269668u;
            goto label_269668;
        }
    }
    ctx->pc = 0x2695B8u;
label_2695b8:
    // 0x2695b8: 0x84880026  lh          $t0, 0x26($a0)
    ctx->pc = 0x2695b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x2695bc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2695bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2695c0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2695c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2695c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2695c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695c8: 0xc0ab010  jal         func_2AC040
    ctx->pc = 0x2695C8u;
    SET_GPR_U32(ctx, 31, 0x2695D0u);
    ctx->pc = 0x2695CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695C8u;
    // 0x2695cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC040u, 0x2695C8u, 0x2695D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695D0u;
label_2695d0:
    // 0x2695d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2695D0u;
    {
        const bool branch_taken_0x2695d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2695d0) {
            ctx->pc = 0x269668u;
            goto label_269668;
        }
    }
    ctx->pc = 0x2695D8u;
label_2695d8:
    // 0x2695d8: 0x84880026  lh          $t0, 0x26($a0)
    ctx->pc = 0x2695d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x2695dc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2695dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2695e0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2695e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2695e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2695e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695e8: 0xc0ab010  jal         func_2AC040
    ctx->pc = 0x2695E8u;
    SET_GPR_U32(ctx, 31, 0x2695F0u);
    ctx->pc = 0x2695ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695E8u;
    // 0x2695ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC040u, 0x2695E8u, 0x2695F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695F0u;
label_2695f0:
    // 0x2695f0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2695F0u;
    {
        const bool branch_taken_0x2695f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2695f0) {
            ctx->pc = 0x269668u;
            goto label_269668;
        }
    }
    ctx->pc = 0x2695F8u;
label_2695f8:
    // 0x2695f8: 0x84880026  lh          $t0, 0x26($a0)
    ctx->pc = 0x2695f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x2695fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2695fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x269600: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x269600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269604: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x269604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269608: 0xc0ab010  jal         func_2AC040
    ctx->pc = 0x269608u;
    SET_GPR_U32(ctx, 31, 0x269610u);
    ctx->pc = 0x26960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269608u;
    // 0x26960c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC040u, 0x269608u, 0x269610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269610u;
label_269610:
    // 0x269610: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x269610u;
    {
        const bool branch_taken_0x269610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269610) {
            ctx->pc = 0x269668u;
            goto label_269668;
        }
    }
    ctx->pc = 0x269618u;
label_269618:
    // 0x269618: 0x84860026  lh          $a2, 0x26($a0)
    ctx->pc = 0x269618u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26961c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269620: 0xc0cf428  jal         func_33D0A0
    ctx->pc = 0x269620u;
    SET_GPR_U32(ctx, 31, 0x269628u);
    ctx->pc = 0x269624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269620u;
    // 0x269624: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0A0u, 0x269620u, 0x269628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269628u;
label_269628:
    // 0x269628: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x269628u;
    {
        const bool branch_taken_0x269628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269628) {
            ctx->pc = 0x269668u;
            goto label_269668;
        }
    }
    ctx->pc = 0x269630u;
label_269630:
    // 0x269630: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x269630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269634: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x269634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x269638: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x269638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26963c: 0xc0ab3fc  jal         func_2ACFF0
    ctx->pc = 0x26963Cu;
    SET_GPR_U32(ctx, 31, 0x269644u);
    ctx->pc = 0x269640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26963Cu;
    // 0x269640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFF0u, 0x26963Cu, 0x269644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269644u;
label_269644:
    // 0x269644: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269644u;
    {
        const bool branch_taken_0x269644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269644) {
            ctx->pc = 0x269668u;
            goto label_269668;
        }
    }
    ctx->pc = 0x26964Cu;
    // 0x26964c: 0x0  nop
    ctx->pc = 0x26964cu;
    // NOP
label_269650:
    // 0x269650: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x269650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269654: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x269654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x269658: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x269658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26965c: 0xc0ab3fc  jal         func_2ACFF0
    ctx->pc = 0x26965Cu;
    SET_GPR_U32(ctx, 31, 0x269664u);
    ctx->pc = 0x269660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26965Cu;
    // 0x269660: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFF0u, 0x26965Cu, 0x269664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269664u;
label_269664:
    // 0x269664: 0x0  nop
    ctx->pc = 0x269664u;
    // NOP
label_269668:
    // 0x269668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26966c: 0x3e00008  jr          $ra
    ctx->pc = 0x26966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26966Cu;
        // 0x269670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26966Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269674u;
}

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

// Function: sub_003F1680
// Address: 0x3f1680 - 0x3f1788
void sub_003F1680_0x3f1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1680_0x3f1680");
#endif

    switch (ctx->pc) {
        case 0x3f1680u: goto label_3f1680;
        case 0x3f1684u: goto label_3f1684;
        case 0x3f1688u: goto label_3f1688;
        case 0x3f168cu: goto label_3f168c;
        case 0x3f1690u: goto label_3f1690;
        case 0x3f1694u: goto label_3f1694;
        case 0x3f1698u: goto label_3f1698;
        case 0x3f169cu: goto label_3f169c;
        case 0x3f16a0u: goto label_3f16a0;
        case 0x3f16a4u: goto label_3f16a4;
        case 0x3f16a8u: goto label_3f16a8;
        case 0x3f16acu: goto label_3f16ac;
        case 0x3f16b0u: goto label_3f16b0;
        case 0x3f16b4u: goto label_3f16b4;
        case 0x3f16b8u: goto label_3f16b8;
        case 0x3f16bcu: goto label_3f16bc;
        case 0x3f16c0u: goto label_3f16c0;
        case 0x3f16c4u: goto label_3f16c4;
        case 0x3f16c8u: goto label_3f16c8;
        case 0x3f16ccu: goto label_3f16cc;
        case 0x3f16d0u: goto label_3f16d0;
        case 0x3f16d4u: goto label_3f16d4;
        case 0x3f16d8u: goto label_3f16d8;
        case 0x3f16dcu: goto label_3f16dc;
        case 0x3f16e0u: goto label_3f16e0;
        case 0x3f16e4u: goto label_3f16e4;
        case 0x3f16e8u: goto label_3f16e8;
        case 0x3f16ecu: goto label_3f16ec;
        case 0x3f16f0u: goto label_3f16f0;
        case 0x3f16f4u: goto label_3f16f4;
        case 0x3f16f8u: goto label_3f16f8;
        case 0x3f16fcu: goto label_3f16fc;
        case 0x3f1700u: goto label_3f1700;
        case 0x3f1704u: goto label_3f1704;
        case 0x3f1708u: goto label_3f1708;
        case 0x3f170cu: goto label_3f170c;
        case 0x3f1710u: goto label_3f1710;
        case 0x3f1714u: goto label_3f1714;
        case 0x3f1718u: goto label_3f1718;
        case 0x3f171cu: goto label_3f171c;
        case 0x3f1720u: goto label_3f1720;
        case 0x3f1724u: goto label_3f1724;
        case 0x3f1728u: goto label_3f1728;
        case 0x3f172cu: goto label_3f172c;
        case 0x3f1730u: goto label_3f1730;
        case 0x3f1734u: goto label_3f1734;
        case 0x3f1738u: goto label_3f1738;
        case 0x3f173cu: goto label_3f173c;
        case 0x3f1740u: goto label_3f1740;
        case 0x3f1744u: goto label_3f1744;
        case 0x3f1748u: goto label_3f1748;
        case 0x3f174cu: goto label_3f174c;
        case 0x3f1750u: goto label_3f1750;
        case 0x3f1754u: goto label_3f1754;
        case 0x3f1758u: goto label_3f1758;
        case 0x3f175cu: goto label_3f175c;
        case 0x3f1760u: goto label_3f1760;
        case 0x3f1764u: goto label_3f1764;
        case 0x3f1768u: goto label_3f1768;
        case 0x3f176cu: goto label_3f176c;
        case 0x3f1770u: goto label_3f1770;
        case 0x3f1774u: goto label_3f1774;
        case 0x3f1778u: goto label_3f1778;
        case 0x3f177cu: goto label_3f177c;
        case 0x3f1780u: goto label_3f1780;
        case 0x3f1784u: goto label_3f1784;
        default: break;
    }

    ctx->pc = 0x3f1680u;

label_3f1680:
    // 0x3f1680: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f1680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3f1684:
    // 0x3f1684: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f1684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f1688:
    // 0x3f1688: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f1688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f168c:
    // 0x3f168c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x3f168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f1690:
    // 0x3f1690: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f1690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f1694:
    // 0x3f1694: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f1694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f1698:
    // 0x3f1698: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3f1698u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f169c:
    // 0x3f169c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f16a0:
    // 0x3f16a0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3f16a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f16a4:
    // 0x3f16a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f16a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f16a8:
    // 0x3f16a8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3f16a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f16ac:
    // 0x3f16ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f16acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f16b0:
    // 0x3f16b0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3f16b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f16b4:
    // 0x3f16b4: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f16b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f16b8:
    // 0x3f16b8: 0x7843c  dsll32      $s0, $a3, 16
    ctx->pc = 0x3f16b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) << (32 + 16));
label_3f16bc:
    // 0x3f16bc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f16c0:
    // 0x3f16c0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3f16c0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_3f16c4:
    // 0x3f16c4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f16c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f16c8:
    // 0x3f16c8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f16cc:
    // 0x3f16cc: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3f16ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3f16d0:
    // 0x3f16d0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f16d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f16d4:
    // 0x3f16d4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3f16d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f16d8:
    // 0x3f16d8: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_3f16dc:
    if (ctx->pc == 0x3F16DCu) {
        ctx->pc = 0x3F16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F16D8u;
        // 0x3f16dc: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F16E0u;
        goto label_3f16e0;
    }
    ctx->pc = 0x3F16D8u;
    {
        const bool branch_taken_0x3f16d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F16D8u;
        // 0x3f16dc: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f16d8) {
            ctx->pc = 0x3F16F4u;
            goto label_3f16f4;
        }
    }
    ctx->pc = 0x3F16E0u;
label_3f16e0:
    // 0x3f16e0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3f16e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_3f16e4:
    // 0x3f16e4: 0xc0e3680  jal         func_38DA00
label_3f16e8:
    if (ctx->pc == 0x3F16E8u) {
        ctx->pc = 0x3F16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F16E4u;
        // 0x3f16e8: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F16ECu;
        goto label_3f16ec;
    }
    ctx->pc = 0x3F16E4u;
    SET_GPR_U32(ctx, 31, 0x3F16ECu);
    ctx->pc = 0x3F16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F16E4u;
    // 0x3f16e8: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA00u, 0x3F16E4u, 0x3F16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F16ECu;
label_3f16ec:
    // 0x3f16ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f16f0:
    if (ctx->pc == 0x3F16F0u) {
        ctx->pc = 0x3F16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F16ECu;
        // 0x3f16f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F16F4u;
        goto label_3f16f4;
    }
    ctx->pc = 0x3F16ECu;
    {
        const bool branch_taken_0x3f16ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F16ECu;
        // 0x3f16f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f16ec) {
            ctx->pc = 0x3F170Cu;
            goto label_3f170c;
        }
    }
    ctx->pc = 0x3F16F4u;
label_3f16f4:
    // 0x3f16f4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x3f16f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_3f16f8:
    // 0x3f16f8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3f16f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_3f16fc:
    // 0x3f16fc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f16fcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3f1700:
    // 0x3f1700: 0xc0e3684  jal         func_38DA10
label_3f1704:
    if (ctx->pc == 0x3F1704u) {
        ctx->pc = 0x3F1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1700u;
        // 0x3f1704: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1708u;
        goto label_3f1708;
    }
    ctx->pc = 0x3F1700u;
    SET_GPR_U32(ctx, 31, 0x3F1708u);
    ctx->pc = 0x3F1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1700u;
    // 0x3f1704: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA10u, 0x3F1700u, 0x3F1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1708u;
label_3f1708:
    // 0x3f1708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f170c:
    // 0x3f170c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_3f1710:
    if (ctx->pc == 0x3F1710u) {
        ctx->pc = 0x3F1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F170Cu;
        // 0x3f1710: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1714u;
        goto label_3f1714;
    }
    ctx->pc = 0x3F170Cu;
    {
        const bool branch_taken_0x3f170c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F170Cu;
        // 0x3f1710: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f170c) {
            ctx->pc = 0x3F1768u;
            goto label_3f1768;
        }
    }
    ctx->pc = 0x3F1714u;
label_3f1714:
    // 0x3f1714: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3f1714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f1718:
    // 0x3f1718: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x3f1718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
label_3f171c:
    // 0x3f171c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x3f171cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3f1720:
    // 0x3f1720: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3f1720u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3f1724:
    // 0x3f1724: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x3f1724u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_3f1728:
    // 0x3f1728: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f1728u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_3f172c:
    // 0x3f172c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_3f1730:
    if (ctx->pc == 0x3F1730u) {
        ctx->pc = 0x3F1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F172Cu;
        // 0x3f1730: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1734u;
        goto label_3f1734;
    }
    ctx->pc = 0x3F172Cu;
    {
        const bool branch_taken_0x3f172c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F172Cu;
        // 0x3f1730: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f172c) {
            ctx->pc = 0x3F1768u;
            goto label_3f1768;
        }
    }
    ctx->pc = 0x3F1734u;
label_3f1734:
    // 0x3f1734: 0x2a010006  slti        $at, $s0, 0x6
    ctx->pc = 0x3f1734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_3f1738:
    // 0x3f1738: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_3f173c:
    if (ctx->pc == 0x3F173Cu) {
        ctx->pc = 0x3F1740u;
        goto label_3f1740;
    }
    ctx->pc = 0x3F1738u;
    {
        const bool branch_taken_0x3f1738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1738) {
            ctx->pc = 0x3F1768u;
            goto label_3f1768;
        }
    }
    ctx->pc = 0x3F1740u;
label_3f1740:
    // 0x3f1740: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3f1740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3f1744:
    // 0x3f1744: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3f1744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f1748:
    // 0x3f1748: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3f1748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3f174c:
    // 0x3f174c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3f174cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f1750:
    // 0x3f1750: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x3f1750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3f1754:
    // 0x3f1754: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3f1754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f1758:
    // 0x3f1758: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3f1758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f175c:
    // 0x3f175c: 0x40f809  jalr        $v0
label_3f1760:
    if (ctx->pc == 0x3F1760u) {
        ctx->pc = 0x3F1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F175Cu;
        // 0x3f1760: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1764u;
        goto label_3f1764;
    }
    ctx->pc = 0x3F175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1764u);
        ctx->pc = 0x3F1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F175Cu;
        // 0x3f1760: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F175Cu, 0x3F1764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1764u;
label_3f1764:
    // 0x3f1764: 0x0  nop
    ctx->pc = 0x3f1764u;
    // NOP
label_3f1768:
    // 0x3f1768: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f1768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f176c:
    // 0x3f176c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f176cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1770:
    // 0x3f1770: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f1770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1774:
    // 0x3f1774: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1778:
    // 0x3f1778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f177c:
    // 0x3f177c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f177cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1780:
    // 0x3f1780: 0x3e00008  jr          $ra
label_3f1784:
    if (ctx->pc == 0x3F1784u) {
        ctx->pc = 0x3F1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1780u;
        // 0x3f1784: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1788u;
        goto label_fallthrough_0x3f1780;
    }
    ctx->pc = 0x3F1780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1780u;
        // 0x3f1784: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f1780:
    ctx->pc = 0x3F1788u;
}

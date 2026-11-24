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

// Function: sub_00372440
// Address: 0x372440 - 0x372734
void sub_00372440_0x372440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372440_0x372440");
#endif

    switch (ctx->pc) {
        case 0x3724d8u: goto label_3724d8;
        case 0x3724e0u: goto label_3724e0;
        case 0x3724e8u: goto label_3724e8;
        case 0x3724f0u: goto label_3724f0;
        case 0x3724f8u: goto label_3724f8;
        case 0x372500u: goto label_372500;
        case 0x372564u: goto label_372564;
        case 0x372574u: goto label_372574;
        case 0x372580u: goto label_372580;
        case 0x3725d0u: goto label_3725d0;
        case 0x3725e0u: goto label_3725e0;
        case 0x37266cu: goto label_37266c;
        case 0x3726c4u: goto label_3726c4;
        case 0x3726d0u: goto label_3726d0;
        case 0x3726fcu: goto label_3726fc;
        case 0x372708u: goto label_372708;
        case 0x372714u: goto label_372714;
        case 0x37271cu: goto label_37271c;
        default: break;
    }

    ctx->pc = 0x372440u;

    // 0x372440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x372440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x372444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x372444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x372448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x372448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37244c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x372450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372454: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x372454u;
    {
        const bool branch_taken_0x372454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x372458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372454u;
        // 0x372458: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372454) {
            ctx->pc = 0x372490u;
            goto label_372490;
        }
    }
    ctx->pc = 0x37245Cu;
    // 0x37245c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x37245cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x372460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372464: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x372464u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x372468: 0xa6240002  sh          $a0, 0x2($s1)
    ctx->pc = 0x372468u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x37246c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x37246cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x372470: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x372470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x372474: 0xa223000d  sb          $v1, 0xD($s1)
    ctx->pc = 0x372474u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x372478: 0xa223000e  sb          $v1, 0xE($s1)
    ctx->pc = 0x372478u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x37247c: 0xa223000f  sb          $v1, 0xF($s1)
    ctx->pc = 0x37247cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x372480: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x372480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x372484: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x372484u;
    {
        const bool branch_taken_0x372484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372484u;
        // 0x372488: 0xa6240012  sh          $a0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372484) {
            ctx->pc = 0x372720u;
            goto label_372720;
        }
    }
    ctx->pc = 0x37248Cu;
    // 0x37248c: 0x0  nop
    ctx->pc = 0x37248cu;
    // NOP
label_372490:
    // 0x372490: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x372490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x372494: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x372494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x372498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37249c: 0xa225001c  sb          $a1, 0x1C($s1)
    ctx->pc = 0x37249cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x3724a0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3724a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3724a4: 0xa223001d  sb          $v1, 0x1D($s1)
    ctx->pc = 0x3724a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x3724a8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x3724a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x3724ac: 0xa220001e  sb          $zero, 0x1E($s1)
    ctx->pc = 0x3724acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x3724b0: 0xa220001f  sb          $zero, 0x1F($s1)
    ctx->pc = 0x3724b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x3724b4: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x3724b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x3724b8: 0xa2200021  sb          $zero, 0x21($s1)
    ctx->pc = 0x3724b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x3724bc: 0xa2200022  sb          $zero, 0x22($s1)
    ctx->pc = 0x3724bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x3724c0: 0xa2200023  sb          $zero, 0x23($s1)
    ctx->pc = 0x3724c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x3724c4: 0xa2200024  sb          $zero, 0x24($s1)
    ctx->pc = 0x3724c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x3724c8: 0xa2200025  sb          $zero, 0x25($s1)
    ctx->pc = 0x3724c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x3724cc: 0xa2220026  sb          $v0, 0x26($s1)
    ctx->pc = 0x3724ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x3724d0: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x3724D0u;
    SET_GPR_U32(ctx, 31, 0x3724D8u);
    ctx->pc = 0x3724D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3724D0u;
    // 0x3724d4: 0xa2200027  sb          $zero, 0x27($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x3724D0u, 0x3724D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3724D8u;
label_3724d8:
    // 0x3724d8: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x3724D8u;
    SET_GPR_U32(ctx, 31, 0x3724E0u);
    ctx->pc = 0x3724DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3724D8u;
    // 0x3724dc: 0x26240028  addiu       $a0, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x3724D8u, 0x3724E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3724E0u;
label_3724e0:
    // 0x3724e0: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x3724E0u;
    SET_GPR_U32(ctx, 31, 0x3724E8u);
    ctx->pc = 0x3724E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3724E0u;
    // 0x3724e4: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x3724E0u, 0x3724E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3724E8u;
label_3724e8:
    // 0x3724e8: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x3724E8u;
    SET_GPR_U32(ctx, 31, 0x3724F0u);
    ctx->pc = 0x3724ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3724E8u;
    // 0x3724ec: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x3724E8u, 0x3724F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3724F0u;
label_3724f0:
    // 0x3724f0: 0xc0ed6c4  jal         func_3B5B10
    ctx->pc = 0x3724F0u;
    SET_GPR_U32(ctx, 31, 0x3724F8u);
    ctx->pc = 0x3B5B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B10u, 0x3724F0u, 0x3724F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3724F8u;
label_3724f8:
    // 0x3724f8: 0xc0dc7e8  jal         func_371FA0
    ctx->pc = 0x3724F8u;
    SET_GPR_U32(ctx, 31, 0x372500u);
    ctx->pc = 0x3724FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3724F8u;
    // 0x3724fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FA0u, 0x3724F8u, 0x372500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372500u;
label_372500:
    // 0x372500: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x372500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x372504: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x372504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x372508: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x372508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
    // 0x37250c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x37250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x372510: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x372510u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372518: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x372518u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37251c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x37251cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372520: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x372520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x372524: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x372524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x372528: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x372528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x37252c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x37252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372530: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x372530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372534: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x372534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372538: 0xe6220090  swc1        $f2, 0x90($s1)
    ctx->pc = 0x372538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x37253c: 0xe6210094  swc1        $f1, 0x94($s1)
    ctx->pc = 0x37253cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x372540: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x372540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x372544: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x372544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372548: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x372548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37254c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x37254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372550: 0xe622009c  swc1        $f2, 0x9C($s1)
    ctx->pc = 0x372550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x372554: 0xe62100a0  swc1        $f1, 0xA0($s1)
    ctx->pc = 0x372554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x372558: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x372558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x37255c: 0xc0dbf80  jal         func_36FE00
    ctx->pc = 0x37255Cu;
    SET_GPR_U32(ctx, 31, 0x372564u);
    ctx->pc = 0x372560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37255Cu;
    // 0x372560: 0xa2220114  sb          $v0, 0x114($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 276), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE00u, 0x37255Cu, 0x372564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372564u;
label_372564:
    // 0x372564: 0x2624011c  addiu       $a0, $s1, 0x11C
    ctx->pc = 0x372564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
    // 0x372568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x372568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37256c: 0xc049590  jal         func_125640
    ctx->pc = 0x37256Cu;
    SET_GPR_U32(ctx, 31, 0x372574u);
    ctx->pc = 0x372570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37256Cu;
    // 0x372570: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x37256Cu, 0x372574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372574u;
label_372574:
    // 0x372574: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x372574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x372578: 0xc0ceb78  jal         func_33ADE0
    ctx->pc = 0x372578u;
    SET_GPR_U32(ctx, 31, 0x372580u);
    ctx->pc = 0x37257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372578u;
    // 0x37257c: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADE0u, 0x372578u, 0x372580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372580u;
label_372580:
    // 0x372580: 0xae2001a8  sw          $zero, 0x1A8($s1)
    ctx->pc = 0x372580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 0));
    // 0x372584: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x372584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372588: 0xa62201ac  sh          $v0, 0x1AC($s1)
    ctx->pc = 0x372588u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 428), (uint16_t)GPR_U32(ctx, 2));
    // 0x37258c: 0x9224001c  lbu         $a0, 0x1C($s1)
    ctx->pc = 0x37258cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x372590: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x372590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x372594: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x372594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x372598: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x372598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x37259c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3725a0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x3725a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x3725a4: 0x217bc  dsll32      $v0, $v0, 30
    ctx->pc = 0x3725a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 30));
    // 0x3725a8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x3725a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x3725ac: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3725ACu;
    {
        const bool branch_taken_0x3725ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3725B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725ACu;
        // 0x3725b0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3725ac) {
            ctx->pc = 0x372670u;
            goto label_372670;
        }
    }
    ctx->pc = 0x3725B4u;
    // 0x3725b4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3725B4u;
    {
        const bool branch_taken_0x3725b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3725b4) {
            ctx->pc = 0x3725C8u;
            goto label_3725c8;
        }
    }
    ctx->pc = 0x3725BCu;
    // 0x3725bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3725BCu;
    {
        const bool branch_taken_0x3725bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3725C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725BCu;
        // 0x3725c0: 0xa23001bc  sb          $s0, 0x1BC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 444), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3725bc) {
            ctx->pc = 0x3725D8u;
            goto label_3725d8;
        }
    }
    ctx->pc = 0x3725C4u;
    // 0x3725c4: 0x0  nop
    ctx->pc = 0x3725c4u;
    // NOP
label_3725c8:
    // 0x3725c8: 0xc0d8fd4  jal         func_363F50
    ctx->pc = 0x3725C8u;
    SET_GPR_U32(ctx, 31, 0x3725D0u);
    ctx->pc = 0x363F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363F50u, 0x3725C8u, 0x3725D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3725D0u;
label_3725d0:
    // 0x3725d0: 0xa22201bc  sb          $v0, 0x1BC($s1)
    ctx->pc = 0x3725d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 444), (uint8_t)GPR_U32(ctx, 2));
    // 0x3725d4: 0x0  nop
    ctx->pc = 0x3725d4u;
    // NOP
label_3725d8:
    // 0x3725d8: 0xc0dcc3c  jal         func_3730F0
    ctx->pc = 0x3725D8u;
    SET_GPR_U32(ctx, 31, 0x3725E0u);
    ctx->pc = 0x3725DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3725D8u;
    // 0x3725dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730F0u, 0x3725D8u, 0x3725E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3725E0u;
label_3725e0:
    // 0x3725e0: 0xa220032c  sb          $zero, 0x32C($s1)
    ctx->pc = 0x3725e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 812), (uint8_t)GPR_U32(ctx, 0));
    // 0x3725e4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3725e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3725e8: 0xa220032d  sb          $zero, 0x32D($s1)
    ctx->pc = 0x3725e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 813), (uint8_t)GPR_U32(ctx, 0));
    // 0x3725ec: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3725ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3725f0: 0xa220032e  sb          $zero, 0x32E($s1)
    ctx->pc = 0x3725f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 814), (uint8_t)GPR_U32(ctx, 0));
    // 0x3725f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3725f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3725f8: 0xa220032f  sb          $zero, 0x32F($s1)
    ctx->pc = 0x3725f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 815), (uint8_t)GPR_U32(ctx, 0));
    // 0x3725fc: 0x24c6ac50  addiu       $a2, $a2, -0x53B0
    ctx->pc = 0x3725fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945872));
    // 0x372600: 0xa2200330  sb          $zero, 0x330($s1)
    ctx->pc = 0x372600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 816), (uint8_t)GPR_U32(ctx, 0));
    // 0x372604: 0x24a5abd0  addiu       $a1, $a1, -0x5430
    ctx->pc = 0x372604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945744));
    // 0x372608: 0xa2200331  sb          $zero, 0x331($s1)
    ctx->pc = 0x372608u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 817), (uint8_t)GPR_U32(ctx, 0));
    // 0x37260c: 0x2463c7e0  addiu       $v1, $v1, -0x3820
    ctx->pc = 0x37260cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952928));
    // 0x372610: 0xa2200332  sb          $zero, 0x332($s1)
    ctx->pc = 0x372610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 818), (uint8_t)GPR_U32(ctx, 0));
    // 0x372614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x372614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372618: 0xa2200333  sb          $zero, 0x333($s1)
    ctx->pc = 0x372618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 819), (uint8_t)GPR_U32(ctx, 0));
    // 0x37261c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37261cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372620: 0xa2200334  sb          $zero, 0x334($s1)
    ctx->pc = 0x372620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 820), (uint8_t)GPR_U32(ctx, 0));
    // 0x372624: 0xa2200335  sb          $zero, 0x335($s1)
    ctx->pc = 0x372624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 821), (uint8_t)GPR_U32(ctx, 0));
    // 0x372628: 0x82270330  lb          $a3, 0x330($s1)
    ctx->pc = 0x372628u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x37262c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x37262cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x372630: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x372630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x372634: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x372634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x372638: 0xa2260337  sb          $a2, 0x337($s1)
    ctx->pc = 0x372638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 823), (uint8_t)GPR_U32(ctx, 6));
    // 0x37263c: 0x82260331  lb          $a2, 0x331($s1)
    ctx->pc = 0x37263cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 817)));
    // 0x372640: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x372640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x372644: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x372644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x372648: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x372648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37264c: 0xa2250338  sb          $a1, 0x338($s1)
    ctx->pc = 0x37264cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 824), (uint8_t)GPR_U32(ctx, 5));
    // 0x372650: 0x82250332  lb          $a1, 0x332($s1)
    ctx->pc = 0x372650u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 818)));
    // 0x372654: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x372654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x372658: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x372658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37265c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x372660: 0xa2230339  sb          $v1, 0x339($s1)
    ctx->pc = 0x372660u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 825), (uint8_t)GPR_U32(ctx, 3));
    // 0x372664: 0xc0f3524  jal         func_3CD490
    ctx->pc = 0x372664u;
    SET_GPR_U32(ctx, 31, 0x37266Cu);
    ctx->pc = 0x372668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372664u;
    // 0x372668: 0xa2220336  sb          $v0, 0x336($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 822), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD490u, 0x372664u, 0x37266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37266Cu;
label_37266c:
    // 0x37266c: 0x0  nop
    ctx->pc = 0x37266cu;
    // NOP
label_372670:
    // 0x372670: 0x9224001c  lbu         $a0, 0x1C($s1)
    ctx->pc = 0x372670u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x372674: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x372674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x372678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x372678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37267c: 0x2463ace0  addiu       $v1, $v1, -0x5320
    ctx->pc = 0x37267cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946016));
    // 0x372680: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x372680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x372684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x372684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x372688: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x372688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x37268c: 0x31f3c  dsll32      $v1, $v1, 28
    ctx->pc = 0x37268cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 28));
    // 0x372690: 0x31fbe  dsrl32      $v1, $v1, 30
    ctx->pc = 0x372690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 30));
    // 0x372694: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372694u;
    {
        const bool branch_taken_0x372694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372694) {
            ctx->pc = 0x3726A8u;
            goto label_3726a8;
        }
    }
    ctx->pc = 0x37269Cu;
    // 0x37269c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x37269Cu;
    {
        const bool branch_taken_0x37269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37269c) {
            ctx->pc = 0x3726D0u;
            goto label_3726d0;
        }
    }
    ctx->pc = 0x3726A4u;
    // 0x3726a4: 0x0  nop
    ctx->pc = 0x3726a4u;
    // NOP
label_3726a8:
    // 0x3726a8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3726a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3726ac: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3726acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3726b0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3726b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3726b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3726b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3726b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3726b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3726bc: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x3726BCu;
    SET_GPR_U32(ctx, 31, 0x3726C4u);
    ctx->pc = 0x3726C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3726BCu;
    // 0x3726c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x3726BCu, 0x3726C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726C4u;
label_3726c4:
    // 0x3726c4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3726c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3726c8: 0xc0dcc5c  jal         func_373170
    ctx->pc = 0x3726C8u;
    SET_GPR_U32(ctx, 31, 0x3726D0u);
    ctx->pc = 0x3726CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3726C8u;
    // 0x3726cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373170u, 0x3726C8u, 0x3726D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726D0u;
label_3726d0:
    // 0x3726d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3726d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3726d4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3726d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3726d8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3726d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3726dc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3726dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3726e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3726e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3726e4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3726e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3726e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3726e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3726ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3726ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3726f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3726f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3726f4: 0xc095130  jal         func_2544C0
    ctx->pc = 0x3726F4u;
    SET_GPR_U32(ctx, 31, 0x3726FCu);
    ctx->pc = 0x3726F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3726F4u;
    // 0x3726f8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x3726F4u, 0x3726FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726FCu;
label_3726fc:
    // 0x3726fc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3726fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x372700: 0xc0cbe10  jal         func_32F840
    ctx->pc = 0x372700u;
    SET_GPR_U32(ctx, 31, 0x372708u);
    ctx->pc = 0x372704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372700u;
    // 0x372704: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F840u, 0x372700u, 0x372708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372708u;
label_372708:
    // 0x372708: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x372708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x37270c: 0xc0e47c4  jal         func_391F10
    ctx->pc = 0x37270Cu;
    SET_GPR_U32(ctx, 31, 0x372714u);
    ctx->pc = 0x372710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37270Cu;
    // 0x372710: 0x24843090  addiu       $a0, $a0, 0x3090 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391F10u, 0x37270Cu, 0x372714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372714u;
label_372714:
    // 0x372714: 0xc0dca54  jal         func_372950
    ctx->pc = 0x372714u;
    SET_GPR_U32(ctx, 31, 0x37271Cu);
    ctx->pc = 0x372718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372714u;
    // 0x372718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372950u, 0x372714u, 0x37271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37271Cu;
label_37271c:
    // 0x37271c: 0x0  nop
    ctx->pc = 0x37271cu;
    // NOP
label_372720:
    // 0x372720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x372720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37272c: 0x3e00008  jr          $ra
    ctx->pc = 0x37272Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37272Cu;
        // 0x372730: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37272Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372734u;
}

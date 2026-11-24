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

// Function: sub_0025F370
// Address: 0x25f370 - 0x25f4e0
void sub_0025F370_0x25f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F370_0x25f370");
#endif

    switch (ctx->pc) {
        case 0x25f3c4u: goto label_25f3c4;
        case 0x25f3d4u: goto label_25f3d4;
        case 0x25f3e8u: goto label_25f3e8;
        case 0x25f410u: goto label_25f410;
        case 0x25f438u: goto label_25f438;
        case 0x25f448u: goto label_25f448;
        case 0x25f458u: goto label_25f458;
        case 0x25f470u: goto label_25f470;
        case 0x25f488u: goto label_25f488;
        case 0x25f498u: goto label_25f498;
        default: break;
    }

    ctx->pc = 0x25f370u;

    // 0x25f370: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f374: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f378: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25f37c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25f380: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x25f380u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f384: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25f388: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x25f388u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f38c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25f38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25f390: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25f390u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f394: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25f394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25f398: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25f398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f39c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25f39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25f3a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25f3a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f3a8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25f3a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f3b0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x25f3b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3b4: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x25f3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3b8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x25f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x25f3bc: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F3BCu;
    SET_GPR_U32(ctx, 31, 0x25F3C4u);
    ctx->pc = 0x25F3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3BCu;
    // 0x25f3c0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F3BCu, 0x25F3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3C4u;
label_25f3c4:
    // 0x25f3c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F3C4u;
    {
        const bool branch_taken_0x25f3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3C4u;
        // 0x25f3c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3c4) {
            ctx->pc = 0x25F3D8u;
            goto label_25f3d8;
        }
    }
    ctx->pc = 0x25F3CCu;
    // 0x25f3cc: 0xc097a14  jal         func_25E850
    ctx->pc = 0x25F3CCu;
    SET_GPR_U32(ctx, 31, 0x25F3D4u);
    ctx->pc = 0x25F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3CCu;
    // 0x25f3d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E850u, 0x25F3CCu, 0x25F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3D4u;
label_25f3d4:
    // 0x25f3d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f3d8:
    // 0x25f3d8: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x25F3D8u;
    {
        const bool branch_taken_0x25f3d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3D8u;
        // 0x25f3dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3d8) {
            ctx->pc = 0x25F4A8u;
            goto label_25f4a8;
        }
    }
    ctx->pc = 0x25F3E0u;
    // 0x25f3e0: 0xc096c94  jal         func_25B250
    ctx->pc = 0x25F3E0u;
    SET_GPR_U32(ctx, 31, 0x25F3E8u);
    ctx->pc = 0x25F3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3E0u;
    // 0x25f3e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x25F3E0u, 0x25F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3E8u;
label_25f3e8:
    // 0x25f3e8: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x25f3e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x25f3ec: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x25f3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3f0: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x25f3f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x25f3f4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25f3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3f8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x25f3f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25f3fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f404: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x25f404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f408: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x25F408u;
    SET_GPR_U32(ctx, 31, 0x25F410u);
    ctx->pc = 0x25F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F408u;
    // 0x25f40c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x25F408u, 0x25F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F410u;
label_25f410:
    // 0x25f410: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25f410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25f414: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x25f414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x25f418: 0x93a200a8  lbu         $v0, 0xA8($sp)
    ctx->pc = 0x25f418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f41c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25f41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f420: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25f424: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25f424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f428: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x25f428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f42c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x25f42cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25f430: 0xc097384  jal         func_25CE10
    ctx->pc = 0x25F430u;
    SET_GPR_U32(ctx, 31, 0x25F438u);
    ctx->pc = 0x25F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F430u;
    // 0x25f434: 0x24a55c70  addiu       $a1, $a1, 0x5C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x25F430u, 0x25F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F438u;
label_25f438:
    // 0x25f438: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x25f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x25f43c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x25f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25f440: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F440u;
    SET_GPR_U32(ctx, 31, 0x25F448u);
    ctx->pc = 0x25F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F440u;
    // 0x25f444: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F440u, 0x25F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F448u;
label_25f448:
    // 0x25f448: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F448u;
    {
        const bool branch_taken_0x25f448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F448u;
        // 0x25f44c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f448) {
            ctx->pc = 0x25F458u;
            goto label_25f458;
        }
    }
    ctx->pc = 0x25F450u;
    // 0x25f450: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x25F450u;
    SET_GPR_U32(ctx, 31, 0x25F458u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x25F450u, 0x25F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F458u;
label_25f458:
    // 0x25f458: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x25f458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x25f45c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x25f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x25f460: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F460u;
    {
        const bool branch_taken_0x25f460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f460) {
            ctx->pc = 0x25F478u;
            goto label_25f478;
        }
    }
    ctx->pc = 0x25F468u;
    // 0x25f468: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F468u;
    SET_GPR_U32(ctx, 31, 0x25F470u);
    ctx->pc = 0x25F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F468u;
    // 0x25f46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F468u, 0x25F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F470u;
label_25f470:
    // 0x25f470: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25F470u;
    {
        const bool branch_taken_0x25f470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F470u;
        // 0x25f474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f470) {
            ctx->pc = 0x25F4B0u;
            goto label_25f4b0;
        }
    }
    ctx->pc = 0x25F478u;
label_25f478:
    // 0x25f478: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25f478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f47c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25f47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f480: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x25F480u;
    SET_GPR_U32(ctx, 31, 0x25F488u);
    ctx->pc = 0x25F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F480u;
    // 0x25f484: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x25F480u, 0x25F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F488u;
label_25f488:
    // 0x25f488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F488u;
    {
        const bool branch_taken_0x25f488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F488u;
        // 0x25f48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f488) {
            ctx->pc = 0x25F4A0u;
            goto label_25f4a0;
        }
    }
    ctx->pc = 0x25F490u;
    // 0x25f490: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F490u;
    SET_GPR_U32(ctx, 31, 0x25F498u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F490u, 0x25F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F498u;
label_25f498:
    // 0x25f498: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F498u;
    {
        const bool branch_taken_0x25f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F498u;
        // 0x25f49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f498) {
            ctx->pc = 0x25F4B0u;
            goto label_25f4b0;
        }
    }
    ctx->pc = 0x25F4A0u;
label_25f4a0:
    // 0x25f4a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F4A0u;
    {
        const bool branch_taken_0x25f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4A0u;
        // 0x25f4a4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4a0) {
            ctx->pc = 0x25F4B0u;
            goto label_25f4b0;
        }
    }
    ctx->pc = 0x25F4A8u;
label_25f4a8:
    // 0x25f4a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4ac: 0x0  nop
    ctx->pc = 0x25f4acu;
    // NOP
label_25f4b0:
    // 0x25f4b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25f4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f4b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25f4b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f4b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25f4b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f4bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25f4bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f4c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25f4c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f4c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25f4c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f4c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f4c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f4cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4D8u;
        // 0x25f4dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F4E0u;
}

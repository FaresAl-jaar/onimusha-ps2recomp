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

// Function: sub_003CE310
// Address: 0x3ce310 - 0x3ce45c
void sub_003CE310_0x3ce310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CE310_0x3ce310");
#endif

    switch (ctx->pc) {
        case 0x3ce370u: goto label_3ce370;
        case 0x3ce38cu: goto label_3ce38c;
        case 0x3ce39cu: goto label_3ce39c;
        case 0x3ce3bcu: goto label_3ce3bc;
        case 0x3ce3fcu: goto label_3ce3fc;
        default: break;
    }

    ctx->pc = 0x3ce310u;

    // 0x3ce310: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3ce310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3ce314: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3ce314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3ce318: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ce318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3ce31c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ce31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3ce320: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3ce320u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ce324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3ce328: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3ce328u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce32c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ce32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3ce330: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ce330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce334: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ce334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ce338: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3ce338u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce33c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ce33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ce340: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3ce340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce344: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3ce344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ce348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ce34c: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3ce34cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3ce350: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3ce350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce354: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ce354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ce358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce35c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ce35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce360: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x3ce360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x3ce364: 0x2508e2a0  addiu       $t0, $t0, -0x1D60
    ctx->pc = 0x3ce364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959776));
    // 0x3ce368: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3CE368u;
    SET_GPR_U32(ctx, 31, 0x3CE370u);
    ctx->pc = 0x3CE36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE368u;
    // 0x3ce36c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3CE368u, 0x3CE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE370u;
label_3ce370:
    // 0x3ce370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ce370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce374: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3CE374u;
    {
        const bool branch_taken_0x3ce374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE374u;
        // 0x3ce378: 0x326700ff  andi        $a3, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce374) {
            ctx->pc = 0x3CE428u;
            goto label_3ce428;
        }
    }
    ctx->pc = 0x3CE37Cu;
    // 0x3ce37c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3ce37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3ce380: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ce380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce384: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x3CE384u;
    SET_GPR_U32(ctx, 31, 0x3CE38Cu);
    ctx->pc = 0x3CE388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE384u;
    // 0x3ce388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x3CE384u, 0x3CE38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE38Cu;
label_3ce38c:
    // 0x3ce38c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3ce38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ce390: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3ce390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3ce394: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3CE394u;
    SET_GPR_U32(ctx, 31, 0x3CE39Cu);
    ctx->pc = 0x3CE398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE394u;
    // 0x3ce398: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3CE394u, 0x3CE39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE39Cu;
label_3ce39c:
    // 0x3ce39c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3ce39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce3a0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3ce3a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce3a4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3ce3a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ce3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce3ac: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3ce3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ce3b0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x3ce3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3ce3b4: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3CE3B4u;
    SET_GPR_U32(ctx, 31, 0x3CE3BCu);
    ctx->pc = 0x3CE3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE3B4u;
    // 0x3ce3b8: 0x27aa0090  addiu       $t2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3CE3B4u, 0x3CE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE3BCu;
label_3ce3bc:
    // 0x3ce3bc: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3ce3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ce3c0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3ce3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ce3c4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x3ce3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ce3c8: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3ce3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ce3cc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ce3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ce3d0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3ce3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3ce3d4: 0x24423040  addiu       $v0, $v0, 0x3040
    ctx->pc = 0x3ce3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12352));
    // 0x3ce3d8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3ce3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ce3dc: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x3ce3dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ce3e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ce3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce3e4: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x3ce3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ce3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ce3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce3ec: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3ce3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ce3f0: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3ce3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ce3f4: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3CE3F4u;
    SET_GPR_U32(ctx, 31, 0x3CE3FCu);
    ctx->pc = 0x3CE3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE3F4u;
    // 0x3ce3f8: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3CE3F4u, 0x3CE3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE3FCu;
label_3ce3fc:
    // 0x3ce3fc: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x3ce3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x3ce400: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ce400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ce404: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x3ce404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x3ce408: 0xa2170568  sb          $s7, 0x568($s0)
    ctx->pc = 0x3ce408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 23));
    // 0x3ce40c: 0xa2110569  sb          $s1, 0x569($s0)
    ctx->pc = 0x3ce40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 17));
    // 0x3ce410: 0xa213056a  sb          $s3, 0x56A($s0)
    ctx->pc = 0x3ce410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1386), (uint8_t)GPR_U32(ctx, 19));
    // 0x3ce414: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3ce414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ce418: 0x7e020550  sq          $v0, 0x550($s0)
    ctx->pc = 0x3ce418u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
    // 0x3ce41c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE41Cu;
    {
        const bool branch_taken_0x3ce41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE41Cu;
        // 0x3ce420: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce41c) {
            ctx->pc = 0x3CE430u;
            goto label_3ce430;
        }
    }
    ctx->pc = 0x3CE424u;
    // 0x3ce424: 0x0  nop
    ctx->pc = 0x3ce424u;
    // NOP
label_3ce428:
    // 0x3ce428: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ce428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce42c: 0x0  nop
    ctx->pc = 0x3ce42cu;
    // NOP
label_3ce430:
    // 0x3ce430: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3ce430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ce434: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ce434u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ce438: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ce438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ce43c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ce43cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ce440: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ce440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ce444: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ce444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ce448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ce448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ce44c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ce44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ce450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ce450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ce454: 0x3e00008  jr          $ra
    ctx->pc = 0x3CE454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE454u;
        // 0x3ce458: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CE45Cu;
}

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

// Function: sub_00308310
// Address: 0x308310 - 0x30845c
void sub_00308310_0x308310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308310_0x308310");
#endif

    switch (ctx->pc) {
        case 0x30835cu: goto label_30835c;
        case 0x308364u: goto label_308364;
        case 0x308378u: goto label_308378;
        case 0x3083b8u: goto label_3083b8;
        case 0x3083f4u: goto label_3083f4;
        case 0x308404u: goto label_308404;
        case 0x308414u: goto label_308414;
        case 0x30842cu: goto label_30842c;
        default: break;
    }

    ctx->pc = 0x308310u;

    // 0x308310: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x308310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x308314: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x308314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x308318: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x308318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30831c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30831cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x308320: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x308320u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x308324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x308328: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x308328u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30832c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x308330: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x308330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308334: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x308334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x308338: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x308338u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30833c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x308340: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x308340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308344: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x308348: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x308348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30834c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30834cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308350: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x308350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x308354: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x308354u;
    SET_GPR_U32(ctx, 31, 0x30835Cu);
    ctx->pc = 0x308358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308354u;
    // 0x308358: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x308354u, 0x30835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30835Cu;
label_30835c:
    // 0x30835c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x30835Cu;
    SET_GPR_U32(ctx, 31, 0x308364u);
    ctx->pc = 0x308360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30835Cu;
    // 0x308360: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x30835Cu, 0x308364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308364u;
label_308364:
    // 0x308364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308368: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x308368u;
    {
        const bool branch_taken_0x308368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308368u;
        // 0x30836c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308368) {
            ctx->pc = 0x308390u;
            goto label_308390;
        }
    }
    ctx->pc = 0x308370u;
    // 0x308370: 0xc096b00  jal         func_25AC00
    ctx->pc = 0x308370u;
    SET_GPR_U32(ctx, 31, 0x308378u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x308370u, 0x308378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308378u;
label_308378:
    // 0x308378: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x308378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x30837c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x30837cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x308380: 0x24638330  addiu       $v1, $v1, -0x7CD0
    ctx->pc = 0x308380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935344));
    // 0x308384: 0x24428310  addiu       $v0, $v0, -0x7CF0
    ctx->pc = 0x308384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935312));
    // 0x308388: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x308388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x30838c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x30838cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_308390:
    // 0x308390: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x308390u;
    {
        const bool branch_taken_0x308390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x308394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308390u;
        // 0x308394: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308390) {
            ctx->pc = 0x308420u;
            goto label_308420;
        }
    }
    ctx->pc = 0x308398u;
    // 0x308398: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x308398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30839c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x30839cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083a0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3083a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083a4: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x3083a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3083a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3083acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3083b0: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x3083B0u;
    SET_GPR_U32(ctx, 31, 0x3083B8u);
    ctx->pc = 0x3083B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083B0u;
    // 0x3083b4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x3083B0u, 0x3083B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083B8u;
label_3083b8:
    // 0x3083b8: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x3083b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3083bc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3083bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3083c0: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x3083c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
    // 0x3083c4: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x3083c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x3083c8: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x3083c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x3083cc: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x3083ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x3083d0: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x3083d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x3083d4: 0xa6020080  sh          $v0, 0x80($s0)
    ctx->pc = 0x3083d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x3083d8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3083d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x3083dc: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3083dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x3083e0: 0xa21500a8  sb          $s5, 0xA8($s0)
    ctx->pc = 0x3083e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 21));
    // 0x3083e4: 0x938582b4  lbu         $a1, -0x7D4C($gp)
    ctx->pc = 0x3083e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x3083e8: 0x938682b5  lbu         $a2, -0x7D4B($gp)
    ctx->pc = 0x3083e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935221)));
    // 0x3083ec: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x3083ECu;
    SET_GPR_U32(ctx, 31, 0x3083F4u);
    ctx->pc = 0x3083F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083ECu;
    // 0x3083f0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x3083ECu, 0x3083F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083F4u;
label_3083f4:
    // 0x3083f4: 0x93858ae0  lbu         $a1, -0x7520($gp)
    ctx->pc = 0x3083f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937312)));
    // 0x3083f8: 0x93868ae1  lbu         $a2, -0x751F($gp)
    ctx->pc = 0x3083f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937313)));
    // 0x3083fc: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x3083FCu;
    SET_GPR_U32(ctx, 31, 0x308404u);
    ctx->pc = 0x308400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083FCu;
    // 0x308400: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x3083FCu, 0x308404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308404u;
label_308404:
    // 0x308404: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x308404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x308408: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x308408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x30840c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x30840Cu;
    SET_GPR_U32(ctx, 31, 0x308414u);
    ctx->pc = 0x308410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30840Cu;
    // 0x308410: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x30840Cu, 0x308414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308414u;
label_308414:
    // 0x308414: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x308414u;
    {
        const bool branch_taken_0x308414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308414u;
        // 0x308418: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308414) {
            ctx->pc = 0x308430u;
            goto label_308430;
        }
    }
    ctx->pc = 0x30841Cu;
    // 0x30841c: 0x0  nop
    ctx->pc = 0x30841cu;
    // NOP
label_308420:
    // 0x308420: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x308420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x308424: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x308424u;
    SET_GPR_U32(ctx, 31, 0x30842Cu);
    ctx->pc = 0x308428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308424u;
    // 0x308428: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x308424u, 0x30842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30842Cu;
label_30842c:
    // 0x30842c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30842cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308430:
    // 0x308430: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x308430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x308434: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x308434u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x308438: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x308438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30843c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30843cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308440: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x308440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x308444: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x308444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x308448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30844c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30844cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308454: 0x3e00008  jr          $ra
    ctx->pc = 0x308454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308454u;
        // 0x308458: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30845Cu;
}

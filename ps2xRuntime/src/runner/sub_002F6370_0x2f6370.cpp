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

// Function: sub_002F6370
// Address: 0x2f6370 - 0x2f64b4
void sub_002F6370_0x2f6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6370_0x2f6370");
#endif

    switch (ctx->pc) {
        case 0x2f6394u: goto label_2f6394;
        case 0x2f63a8u: goto label_2f63a8;
        case 0x2f63dcu: goto label_2f63dc;
        case 0x2f63fcu: goto label_2f63fc;
        case 0x2f641cu: goto label_2f641c;
        case 0x2f643cu: goto label_2f643c;
        case 0x2f645cu: goto label_2f645c;
        case 0x2f647cu: goto label_2f647c;
        case 0x2f6494u: goto label_2f6494;
        case 0x2f64a0u: goto label_2f64a0;
        default: break;
    }

    ctx->pc = 0x2f6370u;

    // 0x2f6370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f637c: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f637cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6380: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6380u;
    {
        const bool branch_taken_0x2f6380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6380u;
        // 0x2f6384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6380) {
            ctx->pc = 0x2F63A0u;
            goto label_2f63a0;
        }
    }
    ctx->pc = 0x2F6388u;
    // 0x2f6388: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2f6388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f638c: 0xc09ca34  jal         func_2728D0
    ctx->pc = 0x2F638Cu;
    SET_GPR_U32(ctx, 31, 0x2F6394u);
    ctx->pc = 0x2F6390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F638Cu;
    // 0x2f6390: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2728D0u, 0x2F638Cu, 0x2F6394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6394u;
label_2f6394:
    // 0x2f6394: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f6394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f639c: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f639cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
label_2f63a0:
    // 0x2f63a0: 0xc09ca3c  jal         func_2728F0
    ctx->pc = 0x2F63A0u;
    SET_GPR_U32(ctx, 31, 0x2F63A8u);
    ctx->pc = 0x2728F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2728F0u, 0x2F63A0u, 0x2F63A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63A8u;
label_2f63a8:
    // 0x2f63a8: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x2f63a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f63ac: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F63ACu;
    {
        const bool branch_taken_0x2f63ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63ACu;
        // 0x2f63b0: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63ac) {
            ctx->pc = 0x2F64A0u;
            goto label_2f64a0;
        }
    }
    ctx->pc = 0x2F63B4u;
    // 0x2f63b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f63b8: 0x2463c710  addiu       $v1, $v1, -0x38F0
    ctx->pc = 0x2f63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952720));
    // 0x2f63bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f63c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f63c4: 0x400008  jr          $v0
    ctx->pc = 0x2F63C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F63D0u: goto label_2f63d0;
            case 0x2F63E8u: goto label_2f63e8;
            case 0x2F6408u: goto label_2f6408;
            case 0x2F6428u: goto label_2f6428;
            case 0x2F6448u: goto label_2f6448;
            case 0x2F6468u: goto label_2f6468;
            case 0x2F6488u: goto label_2f6488;
            case 0x2F64A0u: goto label_2f64a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F63C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F63CCu;
    // 0x2f63cc: 0x0  nop
    ctx->pc = 0x2f63ccu;
    // NOP
label_2f63d0:
    // 0x2f63d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f63d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f63d4: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F63D4u;
    SET_GPR_U32(ctx, 31, 0x2F63DCu);
    ctx->pc = 0x2F63D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F63D4u;
    // 0x2f63d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F63D4u, 0x2F63DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63DCu;
label_2f63dc:
    // 0x2f63dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2F63DCu;
    {
        const bool branch_taken_0x2f63dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f63dc) {
            ctx->pc = 0x2F64A0u;
            goto label_2f64a0;
        }
    }
    ctx->pc = 0x2F63E4u;
    // 0x2f63e4: 0x0  nop
    ctx->pc = 0x2f63e4u;
    // NOP
label_2f63e8:
    // 0x2f63e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f63e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f63ec: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2f63ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f63f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f63f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f63f4: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F63F4u;
    SET_GPR_U32(ctx, 31, 0x2F63FCu);
    ctx->pc = 0x2F63F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F63F4u;
    // 0x2f63f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F63F4u, 0x2F63FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63FCu;
label_2f63fc:
    // 0x2f63fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F63FCu;
    {
        const bool branch_taken_0x2f63fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f63fc) {
            ctx->pc = 0x2F64A0u;
            goto label_2f64a0;
        }
    }
    ctx->pc = 0x2F6404u;
    // 0x2f6404: 0x0  nop
    ctx->pc = 0x2f6404u;
    // NOP
label_2f6408:
    // 0x2f6408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f640c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f640cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f6410: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2f6410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f6414: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6414u;
    SET_GPR_U32(ctx, 31, 0x2F641Cu);
    ctx->pc = 0x2F6418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6414u;
    // 0x2f6418: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6414u, 0x2F641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F641Cu;
label_2f641c:
    // 0x2f641c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F641Cu;
    {
        const bool branch_taken_0x2f641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f641c) {
            ctx->pc = 0x2F64A0u;
            goto label_2f64a0;
        }
    }
    ctx->pc = 0x2F6424u;
    // 0x2f6424: 0x0  nop
    ctx->pc = 0x2f6424u;
    // NOP
label_2f6428:
    // 0x2f6428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f642c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2f642cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f6430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6434: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6434u;
    SET_GPR_U32(ctx, 31, 0x2F643Cu);
    ctx->pc = 0x2F6438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6434u;
    // 0x2f6438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6434u, 0x2F643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F643Cu;
label_2f643c:
    // 0x2f643c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F643Cu;
    {
        const bool branch_taken_0x2f643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f643c) {
            ctx->pc = 0x2F64A0u;
            goto label_2f64a0;
        }
    }
    ctx->pc = 0x2F6444u;
    // 0x2f6444: 0x0  nop
    ctx->pc = 0x2f6444u;
    // NOP
label_2f6448:
    // 0x2f6448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f644c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f6450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6454: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6454u;
    SET_GPR_U32(ctx, 31, 0x2F645Cu);
    ctx->pc = 0x2F6458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6454u;
    // 0x2f6458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6454u, 0x2F645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F645Cu;
label_2f645c:
    // 0x2f645c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F645Cu;
    {
        const bool branch_taken_0x2f645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f645c) {
            ctx->pc = 0x2F64A0u;
            goto label_2f64a0;
        }
    }
    ctx->pc = 0x2F6464u;
    // 0x2f6464: 0x0  nop
    ctx->pc = 0x2f6464u;
    // NOP
label_2f6468:
    // 0x2f6468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f646c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2f646cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6470: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f6470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6474: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6474u;
    SET_GPR_U32(ctx, 31, 0x2F647Cu);
    ctx->pc = 0x2F6478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6474u;
    // 0x2f6478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6474u, 0x2F647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F647Cu;
label_2f647c:
    // 0x2f647c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F647Cu;
    {
        const bool branch_taken_0x2f647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f647c) {
            ctx->pc = 0x2F64A0u;
            goto label_2f64a0;
        }
    }
    ctx->pc = 0x2F6484u;
    // 0x2f6484: 0x0  nop
    ctx->pc = 0x2f6484u;
    // NOP
label_2f6488:
    // 0x2f6488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f648c: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F648Cu;
    SET_GPR_U32(ctx, 31, 0x2F6494u);
    ctx->pc = 0x2F6490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F648Cu;
    // 0x2f6490: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F648Cu, 0x2F6494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6494u;
label_2f6494:
    // 0x2f6494: 0x3404fffc  ori         $a0, $zero, 0xFFFC
    ctx->pc = 0x2f6494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x2f6498: 0xc054048  jal         func_150120
    ctx->pc = 0x2F6498u;
    SET_GPR_U32(ctx, 31, 0x2F64A0u);
    ctx->pc = 0x2F649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6498u;
    // 0x2f649c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x2F6498u, 0x2F64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64A0u;
label_2f64a0:
    // 0x2f64a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f64a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f64a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f64a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f64a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f64a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f64ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F64ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F64B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64ACu;
        // 0x2f64b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F64ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F64B4u;
}

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

// Function: sub_001E6370
// Address: 0x1e6370 - 0x1e6460
void sub_001E6370_0x1e6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6370_0x1e6370");
#endif

    switch (ctx->pc) {
        case 0x1e6370u: goto label_1e6370;
        case 0x1e6374u: goto label_1e6374;
        case 0x1e6378u: goto label_1e6378;
        case 0x1e637cu: goto label_1e637c;
        case 0x1e6380u: goto label_1e6380;
        case 0x1e6384u: goto label_1e6384;
        case 0x1e6388u: goto label_1e6388;
        case 0x1e638cu: goto label_1e638c;
        case 0x1e6390u: goto label_1e6390;
        case 0x1e6394u: goto label_1e6394;
        case 0x1e6398u: goto label_1e6398;
        case 0x1e639cu: goto label_1e639c;
        case 0x1e63a0u: goto label_1e63a0;
        case 0x1e63a4u: goto label_1e63a4;
        case 0x1e63a8u: goto label_1e63a8;
        case 0x1e63acu: goto label_1e63ac;
        case 0x1e63b0u: goto label_1e63b0;
        case 0x1e63b4u: goto label_1e63b4;
        case 0x1e63b8u: goto label_1e63b8;
        case 0x1e63bcu: goto label_1e63bc;
        case 0x1e63c0u: goto label_1e63c0;
        case 0x1e63c4u: goto label_1e63c4;
        case 0x1e63c8u: goto label_1e63c8;
        case 0x1e63ccu: goto label_1e63cc;
        case 0x1e63d0u: goto label_1e63d0;
        case 0x1e63d4u: goto label_1e63d4;
        case 0x1e63d8u: goto label_1e63d8;
        case 0x1e63dcu: goto label_1e63dc;
        case 0x1e63e0u: goto label_1e63e0;
        case 0x1e63e4u: goto label_1e63e4;
        case 0x1e63e8u: goto label_1e63e8;
        case 0x1e63ecu: goto label_1e63ec;
        case 0x1e63f0u: goto label_1e63f0;
        case 0x1e63f4u: goto label_1e63f4;
        case 0x1e63f8u: goto label_1e63f8;
        case 0x1e63fcu: goto label_1e63fc;
        case 0x1e6400u: goto label_1e6400;
        case 0x1e6404u: goto label_1e6404;
        case 0x1e6408u: goto label_1e6408;
        case 0x1e640cu: goto label_1e640c;
        case 0x1e6410u: goto label_1e6410;
        case 0x1e6414u: goto label_1e6414;
        case 0x1e6418u: goto label_1e6418;
        case 0x1e641cu: goto label_1e641c;
        case 0x1e6420u: goto label_1e6420;
        case 0x1e6424u: goto label_1e6424;
        case 0x1e6428u: goto label_1e6428;
        case 0x1e642cu: goto label_1e642c;
        case 0x1e6430u: goto label_1e6430;
        case 0x1e6434u: goto label_1e6434;
        case 0x1e6438u: goto label_1e6438;
        case 0x1e643cu: goto label_1e643c;
        case 0x1e6440u: goto label_1e6440;
        case 0x1e6444u: goto label_1e6444;
        case 0x1e6448u: goto label_1e6448;
        case 0x1e644cu: goto label_1e644c;
        case 0x1e6450u: goto label_1e6450;
        case 0x1e6454u: goto label_1e6454;
        case 0x1e6458u: goto label_1e6458;
        case 0x1e645cu: goto label_1e645c;
        default: break;
    }

    ctx->pc = 0x1e6370u;

label_1e6370:
    // 0x1e6370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6374:
    // 0x1e6374: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e6374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e6378:
    // 0x1e6378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e637c:
    // 0x1e637c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6380:
    // 0x1e6380: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e6380u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6384:
    // 0x1e6384: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e6388:
    if (ctx->pc == 0x1E6388u) {
        ctx->pc = 0x1E6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6384u;
        // 0x1e6388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E638Cu;
        goto label_1e638c;
    }
    ctx->pc = 0x1E6384u;
    {
        const bool branch_taken_0x1e6384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6384u;
        // 0x1e6388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6384) {
            ctx->pc = 0x1E6398u;
            goto label_1e6398;
        }
    }
    ctx->pc = 0x1E638Cu;
label_1e638c:
    // 0x1e638c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1e6390:
    if (ctx->pc == 0x1E6390u) {
        ctx->pc = 0x1E6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E638Cu;
        // 0x1e6390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6394u;
        goto label_1e6394;
    }
    ctx->pc = 0x1E638Cu;
    {
        const bool branch_taken_0x1e638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E638Cu;
        // 0x1e6390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e638c) {
            ctx->pc = 0x1E6450u;
            goto label_1e6450;
        }
    }
    ctx->pc = 0x1E6394u;
label_1e6394:
    // 0x1e6394: 0x0  nop
    ctx->pc = 0x1e6394u;
    // NOP
label_1e6398:
    // 0x1e6398: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e6398u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e639c:
    // 0x1e639c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e63a0:
    // 0x1e63a0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e63a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e63a4:
    // 0x1e63a4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e63a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e63a8:
    // 0x1e63a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e63ac:
    // 0x1e63ac: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e63acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e63b0:
    // 0x1e63b0: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1e63b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1e63b4:
    // 0x1e63b4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e63b8:
    if (ctx->pc == 0x1E63B8u) {
        ctx->pc = 0x1E63BCu;
        goto label_1e63bc;
    }
    ctx->pc = 0x1E63B4u;
    {
        const bool branch_taken_0x1e63b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e63b4) {
            ctx->pc = 0x1E63D8u;
            goto label_1e63d8;
        }
    }
    ctx->pc = 0x1E63BCu;
label_1e63bc:
    // 0x1e63bc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e63bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e63c0:
    // 0x1e63c0: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e63c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e63c4:
    // 0x1e63c4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e63c8:
    if (ctx->pc == 0x1E63C8u) {
        ctx->pc = 0x1E63C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63C4u;
        // 0x1e63c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63CCu;
        goto label_1e63cc;
    }
    ctx->pc = 0x1E63C4u;
    {
        const bool branch_taken_0x1e63c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E63C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63C4u;
        // 0x1e63c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63c4) {
            ctx->pc = 0x1E6400u;
            goto label_1e6400;
        }
    }
    ctx->pc = 0x1E63CCu;
label_1e63cc:
    // 0x1e63cc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e63ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e63d0:
    // 0x1e63d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e63d4:
    if (ctx->pc == 0x1E63D4u) {
        ctx->pc = 0x1E63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63D0u;
        // 0x1e63d4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63D8u;
        goto label_1e63d8;
    }
    ctx->pc = 0x1E63D0u;
    {
        const bool branch_taken_0x1e63d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63D0u;
        // 0x1e63d4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63d0) {
            ctx->pc = 0x1E6400u;
            goto label_1e6400;
        }
    }
    ctx->pc = 0x1E63D8u;
label_1e63d8:
    // 0x1e63d8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e63d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e63dc:
    // 0x1e63dc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e63dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e63e0:
    // 0x1e63e0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e63e4:
    if (ctx->pc == 0x1E63E4u) {
        ctx->pc = 0x1E63E8u;
        goto label_1e63e8;
    }
    ctx->pc = 0x1E63E0u;
    {
        const bool branch_taken_0x1e63e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e63e0) {
            ctx->pc = 0x1E6400u;
            goto label_1e6400;
        }
    }
    ctx->pc = 0x1E63E8u;
label_1e63e8:
    // 0x1e63e8: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e63e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e63ec:
    // 0x1e63ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e63ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e63f0:
    // 0x1e63f0: 0x320f809  jalr        $t9
label_1e63f4:
    if (ctx->pc == 0x1E63F4u) {
        ctx->pc = 0x1E63F8u;
        goto label_1e63f8;
    }
    ctx->pc = 0x1E63F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E63F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E63F0u, 0x1E63F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E63F8u;
label_1e63f8:
    // 0x1e63f8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e63fc:
    if (ctx->pc == 0x1E63FCu) {
        ctx->pc = 0x1E63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63F8u;
        // 0x1e63fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6400u;
        goto label_1e6400;
    }
    ctx->pc = 0x1E63F8u;
    {
        const bool branch_taken_0x1e63f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63F8u;
        // 0x1e63fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63f8) {
            ctx->pc = 0x1E6450u;
            goto label_1e6450;
        }
    }
    ctx->pc = 0x1E6400u;
label_1e6400:
    // 0x1e6400: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e6404:
    // 0x1e6404: 0xc076800  jal         func_1DA000
label_1e6408:
    if (ctx->pc == 0x1E6408u) {
        ctx->pc = 0x1E6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6404u;
        // 0x1e6408: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E640Cu;
        goto label_1e640c;
    }
    ctx->pc = 0x1E6404u;
    SET_GPR_U32(ctx, 31, 0x1E640Cu);
    ctx->pc = 0x1E6408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6404u;
    // 0x1e6408: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E6404u, 0x1E640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E640Cu;
label_1e640c:
    // 0x1e640c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e6410:
    // 0x1e6410: 0xc076800  jal         func_1DA000
label_1e6414:
    if (ctx->pc == 0x1E6414u) {
        ctx->pc = 0x1E6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6410u;
        // 0x1e6414: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6418u;
        goto label_1e6418;
    }
    ctx->pc = 0x1E6410u;
    SET_GPR_U32(ctx, 31, 0x1E6418u);
    ctx->pc = 0x1E6414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6410u;
    // 0x1e6414: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E6410u, 0x1E6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6418u;
label_1e6418:
    // 0x1e6418: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e6418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e641c:
    // 0x1e641c: 0xc076800  jal         func_1DA000
label_1e6420:
    if (ctx->pc == 0x1E6420u) {
        ctx->pc = 0x1E6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E641Cu;
        // 0x1e6420: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6424u;
        goto label_1e6424;
    }
    ctx->pc = 0x1E641Cu;
    SET_GPR_U32(ctx, 31, 0x1E6424u);
    ctx->pc = 0x1E6420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E641Cu;
    // 0x1e6420: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E641Cu, 0x1E6424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6424u;
label_1e6424:
    // 0x1e6424: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1e6424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e6428:
    // 0x1e6428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e642c:
    // 0x1e642c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e6430:
    // 0x1e6430: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1e6430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1e6434:
    // 0x1e6434: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1e6434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e6438:
    // 0x1e6438: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e6438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e643c:
    // 0x1e643c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1e643cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_1e6440:
    // 0x1e6440: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1e6440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e6444:
    // 0x1e6444: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e6444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e6448:
    // 0x1e6448: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1e6448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1e644c:
    // 0x1e644c: 0x0  nop
    ctx->pc = 0x1e644cu;
    // NOP
label_1e6450:
    // 0x1e6450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6454:
    // 0x1e6454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6458:
    // 0x1e6458: 0x3e00008  jr          $ra
label_1e645c:
    if (ctx->pc == 0x1E645Cu) {
        ctx->pc = 0x1E645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6458u;
        // 0x1e645c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6460u;
        goto label_fallthrough_0x1e6458;
    }
    ctx->pc = 0x1E6458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6458u;
        // 0x1e645c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6458:
    ctx->pc = 0x1E6460u;
}

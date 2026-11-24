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

// Function: sub_001EE2D0
// Address: 0x1ee2d0 - 0x1ee3a0
void sub_001EE2D0_0x1ee2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE2D0_0x1ee2d0");
#endif

    switch (ctx->pc) {
        case 0x1ee2d0u: goto label_1ee2d0;
        case 0x1ee2d4u: goto label_1ee2d4;
        case 0x1ee2d8u: goto label_1ee2d8;
        case 0x1ee2dcu: goto label_1ee2dc;
        case 0x1ee2e0u: goto label_1ee2e0;
        case 0x1ee2e4u: goto label_1ee2e4;
        case 0x1ee2e8u: goto label_1ee2e8;
        case 0x1ee2ecu: goto label_1ee2ec;
        case 0x1ee2f0u: goto label_1ee2f0;
        case 0x1ee2f4u: goto label_1ee2f4;
        case 0x1ee2f8u: goto label_1ee2f8;
        case 0x1ee2fcu: goto label_1ee2fc;
        case 0x1ee300u: goto label_1ee300;
        case 0x1ee304u: goto label_1ee304;
        case 0x1ee308u: goto label_1ee308;
        case 0x1ee30cu: goto label_1ee30c;
        case 0x1ee310u: goto label_1ee310;
        case 0x1ee314u: goto label_1ee314;
        case 0x1ee318u: goto label_1ee318;
        case 0x1ee31cu: goto label_1ee31c;
        case 0x1ee320u: goto label_1ee320;
        case 0x1ee324u: goto label_1ee324;
        case 0x1ee328u: goto label_1ee328;
        case 0x1ee32cu: goto label_1ee32c;
        case 0x1ee330u: goto label_1ee330;
        case 0x1ee334u: goto label_1ee334;
        case 0x1ee338u: goto label_1ee338;
        case 0x1ee33cu: goto label_1ee33c;
        case 0x1ee340u: goto label_1ee340;
        case 0x1ee344u: goto label_1ee344;
        case 0x1ee348u: goto label_1ee348;
        case 0x1ee34cu: goto label_1ee34c;
        case 0x1ee350u: goto label_1ee350;
        case 0x1ee354u: goto label_1ee354;
        case 0x1ee358u: goto label_1ee358;
        case 0x1ee35cu: goto label_1ee35c;
        case 0x1ee360u: goto label_1ee360;
        case 0x1ee364u: goto label_1ee364;
        case 0x1ee368u: goto label_1ee368;
        case 0x1ee36cu: goto label_1ee36c;
        case 0x1ee370u: goto label_1ee370;
        case 0x1ee374u: goto label_1ee374;
        case 0x1ee378u: goto label_1ee378;
        case 0x1ee37cu: goto label_1ee37c;
        case 0x1ee380u: goto label_1ee380;
        case 0x1ee384u: goto label_1ee384;
        case 0x1ee388u: goto label_1ee388;
        case 0x1ee38cu: goto label_1ee38c;
        case 0x1ee390u: goto label_1ee390;
        case 0x1ee394u: goto label_1ee394;
        case 0x1ee398u: goto label_1ee398;
        case 0x1ee39cu: goto label_1ee39c;
        default: break;
    }

    ctx->pc = 0x1ee2d0u;

label_1ee2d0:
    // 0x1ee2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ee2d4:
    // 0x1ee2d4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ee2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1ee2d8:
    // 0x1ee2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ee2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ee2dc:
    // 0x1ee2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ee2e0:
    // 0x1ee2e0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ee2e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee2e4:
    // 0x1ee2e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ee2e8:
    if (ctx->pc == 0x1EE2E8u) {
        ctx->pc = 0x1EE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2E4u;
        // 0x1ee2e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2ECu;
        goto label_1ee2ec;
    }
    ctx->pc = 0x1EE2E4u;
    {
        const bool branch_taken_0x1ee2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2E4u;
        // 0x1ee2e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2e4) {
            ctx->pc = 0x1EE2F8u;
            goto label_1ee2f8;
        }
    }
    ctx->pc = 0x1EE2ECu;
label_1ee2ec:
    // 0x1ee2ec: 0x10000028  b           . + 4 + (0x28 << 2)
label_1ee2f0:
    if (ctx->pc == 0x1EE2F0u) {
        ctx->pc = 0x1EE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2ECu;
        // 0x1ee2f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2F4u;
        goto label_1ee2f4;
    }
    ctx->pc = 0x1EE2ECu;
    {
        const bool branch_taken_0x1ee2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2ECu;
        // 0x1ee2f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2ec) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE2F4u;
label_1ee2f4:
    // 0x1ee2f4: 0x0  nop
    ctx->pc = 0x1ee2f4u;
    // NOP
label_1ee2f8:
    // 0x1ee2f8: 0x7a030050  lq          $v1, 0x50($s0)
    ctx->pc = 0x1ee2f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_1ee2fc:
    // 0x1ee2fc: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1ee2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1ee300:
    // 0x1ee300: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1ee300u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1ee304:
    // 0x1ee304: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1ee304u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee308:
    // 0x1ee308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ee308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ee30c:
    // 0x1ee30c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1ee30cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ee310:
    // 0x1ee310: 0x86030032  lh          $v1, 0x32($s0)
    ctx->pc = 0x1ee310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_1ee314:
    // 0x1ee314: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1ee318:
    if (ctx->pc == 0x1EE318u) {
        ctx->pc = 0x1EE31Cu;
        goto label_1ee31c;
    }
    ctx->pc = 0x1EE314u;
    {
        const bool branch_taken_0x1ee314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee314) {
            ctx->pc = 0x1EE338u;
            goto label_1ee338;
        }
    }
    ctx->pc = 0x1EE31Cu;
label_1ee31c:
    // 0x1ee31c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ee31cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee320:
    // 0x1ee320: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1ee320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1ee324:
    // 0x1ee324: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ee328:
    if (ctx->pc == 0x1EE328u) {
        ctx->pc = 0x1EE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE324u;
        // 0x1ee328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE32Cu;
        goto label_1ee32c;
    }
    ctx->pc = 0x1EE324u;
    {
        const bool branch_taken_0x1ee324 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE324u;
        // 0x1ee328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee324) {
            ctx->pc = 0x1EE360u;
            goto label_1ee360;
        }
    }
    ctx->pc = 0x1EE32Cu;
label_1ee32c:
    // 0x1ee32c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1ee32cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ee330:
    // 0x1ee330: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ee334:
    if (ctx->pc == 0x1EE334u) {
        ctx->pc = 0x1EE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE330u;
        // 0x1ee334: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE338u;
        goto label_1ee338;
    }
    ctx->pc = 0x1EE330u;
    {
        const bool branch_taken_0x1ee330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE330u;
        // 0x1ee334: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee330) {
            ctx->pc = 0x1EE360u;
            goto label_1ee360;
        }
    }
    ctx->pc = 0x1EE338u;
label_1ee338:
    // 0x1ee338: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ee338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee33c:
    // 0x1ee33c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ee33cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ee340:
    // 0x1ee340: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1ee344:
    if (ctx->pc == 0x1EE344u) {
        ctx->pc = 0x1EE348u;
        goto label_1ee348;
    }
    ctx->pc = 0x1EE340u;
    {
        const bool branch_taken_0x1ee340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee340) {
            ctx->pc = 0x1EE360u;
            goto label_1ee360;
        }
    }
    ctx->pc = 0x1EE348u;
label_1ee348:
    // 0x1ee348: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ee348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ee34c:
    // 0x1ee34c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ee34cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ee350:
    // 0x1ee350: 0x320f809  jalr        $t9
label_1ee354:
    if (ctx->pc == 0x1EE354u) {
        ctx->pc = 0x1EE358u;
        goto label_1ee358;
    }
    ctx->pc = 0x1EE350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE358u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE350u, 0x1EE358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE358u;
label_1ee358:
    // 0x1ee358: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ee35c:
    if (ctx->pc == 0x1EE35Cu) {
        ctx->pc = 0x1EE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE358u;
        // 0x1ee35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE360u;
        goto label_1ee360;
    }
    ctx->pc = 0x1EE358u;
    {
        const bool branch_taken_0x1ee358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE358u;
        // 0x1ee35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee358) {
            ctx->pc = 0x1EE390u;
            goto label_1ee390;
        }
    }
    ctx->pc = 0x1EE360u;
label_1ee360:
    // 0x1ee360: 0xc0743c0  jal         func_1D0F00
label_1ee364:
    if (ctx->pc == 0x1EE364u) {
        ctx->pc = 0x1EE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE360u;
        // 0x1ee364: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE368u;
        goto label_1ee368;
    }
    ctx->pc = 0x1EE360u;
    SET_GPR_U32(ctx, 31, 0x1EE368u);
    ctx->pc = 0x1EE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE360u;
    // 0x1ee364: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1EE360u, 0x1EE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE368u;
label_1ee368:
    // 0x1ee368: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ee36c:
    if (ctx->pc == 0x1EE36Cu) {
        ctx->pc = 0x1EE370u;
        goto label_1ee370;
    }
    ctx->pc = 0x1EE368u;
    {
        const bool branch_taken_0x1ee368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee368) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE370u;
label_1ee370:
    // 0x1ee370: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1ee370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ee374:
    // 0x1ee374: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ee374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ee378:
    // 0x1ee378: 0x320f809  jalr        $t9
label_1ee37c:
    if (ctx->pc == 0x1EE37Cu) {
        ctx->pc = 0x1EE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE378u;
        // 0x1ee37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE380u;
        goto label_1ee380;
    }
    ctx->pc = 0x1EE378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE380u);
        ctx->pc = 0x1EE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE378u;
        // 0x1ee37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE378u, 0x1EE380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE380u;
label_1ee380:
    // 0x1ee380: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1ee380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1ee384:
    // 0x1ee384: 0xc076800  jal         func_1DA000
label_1ee388:
    if (ctx->pc == 0x1EE388u) {
        ctx->pc = 0x1EE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE384u;
        // 0x1ee388: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE38Cu;
        goto label_1ee38c;
    }
    ctx->pc = 0x1EE384u;
    SET_GPR_U32(ctx, 31, 0x1EE38Cu);
    ctx->pc = 0x1EE388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE384u;
    // 0x1ee388: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EE384u, 0x1EE38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE38Cu;
label_1ee38c:
    // 0x1ee38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee390:
    // 0x1ee390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ee390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee394:
    // 0x1ee394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee398:
    // 0x1ee398: 0x3e00008  jr          $ra
label_1ee39c:
    if (ctx->pc == 0x1EE39Cu) {
        ctx->pc = 0x1EE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE398u;
        // 0x1ee39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE3A0u;
        goto label_fallthrough_0x1ee398;
    }
    ctx->pc = 0x1EE398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE398u;
        // 0x1ee39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee398:
    ctx->pc = 0x1EE3A0u;
}

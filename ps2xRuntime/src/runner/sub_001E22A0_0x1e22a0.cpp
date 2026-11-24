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

// Function: sub_001E22A0
// Address: 0x1e22a0 - 0x1e2368
void sub_001E22A0_0x1e22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E22A0_0x1e22a0");
#endif

    switch (ctx->pc) {
        case 0x1e22a0u: goto label_1e22a0;
        case 0x1e22a4u: goto label_1e22a4;
        case 0x1e22a8u: goto label_1e22a8;
        case 0x1e22acu: goto label_1e22ac;
        case 0x1e22b0u: goto label_1e22b0;
        case 0x1e22b4u: goto label_1e22b4;
        case 0x1e22b8u: goto label_1e22b8;
        case 0x1e22bcu: goto label_1e22bc;
        case 0x1e22c0u: goto label_1e22c0;
        case 0x1e22c4u: goto label_1e22c4;
        case 0x1e22c8u: goto label_1e22c8;
        case 0x1e22ccu: goto label_1e22cc;
        case 0x1e22d0u: goto label_1e22d0;
        case 0x1e22d4u: goto label_1e22d4;
        case 0x1e22d8u: goto label_1e22d8;
        case 0x1e22dcu: goto label_1e22dc;
        case 0x1e22e0u: goto label_1e22e0;
        case 0x1e22e4u: goto label_1e22e4;
        case 0x1e22e8u: goto label_1e22e8;
        case 0x1e22ecu: goto label_1e22ec;
        case 0x1e22f0u: goto label_1e22f0;
        case 0x1e22f4u: goto label_1e22f4;
        case 0x1e22f8u: goto label_1e22f8;
        case 0x1e22fcu: goto label_1e22fc;
        case 0x1e2300u: goto label_1e2300;
        case 0x1e2304u: goto label_1e2304;
        case 0x1e2308u: goto label_1e2308;
        case 0x1e230cu: goto label_1e230c;
        case 0x1e2310u: goto label_1e2310;
        case 0x1e2314u: goto label_1e2314;
        case 0x1e2318u: goto label_1e2318;
        case 0x1e231cu: goto label_1e231c;
        case 0x1e2320u: goto label_1e2320;
        case 0x1e2324u: goto label_1e2324;
        case 0x1e2328u: goto label_1e2328;
        case 0x1e232cu: goto label_1e232c;
        case 0x1e2330u: goto label_1e2330;
        case 0x1e2334u: goto label_1e2334;
        case 0x1e2338u: goto label_1e2338;
        case 0x1e233cu: goto label_1e233c;
        case 0x1e2340u: goto label_1e2340;
        case 0x1e2344u: goto label_1e2344;
        case 0x1e2348u: goto label_1e2348;
        case 0x1e234cu: goto label_1e234c;
        case 0x1e2350u: goto label_1e2350;
        case 0x1e2354u: goto label_1e2354;
        case 0x1e2358u: goto label_1e2358;
        case 0x1e235cu: goto label_1e235c;
        case 0x1e2360u: goto label_1e2360;
        case 0x1e2364u: goto label_1e2364;
        default: break;
    }

    ctx->pc = 0x1e22a0u;

label_1e22a0:
    // 0x1e22a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e22a4:
    // 0x1e22a4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e22a8:
    // 0x1e22a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e22a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e22ac:
    // 0x1e22ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e22acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e22b0:
    // 0x1e22b0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e22b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e22b4:
    // 0x1e22b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e22b8:
    if (ctx->pc == 0x1E22B8u) {
        ctx->pc = 0x1E22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22B4u;
        // 0x1e22b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22BCu;
        goto label_1e22bc;
    }
    ctx->pc = 0x1E22B4u;
    {
        const bool branch_taken_0x1e22b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22B4u;
        // 0x1e22b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22b4) {
            ctx->pc = 0x1E22C8u;
            goto label_1e22c8;
        }
    }
    ctx->pc = 0x1E22BCu;
label_1e22bc:
    // 0x1e22bc: 0x10000026  b           . + 4 + (0x26 << 2)
label_1e22c0:
    if (ctx->pc == 0x1E22C0u) {
        ctx->pc = 0x1E22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22BCu;
        // 0x1e22c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22C4u;
        goto label_1e22c4;
    }
    ctx->pc = 0x1E22BCu;
    {
        const bool branch_taken_0x1e22bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22BCu;
        // 0x1e22c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22bc) {
            ctx->pc = 0x1E2358u;
            goto label_1e2358;
        }
    }
    ctx->pc = 0x1E22C4u;
label_1e22c4:
    // 0x1e22c4: 0x0  nop
    ctx->pc = 0x1e22c4u;
    // NOP
label_1e22c8:
    // 0x1e22c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1e22cc:
    if (ctx->pc == 0x1E22CCu) {
        ctx->pc = 0x1E22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22C8u;
        // 0x1e22cc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22D0u;
        goto label_1e22d0;
    }
    ctx->pc = 0x1E22C8u;
    {
        const bool branch_taken_0x1e22c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22C8u;
        // 0x1e22cc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22c8) {
            ctx->pc = 0x1E22E8u;
            goto label_1e22e8;
        }
    }
    ctx->pc = 0x1E22D0u;
label_1e22d0:
    // 0x1e22d0: 0xc07679c  jal         func_1D9E70
label_1e22d4:
    if (ctx->pc == 0x1E22D4u) {
        ctx->pc = 0x1E22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22D0u;
        // 0x1e22d4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22D8u;
        goto label_1e22d8;
    }
    ctx->pc = 0x1E22D0u;
    SET_GPR_U32(ctx, 31, 0x1E22D8u);
    ctx->pc = 0x1E22D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22D0u;
    // 0x1e22d4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E22D0u, 0x1E22D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22D8u;
label_1e22d8:
    // 0x1e22d8: 0x92040031  lbu         $a0, 0x31($s0)
    ctx->pc = 0x1e22d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
label_1e22dc:
    // 0x1e22dc: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x1e22dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1e22e0:
    // 0x1e22e0: 0xc0bc250  jal         func_2F0940
label_1e22e4:
    if (ctx->pc == 0x1E22E4u) {
        ctx->pc = 0x1E22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22E0u;
        // 0x1e22e4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22E8u;
        goto label_1e22e8;
    }
    ctx->pc = 0x1E22E0u;
    SET_GPR_U32(ctx, 31, 0x1E22E8u);
    ctx->pc = 0x1E22E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22E0u;
    // 0x1e22e4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0940u, 0x1E22E0u, 0x1E22E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22E8u;
label_1e22e8:
    // 0x1e22e8: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x1e22e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_1e22ec:
    // 0x1e22ec: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e22f0:
    // 0x1e22f0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e22f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e22f4:
    // 0x1e22f4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e22f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e22f8:
    // 0x1e22f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e22f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e22fc:
    // 0x1e22fc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e22fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e2300:
    // 0x1e2300: 0x86030032  lh          $v1, 0x32($s0)
    ctx->pc = 0x1e2300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_1e2304:
    // 0x1e2304: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e2308:
    if (ctx->pc == 0x1E2308u) {
        ctx->pc = 0x1E230Cu;
        goto label_1e230c;
    }
    ctx->pc = 0x1E2304u;
    {
        const bool branch_taken_0x1e2304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2304) {
            ctx->pc = 0x1E2328u;
            goto label_1e2328;
        }
    }
    ctx->pc = 0x1E230Cu;
label_1e230c:
    // 0x1e230c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e230cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2310:
    // 0x1e2310: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e2310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e2314:
    // 0x1e2314: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e2318:
    if (ctx->pc == 0x1E2318u) {
        ctx->pc = 0x1E2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2314u;
        // 0x1e2318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E231Cu;
        goto label_1e231c;
    }
    ctx->pc = 0x1E2314u;
    {
        const bool branch_taken_0x1e2314 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2314u;
        // 0x1e2318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2314) {
            ctx->pc = 0x1E2350u;
            goto label_1e2350;
        }
    }
    ctx->pc = 0x1E231Cu;
label_1e231c:
    // 0x1e231c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e231cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e2320:
    // 0x1e2320: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e2324:
    if (ctx->pc == 0x1E2324u) {
        ctx->pc = 0x1E2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2320u;
        // 0x1e2324: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2328u;
        goto label_1e2328;
    }
    ctx->pc = 0x1E2320u;
    {
        const bool branch_taken_0x1e2320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2320u;
        // 0x1e2324: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2320) {
            ctx->pc = 0x1E2350u;
            goto label_1e2350;
        }
    }
    ctx->pc = 0x1E2328u;
label_1e2328:
    // 0x1e2328: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e2328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e232c:
    // 0x1e232c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e232cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2330:
    // 0x1e2330: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e2334:
    if (ctx->pc == 0x1E2334u) {
        ctx->pc = 0x1E2338u;
        goto label_1e2338;
    }
    ctx->pc = 0x1E2330u;
    {
        const bool branch_taken_0x1e2330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2330) {
            ctx->pc = 0x1E2350u;
            goto label_1e2350;
        }
    }
    ctx->pc = 0x1E2338u;
label_1e2338:
    // 0x1e2338: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e2338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e233c:
    // 0x1e233c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e233cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e2340:
    // 0x1e2340: 0x320f809  jalr        $t9
label_1e2344:
    if (ctx->pc == 0x1E2344u) {
        ctx->pc = 0x1E2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2340u;
        // 0x1e2344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2348u;
        goto label_1e2348;
    }
    ctx->pc = 0x1E2340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2348u);
        ctx->pc = 0x1E2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2340u;
        // 0x1e2344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2340u, 0x1E2348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2348u;
label_1e2348:
    // 0x1e2348: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e234c:
    if (ctx->pc == 0x1E234Cu) {
        ctx->pc = 0x1E234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2348u;
        // 0x1e234c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2350u;
        goto label_1e2350;
    }
    ctx->pc = 0x1E2348u;
    {
        const bool branch_taken_0x1e2348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2348u;
        // 0x1e234c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2348) {
            ctx->pc = 0x1E2358u;
            goto label_1e2358;
        }
    }
    ctx->pc = 0x1E2350u;
label_1e2350:
    // 0x1e2350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2354:
    // 0x1e2354: 0x0  nop
    ctx->pc = 0x1e2354u;
    // NOP
label_1e2358:
    // 0x1e2358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e235c:
    // 0x1e235c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e235cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2360:
    // 0x1e2360: 0x3e00008  jr          $ra
label_1e2364:
    if (ctx->pc == 0x1E2364u) {
        ctx->pc = 0x1E2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2360u;
        // 0x1e2364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2368u;
        goto label_fallthrough_0x1e2360;
    }
    ctx->pc = 0x1E2360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2360u;
        // 0x1e2364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2360:
    ctx->pc = 0x1E2368u;
}

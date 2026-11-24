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

// Function: sub_002E22E0
// Address: 0x2e22e0 - 0x2e238c
void sub_002E22E0_0x2e22e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E22E0_0x2e22e0");
#endif

    switch (ctx->pc) {
        case 0x2e22e0u: goto label_2e22e0;
        case 0x2e22e4u: goto label_2e22e4;
        case 0x2e22e8u: goto label_2e22e8;
        case 0x2e22ecu: goto label_2e22ec;
        case 0x2e22f0u: goto label_2e22f0;
        case 0x2e22f4u: goto label_2e22f4;
        case 0x2e22f8u: goto label_2e22f8;
        case 0x2e22fcu: goto label_2e22fc;
        case 0x2e2300u: goto label_2e2300;
        case 0x2e2304u: goto label_2e2304;
        case 0x2e2308u: goto label_2e2308;
        case 0x2e230cu: goto label_2e230c;
        case 0x2e2310u: goto label_2e2310;
        case 0x2e2314u: goto label_2e2314;
        case 0x2e2318u: goto label_2e2318;
        case 0x2e231cu: goto label_2e231c;
        case 0x2e2320u: goto label_2e2320;
        case 0x2e2324u: goto label_2e2324;
        case 0x2e2328u: goto label_2e2328;
        case 0x2e232cu: goto label_2e232c;
        case 0x2e2330u: goto label_2e2330;
        case 0x2e2334u: goto label_2e2334;
        case 0x2e2338u: goto label_2e2338;
        case 0x2e233cu: goto label_2e233c;
        case 0x2e2340u: goto label_2e2340;
        case 0x2e2344u: goto label_2e2344;
        case 0x2e2348u: goto label_2e2348;
        case 0x2e234cu: goto label_2e234c;
        case 0x2e2350u: goto label_2e2350;
        case 0x2e2354u: goto label_2e2354;
        case 0x2e2358u: goto label_2e2358;
        case 0x2e235cu: goto label_2e235c;
        case 0x2e2360u: goto label_2e2360;
        case 0x2e2364u: goto label_2e2364;
        case 0x2e2368u: goto label_2e2368;
        case 0x2e236cu: goto label_2e236c;
        case 0x2e2370u: goto label_2e2370;
        case 0x2e2374u: goto label_2e2374;
        case 0x2e2378u: goto label_2e2378;
        case 0x2e237cu: goto label_2e237c;
        case 0x2e2380u: goto label_2e2380;
        case 0x2e2384u: goto label_2e2384;
        case 0x2e2388u: goto label_2e2388;
        default: break;
    }

    ctx->pc = 0x2e22e0u;

label_2e22e0:
    // 0x2e22e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e22e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e22e4:
    // 0x2e22e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e22e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e22e8:
    // 0x2e22e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e22e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e22ec:
    // 0x2e22ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e22ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e22f0:
    // 0x2e22f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e22f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e22f4:
    // 0x2e22f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e22f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e22f8:
    // 0x2e22f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e22f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e22fc:
    // 0x2e22fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e22fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e2300:
    // 0x2e2300: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2e2300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e2304:
    // 0x2e2304: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2e2304u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2e2308:
    // 0x2e2308: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2e2308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2e230c:
    // 0x2e230c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_2e2310:
    if (ctx->pc == 0x2E2310u) {
        ctx->pc = 0x2E2314u;
        goto label_2e2314;
    }
    ctx->pc = 0x2E230Cu;
    {
        const bool branch_taken_0x2e230c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e230c) {
            ctx->pc = 0x2E2360u;
            goto label_2e2360;
        }
    }
    ctx->pc = 0x2E2314u;
label_2e2314:
    // 0x2e2314: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2e2318:
    if (ctx->pc == 0x2E2318u) {
        ctx->pc = 0x2E231Cu;
        goto label_2e231c;
    }
    ctx->pc = 0x2E2314u;
    {
        const bool branch_taken_0x2e2314 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2314) {
            ctx->pc = 0x2E2328u;
            goto label_2e2328;
        }
    }
    ctx->pc = 0x2E231Cu;
label_2e231c:
    // 0x2e231c: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x2e231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_2e2320:
    // 0x2e2320: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
label_2e2324:
    if (ctx->pc == 0x2E2324u) {
        ctx->pc = 0x2E2328u;
        goto label_2e2328;
    }
    ctx->pc = 0x2E2320u;
    {
        const bool branch_taken_0x2e2320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2320) {
            ctx->pc = 0x2E2360u;
            goto label_2e2360;
        }
    }
    ctx->pc = 0x2E2328u;
label_2e2328:
    // 0x2e2328: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2e2328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2e232c:
    // 0x2e232c: 0xc07cce0  jal         func_1F3380
label_2e2330:
    if (ctx->pc == 0x2E2330u) {
        ctx->pc = 0x2E2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E232Cu;
        // 0x2e2330: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2334u;
        goto label_2e2334;
    }
    ctx->pc = 0x2E232Cu;
    SET_GPR_U32(ctx, 31, 0x2E2334u);
    ctx->pc = 0x2E2330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E232Cu;
    // 0x2e2330: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E232Cu, 0x2E2334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2334u;
label_2e2334:
    // 0x2e2334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e2334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2338:
    // 0x2e2338: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2e233c:
    if (ctx->pc == 0x2E233Cu) {
        ctx->pc = 0x2E2340u;
        goto label_2e2340;
    }
    ctx->pc = 0x2E2338u;
    {
        const bool branch_taken_0x2e2338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2338) {
            ctx->pc = 0x2E2360u;
            goto label_2e2360;
        }
    }
    ctx->pc = 0x2E2340u;
label_2e2340:
    // 0x2e2340: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2e2340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e2344:
    // 0x2e2344: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e2344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e2348:
    // 0x2e2348: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_2e234c:
    if (ctx->pc == 0x2E234Cu) {
        ctx->pc = 0x2E2350u;
        goto label_2e2350;
    }
    ctx->pc = 0x2E2348u;
    {
        const bool branch_taken_0x2e2348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e2348) {
            ctx->pc = 0x2E2360u;
            goto label_2e2360;
        }
    }
    ctx->pc = 0x2E2350u;
label_2e2350:
    // 0x2e2350: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2e2350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2e2354:
    // 0x2e2354: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2e2354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2e2358:
    // 0x2e2358: 0x320f809  jalr        $t9
label_2e235c:
    if (ctx->pc == 0x2E235Cu) {
        ctx->pc = 0x2E2360u;
        goto label_2e2360;
    }
    ctx->pc = 0x2E2358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2360u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2358u, 0x2E2360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E2360u;
label_2e2360:
    // 0x2e2360: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e2360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e2364:
    // 0x2e2364: 0x2e430020  sltiu       $v1, $s2, 0x20
    ctx->pc = 0x2e2364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2e2368:
    // 0x2e2368: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_2e236c:
    if (ctx->pc == 0x2E236Cu) {
        ctx->pc = 0x2E236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2368u;
        // 0x2e236c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2370u;
        goto label_2e2370;
    }
    ctx->pc = 0x2E2368u;
    {
        const bool branch_taken_0x2e2368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2368u;
        // 0x2e236c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2368) {
            ctx->pc = 0x2E2308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2308;
        }
    }
    ctx->pc = 0x2E2370u;
label_2e2370:
    // 0x2e2370: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e2370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e2374:
    // 0x2e2374: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e2374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e2378:
    // 0x2e2378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e237c:
    // 0x2e237c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e237cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2380:
    // 0x2e2380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2384:
    // 0x2e2384: 0x3e00008  jr          $ra
label_2e2388:
    if (ctx->pc == 0x2E2388u) {
        ctx->pc = 0x2E2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2384u;
        // 0x2e2388: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E238Cu;
        goto label_fallthrough_0x2e2384;
    }
    ctx->pc = 0x2E2384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2384u;
        // 0x2e2388: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e2384:
    ctx->pc = 0x2E238Cu;
}

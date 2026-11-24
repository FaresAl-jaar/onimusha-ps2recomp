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

// Function: sub_00291510
// Address: 0x291510 - 0x291588
void sub_00291510_0x291510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291510_0x291510");
#endif

    switch (ctx->pc) {
        case 0x291510u: goto label_291510;
        case 0x291514u: goto label_291514;
        case 0x291518u: goto label_291518;
        case 0x29151cu: goto label_29151c;
        case 0x291520u: goto label_291520;
        case 0x291524u: goto label_291524;
        case 0x291528u: goto label_291528;
        case 0x29152cu: goto label_29152c;
        case 0x291530u: goto label_291530;
        case 0x291534u: goto label_291534;
        case 0x291538u: goto label_291538;
        case 0x29153cu: goto label_29153c;
        case 0x291540u: goto label_291540;
        case 0x291544u: goto label_291544;
        case 0x291548u: goto label_291548;
        case 0x29154cu: goto label_29154c;
        case 0x291550u: goto label_291550;
        case 0x291554u: goto label_291554;
        case 0x291558u: goto label_291558;
        case 0x29155cu: goto label_29155c;
        case 0x291560u: goto label_291560;
        case 0x291564u: goto label_291564;
        case 0x291568u: goto label_291568;
        case 0x29156cu: goto label_29156c;
        case 0x291570u: goto label_291570;
        case 0x291574u: goto label_291574;
        case 0x291578u: goto label_291578;
        case 0x29157cu: goto label_29157c;
        case 0x291580u: goto label_291580;
        case 0x291584u: goto label_291584;
        default: break;
    }

    ctx->pc = 0x291510u;

label_291510:
    // 0x291510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_291514:
    // 0x291514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x291514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291518:
    // 0x291518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29151c:
    // 0x29151c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_291520:
    // 0x291520: 0x90850118  lbu         $a1, 0x118($a0)
    ctx->pc = 0x291520u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
label_291524:
    // 0x291524: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_291528:
    if (ctx->pc == 0x291528u) {
        ctx->pc = 0x291528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291524u;
        // 0x291528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29152Cu;
        goto label_29152c;
    }
    ctx->pc = 0x291524u;
    {
        const bool branch_taken_0x291524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x291528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291524u;
        // 0x291528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291524) {
            ctx->pc = 0x291578u;
            goto label_291578;
        }
    }
    ctx->pc = 0x29152Cu;
label_29152c:
    // 0x29152c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_291530:
    if (ctx->pc == 0x291530u) {
        ctx->pc = 0x291534u;
        goto label_291534;
    }
    ctx->pc = 0x29152Cu;
    {
        const bool branch_taken_0x29152c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29152c) {
            ctx->pc = 0x291540u;
            goto label_291540;
        }
    }
    ctx->pc = 0x291534u;
label_291534:
    // 0x291534: 0x10000010  b           . + 4 + (0x10 << 2)
label_291538:
    if (ctx->pc == 0x291538u) {
        ctx->pc = 0x29153Cu;
        goto label_29153c;
    }
    ctx->pc = 0x291534u;
    {
        const bool branch_taken_0x291534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291534) {
            ctx->pc = 0x291578u;
            goto label_291578;
        }
    }
    ctx->pc = 0x29153Cu;
label_29153c:
    // 0x29153c: 0x0  nop
    ctx->pc = 0x29153cu;
    // NOP
label_291540:
    // 0x291540: 0xc0a4530  jal         func_2914C0
label_291544:
    if (ctx->pc == 0x291544u) {
        ctx->pc = 0x291548u;
        goto label_291548;
    }
    ctx->pc = 0x291540u;
    SET_GPR_U32(ctx, 31, 0x291548u);
    ctx->pc = 0x2914C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2914C0u, 0x291540u, 0x291548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291548u;
label_291548:
    // 0x291548: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29154c:
    if (ctx->pc == 0x29154Cu) {
        ctx->pc = 0x291550u;
        goto label_291550;
    }
    ctx->pc = 0x291548u;
    {
        const bool branch_taken_0x291548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291548) {
            ctx->pc = 0x291578u;
            goto label_291578;
        }
    }
    ctx->pc = 0x291550u;
label_291550:
    // 0x291550: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x291550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_291554:
    // 0x291554: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x291554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_291558:
    // 0x291558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x291558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29155c:
    // 0x29155c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x29155cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_291560:
    // 0x291560: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x291560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_291564:
    // 0x291564: 0x320f809  jalr        $t9
label_291568:
    if (ctx->pc == 0x291568u) {
        ctx->pc = 0x291568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291564u;
        // 0x291568: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29156Cu;
        goto label_29156c;
    }
    ctx->pc = 0x291564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29156Cu);
        ctx->pc = 0x291568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291564u;
        // 0x291568: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291564u, 0x29156Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29156Cu;
label_29156c:
    // 0x29156c: 0x92030118  lbu         $v1, 0x118($s0)
    ctx->pc = 0x29156cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 280)));
label_291570:
    // 0x291570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x291570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_291574:
    // 0x291574: 0xa2030118  sb          $v1, 0x118($s0)
    ctx->pc = 0x291574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
label_291578:
    // 0x291578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29157c:
    // 0x29157c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29157cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_291580:
    // 0x291580: 0x3e00008  jr          $ra
label_291584:
    if (ctx->pc == 0x291584u) {
        ctx->pc = 0x291584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291580u;
        // 0x291584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291588u;
        goto label_fallthrough_0x291580;
    }
    ctx->pc = 0x291580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291580u;
        // 0x291584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291580:
    ctx->pc = 0x291588u;
}

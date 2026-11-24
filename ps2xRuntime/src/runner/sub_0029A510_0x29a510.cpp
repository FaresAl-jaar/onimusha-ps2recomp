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

// Function: sub_0029A510
// Address: 0x29a510 - 0x29a580
void sub_0029A510_0x29a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A510_0x29a510");
#endif

    switch (ctx->pc) {
        case 0x29a510u: goto label_29a510;
        case 0x29a514u: goto label_29a514;
        case 0x29a518u: goto label_29a518;
        case 0x29a51cu: goto label_29a51c;
        case 0x29a520u: goto label_29a520;
        case 0x29a524u: goto label_29a524;
        case 0x29a528u: goto label_29a528;
        case 0x29a52cu: goto label_29a52c;
        case 0x29a530u: goto label_29a530;
        case 0x29a534u: goto label_29a534;
        case 0x29a538u: goto label_29a538;
        case 0x29a53cu: goto label_29a53c;
        case 0x29a540u: goto label_29a540;
        case 0x29a544u: goto label_29a544;
        case 0x29a548u: goto label_29a548;
        case 0x29a54cu: goto label_29a54c;
        case 0x29a550u: goto label_29a550;
        case 0x29a554u: goto label_29a554;
        case 0x29a558u: goto label_29a558;
        case 0x29a55cu: goto label_29a55c;
        case 0x29a560u: goto label_29a560;
        case 0x29a564u: goto label_29a564;
        case 0x29a568u: goto label_29a568;
        case 0x29a56cu: goto label_29a56c;
        case 0x29a570u: goto label_29a570;
        case 0x29a574u: goto label_29a574;
        case 0x29a578u: goto label_29a578;
        case 0x29a57cu: goto label_29a57c;
        default: break;
    }

    ctx->pc = 0x29a510u;

label_29a510:
    // 0x29a510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29a514:
    // 0x29a514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29a518:
    // 0x29a518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29a51c:
    // 0x29a51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29a520:
    // 0x29a520: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29a520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29a524:
    // 0x29a524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29a528:
    // 0x29a528: 0xc0a6e2c  jal         func_29B8B0
label_29a52c:
    if (ctx->pc == 0x29A52Cu) {
        ctx->pc = 0x29A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A528u;
        // 0x29a52c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A530u;
        goto label_29a530;
    }
    ctx->pc = 0x29A528u;
    SET_GPR_U32(ctx, 31, 0x29A530u);
    ctx->pc = 0x29A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A528u;
    // 0x29a52c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B8B0u, 0x29A528u, 0x29A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A530u;
label_29a530:
    // 0x29a530: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29a530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29a534:
    // 0x29a534: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29a534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a538:
    // 0x29a538: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x29a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_29a53c:
    // 0x29a53c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_29a540:
    if (ctx->pc == 0x29A540u) {
        ctx->pc = 0x29A544u;
        goto label_29a544;
    }
    ctx->pc = 0x29A53Cu;
    {
        const bool branch_taken_0x29a53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a53c) {
            ctx->pc = 0x29A558u;
            goto label_29a558;
        }
    }
    ctx->pc = 0x29A544u;
label_29a544:
    // 0x29a544: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x29a544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_29a548:
    // 0x29a548: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29a548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29a54c:
    // 0x29a54c: 0x320f809  jalr        $t9
label_29a550:
    if (ctx->pc == 0x29A550u) {
        ctx->pc = 0x29A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A54Cu;
        // 0x29a550: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A554u;
        goto label_29a554;
    }
    ctx->pc = 0x29A54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29A554u);
        ctx->pc = 0x29A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A54Cu;
        // 0x29a550: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A54Cu, 0x29A554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A554u;
label_29a554:
    // 0x29a554: 0x0  nop
    ctx->pc = 0x29a554u;
    // NOP
label_29a558:
    // 0x29a558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29a55c:
    // 0x29a55c: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x29a55cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_29a560:
    // 0x29a560: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_29a564:
    if (ctx->pc == 0x29A564u) {
        ctx->pc = 0x29A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A560u;
        // 0x29a564: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A568u;
        goto label_29a568;
    }
    ctx->pc = 0x29A560u;
    {
        const bool branch_taken_0x29a560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A560u;
        // 0x29a564: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a560) {
            ctx->pc = 0x29A538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a538;
        }
    }
    ctx->pc = 0x29A568u;
label_29a568:
    // 0x29a568: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29a56c:
    // 0x29a56c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a56cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29a570:
    // 0x29a570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a574:
    // 0x29a574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29a578:
    // 0x29a578: 0x3e00008  jr          $ra
label_29a57c:
    if (ctx->pc == 0x29A57Cu) {
        ctx->pc = 0x29A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A578u;
        // 0x29a57c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A580u;
        goto label_fallthrough_0x29a578;
    }
    ctx->pc = 0x29A578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A578u;
        // 0x29a57c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a578:
    ctx->pc = 0x29A580u;
}

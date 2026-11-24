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

// Function: sub_001833E0
// Address: 0x1833e0 - 0x183470
void sub_001833E0_0x1833e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001833E0_0x1833e0");
#endif

    switch (ctx->pc) {
        case 0x183400u: goto label_183400;
        case 0x183428u: goto label_183428;
        default: break;
    }

    ctx->pc = 0x1833e0u;

    // 0x1833e0: 0x908301f8  lbu         $v1, 0x1F8($a0)
    ctx->pc = 0x1833e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x1833e4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1833e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1833e8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1833E8u;
    {
        const bool branch_taken_0x1833e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1833ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833E8u;
        // 0x1833ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833e8) {
            ctx->pc = 0x183468u;
            goto label_183468;
        }
    }
    ctx->pc = 0x1833F0u;
    // 0x1833f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1833f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833f4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1833f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1833f8: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x1833f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1833fc: 0x0  nop
    ctx->pc = 0x1833fcu;
    // NOP
label_183400:
    // 0x183400: 0x8c8301e0  lw          $v1, 0x1E0($a0)
    ctx->pc = 0x183400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x183404: 0x696021  addu        $t4, $v1, $t1
    ctx->pc = 0x183404u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x183408: 0x8d8311d4  lw          $v1, 0x11D4($t4)
    ctx->pc = 0x183408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4564)));
    // 0x18340c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x18340cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x183410: 0xad8311d4  sw          $v1, 0x11D4($t4)
    ctx->pc = 0x183410u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4564), GPR_U32(ctx, 3));
    // 0x183414: 0x908301f9  lbu         $v1, 0x1F9($a0)
    ctx->pc = 0x183414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
    // 0x183418: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x183418u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18341c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x18341Cu;
    {
        const bool branch_taken_0x18341c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x183420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18341Cu;
        // 0x183420: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18341c) {
            ctx->pc = 0x183450u;
            goto label_183450;
        }
    }
    ctx->pc = 0x183424u;
    // 0x183424: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x183424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183428:
    // 0x183428: 0x8d8311c0  lw          $v1, 0x11C0($t4)
    ctx->pc = 0x183428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4544)));
    // 0x18342c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18342cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x183430: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x183430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x183434: 0x8cc300e0  lw          $v1, 0xE0($a2)
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x183438: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x183438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x18343c: 0xacc300e0  sw          $v1, 0xE0($a2)
    ctx->pc = 0x18343cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 3));
    // 0x183440: 0x908301f9  lbu         $v1, 0x1F9($a0)
    ctx->pc = 0x183440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
    // 0x183444: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x183444u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x183448: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x183448u;
    {
        const bool branch_taken_0x183448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183448u;
        // 0x18344c: 0x25080100  addiu       $t0, $t0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183448) {
            ctx->pc = 0x183428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183428;
        }
    }
    ctx->pc = 0x183450u;
label_183450:
    // 0x183450: 0x908301f8  lbu         $v1, 0x1F8($a0)
    ctx->pc = 0x183450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x183454: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x183454u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x183458: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x183458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18345c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x18345Cu;
    {
        const bool branch_taken_0x18345c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18345Cu;
        // 0x183460: 0x25291210  addiu       $t1, $t1, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18345c) {
            ctx->pc = 0x183400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183400;
        }
    }
    ctx->pc = 0x183464u;
    // 0x183464: 0x0  nop
    ctx->pc = 0x183464u;
    // NOP
label_183468:
    // 0x183468: 0x3e00008  jr          $ra
    ctx->pc = 0x183468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183470u;
}

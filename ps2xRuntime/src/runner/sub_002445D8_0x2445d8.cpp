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

// Function: sub_002445D8
// Address: 0x2445d8 - 0x244634
void sub_002445D8_0x2445d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002445D8_0x2445d8");
#endif

    switch (ctx->pc) {
        case 0x2445d8u: goto label_2445d8;
        case 0x2445dcu: goto label_2445dc;
        case 0x2445e0u: goto label_2445e0;
        case 0x2445e4u: goto label_2445e4;
        case 0x2445e8u: goto label_2445e8;
        case 0x2445ecu: goto label_2445ec;
        case 0x2445f0u: goto label_2445f0;
        case 0x2445f4u: goto label_2445f4;
        case 0x2445f8u: goto label_2445f8;
        case 0x2445fcu: goto label_2445fc;
        case 0x244600u: goto label_244600;
        case 0x244604u: goto label_244604;
        case 0x244608u: goto label_244608;
        case 0x24460cu: goto label_24460c;
        case 0x244610u: goto label_244610;
        case 0x244614u: goto label_244614;
        case 0x244618u: goto label_244618;
        case 0x24461cu: goto label_24461c;
        case 0x244620u: goto label_244620;
        case 0x244624u: goto label_244624;
        case 0x244628u: goto label_244628;
        case 0x24462cu: goto label_24462c;
        case 0x244630u: goto label_244630;
        default: break;
    }

    ctx->pc = 0x2445d8u;

label_2445d8:
    // 0x2445d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2445d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2445dc:
    // 0x2445dc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2445e0:
    if (ctx->pc == 0x2445E0u) {
        ctx->pc = 0x2445E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445DCu;
        // 0x2445e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445E4u;
        goto label_2445e4;
    }
    ctx->pc = 0x2445DCu;
    {
        const bool branch_taken_0x2445dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2445E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445DCu;
        // 0x2445e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445dc) {
            ctx->pc = 0x2445F8u;
            goto label_2445f8;
        }
    }
    ctx->pc = 0x2445E4u;
label_2445e4:
    // 0x2445e4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2445e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2445e8:
    // 0x2445e8: 0xc090d8a  jal         func_243628
label_2445ec:
    if (ctx->pc == 0x2445ECu) {
        ctx->pc = 0x2445ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445E8u;
        // 0x2445ec: 0x2484bfe0  addiu       $a0, $a0, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445F0u;
        goto label_2445f0;
    }
    ctx->pc = 0x2445E8u;
    SET_GPR_U32(ctx, 31, 0x2445F0u);
    ctx->pc = 0x2445ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2445E8u;
    // 0x2445ec: 0x2484bfe0  addiu       $a0, $a0, -0x4020 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2445E8u, 0x2445F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2445F0u;
label_2445f0:
    // 0x2445f0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2445f4:
    if (ctx->pc == 0x2445F4u) {
        ctx->pc = 0x2445F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445F0u;
        // 0x2445f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445F8u;
        goto label_2445f8;
    }
    ctx->pc = 0x2445F0u;
    {
        const bool branch_taken_0x2445f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445F0u;
        // 0x2445f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445f0) {
            ctx->pc = 0x244628u;
            goto label_244628;
        }
    }
    ctx->pc = 0x2445F8u;
label_2445f8:
    // 0x2445f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2445f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2445fc:
    // 0x2445fc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2445fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_244600:
    // 0x244600: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x244600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_244604:
    // 0x244604: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_244608:
    if (ctx->pc == 0x244608u) {
        ctx->pc = 0x244608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244604u;
        // 0x244608: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24460Cu;
        goto label_24460c;
    }
    ctx->pc = 0x244604u;
    {
        const bool branch_taken_0x244604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244604u;
        // 0x244608: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244604) {
            ctx->pc = 0x244624u;
            goto label_244624;
        }
    }
    ctx->pc = 0x24460Cu;
label_24460c:
    // 0x24460c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x24460cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_244610:
    // 0x244610: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x244610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_244614:
    // 0x244614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244618:
    // 0x244618: 0x40f809  jalr        $v0
label_24461c:
    if (ctx->pc == 0x24461Cu) {
        ctx->pc = 0x24461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244618u;
        // 0x24461c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244620u;
        goto label_244620;
    }
    ctx->pc = 0x244618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244620u);
        ctx->pc = 0x24461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244618u;
        // 0x24461c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244618u, 0x244620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244620u;
label_244620:
    // 0x244620: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x244620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244624:
    // 0x244624: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x244624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_244628:
    // 0x244628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24462c:
    // 0x24462c: 0x3e00008  jr          $ra
label_244630:
    if (ctx->pc == 0x244630u) {
        ctx->pc = 0x244630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24462Cu;
        // 0x244630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244634u;
        goto label_fallthrough_0x24462c;
    }
    ctx->pc = 0x24462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24462Cu;
        // 0x244630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24462c:
    ctx->pc = 0x244634u;
}

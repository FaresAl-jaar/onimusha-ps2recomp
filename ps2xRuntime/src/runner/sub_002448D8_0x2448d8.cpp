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

// Function: sub_002448D8
// Address: 0x2448d8 - 0x24493c
void sub_002448D8_0x2448d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002448D8_0x2448d8");
#endif

    switch (ctx->pc) {
        case 0x2448d8u: goto label_2448d8;
        case 0x2448dcu: goto label_2448dc;
        case 0x2448e0u: goto label_2448e0;
        case 0x2448e4u: goto label_2448e4;
        case 0x2448e8u: goto label_2448e8;
        case 0x2448ecu: goto label_2448ec;
        case 0x2448f0u: goto label_2448f0;
        case 0x2448f4u: goto label_2448f4;
        case 0x2448f8u: goto label_2448f8;
        case 0x2448fcu: goto label_2448fc;
        case 0x244900u: goto label_244900;
        case 0x244904u: goto label_244904;
        case 0x244908u: goto label_244908;
        case 0x24490cu: goto label_24490c;
        case 0x244910u: goto label_244910;
        case 0x244914u: goto label_244914;
        case 0x244918u: goto label_244918;
        case 0x24491cu: goto label_24491c;
        case 0x244920u: goto label_244920;
        case 0x244924u: goto label_244924;
        case 0x244928u: goto label_244928;
        case 0x24492cu: goto label_24492c;
        case 0x244930u: goto label_244930;
        case 0x244934u: goto label_244934;
        case 0x244938u: goto label_244938;
        default: break;
    }

    ctx->pc = 0x2448d8u;

label_2448d8:
    // 0x2448d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2448d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2448dc:
    // 0x2448dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2448dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2448e0:
    // 0x2448e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2448e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2448e4:
    // 0x2448e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2448e8:
    if (ctx->pc == 0x2448E8u) {
        ctx->pc = 0x2448E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448E4u;
        // 0x2448e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448ECu;
        goto label_2448ec;
    }
    ctx->pc = 0x2448E4u;
    {
        const bool branch_taken_0x2448e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2448E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448E4u;
        // 0x2448e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448e4) {
            ctx->pc = 0x244900u;
            goto label_244900;
        }
    }
    ctx->pc = 0x2448ECu;
label_2448ec:
    // 0x2448ec: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2448ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2448f0:
    // 0x2448f0: 0xc090d8a  jal         func_243628
label_2448f4:
    if (ctx->pc == 0x2448F4u) {
        ctx->pc = 0x2448F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F0u;
        // 0x2448f4: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448F8u;
        goto label_2448f8;
    }
    ctx->pc = 0x2448F0u;
    SET_GPR_U32(ctx, 31, 0x2448F8u);
    ctx->pc = 0x2448F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448F0u;
    // 0x2448f4: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2448F0u, 0x2448F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448F8u;
label_2448f8:
    // 0x2448f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2448fc:
    if (ctx->pc == 0x2448FCu) {
        ctx->pc = 0x2448FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F8u;
        // 0x2448fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244900u;
        goto label_244900;
    }
    ctx->pc = 0x2448F8u;
    {
        const bool branch_taken_0x2448f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F8u;
        // 0x2448fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448f8) {
            ctx->pc = 0x24492Cu;
            goto label_24492c;
        }
    }
    ctx->pc = 0x244900u;
label_244900:
    // 0x244900: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x244900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244904:
    // 0x244904: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x244904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_244908:
    // 0x244908: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_24490c:
    if (ctx->pc == 0x24490Cu) {
        ctx->pc = 0x24490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244908u;
        // 0x24490c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244910u;
        goto label_244910;
    }
    ctx->pc = 0x244908u;
    {
        const bool branch_taken_0x244908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244908) {
            ctx->pc = 0x24490Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244908u;
            // 0x24490c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244910u;
label_244910:
    // 0x244910: 0x40f809  jalr        $v0
label_244914:
    if (ctx->pc == 0x244914u) {
        ctx->pc = 0x244914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244910u;
        // 0x244914: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244918u;
        goto label_244918;
    }
    ctx->pc = 0x244910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244918u);
        ctx->pc = 0x244914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244910u;
        // 0x244914: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244910u, 0x244918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244918u;
label_244918:
    // 0x244918: 0x10000003  b           . + 4 + (0x3 << 2)
label_24491c:
    if (ctx->pc == 0x24491Cu) {
        ctx->pc = 0x24491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244918u;
        // 0x24491c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244920u;
        goto label_244920;
    }
    ctx->pc = 0x244918u;
    {
        const bool branch_taken_0x244918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244918u;
        // 0x24491c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244918) {
            ctx->pc = 0x244928u;
            goto label_244928;
        }
    }
    ctx->pc = 0x244920u;
label_244920:
    // 0x244920: 0xc090d8a  jal         func_243628
label_244924:
    if (ctx->pc == 0x244924u) {
        ctx->pc = 0x244924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244920u;
        // 0x244924: 0x2484c120  addiu       $a0, $a0, -0x3EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244928u;
        goto label_244928;
    }
    ctx->pc = 0x244920u;
    SET_GPR_U32(ctx, 31, 0x244928u);
    ctx->pc = 0x244924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244920u;
    // 0x244924: 0x2484c120  addiu       $a0, $a0, -0x3EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244920u, 0x244928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244928u;
label_244928:
    // 0x244928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24492c:
    // 0x24492c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24492cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244930:
    // 0x244930: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x244930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_244934:
    // 0x244934: 0x3e00008  jr          $ra
label_244938:
    if (ctx->pc == 0x244938u) {
        ctx->pc = 0x244938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244934u;
        // 0x244938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24493Cu;
        goto label_fallthrough_0x244934;
    }
    ctx->pc = 0x244934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244934u;
        // 0x244938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244934:
    ctx->pc = 0x24493Cu;
}

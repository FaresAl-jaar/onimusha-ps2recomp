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

// Function: sub_00337390
// Address: 0x337390 - 0x337418
void sub_00337390_0x337390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337390_0x337390");
#endif

    switch (ctx->pc) {
        case 0x3373b4u: goto label_3373b4;
        case 0x3373c0u: goto label_3373c0;
        case 0x3373fcu: goto label_3373fc;
        default: break;
    }

    ctx->pc = 0x337390u;

    // 0x337390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x337390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x337394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x337394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x337398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33739c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3373a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3373a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3373a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3373a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3373a8: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x3373a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3373ac: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x3373ACu;
    SET_GPR_U32(ctx, 31, 0x3373B4u);
    ctx->pc = 0x3373B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3373ACu;
    // 0x3373b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x3373ACu, 0x3373B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3373B4u;
label_3373b4:
    // 0x3373b4: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x3373b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3373b8: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x3373B8u;
    SET_GPR_U32(ctx, 31, 0x3373C0u);
    ctx->pc = 0x3373BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3373B8u;
    // 0x3373bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x3373B8u, 0x3373C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3373C0u;
label_3373c0:
    // 0x3373c0: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x3373c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x3373c4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x3373c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3373c8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3373c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3373cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3373CCu;
    {
        const bool branch_taken_0x3373cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3373cc) {
            ctx->pc = 0x3373E0u;
            goto label_3373e0;
        }
    }
    ctx->pc = 0x3373D4u;
    // 0x3373d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3373D4u;
    {
        const bool branch_taken_0x3373d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3373D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373D4u;
        // 0x3373d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373d4) {
            ctx->pc = 0x337400u;
            goto label_337400;
        }
    }
    ctx->pc = 0x3373DCu;
    // 0x3373dc: 0x0  nop
    ctx->pc = 0x3373dcu;
    // NOP
label_3373e0:
    // 0x3373e0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3373e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3373e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3373E4u;
    {
        const bool branch_taken_0x3373e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3373E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373E4u;
        // 0x3373e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373e4) {
            ctx->pc = 0x3373F4u;
            goto label_3373f4;
        }
    }
    ctx->pc = 0x3373ECu;
    // 0x3373ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3373ECu;
    {
        const bool branch_taken_0x3373ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3373F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373ECu;
        // 0x3373f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373ec) {
            ctx->pc = 0x3373FCu;
            goto label_3373fc;
        }
    }
    ctx->pc = 0x3373F4u;
label_3373f4:
    // 0x3373f4: 0xc0cdc4c  jal         func_337130
    ctx->pc = 0x3373F4u;
    SET_GPR_U32(ctx, 31, 0x3373FCu);
    ctx->pc = 0x3373F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3373F4u;
    // 0x3373f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337130u, 0x3373F4u, 0x3373FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3373FCu;
label_3373fc:
    // 0x3373fc: 0x0  nop
    ctx->pc = 0x3373fcu;
    // NOP
label_337400:
    // 0x337400: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x337400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33740c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33740cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337410: 0x3e00008  jr          $ra
    ctx->pc = 0x337410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337410u;
        // 0x337414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337418u;
}

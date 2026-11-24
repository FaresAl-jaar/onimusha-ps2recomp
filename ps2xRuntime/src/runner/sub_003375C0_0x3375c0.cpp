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

// Function: sub_003375C0
// Address: 0x3375c0 - 0x337648
void sub_003375C0_0x3375c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003375C0_0x3375c0");
#endif

    switch (ctx->pc) {
        case 0x3375e4u: goto label_3375e4;
        case 0x3375f0u: goto label_3375f0;
        case 0x33762cu: goto label_33762c;
        default: break;
    }

    ctx->pc = 0x3375c0u;

    // 0x3375c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3375c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3375c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3375c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3375c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3375c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3375cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3375ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3375d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3375d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3375d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3375d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3375d8: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x3375d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3375dc: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x3375DCu;
    SET_GPR_U32(ctx, 31, 0x3375E4u);
    ctx->pc = 0x3375E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3375DCu;
    // 0x3375e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x3375DCu, 0x3375E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375E4u;
label_3375e4:
    // 0x3375e4: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x3375e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3375e8: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x3375E8u;
    SET_GPR_U32(ctx, 31, 0x3375F0u);
    ctx->pc = 0x3375ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3375E8u;
    // 0x3375ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x3375E8u, 0x3375F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375F0u;
label_3375f0:
    // 0x3375f0: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x3375f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3375f4: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3375f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3375f8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3375f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3375fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3375FCu;
    {
        const bool branch_taken_0x3375fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3375fc) {
            ctx->pc = 0x337610u;
            goto label_337610;
        }
    }
    ctx->pc = 0x337604u;
    // 0x337604: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x337604u;
    {
        const bool branch_taken_0x337604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337604u;
        // 0x337608: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337604) {
            ctx->pc = 0x337630u;
            goto label_337630;
        }
    }
    ctx->pc = 0x33760Cu;
    // 0x33760c: 0x0  nop
    ctx->pc = 0x33760cu;
    // NOP
label_337610:
    // 0x337610: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x337610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x337614: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x337614u;
    {
        const bool branch_taken_0x337614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x337618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337614u;
        // 0x337618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337614) {
            ctx->pc = 0x337624u;
            goto label_337624;
        }
    }
    ctx->pc = 0x33761Cu;
    // 0x33761c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33761Cu;
    {
        const bool branch_taken_0x33761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33761Cu;
        // 0x337620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33761c) {
            ctx->pc = 0x33762Cu;
            goto label_33762c;
        }
    }
    ctx->pc = 0x337624u;
label_337624:
    // 0x337624: 0xc0cdc4c  jal         func_337130
    ctx->pc = 0x337624u;
    SET_GPR_U32(ctx, 31, 0x33762Cu);
    ctx->pc = 0x337628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337624u;
    // 0x337628: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337130u, 0x337624u, 0x33762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33762Cu;
label_33762c:
    // 0x33762c: 0x0  nop
    ctx->pc = 0x33762cu;
    // NOP
label_337630:
    // 0x337630: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x337630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33763c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33763cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337640: 0x3e00008  jr          $ra
    ctx->pc = 0x337640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337640u;
        // 0x337644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337648u;
}

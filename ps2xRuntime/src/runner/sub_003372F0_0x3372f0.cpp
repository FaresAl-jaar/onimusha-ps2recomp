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

// Function: sub_003372F0
// Address: 0x3372f0 - 0x337388
void sub_003372F0_0x3372f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003372F0_0x3372f0");
#endif

    switch (ctx->pc) {
        case 0x337314u: goto label_337314;
        case 0x337320u: goto label_337320;
        case 0x33736cu: goto label_33736c;
        default: break;
    }

    ctx->pc = 0x3372f0u;

    // 0x3372f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3372f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3372f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3372f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3372f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3372f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3372fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3372fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x337300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337304: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x337304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337308: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x337308u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33730c: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x33730Cu;
    SET_GPR_U32(ctx, 31, 0x337314u);
    ctx->pc = 0x337310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33730Cu;
    // 0x337310: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x33730Cu, 0x337314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337314u;
label_337314:
    // 0x337314: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x337314u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337318: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x337318u;
    SET_GPR_U32(ctx, 31, 0x337320u);
    ctx->pc = 0x33731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337318u;
    // 0x33731c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x337318u, 0x337320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337320u;
label_337320:
    // 0x337320: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x337320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x337324: 0x27848308  addiu       $a0, $gp, -0x7CF8
    ctx->pc = 0x337324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935304));
    // 0x337328: 0x92420010  lbu         $v0, 0x10($s2)
    ctx->pc = 0x337328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x33732c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x337330: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x337330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x337334: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x337334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x337338: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x337338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33733c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x33733cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x337340: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x337340u;
    {
        const bool branch_taken_0x337340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337340) {
            ctx->pc = 0x337350u;
            goto label_337350;
        }
    }
    ctx->pc = 0x337348u;
    // 0x337348: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x337348u;
    {
        const bool branch_taken_0x337348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337348u;
        // 0x33734c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337348) {
            ctx->pc = 0x337370u;
            goto label_337370;
        }
    }
    ctx->pc = 0x337350u;
label_337350:
    // 0x337350: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x337350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x337354: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x337354u;
    {
        const bool branch_taken_0x337354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x337358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337354u;
        // 0x337358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337354) {
            ctx->pc = 0x337364u;
            goto label_337364;
        }
    }
    ctx->pc = 0x33735Cu;
    // 0x33735c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33735Cu;
    {
        const bool branch_taken_0x33735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33735Cu;
        // 0x337360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33735c) {
            ctx->pc = 0x33736Cu;
            goto label_33736c;
        }
    }
    ctx->pc = 0x337364u;
label_337364:
    // 0x337364: 0xc0cdc4c  jal         func_337130
    ctx->pc = 0x337364u;
    SET_GPR_U32(ctx, 31, 0x33736Cu);
    ctx->pc = 0x337368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337364u;
    // 0x337368: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337130u, 0x337364u, 0x33736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33736Cu;
label_33736c:
    // 0x33736c: 0x0  nop
    ctx->pc = 0x33736cu;
    // NOP
label_337370:
    // 0x337370: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x337370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33737c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33737cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337380: 0x3e00008  jr          $ra
    ctx->pc = 0x337380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337380u;
        // 0x337384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337388u;
}

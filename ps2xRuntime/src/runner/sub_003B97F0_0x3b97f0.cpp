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

// Function: sub_003B97F0
// Address: 0x3b97f0 - 0x3b9888
void sub_003B97F0_0x3b97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B97F0_0x3b97f0");
#endif

    switch (ctx->pc) {
        case 0x3b9830u: goto label_3b9830;
        case 0x3b9878u: goto label_3b9878;
        default: break;
    }

    ctx->pc = 0x3b97f0u;

    // 0x3b97f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b97f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b97f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b97f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b97f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b97fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b97fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9800: 0x90852b55  lbu         $a1, 0x2B55($a0)
    ctx->pc = 0x3b9800u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11093)));
    // 0x3b9804: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B9804u;
    {
        const bool branch_taken_0x3b9804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9804u;
        // 0x3b9808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9804) {
            ctx->pc = 0x3B9858u;
            goto label_3b9858;
        }
    }
    ctx->pc = 0x3B980Cu;
    // 0x3b980c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B980Cu;
    {
        const bool branch_taken_0x3b980c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b980c) {
            ctx->pc = 0x3B9820u;
            goto label_3b9820;
        }
    }
    ctx->pc = 0x3B9814u;
    // 0x3b9814: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3B9814u;
    {
        const bool branch_taken_0x3b9814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9814) {
            ctx->pc = 0x3B9878u;
            goto label_3b9878;
        }
    }
    ctx->pc = 0x3B981Cu;
    // 0x3b981c: 0x0  nop
    ctx->pc = 0x3b981cu;
    // NOP
label_3b9820:
    // 0x3b9820: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b9820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b9824: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b9824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b9828: 0xc0eee68  jal         func_3BB9A0
    ctx->pc = 0x3B9828u;
    SET_GPR_U32(ctx, 31, 0x3B9830u);
    ctx->pc = 0x3B982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9828u;
    // 0x3b982c: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB9A0u, 0x3B9828u, 0x3B9830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9830u;
label_3b9830:
    // 0x3b9830: 0x240400f1  addiu       $a0, $zero, 0xF1
    ctx->pc = 0x3b9830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3b9834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b9834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9838: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b9838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b983c: 0xa2032b59  sb          $v1, 0x2B59($s0)
    ctx->pc = 0x3b983cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9840: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b9840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b9844: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b9844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9848: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b9848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b984c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9850: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b9850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9854: 0x0  nop
    ctx->pc = 0x3b9854u;
    // NOP
label_3b9858:
    // 0x3b9858: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b9858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b985c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B985Cu;
    {
        const bool branch_taken_0x3b985c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b985c) {
            ctx->pc = 0x3B9878u;
            goto label_3b9878;
        }
    }
    ctx->pc = 0x3B9864u;
    // 0x3b9864: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b9864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b9868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b986c: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x3b986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x3b9870: 0xc0ee024  jal         func_3B8090
    ctx->pc = 0x3B9870u;
    SET_GPR_U32(ctx, 31, 0x3B9878u);
    ctx->pc = 0x3B9874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9870u;
    // 0x3b9874: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8090u, 0x3B9870u, 0x3B9878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9878u;
label_3b9878:
    // 0x3b9878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b9878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b987c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b987cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9880: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9880u;
        // 0x3b9884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9888u;
}

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

// Function: sub_002E2060
// Address: 0x2e2060 - 0x2e20d8
void sub_002E2060_0x2e2060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2060_0x2e2060");
#endif

    switch (ctx->pc) {
        case 0x2e2088u: goto label_2e2088;
        case 0x2e20acu: goto label_2e20ac;
        default: break;
    }

    ctx->pc = 0x2e2060u;

    // 0x2e2060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e2060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e2064: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e2064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e2068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e2068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e206c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e206cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2070: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e2070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2074: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2078: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2e2078u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2e207c: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2e207cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e2080: 0x26317190  addiu       $s1, $s1, 0x7190
    ctx->pc = 0x2e2080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29072));
    // 0x2e2084: 0x0  nop
    ctx->pc = 0x2e2084u;
    // NOP
label_2e2088:
    // 0x2e2088: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x2e2088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2e208c: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E208Cu;
    {
        const bool branch_taken_0x2e208c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e208c) {
            ctx->pc = 0x2E20B0u;
            goto label_2e20b0;
        }
    }
    ctx->pc = 0x2E2094u;
    // 0x2e2094: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x2e2094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x2e2098: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2098u;
    {
        const bool branch_taken_0x2e2098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2098u;
        // 0x2e209c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2098) {
            ctx->pc = 0x2E20B0u;
            goto label_2e20b0;
        }
    }
    ctx->pc = 0x2E20A0u;
    // 0x2e20a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e20a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20a4: 0xc0b87e4  jal         func_2E1F90
    ctx->pc = 0x2E20A4u;
    SET_GPR_U32(ctx, 31, 0x2E20ACu);
    ctx->pc = 0x2E20A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E20A4u;
    // 0x2e20a8: 0xaf918ab0  sw          $s1, -0x7550($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1F90u, 0x2E20A4u, 0x2E20ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20ACu;
label_2e20ac:
    // 0x2e20ac: 0x0  nop
    ctx->pc = 0x2e20acu;
    // NOP
label_2e20b0:
    // 0x2e20b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e20b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e20b4: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x2e20b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e20b8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E20B8u;
    {
        const bool branch_taken_0x2e20b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20B8u;
        // 0x2e20bc: 0x263106c0  addiu       $s1, $s1, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20b8) {
            ctx->pc = 0x2E2088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2088;
        }
    }
    ctx->pc = 0x2E20C0u;
    // 0x2e20c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e20c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e20c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e20c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e20c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e20c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e20cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e20ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e20d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E20D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20D0u;
        // 0x2e20d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E20D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E20D8u;
}

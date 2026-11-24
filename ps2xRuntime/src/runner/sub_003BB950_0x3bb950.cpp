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

// Function: sub_003BB950
// Address: 0x3bb950 - 0x3bb9a0
void sub_003BB950_0x3bb950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB950_0x3bb950");
#endif

    switch (ctx->pc) {
        case 0x3bb974u: goto label_3bb974;
        default: break;
    }

    ctx->pc = 0x3bb950u;

    // 0x3bb950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bb95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb960: 0x8c840860  lw          $a0, 0x860($a0)
    ctx->pc = 0x3bb960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2144)));
    // 0x3bb964: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB964u;
    {
        const bool branch_taken_0x3bb964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb964) {
            ctx->pc = 0x3BB978u;
            goto label_3bb978;
        }
    }
    ctx->pc = 0x3BB96Cu;
    // 0x3bb96c: 0xc0f1604  jal         func_3C5810
    ctx->pc = 0x3BB96Cu;
    SET_GPR_U32(ctx, 31, 0x3BB974u);
    ctx->pc = 0x3C5810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5810u, 0x3BB96Cu, 0x3BB974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB974u;
label_3bb974:
    // 0x3bb974: 0x0  nop
    ctx->pc = 0x3bb974u;
    // NOP
label_3bb978:
    // 0x3bb978: 0x92042b4b  lbu         $a0, 0x2B4B($s0)
    ctx->pc = 0x3bb978u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3bb97c: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x3bb97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x3bb980: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB980u;
    {
        const bool branch_taken_0x3bb980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB980u;
        // 0x3bb984: 0x308300ef  andi        $v1, $a0, 0xEF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)239);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb980) {
            ctx->pc = 0x3BB990u;
            goto label_3bb990;
        }
    }
    ctx->pc = 0x3BB988u;
    // 0x3bb988: 0xa2032b4b  sb          $v1, 0x2B4B($s0)
    ctx->pc = 0x3bb988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bb98c: 0x0  nop
    ctx->pc = 0x3bb98cu;
    // NOP
label_3bb990:
    // 0x3bb990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb998: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB998u;
        // 0x3bb99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB9A0u;
}

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

// Function: sub_002284D0
// Address: 0x2284d0 - 0x228524
void sub_002284D0_0x2284d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002284D0_0x2284d0");
#endif

    switch (ctx->pc) {
        case 0x2284f0u: goto label_2284f0;
        default: break;
    }

    ctx->pc = 0x2284d0u;

    // 0x2284d0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2284d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2284d4: 0x2466ad78  addiu       $a2, $v1, -0x5288
    ctx->pc = 0x2284d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946168));
    // 0x2284d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2284d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BAD78u));
    // 0x2284dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2284DCu;
    {
        const bool branch_taken_0x2284dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284DCu;
        // 0x2284e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284dc) {
            ctx->pc = 0x228514u;
            goto label_228514;
        }
    }
    ctx->pc = 0x2284E4u;
    // 0x2284e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2284e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2284e8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2284e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2284ec: 0x0  nop
    ctx->pc = 0x2284ecu;
    // NOP
label_2284f0:
    // 0x2284f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2284f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2284f4: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x2284f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x2284f8: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2284F8u;
    {
        const bool branch_taken_0x2284f8 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x2284FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284F8u;
        // 0x2284fc: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284f8) {
            ctx->pc = 0x228514u;
            goto label_228514;
        }
    }
    ctx->pc = 0x228500u;
    // 0x228500: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x228500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228504: 0x0  nop
    ctx->pc = 0x228504u;
    // NOP
    // 0x228508: 0x0  nop
    ctx->pc = 0x228508u;
    // NOP
    // 0x22850c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22850Cu;
    {
        const bool branch_taken_0x22850c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22850Cu;
        // 0x228510: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22850c) {
            ctx->pc = 0x2284F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2284f0;
        }
    }
    ctx->pc = 0x228514u;
label_228514:
    // 0x228514: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x228514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x228518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22851c: 0x3e00008  jr          $ra
    ctx->pc = 0x22851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22851Cu;
        // 0x228520: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228524u;
}

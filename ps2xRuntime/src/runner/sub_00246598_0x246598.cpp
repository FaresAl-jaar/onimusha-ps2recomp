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

// Function: sub_00246598
// Address: 0x246598 - 0x246600
void sub_00246598_0x246598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246598_0x246598");
#endif

    switch (ctx->pc) {
        case 0x2465c8u: goto label_2465c8;
        case 0x2465f4u: goto label_2465f4;
        default: break;
    }

    ctx->pc = 0x246598u;

    // 0x246598: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24659c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24659cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2465a0: 0x2442e9d0  addiu       $v0, $v0, -0x1630
    ctx->pc = 0x2465a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
    // 0x2465a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2465a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2465a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2465a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4CE9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9D0u, _value); } while (0);
    // 0x2465ac: 0x3c08004d  lui         $t0, 0x4D
    ctx->pc = 0x2465acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)77 << 16));
    // 0x2465b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2465b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2465b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2465b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465b8: 0x3c061964  lui         $a2, 0x1964
    ctx->pc = 0x2465b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6500 << 16));
    // 0x2465bc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2465bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2465c0: 0x8d02e9bc  lw          $v0, -0x1644($t0)
    ctx->pc = 0x2465c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9BCu));
    // 0x2465c4: 0x0  nop
    ctx->pc = 0x2465c4u;
    // NOP
label_2465c8:
    // 0x2465c8: 0x1447000b  bne         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2465C8u;
    {
        const bool branch_taken_0x2465c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2465CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465C8u;
        // 0x2465cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465c8) {
            ctx->pc = 0x2465F8u;
            goto label_2465f8;
        }
    }
    ctx->pc = 0x2465D0u;
    // 0x2465d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2465d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2465d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2465d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2465d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2465d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2465dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2465dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2465e0: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x2465e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2465e4: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2465E4u;
    {
        const bool branch_taken_0x2465e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2465e4) {
            ctx->pc = 0x2465E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2465E4u;
            // 0x2465e8: 0x8d02e9bc  lw          $v0, -0x1644($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2465C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2465c8;
        }
    }
    ctx->pc = 0x2465ECu;
    // 0x2465ec: 0xc044332  jal         func_110CC8
    ctx->pc = 0x2465ECu;
    SET_GPR_U32(ctx, 31, 0x2465F4u);
    ctx->pc = 0x2465F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465ECu;
    // 0x2465f0: 0x2484c9d8  addiu       $a0, $a0, -0x3628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x2465ECu, 0x2465F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465F4u;
label_2465f4:
    // 0x2465f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2465f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2465f8:
    // 0x2465f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2465F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2465FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465F8u;
        // 0x2465fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2465F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246600u;
}

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

// Function: sub_00205370
// Address: 0x205370 - 0x2053c4
void sub_00205370_0x205370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205370_0x205370");
#endif

    ctx->pc = 0x205370u;

    // 0x205370: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x205370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x205374: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x205374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x205378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20537c: 0x28c50000  slti        $a1, $a2, 0x0
    ctx->pc = 0x20537cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x205380: 0x24c70007  addiu       $a3, $a2, 0x7
    ctx->pc = 0x205380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x205384: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x205384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205388: 0xe5180b  movn        $v1, $a3, $a1
    ctx->pc = 0x205388u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x20538c: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x20538cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x205390: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x205390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x205394: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x205394u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x205398: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x205398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20539c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2053a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2053a4: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x2053a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x2053a8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2053a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2053ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2053acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2053b0: 0x14880002  bne         $a0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2053B0u;
    {
        const bool branch_taken_0x2053b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x2053B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053B0u;
        // 0x2053b4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053b0) {
            ctx->pc = 0x2053BCu;
            goto label_2053bc;
        }
    }
    ctx->pc = 0x2053B8u;
    // 0x2053b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2053b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2053bc:
    // 0x2053bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2053BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2053BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2053C4u;
}

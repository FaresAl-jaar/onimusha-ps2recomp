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

// Function: sub_001DA000
// Address: 0x1da000 - 0x1da050
void sub_001DA000_0x1da000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA000_0x1da000");
#endif

    ctx->pc = 0x1da000u;

    // 0x1da000: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x1da000u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da004: 0x340a0000  ori         $t2, $zero, 0x0
    ctx->pc = 0x1da004u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1da008: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1da008u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1da00c: 0x340b0000  ori         $t3, $zero, 0x0
    ctx->pc = 0x1da00cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1da010: 0x354a007f  ori         $t2, $t2, 0x7F
    ctx->pc = 0x1da010u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)127);
    // 0x1da014: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x1da014u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x1da018: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1da018u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1da01c: 0x356b00ff  ori         $t3, $t3, 0xFF
    ctx->pc = 0x1da01cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)255);
    // 0x1da020: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1da020u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1da024: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x1da024u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x1da028: 0x354a00ff  ori         $t2, $t2, 0xFF
    ctx->pc = 0x1da028u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)255);
    // 0x1da02c: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x1da02cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x1da030: 0x356b00ff  ori         $t3, $t3, 0xFF
    ctx->pc = 0x1da030u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)255);
    // 0x1da034: 0x200c0000  addi        $t4, $zero, 0x0
    ctx->pc = 0x1da034u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1da038: 0x714b5389  pcpyld      $t2, $t2, $t3
    ctx->pc = 0x1da038u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x1da03c: 0x712a48e8  pminw       $t1, $t1, $t2
    ctx->pc = 0x1da03cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x1da040: 0x718c6389  pcpyld      $t4, $t4, $t4
    ctx->pc = 0x1da040u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x1da044: 0x712c48c8  pmaxw       $t1, $t1, $t4
    ctx->pc = 0x1da044u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 12)));
    // 0x1da048: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA048u;
        // 0x1da04c: 0x7c890000  sq          $t1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA050u;
}

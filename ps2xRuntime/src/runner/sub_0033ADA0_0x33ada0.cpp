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

// Function: sub_0033ADA0
// Address: 0x33ada0 - 0x33add4
void sub_0033ADA0_0x33ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ADA0_0x33ada0");
#endif

    switch (ctx->pc) {
        case 0x33adb0u: goto label_33adb0;
        default: break;
    }

    ctx->pc = 0x33ada0u;

    // 0x33ada0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ada4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33ada8: 0xc0ceb50  jal         func_33AD40
    ctx->pc = 0x33ADA8u;
    SET_GPR_U32(ctx, 31, 0x33ADB0u);
    ctx->pc = 0x33AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AD40u, 0x33ADA8u, 0x33ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADB0u;
label_33adb0:
    // 0x33adb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33adb4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x33adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33adb8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33adb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33adbc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33ADBCu;
    {
        const bool branch_taken_0x33adbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADBCu;
        // 0x33adc0: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33adbc) {
            ctx->pc = 0x33ADC8u;
            goto label_33adc8;
        }
    }
    ctx->pc = 0x33ADC4u;
    // 0x33adc4: 0x90221410  lbu         $v0, 0x1410($at)
    ctx->pc = 0x33adc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5136)));
label_33adc8:
    // 0x33adc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33adc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x33ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADCCu;
        // 0x33add0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ADD4u;
}

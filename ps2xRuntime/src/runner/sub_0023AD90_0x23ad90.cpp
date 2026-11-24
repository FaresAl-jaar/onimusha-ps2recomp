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

// Function: sub_0023AD90
// Address: 0x23ad90 - 0x23adc8
void sub_0023AD90_0x23ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AD90_0x23ad90");
#endif

    ctx->pc = 0x23ad90u;

    // 0x23ad90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ad94: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AD94u;
    {
        const bool branch_taken_0x23ad94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD94u;
        // 0x23ad98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad94) {
            ctx->pc = 0x23ADB0u;
            goto label_23adb0;
        }
    }
    ctx->pc = 0x23AD9Cu;
    // 0x23ad9c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23ada0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ada0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ada4: 0x2484b338  addiu       $a0, $a0, -0x4CC8
    ctx->pc = 0x23ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947640));
    // 0x23ada8: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23ADA8u;
    ctx->pc = 0x23ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADA8u;
    // 0x23adac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23ADB0u;
label_23adb0:
    // 0x23adb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23adb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23adb4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23adb8: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x23adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x23adbc: 0xac458f90  sw          $a1, -0x7070($v0)
    ctx->pc = 0x23adbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4C8F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C8F90u, _value); } while (0);
    // 0x23adc0: 0x3e00008  jr          $ra
    ctx->pc = 0x23ADC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADC0u;
        // 0x23adc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ADC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ADC8u;
}

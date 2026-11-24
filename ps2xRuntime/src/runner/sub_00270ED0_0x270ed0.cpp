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

// Function: sub_00270ED0
// Address: 0x270ed0 - 0x270f14
void sub_00270ED0_0x270ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270ED0_0x270ed0");
#endif

    ctx->pc = 0x270ed0u;

    // 0x270ed0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270ed8: 0x9023fc8f  lbu         $v1, -0x371($at)
    ctx->pc = 0x270ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x270edc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x270EDCu;
    {
        const bool branch_taken_0x270edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x270EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EDCu;
        // 0x270ee0: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270edc) {
            ctx->pc = 0x270F00u;
            goto label_270f00;
        }
    }
    ctx->pc = 0x270EE4u;
    // 0x270ee4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x270ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x270ee8: 0xa422cc50  sh          $v0, -0x33B0($at)
    ctx->pc = 0x270ee8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC50u, _value); } while (0);
    // 0x270eec: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x270eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x270ef0: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x270ef0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC90u, _value); } while (0);
    // 0x270ef4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x270ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x270ef8: 0xa422cc70  sh          $v0, -0x3390($at)
    ctx->pc = 0x270ef8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC70u, _value); } while (0);
    // 0x270efc: 0x0  nop
    ctx->pc = 0x270efcu;
    // NOP
label_270f00:
    // 0x270f00: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x270f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x270f04: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x270f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x270f08: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x270f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x270f0c: 0x8095130  j           func_2544C0
    ctx->pc = 0x270F0Cu;
    ctx->pc = 0x270F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F0Cu;
    // 0x270f10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    sub_002544C0_0x2544c0(rdram, ctx, runtime); return;
    ctx->pc = 0x270F14u;
}

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

// Function: sub_001770F0
// Address: 0x1770f0 - 0x177148
void sub_001770F0_0x1770f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001770F0_0x1770f0");
#endif

    ctx->pc = 0x1770f0u;

    // 0x1770f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1770f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1770f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1770f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1770f8: 0x9024fc8f  lbu         $a0, -0x371($at)
    ctx->pc = 0x1770f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x1770fc: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1770FCu;
    {
        const bool branch_taken_0x1770fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x177100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770FCu;
        // 0x177100: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770fc) {
            ctx->pc = 0x177140u;
            goto label_177140;
        }
    }
    ctx->pc = 0x177104u;
    // 0x177104: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x177104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x177108: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x177108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x17710c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17710cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x177110: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x177110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x177114: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x177114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x177118: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x177118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17711c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x17711cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x177120: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x177120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x177124: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x177124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x177128: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x177128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x17712c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17712cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x177130: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x177130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x177134: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x177134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x177138: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x177138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17713c: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x17713cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
label_177140:
    // 0x177140: 0x3e00008  jr          $ra
    ctx->pc = 0x177140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177148u;
}

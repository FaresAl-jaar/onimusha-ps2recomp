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

// Function: sub_0020ABF8
// Address: 0x20abf8 - 0x20ac28
void sub_0020ABF8_0x20abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ABF8_0x20abf8");
#endif

    ctx->pc = 0x20abf8u;

    // 0x20abf8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x20abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x20abfc: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x20abfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x20ac00: 0x344249e4  ori         $v0, $v0, 0x49E4
    ctx->pc = 0x20ac00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18916);
    // 0x20ac04: 0x34039c40  ori         $v1, $zero, 0x9C40
    ctx->pc = 0x20ac04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x20ac08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20ac0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x20ac10: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x20ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x20ac14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ac18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20ac1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ac20: 0x3e00008  jr          $ra
    ctx->pc = 0x20AC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC20u;
        // 0x20ac24: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AC28u;
}

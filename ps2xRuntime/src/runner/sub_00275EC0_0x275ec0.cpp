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

// Function: sub_00275EC0
// Address: 0x275ec0 - 0x275f14
void sub_00275EC0_0x275ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275EC0_0x275ec0");
#endif

    switch (ctx->pc) {
        case 0x275f00u: goto label_275f00;
        default: break;
    }

    ctx->pc = 0x275ec0u;

    // 0x275ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275ec4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x275ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x275ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275ecc: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x275eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x275ed0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x275ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x275ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275ED4u;
    {
        const bool branch_taken_0x275ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275ED4u;
        // 0x275ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ed4) {
            ctx->pc = 0x275EE8u;
            goto label_275ee8;
        }
    }
    ctx->pc = 0x275EDCu;
    // 0x275edc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x275EDCu;
    {
        const bool branch_taken_0x275edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275edc) {
            ctx->pc = 0x275F08u;
            goto label_275f08;
        }
    }
    ctx->pc = 0x275EE4u;
    // 0x275ee4: 0x0  nop
    ctx->pc = 0x275ee4u;
    // NOP
label_275ee8:
    // 0x275ee8: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x275ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x275eec: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x275eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x275ef0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275EF0u;
    {
        const bool branch_taken_0x275ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EF0u;
        // 0x275ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ef0) {
            ctx->pc = 0x275F00u;
            goto label_275f00;
        }
    }
    ctx->pc = 0x275EF8u;
    // 0x275ef8: 0xc0a259c  jal         func_289670
    ctx->pc = 0x275EF8u;
    SET_GPR_U32(ctx, 31, 0x275F00u);
    ctx->pc = 0x289670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289670u, 0x275EF8u, 0x275F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F00u;
label_275f00:
    // 0x275f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f04: 0x0  nop
    ctx->pc = 0x275f04u;
    // NOP
label_275f08:
    // 0x275f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x275F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F0Cu;
        // 0x275f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275F14u;
}

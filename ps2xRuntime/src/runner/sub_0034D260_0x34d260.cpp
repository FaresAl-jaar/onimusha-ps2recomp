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

// Function: sub_0034D260
// Address: 0x34d260 - 0x34d2b8
void sub_0034D260_0x34d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D260_0x34d260");
#endif

    ctx->pc = 0x34d260u;

    // 0x34d260: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34d264: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34d264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34d268: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D268u;
    {
        const bool branch_taken_0x34d268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d268) {
            ctx->pc = 0x34D278u;
            goto label_34d278;
        }
    }
    ctx->pc = 0x34D270u;
    // 0x34d270: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34D270u;
    {
        const bool branch_taken_0x34d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D270u;
        // 0x34d274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d270) {
            ctx->pc = 0x34D298u;
            goto label_34d298;
        }
    }
    ctx->pc = 0x34D278u;
label_34d278:
    // 0x34d278: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34d278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34d27c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D27Cu;
    {
        const bool branch_taken_0x34d27c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d27c) {
            ctx->pc = 0x34D290u;
            goto label_34d290;
        }
    }
    ctx->pc = 0x34D284u;
    // 0x34d284: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34D284u;
    {
        const bool branch_taken_0x34d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D284u;
        // 0x34d288: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d284) {
            ctx->pc = 0x34D298u;
            goto label_34d298;
        }
    }
    ctx->pc = 0x34D28Cu;
    // 0x34d28c: 0x0  nop
    ctx->pc = 0x34d28cu;
    // NOP
label_34d290:
    // 0x34d290: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34d290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34d294: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34d298:
    // 0x34d298: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34d298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d29c: 0x27838338  addiu       $v1, $gp, -0x7CC8
    ctx->pc = 0x34d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935352));
    // 0x34d2a0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x34d2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34d2a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34d2a8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x34d2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D2B0u;
        // 0x34d2b4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D2B8u;
}

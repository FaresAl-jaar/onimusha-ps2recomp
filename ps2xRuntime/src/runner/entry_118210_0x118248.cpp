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

// Function: entry_118210
// Address: 0x118210 - 0x118248
void entry_118210_0x118248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_118210_0x118248");
#endif

    switch (ctx->pc) {
        case 0x118234u: goto label_118234;
        default: break;
    }

    ctx->pc = 0x118210u;

    // 0x118210: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x118210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x118214: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118218: 0x8c4531b8  lw          $a1, 0x31B8($v0)
    ctx->pc = 0x118218u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4031B8u));
    // 0x11821c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x118220: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118224: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x118224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118228: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x118228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11822c: 0xc04605e  jal         func_118178
    ctx->pc = 0x11822Cu;
    SET_GPR_U32(ctx, 31, 0x118234u);
    ctx->pc = 0x118230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11822Cu;
    // 0x118230: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118178u, 0x11822Cu, 0x118234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118234u;
label_118234:
    // 0x118234: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x118234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11823c: 0x3e00008  jr          $ra
    ctx->pc = 0x11823Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11823Cu;
        // 0x118240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11823Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118244u;
    // 0x118244: 0x0  nop
    ctx->pc = 0x118244u;
    // NOP
    ctx->pc = 0x118248u;
}

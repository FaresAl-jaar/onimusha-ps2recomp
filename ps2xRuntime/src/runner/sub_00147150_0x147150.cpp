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

// Function: sub_00147150
// Address: 0x147150 - 0x1471c0
void sub_00147150_0x147150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147150_0x147150");
#endif

    switch (ctx->pc) {
        case 0x147160u: goto label_147160;
        case 0x147180u: goto label_147180;
        default: break;
    }

    ctx->pc = 0x147150u;

    // 0x147150: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x147150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x147154: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x147154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x147158: 0x248700d0  addiu       $a3, $a0, 0xD0
    ctx->pc = 0x147158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x14715c: 0x0  nop
    ctx->pc = 0x14715cu;
    // NOP
label_147160:
    // 0x147160: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x147160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x147164: 0x8d0600f0  lw          $a2, 0xF0($t0)
    ctx->pc = 0x147164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 240)));
    // 0x147168: 0x24e7ffcc  addiu       $a3, $a3, -0x34
    ctx->pc = 0x147168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967244));
    // 0x14716c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x14716Cu;
    {
        const bool branch_taken_0x14716c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x147170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14716Cu;
        // 0x147170: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14716c) {
            ctx->pc = 0x1471A8u;
            goto label_1471a8;
        }
    }
    ctx->pc = 0x147174u;
    // 0x147174: 0x24e50020  addiu       $a1, $a3, 0x20
    ctx->pc = 0x147174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x147178: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x147178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14717c: 0x0  nop
    ctx->pc = 0x14717cu;
    // NOP
label_147180:
    // 0x147180: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x147180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x147184: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x147184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x147188: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x147188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14718c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x14718cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x147190: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x147190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x147194: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147194u;
    {
        const bool branch_taken_0x147194 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x147194) {
            ctx->pc = 0x147180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147180;
        }
    }
    ctx->pc = 0x14719Cu;
    // 0x14719c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14719Cu;
    {
        const bool branch_taken_0x14719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14719c) {
            ctx->pc = 0x1471B0u;
            goto label_1471b0;
        }
    }
    ctx->pc = 0x1471A4u;
    // 0x1471a4: 0x0  nop
    ctx->pc = 0x1471a4u;
    // NOP
label_1471a8:
    // 0x1471a8: 0xa0e00020  sb          $zero, 0x20($a3)
    ctx->pc = 0x1471a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1471ac: 0x0  nop
    ctx->pc = 0x1471acu;
    // NOP
label_1471b0:
    // 0x1471b0: 0x1520ffeb  bnez        $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1471B0u;
    {
        const bool branch_taken_0x1471b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1471b0) {
            ctx->pc = 0x147160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147160;
        }
    }
    ctx->pc = 0x1471B8u;
    // 0x1471b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1471B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1471B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1471C0u;
}

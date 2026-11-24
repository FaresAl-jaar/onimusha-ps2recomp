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

// Function: sub_0037A1E0
// Address: 0x37a1e0 - 0x37a290
void sub_0037A1E0_0x37a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A1E0_0x37a1e0");
#endif

    ctx->pc = 0x37a1e0u;

    // 0x37a1e0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x37a1e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37a1e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a1e8: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x37A1E8u;
    {
        const bool branch_taken_0x37a1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x37a1e8) {
            ctx->pc = 0x37A230u;
            goto label_37a230;
        }
    }
    ctx->pc = 0x37A1F0u;
    // 0x37a1f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A1F0u;
    {
        const bool branch_taken_0x37a1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a1f0) {
            ctx->pc = 0x37A200u;
            goto label_37a200;
        }
    }
    ctx->pc = 0x37A1F8u;
    // 0x37a1f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x37A1F8u;
    {
        const bool branch_taken_0x37a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a1f8) {
            ctx->pc = 0x37A288u;
            goto label_37a288;
        }
    }
    ctx->pc = 0x37A200u;
label_37a200:
    // 0x37a200: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x37a200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a204: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x37a204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a208: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37a20c: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x37a20cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x37a210: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37a210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37a214: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x37a214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a218: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x37a218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x37a21c: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x37a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x37a220: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x37a220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x37a224: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x37a224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x37a228: 0x34633e00  ori         $v1, $v1, 0x3E00
    ctx->pc = 0x37a228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15872);
    // 0x37a22c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x37a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_37a230:
    // 0x37a230: 0x84832b86  lh          $v1, 0x2B86($a0)
    ctx->pc = 0x37a230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11142)));
    // 0x37a234: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A234u;
    {
        const bool branch_taken_0x37a234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a234) {
            ctx->pc = 0x37A248u;
            goto label_37a248;
        }
    }
    ctx->pc = 0x37A23Cu;
    // 0x37a23c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37a240: 0xa4832b86  sh          $v1, 0x2B86($a0)
    ctx->pc = 0x37a240u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11142), (uint16_t)GPR_U32(ctx, 3));
    // 0x37a244: 0x0  nop
    ctx->pc = 0x37a244u;
    // NOP
label_37a248:
    // 0x37a248: 0x84832b86  lh          $v1, 0x2B86($a0)
    ctx->pc = 0x37a248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11142)));
    // 0x37a24c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A24Cu;
    {
        const bool branch_taken_0x37a24c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x37A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A24Cu;
        // 0x37a250: 0x3c05469c  lui         $a1, 0x469C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a24c) {
            ctx->pc = 0x37A268u;
            goto label_37a268;
        }
    }
    ctx->pc = 0x37A254u;
    // 0x37a254: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x37a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x37a258: 0x34a53e00  ori         $a1, $a1, 0x3E00
    ctx->pc = 0x37a258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15872);
    // 0x37a25c: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x37a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x37a260: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37A260u;
    {
        const bool branch_taken_0x37a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A260u;
        // 0x37a264: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a260) {
            ctx->pc = 0x37A288u;
            goto label_37a288;
        }
    }
    ctx->pc = 0x37A268u;
label_37a268:
    // 0x37a268: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x37a268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x37a26c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A26Cu;
    {
        const bool branch_taken_0x37a26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A26Cu;
        // 0x37a270: 0x3c05469c  lui         $a1, 0x469C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a26c) {
            ctx->pc = 0x37A288u;
            goto label_37a288;
        }
    }
    ctx->pc = 0x37A274u;
    // 0x37a274: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x37a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x37a278: 0x34a53e00  ori         $a1, $a1, 0x3E00
    ctx->pc = 0x37a278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15872);
    // 0x37a27c: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x37a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x37a280: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x37A280u;
    {
        const bool branch_taken_0x37a280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A280u;
        // 0x37a284: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a280) {
            ctx->pc = 0x37A288u;
            goto label_37a288;
        }
    }
    ctx->pc = 0x37A288u;
label_37a288:
    // 0x37a288: 0x3e00008  jr          $ra
    ctx->pc = 0x37A288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A290u;
}

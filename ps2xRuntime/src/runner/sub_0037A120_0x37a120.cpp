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

// Function: sub_0037A120
// Address: 0x37a120 - 0x37a180
void sub_0037A120_0x37a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A120_0x37a120");
#endif

    ctx->pc = 0x37a120u;

    // 0x37a120: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x37a120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37a124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a128: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x37A128u;
    {
        const bool branch_taken_0x37a128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x37a128) {
            ctx->pc = 0x37A168u;
            goto label_37a168;
        }
    }
    ctx->pc = 0x37A130u;
    // 0x37a130: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A130u;
    {
        const bool branch_taken_0x37a130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a130) {
            ctx->pc = 0x37A140u;
            goto label_37a140;
        }
    }
    ctx->pc = 0x37A138u;
    // 0x37a138: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x37A138u;
    {
        const bool branch_taken_0x37a138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a138) {
            ctx->pc = 0x37A178u;
            goto label_37a178;
        }
    }
    ctx->pc = 0x37A140u;
label_37a140:
    // 0x37a140: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x37a140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a144: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x37a144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a148: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x37a148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x37a14c: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x37a14cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x37a150: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x37a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37a154: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x37a154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a158: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37a158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37a15c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x37a15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x37a160: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x37a160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x37a164: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x37a164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
label_37a168:
    // 0x37a168: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x37a168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x37a16c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37A16Cu;
    {
        const bool branch_taken_0x37a16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A16Cu;
        // 0x37a170: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a16c) {
            ctx->pc = 0x37A178u;
            goto label_37a178;
        }
    }
    ctx->pc = 0x37A174u;
    // 0x37a174: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x37a174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_37a178:
    // 0x37a178: 0x3e00008  jr          $ra
    ctx->pc = 0x37A178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A180u;
}

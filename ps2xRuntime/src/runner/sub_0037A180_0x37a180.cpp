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

// Function: sub_0037A180
// Address: 0x37a180 - 0x37a1e0
void sub_0037A180_0x37a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A180_0x37a180");
#endif

    ctx->pc = 0x37a180u;

    // 0x37a180: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x37a180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37a184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a188: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x37A188u;
    {
        const bool branch_taken_0x37a188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x37a188) {
            ctx->pc = 0x37A1C8u;
            goto label_37a1c8;
        }
    }
    ctx->pc = 0x37A190u;
    // 0x37a190: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A190u;
    {
        const bool branch_taken_0x37a190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a190) {
            ctx->pc = 0x37A1A0u;
            goto label_37a1a0;
        }
    }
    ctx->pc = 0x37A198u;
    // 0x37a198: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x37A198u;
    {
        const bool branch_taken_0x37a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a198) {
            ctx->pc = 0x37A1D8u;
            goto label_37a1d8;
        }
    }
    ctx->pc = 0x37A1A0u;
label_37a1a0:
    // 0x37a1a0: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x37a1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a1a4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x37a1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a1a8: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x37a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x37a1ac: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x37a1acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x37a1b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x37a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37a1b4: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x37a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a1b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37a1bc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x37a1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x37a1c0: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x37a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x37a1c4: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x37a1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
label_37a1c8:
    // 0x37a1c8: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x37a1c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x37a1cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37A1CCu;
    {
        const bool branch_taken_0x37a1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1CCu;
        // 0x37a1d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a1cc) {
            ctx->pc = 0x37A1D8u;
            goto label_37a1d8;
        }
    }
    ctx->pc = 0x37A1D4u;
    // 0x37a1d4: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x37a1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_37a1d8:
    // 0x37a1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x37A1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A1E0u;
}

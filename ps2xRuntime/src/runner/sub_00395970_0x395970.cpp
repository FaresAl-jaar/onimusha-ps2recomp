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

// Function: sub_00395970
// Address: 0x395970 - 0x3959c0
void sub_00395970_0x395970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395970_0x395970");
#endif

    ctx->pc = 0x395970u;

    // 0x395970: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x395970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x395974: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x395974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395978: 0x1066000f  beq         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x395978u;
    {
        const bool branch_taken_0x395978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x395978) {
            ctx->pc = 0x3959B8u;
            goto label_3959b8;
        }
    }
    ctx->pc = 0x395980u;
    // 0x395980: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x395980u;
    {
        const bool branch_taken_0x395980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x395980) {
            ctx->pc = 0x395990u;
            goto label_395990;
        }
    }
    ctx->pc = 0x395988u;
    // 0x395988: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x395988u;
    {
        const bool branch_taken_0x395988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395988) {
            ctx->pc = 0x3959B8u;
            goto label_3959b8;
        }
    }
    ctx->pc = 0x395990u;
label_395990:
    // 0x395990: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x395990u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x395994: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x395994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x395998: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39599c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x39599cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3959a0: 0xa48007f2  sh          $zero, 0x7F2($a0)
    ctx->pc = 0x3959a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 0));
    // 0x3959a4: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3959a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3959a8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3959a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3959ac: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3959acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3959b0: 0xa0860821  sb          $a2, 0x821($a0)
    ctx->pc = 0x3959b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x3959b4: 0x0  nop
    ctx->pc = 0x3959b4u;
    // NOP
label_3959b8:
    // 0x3959b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3959B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3959B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3959C0u;
}

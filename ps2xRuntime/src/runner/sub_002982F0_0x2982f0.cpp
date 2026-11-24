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

// Function: sub_002982F0
// Address: 0x2982f0 - 0x298338
void sub_002982F0_0x2982f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002982F0_0x2982f0");
#endif

    switch (ctx->pc) {
        case 0x298300u: goto label_298300;
        default: break;
    }

    ctx->pc = 0x2982f0u;

    // 0x2982f0: 0xa48008ec  sh          $zero, 0x8EC($a0)
    ctx->pc = 0x2982f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2284), (uint16_t)GPR_U32(ctx, 0));
    // 0x2982f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2982f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982f8: 0xa48008ea  sh          $zero, 0x8EA($a0)
    ctx->pc = 0x2982f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2282), (uint16_t)GPR_U32(ctx, 0));
    // 0x2982fc: 0x0  nop
    ctx->pc = 0x2982fcu;
    // NOP
label_298300:
    // 0x298300: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x298300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x298304: 0xa0a008ee  sb          $zero, 0x8EE($a1)
    ctx->pc = 0x298304u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2286), (uint8_t)GPR_U32(ctx, 0));
    // 0x298308: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x298308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x29830c: 0xa0a008ef  sb          $zero, 0x8EF($a1)
    ctx->pc = 0x29830cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2287), (uint8_t)GPR_U32(ctx, 0));
    // 0x298310: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x298310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x298314: 0xa0a008f0  sb          $zero, 0x8F0($a1)
    ctx->pc = 0x298314u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2288), (uint8_t)GPR_U32(ctx, 0));
    // 0x298318: 0xa0a008f1  sb          $zero, 0x8F1($a1)
    ctx->pc = 0x298318u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2289), (uint8_t)GPR_U32(ctx, 0));
    // 0x29831c: 0xa0a008f2  sb          $zero, 0x8F2($a1)
    ctx->pc = 0x29831cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2290), (uint8_t)GPR_U32(ctx, 0));
    // 0x298320: 0xa0a008f3  sb          $zero, 0x8F3($a1)
    ctx->pc = 0x298320u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2291), (uint8_t)GPR_U32(ctx, 0));
    // 0x298324: 0xa0a008f4  sb          $zero, 0x8F4($a1)
    ctx->pc = 0x298324u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2292), (uint8_t)GPR_U32(ctx, 0));
    // 0x298328: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x298328u;
    {
        const bool branch_taken_0x298328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298328u;
        // 0x29832c: 0xa0a008f5  sb          $zero, 0x8F5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2293), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298328) {
            ctx->pc = 0x298300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298300;
        }
    }
    ctx->pc = 0x298330u;
    // 0x298330: 0x3e00008  jr          $ra
    ctx->pc = 0x298330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298338u;
}

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

// Function: sub_00395490
// Address: 0x395490 - 0x395540
void sub_00395490_0x395490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395490_0x395490");
#endif

    ctx->pc = 0x395490u;

    // 0x395490: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x395490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x395494: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x395494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395498: 0x1066000f  beq         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x395498u;
    {
        const bool branch_taken_0x395498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x395498) {
            ctx->pc = 0x3954D8u;
            goto label_3954d8;
        }
    }
    ctx->pc = 0x3954A0u;
    // 0x3954a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3954A0u;
    {
        const bool branch_taken_0x3954a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3954a0) {
            ctx->pc = 0x3954B0u;
            goto label_3954b0;
        }
    }
    ctx->pc = 0x3954A8u;
    // 0x3954a8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3954A8u;
    {
        const bool branch_taken_0x3954a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3954a8) {
            ctx->pc = 0x395538u;
            goto label_395538;
        }
    }
    ctx->pc = 0x3954B0u;
label_3954b0:
    // 0x3954b0: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3954b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3954b4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3954b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3954b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3954b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3954bc: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x3954bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3954c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3954c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3954c4: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3954c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3954c8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3954c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3954cc: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3954ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3954d0: 0xa0860821  sb          $a2, 0x821($a0)
    ctx->pc = 0x3954d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x3954d4: 0x0  nop
    ctx->pc = 0x3954d4u;
    // NOP
label_3954d8:
    // 0x3954d8: 0x84832b34  lh          $v1, 0x2B34($a0)
    ctx->pc = 0x3954d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11060)));
    // 0x3954dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3954DCu;
    {
        const bool branch_taken_0x3954dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3954dc) {
            ctx->pc = 0x3954F0u;
            goto label_3954f0;
        }
    }
    ctx->pc = 0x3954E4u;
    // 0x3954e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3954e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3954e8: 0xa4832b34  sh          $v1, 0x2B34($a0)
    ctx->pc = 0x3954e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11060), (uint16_t)GPR_U32(ctx, 3));
    // 0x3954ec: 0x0  nop
    ctx->pc = 0x3954ecu;
    // NOP
label_3954f0:
    // 0x3954f0: 0x84832b34  lh          $v1, 0x2B34($a0)
    ctx->pc = 0x3954f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11060)));
    // 0x3954f4: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3954F4u;
    {
        const bool branch_taken_0x3954f4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3954F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954F4u;
        // 0x3954f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954f4) {
            ctx->pc = 0x395508u;
            goto label_395508;
        }
    }
    ctx->pc = 0x3954FCu;
    // 0x3954fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3954FCu;
    {
        const bool branch_taken_0x3954fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954FCu;
        // 0x395500: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954fc) {
            ctx->pc = 0x395538u;
            goto label_395538;
        }
    }
    ctx->pc = 0x395504u;
    // 0x395504: 0x0  nop
    ctx->pc = 0x395504u;
    // NOP
label_395508:
    // 0x395508: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x395508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x39550c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x39550Cu;
    {
        const bool branch_taken_0x39550c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39550c) {
            ctx->pc = 0x395538u;
            goto label_395538;
        }
    }
    ctx->pc = 0x395514u;
    // 0x395514: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x395514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x395518: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39551c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x39551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x395520: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x395520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x395524: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x395524u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x395528: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x395528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39552c: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x39552cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x395530: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x395530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x395534: 0x0  nop
    ctx->pc = 0x395534u;
    // NOP
label_395538:
    // 0x395538: 0x3e00008  jr          $ra
    ctx->pc = 0x395538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395540u;
}

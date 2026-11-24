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

// Function: sub_001A70A0
// Address: 0x1a70a0 - 0x1a7128
void sub_001A70A0_0x1a70a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A70A0_0x1a70a0");
#endif

    ctx->pc = 0x1a70a0u;

    // 0x1a70a0: 0x8c8678b0  lw          $a2, 0x78B0($a0)
    ctx->pc = 0x1a70a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30896)));
    // 0x1a70a4: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1a70a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a70a8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1a70a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a70ac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a70b0: 0xac8578b0  sw          $a1, 0x78B0($a0)
    ctx->pc = 0x1a70b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30896), GPR_U32(ctx, 5));
    // 0x1a70b4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1a70b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a70b8: 0xdc837820  ld          $v1, 0x7820($a0)
    ctx->pc = 0x1a70b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 30752)));
    // 0x1a70bc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a70c0: 0xfca37850  sd          $v1, 0x7850($a1)
    ctx->pc = 0x1a70c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 30800), GPR_U64(ctx, 3));
    // 0x1a70c4: 0x8c837828  lw          $v1, 0x7828($a0)
    ctx->pc = 0x1a70c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30760)));
    // 0x1a70c8: 0xaca37858  sw          $v1, 0x7858($a1)
    ctx->pc = 0x1a70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 30808), GPR_U32(ctx, 3));
    // 0x1a70cc: 0x8c83782c  lw          $v1, 0x782C($a0)
    ctx->pc = 0x1a70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30764)));
    // 0x1a70d0: 0xaca3785c  sw          $v1, 0x785C($a1)
    ctx->pc = 0x1a70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 30812), GPR_U32(ctx, 3));
    // 0x1a70d4: 0x8c837830  lw          $v1, 0x7830($a0)
    ctx->pc = 0x1a70d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30768)));
    // 0x1a70d8: 0xaca37860  sw          $v1, 0x7860($a1)
    ctx->pc = 0x1a70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 30816), GPR_U32(ctx, 3));
    // 0x1a70dc: 0x8c837834  lw          $v1, 0x7834($a0)
    ctx->pc = 0x1a70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30772)));
    // 0x1a70e0: 0xaca37864  sw          $v1, 0x7864($a1)
    ctx->pc = 0x1a70e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 30820), GPR_U32(ctx, 3));
    // 0x1a70e4: 0x8c837838  lw          $v1, 0x7838($a0)
    ctx->pc = 0x1a70e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30776)));
    // 0x1a70e8: 0xaca37868  sw          $v1, 0x7868($a1)
    ctx->pc = 0x1a70e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 30824), GPR_U32(ctx, 3));
    // 0x1a70ec: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1a70ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1a70f0: 0xaca3786c  sw          $v1, 0x786C($a1)
    ctx->pc = 0x1a70f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 30828), GPR_U32(ctx, 3));
    // 0x1a70f4: 0x8c837840  lw          $v1, 0x7840($a0)
    ctx->pc = 0x1a70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1a70f8: 0xaca37870  sw          $v1, 0x7870($a1)
    ctx->pc = 0x1a70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 30832), GPR_U32(ctx, 3));
    // 0x1a70fc: 0x90837844  lbu         $v1, 0x7844($a0)
    ctx->pc = 0x1a70fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30788)));
    // 0x1a7100: 0xa0a37874  sb          $v1, 0x7874($a1)
    ctx->pc = 0x1a7100u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30836), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a7104: 0x90837845  lbu         $v1, 0x7845($a0)
    ctx->pc = 0x1a7104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30789)));
    // 0x1a7108: 0xa0a37875  sb          $v1, 0x7875($a1)
    ctx->pc = 0x1a7108u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a710c: 0x90837846  lbu         $v1, 0x7846($a0)
    ctx->pc = 0x1a710cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30790)));
    // 0x1a7110: 0xa0a37876  sb          $v1, 0x7876($a1)
    ctx->pc = 0x1a7110u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a7114: 0x90837847  lbu         $v1, 0x7847($a0)
    ctx->pc = 0x1a7114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30791)));
    // 0x1a7118: 0xa0a37877  sb          $v1, 0x7877($a1)
    ctx->pc = 0x1a7118u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30839), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a711c: 0x8c837848  lw          $v1, 0x7848($a0)
    ctx->pc = 0x1a711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30792)));
    // 0x1a7120: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7120u;
        // 0x1a7124: 0xaca37878  sw          $v1, 0x7878($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 30840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7128u;
}

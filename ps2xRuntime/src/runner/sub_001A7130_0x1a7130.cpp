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

// Function: sub_001A7130
// Address: 0x1a7130 - 0x1a71b8
void sub_001A7130_0x1a7130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7130_0x1a7130");
#endif

    ctx->pc = 0x1a7130u;

    // 0x1a7130: 0x8c8378b0  lw          $v1, 0x78B0($a0)
    ctx->pc = 0x1a7130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30896)));
    // 0x1a7134: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1a7134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a7138: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1a7138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a713c: 0xac8578b0  sw          $a1, 0x78B0($a0)
    ctx->pc = 0x1a713cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30896), GPR_U32(ctx, 5));
    // 0x1a7140: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a7140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7144: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a7144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a7148: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1a7148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a714c: 0xdca37850  ld          $v1, 0x7850($a1)
    ctx->pc = 0x1a714cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 30800)));
    // 0x1a7150: 0xfc837820  sd          $v1, 0x7820($a0)
    ctx->pc = 0x1a7150u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 30752), GPR_U64(ctx, 3));
    // 0x1a7154: 0x8ca37858  lw          $v1, 0x7858($a1)
    ctx->pc = 0x1a7154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30808)));
    // 0x1a7158: 0xac837828  sw          $v1, 0x7828($a0)
    ctx->pc = 0x1a7158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30760), GPR_U32(ctx, 3));
    // 0x1a715c: 0x8ca3785c  lw          $v1, 0x785C($a1)
    ctx->pc = 0x1a715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30812)));
    // 0x1a7160: 0xac83782c  sw          $v1, 0x782C($a0)
    ctx->pc = 0x1a7160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30764), GPR_U32(ctx, 3));
    // 0x1a7164: 0x8ca37860  lw          $v1, 0x7860($a1)
    ctx->pc = 0x1a7164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30816)));
    // 0x1a7168: 0xac837830  sw          $v1, 0x7830($a0)
    ctx->pc = 0x1a7168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30768), GPR_U32(ctx, 3));
    // 0x1a716c: 0x8ca37864  lw          $v1, 0x7864($a1)
    ctx->pc = 0x1a716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30820)));
    // 0x1a7170: 0xac837834  sw          $v1, 0x7834($a0)
    ctx->pc = 0x1a7170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30772), GPR_U32(ctx, 3));
    // 0x1a7174: 0x8ca37868  lw          $v1, 0x7868($a1)
    ctx->pc = 0x1a7174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30824)));
    // 0x1a7178: 0xac837838  sw          $v1, 0x7838($a0)
    ctx->pc = 0x1a7178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30776), GPR_U32(ctx, 3));
    // 0x1a717c: 0x8ca3786c  lw          $v1, 0x786C($a1)
    ctx->pc = 0x1a717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30828)));
    // 0x1a7180: 0xac83783c  sw          $v1, 0x783C($a0)
    ctx->pc = 0x1a7180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30780), GPR_U32(ctx, 3));
    // 0x1a7184: 0x8ca37870  lw          $v1, 0x7870($a1)
    ctx->pc = 0x1a7184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30832)));
    // 0x1a7188: 0xac837840  sw          $v1, 0x7840($a0)
    ctx->pc = 0x1a7188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30784), GPR_U32(ctx, 3));
    // 0x1a718c: 0x90a37874  lbu         $v1, 0x7874($a1)
    ctx->pc = 0x1a718cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30836)));
    // 0x1a7190: 0xa0837844  sb          $v1, 0x7844($a0)
    ctx->pc = 0x1a7190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30788), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a7194: 0x90a37875  lbu         $v1, 0x7875($a1)
    ctx->pc = 0x1a7194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30837)));
    // 0x1a7198: 0xa0837845  sb          $v1, 0x7845($a0)
    ctx->pc = 0x1a7198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30789), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a719c: 0x90a37876  lbu         $v1, 0x7876($a1)
    ctx->pc = 0x1a719cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30838)));
    // 0x1a71a0: 0xa0837846  sb          $v1, 0x7846($a0)
    ctx->pc = 0x1a71a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30790), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a71a4: 0x90a37877  lbu         $v1, 0x7877($a1)
    ctx->pc = 0x1a71a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30839)));
    // 0x1a71a8: 0xa0837847  sb          $v1, 0x7847($a0)
    ctx->pc = 0x1a71a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30791), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a71ac: 0x8ca37878  lw          $v1, 0x7878($a1)
    ctx->pc = 0x1a71acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30840)));
    // 0x1a71b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A71B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71B0u;
        // 0x1a71b4: 0xac837848  sw          $v1, 0x7848($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30792), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A71B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A71B8u;
}

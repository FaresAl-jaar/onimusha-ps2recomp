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

// Function: sub_00329620
// Address: 0x329620 - 0x329690
void sub_00329620_0x329620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329620_0x329620");
#endif

    ctx->pc = 0x329620u;

    // 0x329620: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x329620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329624: 0x90a3009f  lbu         $v1, 0x9F($a1)
    ctx->pc = 0x329624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 159)));
    // 0x329628: 0xa0a30093  sb          $v1, 0x93($a1)
    ctx->pc = 0x329628u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 147), (uint8_t)GPR_U32(ctx, 3));
    // 0x32962c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x32962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329630: 0x8463001a  lh          $v1, 0x1A($v1)
    ctx->pc = 0x329630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x329634: 0xa4a3008c  sh          $v1, 0x8C($a1)
    ctx->pc = 0x329634u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 140), (uint16_t)GPR_U32(ctx, 3));
    // 0x329638: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x329638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x32963c: 0x8463001c  lh          $v1, 0x1C($v1)
    ctx->pc = 0x32963cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x329640: 0xa4a3008e  sh          $v1, 0x8E($a1)
    ctx->pc = 0x329640u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x329644: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x329644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329648: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x329648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x32964c: 0xa0a30091  sb          $v1, 0x91($a1)
    ctx->pc = 0x32964cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 145), (uint8_t)GPR_U32(ctx, 3));
    // 0x329650: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x329650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329654: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x329654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x329658: 0xa0a30092  sb          $v1, 0x92($a1)
    ctx->pc = 0x329658u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 146), (uint8_t)GPR_U32(ctx, 3));
    // 0x32965c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x32965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329660: 0x84630022  lh          $v1, 0x22($v1)
    ctx->pc = 0x329660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x329664: 0xa0a30090  sb          $v1, 0x90($a1)
    ctx->pc = 0x329664u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 144), (uint8_t)GPR_U32(ctx, 3));
    // 0x329668: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x329668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x32966c: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x32966cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x329670: 0xa4a30098  sh          $v1, 0x98($a1)
    ctx->pc = 0x329670u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x329674: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x329674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329678: 0x84630042  lh          $v1, 0x42($v1)
    ctx->pc = 0x329678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x32967c: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x32967cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x329680: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x329680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329684: 0x906300a0  lbu         $v1, 0xA0($v1)
    ctx->pc = 0x329684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x329688: 0x3e00008  jr          $ra
    ctx->pc = 0x329688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329688u;
        // 0x32968c: 0xa0a30094  sb          $v1, 0x94($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 148), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329690u;
}

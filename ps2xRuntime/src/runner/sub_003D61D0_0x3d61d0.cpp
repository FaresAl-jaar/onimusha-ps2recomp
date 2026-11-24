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

// Function: sub_003D61D0
// Address: 0x3d61d0 - 0x3d6238
void sub_003D61D0_0x3d61d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D61D0_0x3d61d0");
#endif

    ctx->pc = 0x3d61d0u;

    // 0x3d61d0: 0xa4802b94  sh          $zero, 0x2B94($a0)
    ctx->pc = 0x3d61d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11156), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d61d4: 0xac802b54  sw          $zero, 0x2B54($a0)
    ctx->pc = 0x3d61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11092), GPR_U32(ctx, 0));
    // 0x3d61d8: 0xa0802b58  sb          $zero, 0x2B58($a0)
    ctx->pc = 0x3d61d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11096), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d61dc: 0xa0802b59  sb          $zero, 0x2B59($a0)
    ctx->pc = 0x3d61dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d61e0: 0xac802b5c  sw          $zero, 0x2B5C($a0)
    ctx->pc = 0x3d61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11100), GPR_U32(ctx, 0));
    // 0x3d61e4: 0xa0802b60  sb          $zero, 0x2B60($a0)
    ctx->pc = 0x3d61e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11104), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d61e8: 0xa0802b61  sb          $zero, 0x2B61($a0)
    ctx->pc = 0x3d61e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11105), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d61ec: 0xac802b64  sw          $zero, 0x2B64($a0)
    ctx->pc = 0x3d61ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11108), GPR_U32(ctx, 0));
    // 0x3d61f0: 0xa0802b68  sb          $zero, 0x2B68($a0)
    ctx->pc = 0x3d61f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11112), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d61f4: 0xa0802b69  sb          $zero, 0x2B69($a0)
    ctx->pc = 0x3d61f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11113), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d61f8: 0xac802b6c  sw          $zero, 0x2B6C($a0)
    ctx->pc = 0x3d61f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11116), GPR_U32(ctx, 0));
    // 0x3d61fc: 0xa0802b70  sb          $zero, 0x2B70($a0)
    ctx->pc = 0x3d61fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11120), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6200: 0xa0802b71  sb          $zero, 0x2B71($a0)
    ctx->pc = 0x3d6200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11121), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6204: 0xac802b74  sw          $zero, 0x2B74($a0)
    ctx->pc = 0x3d6204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11124), GPR_U32(ctx, 0));
    // 0x3d6208: 0xa0802b78  sb          $zero, 0x2B78($a0)
    ctx->pc = 0x3d6208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11128), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d620c: 0xa0802b79  sb          $zero, 0x2B79($a0)
    ctx->pc = 0x3d620cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11129), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6210: 0xac802b7c  sw          $zero, 0x2B7C($a0)
    ctx->pc = 0x3d6210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11132), GPR_U32(ctx, 0));
    // 0x3d6214: 0xa0802b80  sb          $zero, 0x2B80($a0)
    ctx->pc = 0x3d6214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11136), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6218: 0xa0802b81  sb          $zero, 0x2B81($a0)
    ctx->pc = 0x3d6218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11137), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d621c: 0xac802b84  sw          $zero, 0x2B84($a0)
    ctx->pc = 0x3d621cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11140), GPR_U32(ctx, 0));
    // 0x3d6220: 0xa0802b88  sb          $zero, 0x2B88($a0)
    ctx->pc = 0x3d6220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11144), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6224: 0xa0802b89  sb          $zero, 0x2B89($a0)
    ctx->pc = 0x3d6224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11145), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6228: 0xac802b8c  sw          $zero, 0x2B8C($a0)
    ctx->pc = 0x3d6228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11148), GPR_U32(ctx, 0));
    // 0x3d622c: 0xa0802b90  sb          $zero, 0x2B90($a0)
    ctx->pc = 0x3d622cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11152), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6230: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6230u;
        // 0x3d6234: 0xa0802b91  sb          $zero, 0x2B91($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11153), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6238u;
}

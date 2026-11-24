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

// Function: sub_001F3570
// Address: 0x1f3570 - 0x1f35d0
void sub_001F3570_0x1f3570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3570_0x1f3570");
#endif

    ctx->pc = 0x1f3570u;

    // 0x1f3570: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f3570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1f3574: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x1f3574u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f3578: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x1f3578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f357c: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x1f357cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3580: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x1f3580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1f3584: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1f3584u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3588: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1f3588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f358c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1f358cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1f3590: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f3590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f3594: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1f3594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1f3598: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1f3598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1f359c: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1f359cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1f35a0: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1f35a0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1f35a4: 0x78a80020  lq          $t0, 0x20($a1)
    ctx->pc = 0x1f35a4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1f35a8: 0x78a60030  lq          $a2, 0x30($a1)
    ctx->pc = 0x1f35a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f35ac: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x1f35acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1f35b0: 0x7c890020  sq          $t1, 0x20($a0)
    ctx->pc = 0x1f35b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 9));
    // 0x1f35b4: 0x7c880030  sq          $t0, 0x30($a0)
    ctx->pc = 0x1f35b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 8));
    // 0x1f35b8: 0x7c860040  sq          $a2, 0x40($a0)
    ctx->pc = 0x1f35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 6));
    // 0x1f35bc: 0x7c830050  sq          $v1, 0x50($a0)
    ctx->pc = 0x1f35bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 3));
    // 0x1f35c0: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x1f35c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f35c4: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x1f35c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f35c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F35C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35C8u;
        // 0x1f35cc: 0xa487000a  sh          $a3, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F35C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F35D0u;
}

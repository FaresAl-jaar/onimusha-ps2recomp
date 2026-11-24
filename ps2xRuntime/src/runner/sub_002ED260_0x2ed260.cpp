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

// Function: sub_002ED260
// Address: 0x2ed260 - 0x2ed298
void sub_002ED260_0x2ed260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED260_0x2ed260");
#endif

    ctx->pc = 0x2ed260u;

    // 0x2ed260: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2ed260u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ed264: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed268: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED268u;
    {
        const bool branch_taken_0x2ed268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed268) {
            ctx->pc = 0x2ED290u;
            goto label_2ed290;
        }
    }
    ctx->pc = 0x2ED270u;
    // 0x2ed270: 0x8ca406c8  lw          $a0, 0x6C8($a1)
    ctx->pc = 0x2ed270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1736)));
    // 0x2ed274: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2ed274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2ed278: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ed278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ed27c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED27Cu;
    {
        const bool branch_taken_0x2ed27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed27c) {
            ctx->pc = 0x2ED290u;
            goto label_2ed290;
        }
    }
    ctx->pc = 0x2ED284u;
    // 0x2ed284: 0x90a32ab0  lbu         $v1, 0x2AB0($a1)
    ctx->pc = 0x2ed284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10928)));
    // 0x2ed288: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2ed288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2ed28c: 0xa0a32ab0  sb          $v1, 0x2AB0($a1)
    ctx->pc = 0x2ed28cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10928), (uint8_t)GPR_U32(ctx, 3));
label_2ed290:
    // 0x2ed290: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED298u;
}

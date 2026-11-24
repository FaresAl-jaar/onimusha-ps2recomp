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

// Function: sub_00380660
// Address: 0x380660 - 0x3806a0
void sub_00380660_0x380660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380660_0x380660");
#endif

    ctx->pc = 0x380660u;

    // 0x380660: 0x90850735  lbu         $a1, 0x735($a0)
    ctx->pc = 0x380660u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1845)));
    // 0x380664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x380664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380668: 0x30a500fd  andi        $a1, $a1, 0xFD
    ctx->pc = 0x380668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)253);
    // 0x38066c: 0xa0850735  sb          $a1, 0x735($a0)
    ctx->pc = 0x38066cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1845), (uint8_t)GPR_U32(ctx, 5));
    // 0x380670: 0x90850735  lbu         $a1, 0x735($a0)
    ctx->pc = 0x380670u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1845)));
    // 0x380674: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x380674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x380678: 0xa0850735  sb          $a1, 0x735($a0)
    ctx->pc = 0x380678u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1845), (uint8_t)GPR_U32(ctx, 5));
    // 0x38067c: 0x90850733  lbu         $a1, 0x733($a0)
    ctx->pc = 0x38067cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1843)));
    // 0x380680: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x380680u;
    {
        const bool branch_taken_0x380680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x380680) {
            ctx->pc = 0x380698u;
            goto label_380698;
        }
    }
    ctx->pc = 0x380688u;
    // 0x380688: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x380688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x38068c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x38068cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x380690: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x380690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x380694: 0x0  nop
    ctx->pc = 0x380694u;
    // NOP
label_380698:
    // 0x380698: 0x3e00008  jr          $ra
    ctx->pc = 0x380698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3806A0u;
}

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

// Function: sub_00380620
// Address: 0x380620 - 0x380660
void sub_00380620_0x380620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380620_0x380620");
#endif

    ctx->pc = 0x380620u;

    // 0x380620: 0x90850735  lbu         $a1, 0x735($a0)
    ctx->pc = 0x380620u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1845)));
    // 0x380624: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x380624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380628: 0x30a500fe  andi        $a1, $a1, 0xFE
    ctx->pc = 0x380628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)254);
    // 0x38062c: 0xa0850735  sb          $a1, 0x735($a0)
    ctx->pc = 0x38062cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1845), (uint8_t)GPR_U32(ctx, 5));
    // 0x380630: 0x90850735  lbu         $a1, 0x735($a0)
    ctx->pc = 0x380630u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1845)));
    // 0x380634: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x380634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x380638: 0xa0850735  sb          $a1, 0x735($a0)
    ctx->pc = 0x380638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1845), (uint8_t)GPR_U32(ctx, 5));
    // 0x38063c: 0x90850733  lbu         $a1, 0x733($a0)
    ctx->pc = 0x38063cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1843)));
    // 0x380640: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x380640u;
    {
        const bool branch_taken_0x380640 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x380640) {
            ctx->pc = 0x380658u;
            goto label_380658;
        }
    }
    ctx->pc = 0x380648u;
    // 0x380648: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x380648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x38064c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x38064cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x380650: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x380650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x380654: 0x0  nop
    ctx->pc = 0x380654u;
    // NOP
label_380658:
    // 0x380658: 0x3e00008  jr          $ra
    ctx->pc = 0x380658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380660u;
}

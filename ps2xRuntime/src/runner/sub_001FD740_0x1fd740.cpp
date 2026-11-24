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

// Function: sub_001FD740
// Address: 0x1fd740 - 0x1fd764
void sub_001FD740_0x1fd740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD740_0x1fd740");
#endif

    ctx->pc = 0x1fd740u;

    // 0x1fd740: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1fd740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x1fd744: 0xac443f34  sw          $a0, 0x3F34($v0)
    ctx->pc = 0x1fd744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x873F34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x873F34u, _value); } while (0);
    // 0x1fd748: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD748u;
    {
        const bool branch_taken_0x1fd748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD748u;
        // 0x1fd74c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd748) {
            ctx->pc = 0x1FD75Cu;
            goto label_1fd75c;
        }
    }
    ctx->pc = 0x1FD750u;
    // 0x1fd750: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fd750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd754: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1fd754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1fd758: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1fd758u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1fd75c:
    // 0x1fd75c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD764u;
}

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

// Function: sub_00221048
// Address: 0x221048 - 0x2210d4
void sub_00221048_0x221048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221048_0x221048");
#endif

    ctx->pc = 0x221048u;

    // 0x221048: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x221048u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22104c: 0x8cac000c  lw          $t4, 0xC($a1)
    ctx->pc = 0x22104cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x221050: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x221050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x221054: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x221054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x221058: 0x8cab0014  lw          $t3, 0x14($a1)
    ctx->pc = 0x221058u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x22105c: 0x1846018  mult        $t4, $t4, $a0
    ctx->pc = 0x22105cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x221060: 0x84ad001e  lh          $t5, 0x1E($a1)
    ctx->pc = 0x221060u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x221064: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x221064u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x221068: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x221068u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22106c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x22106cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x221070: 0xb1940  sll         $v1, $t3, 5
    ctx->pc = 0x221070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x221074: 0xd2940  sll         $a1, $t5, 5
    ctx->pc = 0x221074u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x221078: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x221078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x22107c: 0x1244818  mult        $t1, $t1, $a0
    ctx->pc = 0x22107cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x221080: 0xad2823  subu        $a1, $a1, $t5
    ctx->pc = 0x221080u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x221084: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x221084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x221088: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x221088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x22108c: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x22108cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x221090: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x221090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x221094: 0x10c4023  subu        $t0, $t0, $t4
    ctx->pc = 0x221094u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x221098: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221098u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22109c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22109cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2210a0: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x2210a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x2210a4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2210a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2210a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2210a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2210ac: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2210acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2210b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2210b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2210b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2210b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2210b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2210b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2210bc: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x2210bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2210c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2210c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2210c4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2210c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2210c8: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x2210c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x2210cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2210CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2210D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210CCu;
        // 0x2210d0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2210CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2210D4u;
}

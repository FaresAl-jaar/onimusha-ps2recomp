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

// Function: sub_0022BF50
// Address: 0x22bf50 - 0x22bfcc
void sub_0022BF50_0x22bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BF50_0x22bf50");
#endif

    ctx->pc = 0x22bf50u;

    // 0x22bf50: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22bf50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf54: 0x84e20098  lh          $v0, 0x98($a3)
    ctx->pc = 0x22bf54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x22bf58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BF58u;
    {
        const bool branch_taken_0x22bf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF58u;
        // 0x22bf5c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf58) {
            ctx->pc = 0x22BF80u;
            goto label_22bf80;
        }
    }
    ctx->pc = 0x22BF60u;
    // 0x22bf60: 0x80e2000f  lb          $v0, 0xF($a3)
    ctx->pc = 0x22bf60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
    // 0x22bf64: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x22bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x22bf68: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x22bf68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22bf6c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22BF6Cu;
    {
        const bool branch_taken_0x22bf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf6c) {
            ctx->pc = 0x22BF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BF6Cu;
            // 0x22bf70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF74u;
            goto label_22bf74;
        }
    }
    ctx->pc = 0x22BF74u;
label_22bf74:
    // 0x22bf74: 0x1812  mflo        $v1
    ctx->pc = 0x22bf74u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x22bf78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22BF78u;
    {
        const bool branch_taken_0x22bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF78u;
        // 0x22bf7c: 0xace00074  sw          $zero, 0x74($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf78) {
            ctx->pc = 0x22BFB4u;
            goto label_22bfb4;
        }
    }
    ctx->pc = 0x22BF80u;
label_22bf80:
    // 0x22bf80: 0x80e2000d  lb          $v0, 0xD($a3)
    ctx->pc = 0x22bf80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x22bf84: 0x80e5000e  lb          $a1, 0xE($a3)
    ctx->pc = 0x22bf84u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x22bf88: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x22bf88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22bf8c: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x22bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x22bf90: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x22bf90u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x22bf94: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x22bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x22bf98: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x22bf98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x22bf9c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x22bf9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22bfa0: 0x70c2001a  div1        $zero, $a2, $v0
    ctx->pc = 0x22bfa0u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 6); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x22bfa4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22BFA4u;
    {
        const bool branch_taken_0x22bfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bfa4) {
            ctx->pc = 0x22BFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BFA4u;
            // 0x22bfa8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BFACu;
            goto label_22bfac;
        }
    }
    ctx->pc = 0x22BFACu;
label_22bfac:
    // 0x22bfac: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x22bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x22bfb0: 0x70001812  mflo1       $v1
    ctx->pc = 0x22bfb0u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
label_22bfb4:
    // 0x22bfb4: 0xace3004c  sw          $v1, 0x4C($a3)
    ctx->pc = 0x22bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x22bfb8: 0xace000f4  sw          $zero, 0xF4($a3)
    ctx->pc = 0x22bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    // 0x22bfbc: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x22bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x22bfc0: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x22bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x22bfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x22BFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFC4u;
        // 0x22bfc8: 0xace000f8  sw          $zero, 0xF8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BFCCu;
}

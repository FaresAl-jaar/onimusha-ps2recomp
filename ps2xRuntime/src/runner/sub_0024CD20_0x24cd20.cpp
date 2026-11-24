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

// Function: sub_0024CD20
// Address: 0x24cd20 - 0x24cd9c
void sub_0024CD20_0x24cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CD20_0x24cd20");
#endif

    ctx->pc = 0x24cd20u;

    // 0x24cd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24cd24: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24cd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd28: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CD28u;
    {
        const bool branch_taken_0x24cd28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD28u;
        // 0x24cd2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd28) {
            ctx->pc = 0x24CD48u;
            goto label_24cd48;
        }
    }
    ctx->pc = 0x24CD30u;
    // 0x24cd30: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24cd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cd38: 0x24a5dd68  addiu       $a1, $a1, -0x2298
    ctx->pc = 0x24cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958440));
    // 0x24cd3c: 0x8093184  j           func_24C610
    ctx->pc = 0x24CD3Cu;
    ctx->pc = 0x24CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD3Cu;
    // 0x24cd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C610u;
    sub_0024C610_0x24c610(rdram, ctx, runtime); return;
    ctx->pc = 0x24CD44u;
    // 0x24cd44: 0x0  nop
    ctx->pc = 0x24cd44u;
    // NOP
label_24cd48:
    // 0x24cd48: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x24cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x24cd4c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x24cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x24cd50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24cd54: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x24cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24cd58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24cd5c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x24cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x24cd60: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x24cd60u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24cd64: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24CD64u;
    {
        const bool branch_taken_0x24cd64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd64) {
            ctx->pc = 0x24CD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CD64u;
            // 0x24cd68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CD6Cu;
            goto label_24cd6c;
        }
    }
    ctx->pc = 0x24CD6Cu;
label_24cd6c:
    // 0x24cd6c: 0x1012  mflo        $v0
    ctx->pc = 0x24cd6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24cd70: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x24cd70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24cd74: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x24cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x24cd78: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x24cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x24cd7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cd80: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x24cd80u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24cd84: 0x1812  mflo        $v1
    ctx->pc = 0x24cd84u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x24cd88: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x24cd88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24cd8c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x24cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x24cd90: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x24cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x24cd94: 0x3e00008  jr          $ra
    ctx->pc = 0x24CD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD94u;
        // 0x24cd98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CD9Cu;
}

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

// Function: sub_0039BF60
// Address: 0x39bf60 - 0x39bfc8
void sub_0039BF60_0x39bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BF60_0x39bf60");
#endif

    switch (ctx->pc) {
        case 0x39bf78u: goto label_39bf78;
        case 0x39bfb8u: goto label_39bfb8;
        default: break;
    }

    ctx->pc = 0x39bf60u;

    // 0x39bf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39bf64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39bf68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39bf6c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x39bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x39bf70: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x39BF70u;
    SET_GPR_U32(ctx, 31, 0x39BF78u);
    ctx->pc = 0x39BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF70u;
    // 0x39bf74: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x39BF70u, 0x39BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF78u;
label_39bf78:
    // 0x39bf78: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x39bf78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x39bf7c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x39bf7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x39bf80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x39bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x39bf84: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39bf88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39bf8c: 0x24422480  addiu       $v0, $v0, 0x2480
    ctx->pc = 0x39bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x39bf90: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x39bf90u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39bf94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x39bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39bf98: 0x0  nop
    ctx->pc = 0x39bf98u;
    // NOP
    // 0x39bf9c: 0x1812  mflo        $v1
    ctx->pc = 0x39bf9cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x39bfa0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x39bfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x39bfa4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x39bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x39bfa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39bfac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39bfb0: 0xc0975cc  jal         func_25D730
    ctx->pc = 0x39BFB0u;
    SET_GPR_U32(ctx, 31, 0x39BFB8u);
    ctx->pc = 0x39BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BFB0u;
    // 0x39bfb4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D730u, 0x39BFB0u, 0x39BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BFB8u;
label_39bfb8:
    // 0x39bfb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39bfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bfbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39bfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x39BFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFC0u;
        // 0x39bfc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BFC8u;
}

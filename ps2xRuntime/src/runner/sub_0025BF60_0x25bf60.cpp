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

// Function: sub_0025BF60
// Address: 0x25bf60 - 0x25bfcc
void sub_0025BF60_0x25bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BF60_0x25bf60");
#endif

    switch (ctx->pc) {
        case 0x25bf78u: goto label_25bf78;
        default: break;
    }

    ctx->pc = 0x25bf60u;

    // 0x25bf60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25bf64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25bf68: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25BF68u;
    {
        const bool branch_taken_0x25bf68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x25BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF68u;
        // 0x25bf6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf68) {
            ctx->pc = 0x25BF80u;
            goto label_25bf80;
        }
    }
    ctx->pc = 0x25BF70u;
    // 0x25bf70: 0xc096d04  jal         func_25B410
    ctx->pc = 0x25BF70u;
    SET_GPR_U32(ctx, 31, 0x25BF78u);
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x25BF70u, 0x25BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF78u;
label_25bf78:
    // 0x25bf78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25BF78u;
    {
        const bool branch_taken_0x25bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf78) {
            ctx->pc = 0x25BFC0u;
            goto label_25bfc0;
        }
    }
    ctx->pc = 0x25BF80u;
label_25bf80:
    // 0x25bf80: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x25bf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x25bf84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25bf84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25bf88: 0x73180  sll         $a2, $a3, 6
    ctx->pc = 0x25bf88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x25bf8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25bf90: 0x8c630858  lw          $v1, 0x858($v1)
    ctx->pc = 0x25bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2136)));
    // 0x25bf94: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x25bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x25bf98: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x25bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x25bf9c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x25bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x25bfa0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x25bfa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25bfa4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x25bfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x25bfa8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x25bfa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x25bfac: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x25bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x25bfb0: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x25bfb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x25bfb4: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x25bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x25bfb8: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x25bfb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x25bfbc: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x25bfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
label_25bfc0:
    // 0x25bfc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x25BFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFC4u;
        // 0x25bfc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BFCCu;
}

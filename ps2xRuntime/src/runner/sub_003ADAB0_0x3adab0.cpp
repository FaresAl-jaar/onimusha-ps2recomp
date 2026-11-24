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

// Function: sub_003ADAB0
// Address: 0x3adab0 - 0x3adb04
void sub_003ADAB0_0x3adab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADAB0_0x3adab0");
#endif

    ctx->pc = 0x3adab0u;

    // 0x3adab0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3adab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3adab4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3adab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3adab8: 0x2442dcd0  addiu       $v0, $v0, -0x2330
    ctx->pc = 0x3adab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958288));
    // 0x3adabc: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x3adabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x3adac0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3adac0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65DCD0u));
    // 0x3adac4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3adac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3adac8: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x3adac8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65DCE0u));
    // 0x3adacc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3adaccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3adad0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x3adad0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x3adad4: 0x9022fc8d  lbu         $v0, -0x373($at)
    ctx->pc = 0x3adad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x3adad8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADAD8u;
    {
        const bool branch_taken_0x3adad8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3ADADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAD8u;
        // 0x3adadc: 0x28410009  slti        $at, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adad8) {
            ctx->pc = 0x3ADAE8u;
            goto label_3adae8;
        }
    }
    ctx->pc = 0x3ADAE0u;
    // 0x3adae0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADAE0u;
    {
        const bool branch_taken_0x3adae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3adae0) {
            ctx->pc = 0x3ADAF0u;
            goto label_3adaf0;
        }
    }
    ctx->pc = 0x3ADAE8u;
label_3adae8:
    // 0x3adae8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3adae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3adaec: 0x0  nop
    ctx->pc = 0x3adaecu;
    // NOP
label_3adaf0:
    // 0x3adaf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3adaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3adaf4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3adaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3adaf8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3adaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x3adafc: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAFCu;
        // 0x3adb00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADB04u;
}

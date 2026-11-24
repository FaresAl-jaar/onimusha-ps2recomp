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

// Function: sub_001DFC80
// Address: 0x1dfc80 - 0x1dfcd4
void sub_001DFC80_0x1dfc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFC80_0x1dfc80");
#endif

    switch (ctx->pc) {
        case 0x1dfc80u: goto label_1dfc80;
        case 0x1dfc84u: goto label_1dfc84;
        case 0x1dfc88u: goto label_1dfc88;
        case 0x1dfc8cu: goto label_1dfc8c;
        case 0x1dfc90u: goto label_1dfc90;
        case 0x1dfc94u: goto label_1dfc94;
        case 0x1dfc98u: goto label_1dfc98;
        case 0x1dfc9cu: goto label_1dfc9c;
        case 0x1dfca0u: goto label_1dfca0;
        case 0x1dfca4u: goto label_1dfca4;
        case 0x1dfca8u: goto label_1dfca8;
        case 0x1dfcacu: goto label_1dfcac;
        case 0x1dfcb0u: goto label_1dfcb0;
        case 0x1dfcb4u: goto label_1dfcb4;
        case 0x1dfcb8u: goto label_1dfcb8;
        case 0x1dfcbcu: goto label_1dfcbc;
        case 0x1dfcc0u: goto label_1dfcc0;
        case 0x1dfcc4u: goto label_1dfcc4;
        case 0x1dfcc8u: goto label_1dfcc8;
        case 0x1dfcccu: goto label_1dfccc;
        case 0x1dfcd0u: goto label_1dfcd0;
        default: break;
    }

    ctx->pc = 0x1dfc80u;

label_1dfc80:
    // 0x1dfc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dfc84:
    // 0x1dfc84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dfc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dfc88:
    // 0x1dfc88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dfc8c:
    // 0x1dfc8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfc8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc90:
    // 0x1dfc90: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1dfc94:
    if (ctx->pc == 0x1DFC94u) {
        ctx->pc = 0x1DFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC90u;
        // 0x1dfc94: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC98u;
        goto label_1dfc98;
    }
    ctx->pc = 0x1DFC90u;
    {
        const bool branch_taken_0x1dfc90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC90u;
        // 0x1dfc94: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc90) {
            ctx->pc = 0x1DFCC0u;
            goto label_1dfcc0;
        }
    }
    ctx->pc = 0x1DFC98u;
label_1dfc98:
    // 0x1dfc98: 0x24426530  addiu       $v0, $v0, 0x6530
    ctx->pc = 0x1dfc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
label_1dfc9c:
    // 0x1dfc9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dfc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dfca0:
    // 0x1dfca0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dfca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfca4:
    // 0x1dfca4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dfca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dfca8:
    // 0x1dfca8: 0x320f809  jalr        $t9
label_1dfcac:
    if (ctx->pc == 0x1DFCACu) {
        ctx->pc = 0x1DFCB0u;
        goto label_1dfcb0;
    }
    ctx->pc = 0x1DFCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFCB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFCA8u, 0x1DFCB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DFCB0u;
label_1dfcb0:
    // 0x1dfcb0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1dfcb4:
    if (ctx->pc == 0x1DFCB4u) {
        ctx->pc = 0x1DFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCB0u;
        // 0x1dfcb4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCB8u;
        goto label_1dfcb8;
    }
    ctx->pc = 0x1DFCB0u;
    {
        const bool branch_taken_0x1dfcb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCB0u;
        // 0x1dfcb4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcb0) {
            ctx->pc = 0x1DFCC0u;
            goto label_1dfcc0;
        }
    }
    ctx->pc = 0x1DFCB8u;
label_1dfcb8:
    // 0x1dfcb8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1dfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1dfcbc:
    // 0x1dfcbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dfcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dfcc0:
    // 0x1dfcc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dfcc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfcc4:
    // 0x1dfcc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfcc8:
    // 0x1dfcc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfcc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfccc:
    // 0x1dfccc: 0x3e00008  jr          $ra
label_1dfcd0:
    if (ctx->pc == 0x1DFCD0u) {
        ctx->pc = 0x1DFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCCCu;
        // 0x1dfcd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCD4u;
        goto label_fallthrough_0x1dfccc;
    }
    ctx->pc = 0x1DFCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCCCu;
        // 0x1dfcd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dfccc:
    ctx->pc = 0x1DFCD4u;
}

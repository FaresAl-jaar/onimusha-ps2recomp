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

// Function: sub_001ECA90
// Address: 0x1eca90 - 0x1ecae4
void sub_001ECA90_0x1eca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECA90_0x1eca90");
#endif

    switch (ctx->pc) {
        case 0x1eca90u: goto label_1eca90;
        case 0x1eca94u: goto label_1eca94;
        case 0x1eca98u: goto label_1eca98;
        case 0x1eca9cu: goto label_1eca9c;
        case 0x1ecaa0u: goto label_1ecaa0;
        case 0x1ecaa4u: goto label_1ecaa4;
        case 0x1ecaa8u: goto label_1ecaa8;
        case 0x1ecaacu: goto label_1ecaac;
        case 0x1ecab0u: goto label_1ecab0;
        case 0x1ecab4u: goto label_1ecab4;
        case 0x1ecab8u: goto label_1ecab8;
        case 0x1ecabcu: goto label_1ecabc;
        case 0x1ecac0u: goto label_1ecac0;
        case 0x1ecac4u: goto label_1ecac4;
        case 0x1ecac8u: goto label_1ecac8;
        case 0x1ecaccu: goto label_1ecacc;
        case 0x1ecad0u: goto label_1ecad0;
        case 0x1ecad4u: goto label_1ecad4;
        case 0x1ecad8u: goto label_1ecad8;
        case 0x1ecadcu: goto label_1ecadc;
        case 0x1ecae0u: goto label_1ecae0;
        default: break;
    }

    ctx->pc = 0x1eca90u;

label_1eca90:
    // 0x1eca90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eca94:
    // 0x1eca94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eca98:
    // 0x1eca98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eca9c:
    // 0x1eca9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eca9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ecaa0:
    // 0x1ecaa0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1ecaa4:
    if (ctx->pc == 0x1ECAA4u) {
        ctx->pc = 0x1ECAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAA0u;
        // 0x1ecaa4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAA8u;
        goto label_1ecaa8;
    }
    ctx->pc = 0x1ECAA0u;
    {
        const bool branch_taken_0x1ecaa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAA0u;
        // 0x1ecaa4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecaa0) {
            ctx->pc = 0x1ECAD0u;
            goto label_1ecad0;
        }
    }
    ctx->pc = 0x1ECAA8u;
label_1ecaa8:
    // 0x1ecaa8: 0x24427110  addiu       $v0, $v0, 0x7110
    ctx->pc = 0x1ecaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28944));
label_1ecaac:
    // 0x1ecaac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ecaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ecab0:
    // 0x1ecab0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ecab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ecab4:
    // 0x1ecab4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ecab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ecab8:
    // 0x1ecab8: 0x320f809  jalr        $t9
label_1ecabc:
    if (ctx->pc == 0x1ECABCu) {
        ctx->pc = 0x1ECAC0u;
        goto label_1ecac0;
    }
    ctx->pc = 0x1ECAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ECAC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECAB8u, 0x1ECAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECAC0u;
label_1ecac0:
    // 0x1ecac0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ecac4:
    if (ctx->pc == 0x1ECAC4u) {
        ctx->pc = 0x1ECAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAC0u;
        // 0x1ecac4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAC8u;
        goto label_1ecac8;
    }
    ctx->pc = 0x1ECAC0u;
    {
        const bool branch_taken_0x1ecac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAC0u;
        // 0x1ecac4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecac0) {
            ctx->pc = 0x1ECAD0u;
            goto label_1ecad0;
        }
    }
    ctx->pc = 0x1ECAC8u;
label_1ecac8:
    // 0x1ecac8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1ecac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1ecacc:
    // 0x1ecacc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ecaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ecad0:
    // 0x1ecad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ecad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ecad4:
    // 0x1ecad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ecad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecad8:
    // 0x1ecad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecadc:
    // 0x1ecadc: 0x3e00008  jr          $ra
label_1ecae0:
    if (ctx->pc == 0x1ECAE0u) {
        ctx->pc = 0x1ECAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECADCu;
        // 0x1ecae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAE4u;
        goto label_fallthrough_0x1ecadc;
    }
    ctx->pc = 0x1ECADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECADCu;
        // 0x1ecae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ecadc:
    ctx->pc = 0x1ECAE4u;
}

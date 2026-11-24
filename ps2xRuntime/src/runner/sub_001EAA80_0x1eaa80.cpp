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

// Function: sub_001EAA80
// Address: 0x1eaa80 - 0x1eaad4
void sub_001EAA80_0x1eaa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAA80_0x1eaa80");
#endif

    switch (ctx->pc) {
        case 0x1eaa80u: goto label_1eaa80;
        case 0x1eaa84u: goto label_1eaa84;
        case 0x1eaa88u: goto label_1eaa88;
        case 0x1eaa8cu: goto label_1eaa8c;
        case 0x1eaa90u: goto label_1eaa90;
        case 0x1eaa94u: goto label_1eaa94;
        case 0x1eaa98u: goto label_1eaa98;
        case 0x1eaa9cu: goto label_1eaa9c;
        case 0x1eaaa0u: goto label_1eaaa0;
        case 0x1eaaa4u: goto label_1eaaa4;
        case 0x1eaaa8u: goto label_1eaaa8;
        case 0x1eaaacu: goto label_1eaaac;
        case 0x1eaab0u: goto label_1eaab0;
        case 0x1eaab4u: goto label_1eaab4;
        case 0x1eaab8u: goto label_1eaab8;
        case 0x1eaabcu: goto label_1eaabc;
        case 0x1eaac0u: goto label_1eaac0;
        case 0x1eaac4u: goto label_1eaac4;
        case 0x1eaac8u: goto label_1eaac8;
        case 0x1eaaccu: goto label_1eaacc;
        case 0x1eaad0u: goto label_1eaad0;
        default: break;
    }

    ctx->pc = 0x1eaa80u;

label_1eaa80:
    // 0x1eaa80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eaa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eaa84:
    // 0x1eaa84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eaa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eaa88:
    // 0x1eaa88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eaa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eaa8c:
    // 0x1eaa8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eaa8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eaa90:
    // 0x1eaa90: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1eaa94:
    if (ctx->pc == 0x1EAA94u) {
        ctx->pc = 0x1EAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA90u;
        // 0x1eaa94: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA98u;
        goto label_1eaa98;
    }
    ctx->pc = 0x1EAA90u;
    {
        const bool branch_taken_0x1eaa90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA90u;
        // 0x1eaa94: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa90) {
            ctx->pc = 0x1EAAC0u;
            goto label_1eaac0;
        }
    }
    ctx->pc = 0x1EAA98u;
label_1eaa98:
    // 0x1eaa98: 0x24426f90  addiu       $v0, $v0, 0x6F90
    ctx->pc = 0x1eaa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28560));
label_1eaa9c:
    // 0x1eaa9c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1eaa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1eaaa0:
    // 0x1eaaa0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1eaaa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1eaaa4:
    // 0x1eaaa4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1eaaa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1eaaa8:
    // 0x1eaaa8: 0x320f809  jalr        $t9
label_1eaaac:
    if (ctx->pc == 0x1EAAACu) {
        ctx->pc = 0x1EAAB0u;
        goto label_1eaab0;
    }
    ctx->pc = 0x1EAAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EAAB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAAA8u, 0x1EAAB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAAB0u;
label_1eaab0:
    // 0x1eaab0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1eaab4:
    if (ctx->pc == 0x1EAAB4u) {
        ctx->pc = 0x1EAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAB0u;
        // 0x1eaab4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAB8u;
        goto label_1eaab8;
    }
    ctx->pc = 0x1EAAB0u;
    {
        const bool branch_taken_0x1eaab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAB0u;
        // 0x1eaab4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaab0) {
            ctx->pc = 0x1EAAC0u;
            goto label_1eaac0;
        }
    }
    ctx->pc = 0x1EAAB8u;
label_1eaab8:
    // 0x1eaab8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1eaab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1eaabc:
    // 0x1eaabc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1eaabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1eaac0:
    // 0x1eaac0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eaac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eaac4:
    // 0x1eaac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eaac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eaac8:
    // 0x1eaac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eaac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eaacc:
    // 0x1eaacc: 0x3e00008  jr          $ra
label_1eaad0:
    if (ctx->pc == 0x1EAAD0u) {
        ctx->pc = 0x1EAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAACCu;
        // 0x1eaad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAD4u;
        goto label_fallthrough_0x1eaacc;
    }
    ctx->pc = 0x1EAACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAACCu;
        // 0x1eaad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eaacc:
    ctx->pc = 0x1EAAD4u;
}

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

// Function: sub_00387A90
// Address: 0x387a90 - 0x387af4
void sub_00387A90_0x387a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387A90_0x387a90");
#endif

    switch (ctx->pc) {
        case 0x387a90u: goto label_387a90;
        case 0x387a94u: goto label_387a94;
        case 0x387a98u: goto label_387a98;
        case 0x387a9cu: goto label_387a9c;
        case 0x387aa0u: goto label_387aa0;
        case 0x387aa4u: goto label_387aa4;
        case 0x387aa8u: goto label_387aa8;
        case 0x387aacu: goto label_387aac;
        case 0x387ab0u: goto label_387ab0;
        case 0x387ab4u: goto label_387ab4;
        case 0x387ab8u: goto label_387ab8;
        case 0x387abcu: goto label_387abc;
        case 0x387ac0u: goto label_387ac0;
        case 0x387ac4u: goto label_387ac4;
        case 0x387ac8u: goto label_387ac8;
        case 0x387accu: goto label_387acc;
        case 0x387ad0u: goto label_387ad0;
        case 0x387ad4u: goto label_387ad4;
        case 0x387ad8u: goto label_387ad8;
        case 0x387adcu: goto label_387adc;
        case 0x387ae0u: goto label_387ae0;
        case 0x387ae4u: goto label_387ae4;
        case 0x387ae8u: goto label_387ae8;
        case 0x387aecu: goto label_387aec;
        case 0x387af0u: goto label_387af0;
        default: break;
    }

    ctx->pc = 0x387a90u;

label_387a90:
    // 0x387a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x387a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_387a94:
    // 0x387a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_387a98:
    // 0x387a98: 0x90832b6f  lbu         $v1, 0x2B6F($a0)
    ctx->pc = 0x387a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11119)));
label_387a9c:
    // 0x387a9c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_387aa0:
    if (ctx->pc == 0x387AA0u) {
        ctx->pc = 0x387AA4u;
        goto label_387aa4;
    }
    ctx->pc = 0x387A9Cu;
    {
        const bool branch_taken_0x387a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x387a9c) {
            ctx->pc = 0x387AE8u;
            goto label_387ae8;
        }
    }
    ctx->pc = 0x387AA4u;
label_387aa4:
    // 0x387aa4: 0xc096c80  jal         func_25B200
label_387aa8:
    if (ctx->pc == 0x387AA8u) {
        ctx->pc = 0x387AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AA4u;
        // 0x387aa8: 0x8c842960  lw          $a0, 0x2960($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387AACu;
        goto label_387aac;
    }
    ctx->pc = 0x387AA4u;
    SET_GPR_U32(ctx, 31, 0x387AACu);
    ctx->pc = 0x387AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387AA4u;
    // 0x387aa8: 0x8c842960  lw          $a0, 0x2960($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x387AA4u, 0x387AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387AACu;
label_387aac:
    // 0x387aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387ab0:
    // 0x387ab0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_387ab4:
    if (ctx->pc == 0x387AB4u) {
        ctx->pc = 0x387AB8u;
        goto label_387ab8;
    }
    ctx->pc = 0x387AB0u;
    {
        const bool branch_taken_0x387ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x387ab0) {
            ctx->pc = 0x387AE8u;
            goto label_387ae8;
        }
    }
    ctx->pc = 0x387AB8u;
label_387ab8:
    // 0x387ab8: 0x9085005c  lbu         $a1, 0x5C($a0)
    ctx->pc = 0x387ab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
label_387abc:
    // 0x387abc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x387abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_387ac0:
    // 0x387ac0: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_387ac4:
    if (ctx->pc == 0x387AC4u) {
        ctx->pc = 0x387AC8u;
        goto label_387ac8;
    }
    ctx->pc = 0x387AC0u;
    {
        const bool branch_taken_0x387ac0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x387ac0) {
            ctx->pc = 0x387AE8u;
            goto label_387ae8;
        }
    }
    ctx->pc = 0x387AC8u;
label_387ac8:
    // 0x387ac8: 0x9083005d  lbu         $v1, 0x5D($a0)
    ctx->pc = 0x387ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 93)));
label_387acc:
    // 0x387acc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_387ad0:
    if (ctx->pc == 0x387AD0u) {
        ctx->pc = 0x387AD4u;
        goto label_387ad4;
    }
    ctx->pc = 0x387ACCu;
    {
        const bool branch_taken_0x387acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x387acc) {
            ctx->pc = 0x387AE8u;
            goto label_387ae8;
        }
    }
    ctx->pc = 0x387AD4u;
label_387ad4:
    // 0x387ad4: 0x8c990034  lw          $t9, 0x34($a0)
    ctx->pc = 0x387ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_387ad8:
    // 0x387ad8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x387ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_387adc:
    // 0x387adc: 0x320f809  jalr        $t9
label_387ae0:
    if (ctx->pc == 0x387AE0u) {
        ctx->pc = 0x387AE4u;
        goto label_387ae4;
    }
    ctx->pc = 0x387ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x387AE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387ADCu, 0x387AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387AE4u;
label_387ae4:
    // 0x387ae4: 0x0  nop
    ctx->pc = 0x387ae4u;
    // NOP
label_387ae8:
    // 0x387ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_387aec:
    // 0x387aec: 0x3e00008  jr          $ra
label_387af0:
    if (ctx->pc == 0x387AF0u) {
        ctx->pc = 0x387AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AECu;
        // 0x387af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387AF4u;
        goto label_fallthrough_0x387aec;
    }
    ctx->pc = 0x387AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AECu;
        // 0x387af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x387aec:
    ctx->pc = 0x387AF4u;
}

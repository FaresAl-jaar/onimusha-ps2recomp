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

// Function: sub_0031AA70
// Address: 0x31aa70 - 0x31aaf4
void sub_0031AA70_0x31aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AA70_0x31aa70");
#endif

    switch (ctx->pc) {
        case 0x31aa90u: goto label_31aa90;
        case 0x31aaa0u: goto label_31aaa0;
        case 0x31aabcu: goto label_31aabc;
        case 0x31aac8u: goto label_31aac8;
        case 0x31aad8u: goto label_31aad8;
        case 0x31aae8u: goto label_31aae8;
        default: break;
    }

    ctx->pc = 0x31aa70u;

    // 0x31aa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31aa74: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x31aa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x31aa78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31aa7c: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x31aa7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x31aa80: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x31aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x31aa84: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x31aa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x31aa88: 0xa022feea  sb          $v0, -0x116($at)
    ctx->pc = 0x31aa88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x31aa8c: 0x0  nop
    ctx->pc = 0x31aa8cu;
    // NOP
label_31aa90:
    // 0x31aa90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31aa94: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31aa98: 0xc04c918  jal         func_132460
    ctx->pc = 0x31AA98u;
    SET_GPR_U32(ctx, 31, 0x31AAA0u);
    ctx->pc = 0x31AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA98u;
    // 0x31aa9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31AA98u, 0x31AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAA0u;
label_31aaa0:
    // 0x31aaa0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x31aaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x31aaa4: 0x9022ff2c  lbu         $v0, -0xD4($at)
    ctx->pc = 0x31aaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FF2Cu));
    // 0x31aaa8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x31aaa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31aaac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31AAACu;
    {
        const bool branch_taken_0x31aaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAACu;
        // 0x31aab0: 0x3c040093  lui         $a0, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aaac) {
            ctx->pc = 0x31AA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aa90;
        }
    }
    ctx->pc = 0x31AAB4u;
    // 0x31aab4: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x31AAB4u;
    SET_GPR_U32(ctx, 31, 0x31AABCu);
    ctx->pc = 0x31AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAB4u;
    // 0x31aab8: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x31AAB4u, 0x31AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AABCu;
label_31aabc:
    // 0x31aabc: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x31aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x31aac0: 0xc052bd4  jal         func_14AF50
    ctx->pc = 0x31AAC0u;
    SET_GPR_U32(ctx, 31, 0x31AAC8u);
    ctx->pc = 0x31AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAC0u;
    // 0x31aac4: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF50u, 0x31AAC0u, 0x31AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAC8u;
label_31aac8:
    // 0x31aac8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31aacc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aad0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x31AAD0u;
    SET_GPR_U32(ctx, 31, 0x31AAD8u);
    ctx->pc = 0x31AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAD0u;
    // 0x31aad4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x31AAD0u, 0x31AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAD8u;
label_31aad8:
    // 0x31aad8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31aadc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aae0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x31AAE0u;
    SET_GPR_U32(ctx, 31, 0x31AAE8u);
    ctx->pc = 0x31AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAE0u;
    // 0x31aae4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x31AAE0u, 0x31AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAE8u;
label_31aae8:
    // 0x31aae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31aae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31aaec: 0x3e00008  jr          $ra
    ctx->pc = 0x31AAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAECu;
        // 0x31aaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AAF4u;
}

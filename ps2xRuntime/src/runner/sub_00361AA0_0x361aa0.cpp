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

// Function: sub_00361AA0
// Address: 0x361aa0 - 0x361b40
void sub_00361AA0_0x361aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361AA0_0x361aa0");
#endif

    switch (ctx->pc) {
        case 0x361ab8u: goto label_361ab8;
        case 0x361af8u: goto label_361af8;
        case 0x361b1cu: goto label_361b1c;
        case 0x361b30u: goto label_361b30;
        default: break;
    }

    ctx->pc = 0x361aa0u;

    // 0x361aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x361aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x361aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x361aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x361aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x361aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ab0: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x361AB0u;
    SET_GPR_U32(ctx, 31, 0x361AB8u);
    ctx->pc = 0x361AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361AB0u;
    // 0x361ab4: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x361AB0u, 0x361AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AB8u;
label_361ab8:
    // 0x361ab8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x361AB8u;
    {
        const bool branch_taken_0x361ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ab8) {
            ctx->pc = 0x361B28u;
            goto label_361b28;
        }
    }
    ctx->pc = 0x361AC0u;
    // 0x361ac0: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x361ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x361ac4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x361ac4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361ac8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x361AC8u;
    {
        const bool branch_taken_0x361ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ac8) {
            ctx->pc = 0x361B28u;
            goto label_361b28;
        }
    }
    ctx->pc = 0x361AD0u;
    // 0x361ad0: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x361ad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x361ad4: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x361ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x361ad8: 0x246324d0  addiu       $v1, $v1, 0x24D0
    ctx->pc = 0x361ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9424));
    // 0x361adc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x361adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361ae0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x361ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x361ae4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x361ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361ae8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x361AE8u;
    {
        const bool branch_taken_0x361ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x361ae8) {
            ctx->pc = 0x361B28u;
            goto label_361b28;
        }
    }
    ctx->pc = 0x361AF0u;
    // 0x361af0: 0xc04d4c0  jal         func_135300
    ctx->pc = 0x361AF0u;
    SET_GPR_U32(ctx, 31, 0x361AF8u);
    ctx->pc = 0x135300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135300u, 0x361AF0u, 0x361AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AF8u;
label_361af8:
    // 0x361af8: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x361af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x361afc: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x361afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x361b00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x361b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x361b04: 0x0  nop
    ctx->pc = 0x361b04u;
    // NOP
    // 0x361b08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x361b08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361b0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x361B0Cu;
    {
        const bool branch_taken_0x361b0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x361B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361B0Cu;
        // 0x361b10: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361b0c) {
            ctx->pc = 0x361B28u;
            goto label_361b28;
        }
    }
    ctx->pc = 0x361B14u;
    // 0x361b14: 0xc09e870  jal         func_27A1C0
    ctx->pc = 0x361B14u;
    SET_GPR_U32(ctx, 31, 0x361B1Cu);
    ctx->pc = 0x27A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A1C0u, 0x361B14u, 0x361B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B1Cu;
label_361b1c:
    // 0x361b1c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x361b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x361b20: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x361b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x361b24: 0x0  nop
    ctx->pc = 0x361b24u;
    // NOP
label_361b28:
    // 0x361b28: 0xc0a639c  jal         func_298E70
    ctx->pc = 0x361B28u;
    SET_GPR_U32(ctx, 31, 0x361B30u);
    ctx->pc = 0x361B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B28u;
    // 0x361b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E70u, 0x361B28u, 0x361B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361B30u;
label_361b30:
    // 0x361b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x361b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361b38: 0x3e00008  jr          $ra
    ctx->pc = 0x361B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361B38u;
        // 0x361b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361B40u;
}

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

// Function: sub_002B4B10
// Address: 0x2b4b10 - 0x2b4bc8
void sub_002B4B10_0x2b4b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4B10_0x2b4b10");
#endif

    switch (ctx->pc) {
        case 0x2b4b34u: goto label_2b4b34;
        case 0x2b4b68u: goto label_2b4b68;
        case 0x2b4b78u: goto label_2b4b78;
        case 0x2b4ba4u: goto label_2b4ba4;
        default: break;
    }

    ctx->pc = 0x2b4b10u;

    // 0x2b4b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b4b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b4b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b20: 0x8c842ac4  lw          $a0, 0x2AC4($a0)
    ctx->pc = 0x2b4b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10948)));
    // 0x2b4b24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4B24u;
    {
        const bool branch_taken_0x2b4b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4b24) {
            ctx->pc = 0x2B4B38u;
            goto label_2b4b38;
        }
    }
    ctx->pc = 0x2B4B2Cu;
    // 0x2b4b2c: 0xc0b2d50  jal         func_2CB540
    ctx->pc = 0x2B4B2Cu;
    SET_GPR_U32(ctx, 31, 0x2B4B34u);
    ctx->pc = 0x2CB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB540u, 0x2B4B2Cu, 0x2B4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B34u;
label_2b4b34:
    // 0x2b4b34: 0xae002ac4  sw          $zero, 0x2AC4($s0)
    ctx->pc = 0x2b4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10948), GPR_U32(ctx, 0));
label_2b4b38:
    // 0x2b4b38: 0x92042abe  lbu         $a0, 0x2ABE($s0)
    ctx->pc = 0x2b4b38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10942)));
    // 0x2b4b3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4b40: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B4B40u;
    {
        const bool branch_taken_0x2b4b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b4b40) {
            ctx->pc = 0x2B4BB8u;
            goto label_2b4bb8;
        }
    }
    ctx->pc = 0x2B4B48u;
    // 0x2b4b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4b4c: 0xa3838954  sb          $v1, -0x76AC($gp)
    ctx->pc = 0x2b4b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936916), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4b50: 0xa3828958  sb          $v0, -0x76A8($gp)
    ctx->pc = 0x2b4b50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936920), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b4b54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b4b58: 0xaf828960  sw          $v0, -0x76A0($gp)
    ctx->pc = 0x2b4b58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936928), GPR_U32(ctx, 2));
    // 0x2b4b5c: 0xa780895c  sh          $zero, -0x76A4($gp)
    ctx->pc = 0x2b4b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936924), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b4b60: 0xc0acb4c  jal         func_2B2D30
    ctx->pc = 0x2B4B60u;
    SET_GPR_U32(ctx, 31, 0x2B4B68u);
    ctx->pc = 0x2B4B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B60u;
    // 0x2b4b64: 0xa38089b4  sb          $zero, -0x764C($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937012), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2D30u, 0x2B4B60u, 0x2B4B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B68u;
label_2b4b68:
    // 0x2b4b68: 0x8e052ab4  lw          $a1, 0x2AB4($s0)
    ctx->pc = 0x2b4b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10932)));
    // 0x2b4b6c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2b4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2b4b70: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x2B4B70u;
    SET_GPR_U32(ctx, 31, 0x2B4B78u);
    ctx->pc = 0x2B4B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B70u;
    // 0x2b4b74: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x2B4B70u, 0x2B4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B78u;
label_2b4b78:
    // 0x2b4b78: 0xae002ab4  sw          $zero, 0x2AB4($s0)
    ctx->pc = 0x2b4b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10932), GPR_U32(ctx, 0));
    // 0x2b4b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4b80: 0xa38589b8  sb          $a1, -0x7648($gp)
    ctx->pc = 0x2b4b80u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937016), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4b84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b4b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4b88: 0x92040640  lbu         $a0, 0x640($s0)
    ctx->pc = 0x2b4b88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x2b4b8c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4B8Cu;
    {
        const bool branch_taken_0x2b4b8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b4b8c) {
            ctx->pc = 0x2B4BA8u;
            goto label_2b4ba8;
        }
    }
    ctx->pc = 0x2B4B94u;
    // 0x2b4b94: 0xa20504f4  sb          $a1, 0x4F4($s0)
    ctx->pc = 0x2b4b94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1268), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4b98: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x2b4b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x2b4b9c: 0xc0b2bb4  jal         func_2CAED0
    ctx->pc = 0x2B4B9Cu;
    SET_GPR_U32(ctx, 31, 0x2B4BA4u);
    ctx->pc = 0x2B4BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B9Cu;
    // 0x2b4ba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAED0u, 0x2B4B9Cu, 0x2B4BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BA4u;
label_2b4ba4:
    // 0x2b4ba4: 0x0  nop
    ctx->pc = 0x2b4ba4u;
    // NOP
label_2b4ba8:
    // 0x2b4ba8: 0x8e0429c8  lw          $a0, 0x29C8($s0)
    ctx->pc = 0x2b4ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10696)));
    // 0x2b4bac: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2b4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2b4bb0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2b4bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b4bb4: 0xae0329c8  sw          $v1, 0x29C8($s0)
    ctx->pc = 0x2b4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10696), GPR_U32(ctx, 3));
label_2b4bb8:
    // 0x2b4bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BC0u;
        // 0x2b4bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4BC8u;
}

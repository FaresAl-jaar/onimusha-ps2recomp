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

// Function: sub_00336BB0
// Address: 0x336bb0 - 0x336c40
void sub_00336BB0_0x336bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336BB0_0x336bb0");
#endif

    ctx->pc = 0x336bb0u;

    // 0x336bb0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x336bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336bb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x336bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x336bb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336BB8u;
    {
        const bool branch_taken_0x336bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336bb8) {
            ctx->pc = 0x336BE0u;
            goto label_336be0;
        }
    }
    ctx->pc = 0x336BC0u;
    // 0x336bc0: 0x90a60008  lbu         $a2, 0x8($a1)
    ctx->pc = 0x336bc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x336bc4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336bc8: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x336bc8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x336bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336bd0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x336bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x336bd4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336bd8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x336BD8u;
    {
        const bool branch_taken_0x336bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BD8u;
        // 0x336bdc: 0xa0a30008  sb          $v1, 0x8($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336bd8) {
            ctx->pc = 0x336C38u;
            goto label_336c38;
        }
    }
    ctx->pc = 0x336BE0u;
label_336be0:
    // 0x336be0: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x336be0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x336be4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x336be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x336be8: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x336be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x336bec: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x336becu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x336bf0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336BF0u;
    {
        const bool branch_taken_0x336bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x336BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BF0u;
        // 0x336bf4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336bf0) {
            ctx->pc = 0x336C18u;
            goto label_336c18;
        }
    }
    ctx->pc = 0x336BF8u;
    // 0x336bf8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x336BF8u;
    {
        const bool branch_taken_0x336bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x336bf8) {
            ctx->pc = 0x336C18u;
            goto label_336c18;
        }
    }
    ctx->pc = 0x336C00u;
    // 0x336c00: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x336c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x336c04: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336C04u;
    {
        const bool branch_taken_0x336c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x336c04) {
            ctx->pc = 0x336C18u;
            goto label_336c18;
        }
    }
    ctx->pc = 0x336C0Cu;
    // 0x336c0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x336C0Cu;
    {
        const bool branch_taken_0x336c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336c0c) {
            ctx->pc = 0x336C30u;
            goto label_336c30;
        }
    }
    ctx->pc = 0x336C14u;
    // 0x336c14: 0x0  nop
    ctx->pc = 0x336c14u;
    // NOP
label_336c18:
    // 0x336c18: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x336c18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x336c1c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x336c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336c20: 0x6403000a  daddiu      $v1, $zero, 0xA
    ctx->pc = 0x336c20u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
    // 0x336c24: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x336c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x336c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x336c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x336c2c: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x336c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
label_336c30:
    // 0x336c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336c34: 0x0  nop
    ctx->pc = 0x336c34u;
    // NOP
label_336c38:
    // 0x336c38: 0x3e00008  jr          $ra
    ctx->pc = 0x336C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336C40u;
}

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

// Function: sub_00279B10
// Address: 0x279b10 - 0x279b90
void sub_00279B10_0x279b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279B10_0x279b10");
#endif

    switch (ctx->pc) {
        case 0x279b58u: goto label_279b58;
        case 0x279b70u: goto label_279b70;
        default: break;
    }

    ctx->pc = 0x279b10u;

    // 0x279b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279b1c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x279b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x279b20: 0x10c30017  beq         $a2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x279B20u;
    {
        const bool branch_taken_0x279b20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x279B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B20u;
        // 0x279b24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b20) {
            ctx->pc = 0x279B80u;
            goto label_279b80;
        }
    }
    ctx->pc = 0x279B28u;
    // 0x279b28: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x279b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x279b2c: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x279b2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x279b30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x279b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279b38: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x279b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x279b3c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279B3Cu;
    {
        const bool branch_taken_0x279b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x279B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B3Cu;
        // 0x279b40: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b3c) {
            ctx->pc = 0x279B50u;
            goto label_279b50;
        }
    }
    ctx->pc = 0x279B44u;
    // 0x279b44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x279B44u;
    {
        const bool branch_taken_0x279b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B44u;
        // 0x279b48: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b44) {
            ctx->pc = 0x279B80u;
            goto label_279b80;
        }
    }
    ctx->pc = 0x279B4Cu;
    // 0x279b4c: 0x0  nop
    ctx->pc = 0x279b4cu;
    // NOP
label_279b50:
    // 0x279b50: 0xc09e6ac  jal         func_279AB0
    ctx->pc = 0x279B50u;
    SET_GPR_U32(ctx, 31, 0x279B58u);
    ctx->pc = 0x279B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B50u;
    // 0x279b54: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x279AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279AB0u, 0x279B50u, 0x279B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B58u;
label_279b58:
    // 0x279b58: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x279b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x279b5c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x279b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x279b60: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x279b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x279b64: 0x24a56098  addiu       $a1, $a1, 0x6098
    ctx->pc = 0x279b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24728));
    // 0x279b68: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x279B68u;
    SET_GPR_U32(ctx, 31, 0x279B70u);
    ctx->pc = 0x279B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B68u;
    // 0x279b6c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x279B68u, 0x279B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B70u;
label_279b70:
    // 0x279b70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279B70u;
    {
        const bool branch_taken_0x279b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279b70) {
            ctx->pc = 0x279B80u;
            goto label_279b80;
        }
    }
    ctx->pc = 0x279B78u;
    // 0x279b78: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x279b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x279b7c: 0x0  nop
    ctx->pc = 0x279b7cu;
    // NOP
label_279b80:
    // 0x279b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279b88: 0x3e00008  jr          $ra
    ctx->pc = 0x279B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B88u;
        // 0x279b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279B90u;
}

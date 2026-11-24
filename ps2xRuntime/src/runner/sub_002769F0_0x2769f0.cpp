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

// Function: sub_002769F0
// Address: 0x2769f0 - 0x276a98
void sub_002769F0_0x2769f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002769F0_0x2769f0");
#endif

    switch (ctx->pc) {
        case 0x276a24u: goto label_276a24;
        case 0x276a2cu: goto label_276a2c;
        case 0x276a44u: goto label_276a44;
        default: break;
    }

    ctx->pc = 0x2769f0u;

    // 0x2769f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2769f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2769f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2769f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2769f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2769f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2769fc: 0x8f83891c  lw          $v1, -0x76E4($gp)
    ctx->pc = 0x2769fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
    // 0x276a00: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x276A00u;
    {
        const bool branch_taken_0x276a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A00u;
        // 0x276a04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a00) {
            ctx->pc = 0x276A88u;
            goto label_276a88;
        }
    }
    ctx->pc = 0x276A08u;
    // 0x276a08: 0x8f838918  lw          $v1, -0x76E8($gp)
    ctx->pc = 0x276a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x276a0c: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x276a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x276a10: 0x24420930  addiu       $v0, $v0, 0x930
    ctx->pc = 0x276a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x276a14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x276a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276a1c: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x276A1Cu;
    SET_GPR_U32(ctx, 31, 0x276A24u);
    ctx->pc = 0x276A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A1Cu;
    // 0x276a20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x276A1Cu, 0x276A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A24u;
label_276a24:
    // 0x276a24: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x276A24u;
    SET_GPR_U32(ctx, 31, 0x276A2Cu);
    ctx->pc = 0x276A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A24u;
    // 0x276a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x276A24u, 0x276A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A2Cu;
label_276a2c:
    // 0x276a2c: 0x92072901  lbu         $a3, 0x2901($s0)
    ctx->pc = 0x276a2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10497)));
    // 0x276a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x276a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276a38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x276a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a3c: 0xc0aa5ac  jal         func_2A96B0
    ctx->pc = 0x276A3Cu;
    SET_GPR_U32(ctx, 31, 0x276A44u);
    ctx->pc = 0x276A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A3Cu;
    // 0x276a40: 0x26082910  addiu       $t0, $s0, 0x2910 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 10512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A96B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A96B0u, 0x276A3Cu, 0x276A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A44u;
label_276a44:
    // 0x276a44: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x276a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x276a48: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x276a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x276a4c: 0x24630930  addiu       $v1, $v1, 0x930
    ctx->pc = 0x276a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2352));
    // 0x276a50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x276a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x276a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x276a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x276a58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x276a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x276a5c: 0x8f838918  lw          $v1, -0x76E8($gp)
    ctx->pc = 0x276a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x276a60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x276a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x276a64: 0xaf838918  sw          $v1, -0x76E8($gp)
    ctx->pc = 0x276a64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936856), GPR_U32(ctx, 3));
    // 0x276a68: 0x8f838918  lw          $v1, -0x76E8($gp)
    ctx->pc = 0x276a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x276a6c: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x276a6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x276a70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x276A70u;
    {
        const bool branch_taken_0x276a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x276a70) {
            ctx->pc = 0x276A80u;
            goto label_276a80;
        }
    }
    ctx->pc = 0x276A78u;
    // 0x276a78: 0xaf808918  sw          $zero, -0x76E8($gp)
    ctx->pc = 0x276a78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936856), GPR_U32(ctx, 0));
    // 0x276a7c: 0x0  nop
    ctx->pc = 0x276a7cu;
    // NOP
label_276a80:
    // 0x276a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x276a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276a84: 0xaf83891c  sw          $v1, -0x76E4($gp)
    ctx->pc = 0x276a84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936860), GPR_U32(ctx, 3));
label_276a88:
    // 0x276a88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276a90: 0x3e00008  jr          $ra
    ctx->pc = 0x276A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A90u;
        // 0x276a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276A98u;
}

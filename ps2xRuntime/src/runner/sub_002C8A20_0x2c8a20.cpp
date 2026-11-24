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

// Function: sub_002C8A20
// Address: 0x2c8a20 - 0x2c8aa8
void sub_002C8A20_0x2c8a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8A20_0x2c8a20");
#endif

    switch (ctx->pc) {
        case 0x2c8a48u: goto label_2c8a48;
        case 0x2c8a78u: goto label_2c8a78;
        default: break;
    }

    ctx->pc = 0x2c8a20u;

    // 0x2c8a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c8a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c8a24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c8a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c8a28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c8a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c8a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8a30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c8a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8a38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a3c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c8a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a40: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C8A40u;
    SET_GPR_U32(ctx, 31, 0x2C8A48u);
    ctx->pc = 0x2C8A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A40u;
    // 0x2c8a44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C8A40u, 0x2C8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A48u;
label_2c8a48:
    // 0x2c8a48: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C8A48u;
    {
        const bool branch_taken_0x2c8a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a48) {
            ctx->pc = 0x2C8A90u;
            goto label_2c8a90;
        }
    }
    ctx->pc = 0x2C8A50u;
    // 0x2c8a50: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2c8a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c8a54: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2c8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2c8a58: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2c8a58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8a5c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8A5Cu;
    {
        const bool branch_taken_0x2c8a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A5Cu;
        // 0x2c8a60: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a5c) {
            ctx->pc = 0x2C8A68u;
            goto label_2c8a68;
        }
    }
    ctx->pc = 0x2C8A64u;
    // 0x2c8a64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c8a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8a68:
    // 0x2c8a68: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8A68u;
    {
        const bool branch_taken_0x2c8a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A68u;
        // 0x2c8a6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a68) {
            ctx->pc = 0x2C8A90u;
            goto label_2c8a90;
        }
    }
    ctx->pc = 0x2C8A70u;
    // 0x2c8a70: 0xc0b226c  jal         func_2C89B0
    ctx->pc = 0x2C8A70u;
    SET_GPR_U32(ctx, 31, 0x2C8A78u);
    ctx->pc = 0x2C8A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A70u;
    // 0x2c8a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C89B0u, 0x2C8A70u, 0x2C8A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A78u;
label_2c8a78:
    // 0x2c8a78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c8a7c: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x2c8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
    // 0x2c8a80: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x2c8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x2c8a84: 0x920305b3  lbu         $v1, 0x5B3($s0)
    ctx->pc = 0x2c8a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1459)));
    // 0x2c8a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c8a8c: 0xa20305b3  sb          $v1, 0x5B3($s0)
    ctx->pc = 0x2c8a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1459), (uint8_t)GPR_U32(ctx, 3));
label_2c8a90:
    // 0x2c8a90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c8a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AA0u;
        // 0x2c8aa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8AA8u;
}

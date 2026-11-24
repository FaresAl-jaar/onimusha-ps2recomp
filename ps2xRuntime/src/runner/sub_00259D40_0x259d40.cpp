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

// Function: sub_00259D40
// Address: 0x259d40 - 0x259e04
void sub_00259D40_0x259d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259D40_0x259d40");
#endif

    switch (ctx->pc) {
        case 0x259d68u: goto label_259d68;
        case 0x259d80u: goto label_259d80;
        default: break;
    }

    ctx->pc = 0x259d40u;

    // 0x259d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x259d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x259d44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x259d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x259d48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x259d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x259d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x259d50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x259d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259d58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x259d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259d60: 0xc096738  jal         func_259CE0
    ctx->pc = 0x259D60u;
    SET_GPR_U32(ctx, 31, 0x259D68u);
    ctx->pc = 0x259D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D60u;
    // 0x259d64: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259CE0u, 0x259D60u, 0x259D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D68u;
label_259d68:
    // 0x259d68: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x259d68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259d6c: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x259d6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x259d70: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x259d70u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x259d74: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x259d74u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x259d78: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x259D78u;
    SET_GPR_U32(ctx, 31, 0x259D80u);
    ctx->pc = 0x259D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D78u;
    // 0x259d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x259D78u, 0x259D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D80u;
label_259d80:
    // 0x259d80: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x259d80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x259d84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D84u;
    {
        const bool branch_taken_0x259d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d84) {
            ctx->pc = 0x259D98u;
            goto label_259d98;
        }
    }
    ctx->pc = 0x259D8Cu;
    // 0x259d8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x259D8Cu;
    {
        const bool branch_taken_0x259d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D8Cu;
        // 0x259d90: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d8c) {
            ctx->pc = 0x259DE8u;
            goto label_259de8;
        }
    }
    ctx->pc = 0x259D94u;
    // 0x259d94: 0x0  nop
    ctx->pc = 0x259d94u;
    // NOP
label_259d98:
    // 0x259d98: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x259d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x259d9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259d9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259da0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x259DA0u;
    {
        const bool branch_taken_0x259da0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x259DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DA0u;
        // 0x259da4: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259da0) {
            ctx->pc = 0x259DC0u;
            goto label_259dc0;
        }
    }
    ctx->pc = 0x259DA8u;
    // 0x259da8: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x259da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x259dac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259dacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259db0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x259db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x259db4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x259db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259db8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x259DB8u;
    {
        const bool branch_taken_0x259db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DB8u;
        // 0x259dbc: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259db8) {
            ctx->pc = 0x259DD0u;
            goto label_259dd0;
        }
    }
    ctx->pc = 0x259DC0u;
label_259dc0:
    // 0x259dc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259dc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259dc4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x259dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x259dc8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x259dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259dcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259dccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_259dd0:
    // 0x259dd0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x259dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259dd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259dd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259dd8: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x259dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x259ddc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x259ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x259de0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x259de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259de4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259de4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_259de8:
    // 0x259de8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x259de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259dec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x259decu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259df0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259df4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x259DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DFCu;
        // 0x259e00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259E04u;
}

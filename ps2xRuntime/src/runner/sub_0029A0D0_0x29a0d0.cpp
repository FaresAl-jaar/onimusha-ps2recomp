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

// Function: sub_0029A0D0
// Address: 0x29a0d0 - 0x29a170
void sub_0029A0D0_0x29a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A0D0_0x29a0d0");
#endif

    switch (ctx->pc) {
        case 0x29a100u: goto label_29a100;
        case 0x29a120u: goto label_29a120;
        default: break;
    }

    ctx->pc = 0x29a0d0u;

    // 0x29a0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a0d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29a0d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a0e0: 0x8c23ced4  lw          $v1, -0x312C($at)
    ctx->pc = 0x29a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED4u));
    // 0x29a0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a0e8: 0x3c048ff8  lui         $a0, 0x8FF8
    ctx->pc = 0x29a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36856 << 16));
    // 0x29a0ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x29a0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x29a0f0: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x29A0F0u;
    {
        const bool branch_taken_0x29a0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x29a0f0) {
            ctx->pc = 0x29A160u;
            goto label_29a160;
        }
    }
    ctx->pc = 0x29A0F8u;
    // 0x29a0f8: 0xc0b2cd0  jal         func_2CB340
    ctx->pc = 0x29A0F8u;
    SET_GPR_U32(ctx, 31, 0x29A100u);
    ctx->pc = 0x2CB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB340u, 0x29A0F8u, 0x29A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A100u;
label_29a100:
    // 0x29a100: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A100u;
    {
        const bool branch_taken_0x29a100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a100) {
            ctx->pc = 0x29A118u;
            goto label_29a118;
        }
    }
    ctx->pc = 0x29A108u;
    // 0x29a108: 0x920407d6  lbu         $a0, 0x7D6($s0)
    ctx->pc = 0x29a108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
    // 0x29a10c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a110: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x29A110u;
    {
        const bool branch_taken_0x29a110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29a110) {
            ctx->pc = 0x29A160u;
            goto label_29a160;
        }
    }
    ctx->pc = 0x29A118u;
label_29a118:
    // 0x29a118: 0xc09f920  jal         func_27E480
    ctx->pc = 0x29A118u;
    SET_GPR_U32(ctx, 31, 0x29A120u);
    ctx->pc = 0x29A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A118u;
    // 0x29a11c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E480u, 0x29A118u, 0x29A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A120u;
label_29a120:
    // 0x29a120: 0x92040781  lbu         $a0, 0x781($s0)
    ctx->pc = 0x29a120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1921)));
    // 0x29a124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a128: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29A128u;
    {
        const bool branch_taken_0x29a128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29a128) {
            ctx->pc = 0x29A148u;
            goto label_29a148;
        }
    }
    ctx->pc = 0x29A130u;
    // 0x29a130: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x29a130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x29a134: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x29a134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x29a138: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x29a138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x29a13c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29a13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29a140: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x29a140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x29a144: 0x0  nop
    ctx->pc = 0x29a144u;
    // NOP
label_29a148:
    // 0x29a148: 0x92030781  lbu         $v1, 0x781($s0)
    ctx->pc = 0x29a148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1921)));
    // 0x29a14c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A14Cu;
    {
        const bool branch_taken_0x29a14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a14c) {
            ctx->pc = 0x29A160u;
            goto label_29a160;
        }
    }
    ctx->pc = 0x29A154u;
    // 0x29a154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29a158: 0xa2030781  sb          $v1, 0x781($s0)
    ctx->pc = 0x29a158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1921), (uint8_t)GPR_U32(ctx, 3));
    // 0x29a15c: 0x0  nop
    ctx->pc = 0x29a15cu;
    // NOP
label_29a160:
    // 0x29a160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a168: 0x3e00008  jr          $ra
    ctx->pc = 0x29A168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A168u;
        // 0x29a16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A170u;
}

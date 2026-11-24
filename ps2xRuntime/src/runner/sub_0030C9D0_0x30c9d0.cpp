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

// Function: sub_0030C9D0
// Address: 0x30c9d0 - 0x30ca98
void sub_0030C9D0_0x30c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C9D0_0x30c9d0");
#endif

    switch (ctx->pc) {
        case 0x30ca00u: goto label_30ca00;
        case 0x30ca30u: goto label_30ca30;
        case 0x30ca60u: goto label_30ca60;
        default: break;
    }

    ctx->pc = 0x30c9d0u;

    // 0x30c9d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30c9d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30c9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30c9d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c9dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c9e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c9e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30c9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c9e8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x30c9e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30c9ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30C9ECu;
    {
        const bool branch_taken_0x30c9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9ECu;
        // 0x30c9f0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9ec) {
            ctx->pc = 0x30CA18u;
            goto label_30ca18;
        }
    }
    ctx->pc = 0x30C9F4u;
    // 0x30c9f4: 0x96320000  lhu         $s2, 0x0($s1)
    ctx->pc = 0x30c9f4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30c9f8: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x30C9F8u;
    SET_GPR_U32(ctx, 31, 0x30CA00u);
    ctx->pc = 0x30C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C9F8u;
    // 0x30c9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x30C9F8u, 0x30CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CA00u;
label_30ca00:
    // 0x30ca00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30ca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30ca04: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x30ca04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30ca08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CA08u;
    {
        const bool branch_taken_0x30ca08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ca08) {
            ctx->pc = 0x30CA18u;
            goto label_30ca18;
        }
    }
    ctx->pc = 0x30CA10u;
    // 0x30ca10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30CA10u;
    {
        const bool branch_taken_0x30ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA10u;
        // 0x30ca14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca10) {
            ctx->pc = 0x30CA80u;
            goto label_30ca80;
        }
    }
    ctx->pc = 0x30CA18u;
label_30ca18:
    // 0x30ca18: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x30ca18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x30ca1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30CA1Cu;
    {
        const bool branch_taken_0x30ca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ca1c) {
            ctx->pc = 0x30CA48u;
            goto label_30ca48;
        }
    }
    ctx->pc = 0x30CA24u;
    // 0x30ca24: 0x96320006  lhu         $s2, 0x6($s1)
    ctx->pc = 0x30ca24u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30ca28: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x30CA28u;
    SET_GPR_U32(ctx, 31, 0x30CA30u);
    ctx->pc = 0x30CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CA28u;
    // 0x30ca2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x30CA28u, 0x30CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CA30u;
label_30ca30:
    // 0x30ca30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30ca30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30ca34: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x30ca34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30ca38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CA38u;
    {
        const bool branch_taken_0x30ca38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ca38) {
            ctx->pc = 0x30CA48u;
            goto label_30ca48;
        }
    }
    ctx->pc = 0x30CA40u;
    // 0x30ca40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30CA40u;
    {
        const bool branch_taken_0x30ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA40u;
        // 0x30ca44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca40) {
            ctx->pc = 0x30CA80u;
            goto label_30ca80;
        }
    }
    ctx->pc = 0x30CA48u;
label_30ca48:
    // 0x30ca48: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30ca48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ca4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30CA4Cu;
    {
        const bool branch_taken_0x30ca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ca4c) {
            ctx->pc = 0x30CA78u;
            goto label_30ca78;
        }
    }
    ctx->pc = 0x30CA54u;
    // 0x30ca54: 0x9630000a  lhu         $s0, 0xA($s1)
    ctx->pc = 0x30ca54u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x30ca58: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x30CA58u;
    SET_GPR_U32(ctx, 31, 0x30CA60u);
    ctx->pc = 0x30CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CA58u;
    // 0x30ca5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x30CA58u, 0x30CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CA60u;
label_30ca60:
    // 0x30ca60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30ca64: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x30ca64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30ca68: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CA68u;
    {
        const bool branch_taken_0x30ca68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ca68) {
            ctx->pc = 0x30CA78u;
            goto label_30ca78;
        }
    }
    ctx->pc = 0x30CA70u;
    // 0x30ca70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30CA70u;
    {
        const bool branch_taken_0x30ca70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA70u;
        // 0x30ca74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca70) {
            ctx->pc = 0x30CA80u;
            goto label_30ca80;
        }
    }
    ctx->pc = 0x30CA78u;
label_30ca78:
    // 0x30ca78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30ca78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca7c: 0x0  nop
    ctx->pc = 0x30ca7cu;
    // NOP
label_30ca80:
    // 0x30ca80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30ca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ca84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30ca84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ca88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ca88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ca8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ca8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ca90: 0x3e00008  jr          $ra
    ctx->pc = 0x30CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA90u;
        // 0x30ca94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CA98u;
}

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

// Function: sub_0025AD60
// Address: 0x25ad60 - 0x25addc
void sub_0025AD60_0x25ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AD60_0x25ad60");
#endif

    switch (ctx->pc) {
        case 0x25adbcu: goto label_25adbc;
        case 0x25add0u: goto label_25add0;
        default: break;
    }

    ctx->pc = 0x25ad60u;

    // 0x25ad60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ad64: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x25AD64u;
    {
        const bool branch_taken_0x25ad64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD64u;
        // 0x25ad68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad64) {
            ctx->pc = 0x25ADC8u;
            goto label_25adc8;
        }
    }
    ctx->pc = 0x25AD6Cu;
    // 0x25ad6c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x25ad6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x25ad70: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x25ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x25ad74: 0x84850062  lh          $a1, 0x62($a0)
    ctx->pc = 0x25ad74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x25ad78: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x25ad78u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x25ad7c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x25ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x25ad80: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x25ad80u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25ad84: 0x0  nop
    ctx->pc = 0x25ad84u;
    // NOP
    // 0x25ad88: 0x0  nop
    ctx->pc = 0x25ad88u;
    // NOP
    // 0x25ad8c: 0x2812  mflo        $a1
    ctx->pc = 0x25ad8cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x25ad90: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x25ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25ad94: 0xa4830060  sh          $v1, 0x60($a0)
    ctx->pc = 0x25ad94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ad98: 0x84830062  lh          $v1, 0x62($a0)
    ctx->pc = 0x25ad98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x25ad9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25ada0: 0xa4830062  sh          $v1, 0x62($a0)
    ctx->pc = 0x25ada0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ada4: 0x84830062  lh          $v1, 0x62($a0)
    ctx->pc = 0x25ada4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x25ada8: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x25ada8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25adac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x25ADACu;
    {
        const bool branch_taken_0x25adac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25adac) {
            ctx->pc = 0x25ADD0u;
            goto label_25add0;
        }
    }
    ctx->pc = 0x25ADB4u;
    // 0x25adb4: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x25ADB4u;
    SET_GPR_U32(ctx, 31, 0x25ADBCu);
    ctx->pc = 0x25ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ADB4u;
    // 0x25adb8: 0xa4800060  sh          $zero, 0x60($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25ADB4u, 0x25ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADBCu;
label_25adbc:
    // 0x25adbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25ADBCu;
    {
        const bool branch_taken_0x25adbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25adbc) {
            ctx->pc = 0x25ADD0u;
            goto label_25add0;
        }
    }
    ctx->pc = 0x25ADC4u;
    // 0x25adc4: 0x0  nop
    ctx->pc = 0x25adc4u;
    // NOP
label_25adc8:
    // 0x25adc8: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x25ADC8u;
    SET_GPR_U32(ctx, 31, 0x25ADD0u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25ADC8u, 0x25ADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADD0u;
label_25add0:
    // 0x25add0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25add0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25add4: 0x3e00008  jr          $ra
    ctx->pc = 0x25ADD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADD4u;
        // 0x25add8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ADD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ADDCu;
}

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

// Function: sub_0028ADA0
// Address: 0x28ada0 - 0x28ae20
void sub_0028ADA0_0x28ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ADA0_0x28ada0");
#endif

    switch (ctx->pc) {
        case 0x28adc4u: goto label_28adc4;
        case 0x28adf0u: goto label_28adf0;
        default: break;
    }

    ctx->pc = 0x28ada0u;

    // 0x28ada0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ada4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ada8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28adac: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x28adacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x28adb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28adb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adb4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28adb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28adbc: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x28ADBCu;
    SET_GPR_U32(ctx, 31, 0x28ADC4u);
    ctx->pc = 0x28ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADBCu;
    // 0x28adc0: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x28ADBCu, 0x28ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADC4u;
label_28adc4:
    // 0x28adc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28ADC4u;
    {
        const bool branch_taken_0x28adc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28adc4) {
            ctx->pc = 0x28ADD8u;
            goto label_28add8;
        }
    }
    ctx->pc = 0x28ADCCu;
    // 0x28adcc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28ADCCu;
    {
        const bool branch_taken_0x28adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADCCu;
        // 0x28add0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adcc) {
            ctx->pc = 0x28AE10u;
            goto label_28ae10;
        }
    }
    ctx->pc = 0x28ADD4u;
    // 0x28add4: 0x0  nop
    ctx->pc = 0x28add4u;
    // NOP
label_28add8:
    // 0x28add8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x28add8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28addc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28addcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28ade0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x28ADE0u;
    {
        const bool branch_taken_0x28ade0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADE0u;
        // 0x28ade4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ade0) {
            ctx->pc = 0x28AE10u;
            goto label_28ae10;
        }
    }
    ctx->pc = 0x28ADE8u;
    // 0x28ade8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28ade8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adec: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x28adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28adf0:
    // 0x28adf0: 0xa4a40020  sh          $a0, 0x20($a1)
    ctx->pc = 0x28adf0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x28adf4: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x28adf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28adf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28adf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28adfc: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x28adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x28ae00: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x28ae00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28ae04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28AE04u;
    {
        const bool branch_taken_0x28ae04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ae04) {
            ctx->pc = 0x28ADF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28adf0;
        }
    }
    ctx->pc = 0x28AE0Cu;
    // 0x28ae0c: 0x0  nop
    ctx->pc = 0x28ae0cu;
    // NOP
label_28ae10:
    // 0x28ae10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ae10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ae14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ae14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ae18: 0x3e00008  jr          $ra
    ctx->pc = 0x28AE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE18u;
        // 0x28ae1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AE20u;
}

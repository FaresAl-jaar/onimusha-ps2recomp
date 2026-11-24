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

// Function: sub_00285CC0
// Address: 0x285cc0 - 0x285d40
void sub_00285CC0_0x285cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285CC0_0x285cc0");
#endif

    switch (ctx->pc) {
        case 0x285ce4u: goto label_285ce4;
        case 0x285d10u: goto label_285d10;
        default: break;
    }

    ctx->pc = 0x285cc0u;

    // 0x285cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x285cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x285cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x285cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285ccc: 0x90a3001c  lbu         $v1, 0x1C($a1)
    ctx->pc = 0x285cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x285cd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x285cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cd4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x285cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x285cd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285cdc: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x285CDCu;
    SET_GPR_U32(ctx, 31, 0x285CE4u);
    ctx->pc = 0x285CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CDCu;
    // 0x285ce0: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x285CDCu, 0x285CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CE4u;
label_285ce4:
    // 0x285ce4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285CE4u;
    {
        const bool branch_taken_0x285ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285ce4) {
            ctx->pc = 0x285CF8u;
            goto label_285cf8;
        }
    }
    ctx->pc = 0x285CECu;
    // 0x285cec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x285CECu;
    {
        const bool branch_taken_0x285cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CECu;
        // 0x285cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cec) {
            ctx->pc = 0x285D30u;
            goto label_285d30;
        }
    }
    ctx->pc = 0x285CF4u;
    // 0x285cf4: 0x0  nop
    ctx->pc = 0x285cf4u;
    // NOP
label_285cf8:
    // 0x285cf8: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x285cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x285cfc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x285cfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285d00: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x285D00u;
    {
        const bool branch_taken_0x285d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D00u;
        // 0x285d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d00) {
            ctx->pc = 0x285D30u;
            goto label_285d30;
        }
    }
    ctx->pc = 0x285D08u;
    // 0x285d08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x285d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d0c: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x285d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_285d10:
    // 0x285d10: 0xa4a40010  sh          $a0, 0x10($a1)
    ctx->pc = 0x285d10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x285d14: 0xa0a00013  sb          $zero, 0x13($a1)
    ctx->pc = 0x285d14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x285d18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x285d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x285d1c: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x285d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x285d20: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x285d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285d24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x285D24u;
    {
        const bool branch_taken_0x285d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D24u;
        // 0x285d28: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d24) {
            ctx->pc = 0x285D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285d10;
        }
    }
    ctx->pc = 0x285D2Cu;
    // 0x285d2c: 0x0  nop
    ctx->pc = 0x285d2cu;
    // NOP
label_285d30:
    // 0x285d30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285d38: 0x3e00008  jr          $ra
    ctx->pc = 0x285D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D38u;
        // 0x285d3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285D40u;
}

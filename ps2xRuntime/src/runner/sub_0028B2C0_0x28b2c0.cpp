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

// Function: sub_0028B2C0
// Address: 0x28b2c0 - 0x28b338
void sub_0028B2C0_0x28b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B2C0_0x28b2c0");
#endif

    switch (ctx->pc) {
        case 0x28b2dcu: goto label_28b2dc;
        case 0x28b308u: goto label_28b308;
        default: break;
    }

    ctx->pc = 0x28b2c0u;

    // 0x28b2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28b2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28b2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b2cc: 0x90a20024  lbu         $v0, 0x24($a1)
    ctx->pc = 0x28b2ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x28b2d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28b2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b2d4: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x28B2D4u;
    SET_GPR_U32(ctx, 31, 0x28B2DCu);
    ctx->pc = 0x28B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B2D4u;
    // 0x28b2d8: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x28B2D4u, 0x28B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2DCu;
label_28b2dc:
    // 0x28b2dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B2DCu;
    {
        const bool branch_taken_0x28b2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b2dc) {
            ctx->pc = 0x28B2F0u;
            goto label_28b2f0;
        }
    }
    ctx->pc = 0x28B2E4u;
    // 0x28b2e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28B2E4u;
    {
        const bool branch_taken_0x28b2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2E4u;
        // 0x28b2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2e4) {
            ctx->pc = 0x28B328u;
            goto label_28b328;
        }
    }
    ctx->pc = 0x28B2ECu;
    // 0x28b2ec: 0x0  nop
    ctx->pc = 0x28b2ecu;
    // NOP
label_28b2f0:
    // 0x28b2f0: 0x92030024  lbu         $v1, 0x24($s0)
    ctx->pc = 0x28b2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x28b2f4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28b2f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28b2f8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x28B2F8u;
    {
        const bool branch_taken_0x28b2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F8u;
        // 0x28b2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2f8) {
            ctx->pc = 0x28B328u;
            goto label_28b328;
        }
    }
    ctx->pc = 0x28B300u;
    // 0x28b300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28b300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b304: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x28b304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28b308:
    // 0x28b308: 0xa4a40020  sh          $a0, 0x20($a1)
    ctx->pc = 0x28b308u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x28b30c: 0x92030024  lbu         $v1, 0x24($s0)
    ctx->pc = 0x28b30cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x28b310: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28b310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28b314: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x28b314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x28b318: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x28b318u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28b31c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28B31Cu;
    {
        const bool branch_taken_0x28b31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b31c) {
            ctx->pc = 0x28B308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b308;
        }
    }
    ctx->pc = 0x28B324u;
    // 0x28b324: 0x0  nop
    ctx->pc = 0x28b324u;
    // NOP
label_28b328:
    // 0x28b328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28b328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b32c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b330: 0x3e00008  jr          $ra
    ctx->pc = 0x28B330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B330u;
        // 0x28b334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B338u;
}

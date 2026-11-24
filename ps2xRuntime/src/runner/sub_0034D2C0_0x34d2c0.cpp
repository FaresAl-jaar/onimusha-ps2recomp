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

// Function: sub_0034D2C0
// Address: 0x34d2c0 - 0x34d368
void sub_0034D2C0_0x34d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D2C0_0x34d2c0");
#endif

    switch (ctx->pc) {
        case 0x34d300u: goto label_34d300;
        case 0x34d320u: goto label_34d320;
        default: break;
    }

    ctx->pc = 0x34d2c0u;

    // 0x34d2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34d2c4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34d2c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d2cc: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x34d2ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34d2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d2d4: 0x24427f00  addiu       $v0, $v0, 0x7F00
    ctx->pc = 0x34d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32512));
    // 0x34d2d8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x34d2d8u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x657F00u));
    // 0x34d2dc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x34d2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34d2e0: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x34d2e0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x657F10u));
    // 0x34d2e4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x34d2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34d2e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34d2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d2ec: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x34d2ecu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x657F20u));
    // 0x34d2f0: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x34d2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x34d2f4: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x34d2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x34d2f8: 0xfce20020  sd          $v0, 0x20($a3)
    ctx->pc = 0x34d2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
    // 0x34d2fc: 0x0  nop
    ctx->pc = 0x34d2fcu;
    // NOP
label_34d300:
    // 0x34d300: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x34d300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34d304: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34D304u;
    {
        const bool branch_taken_0x34d304 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x34d304) {
            ctx->pc = 0x34D340u;
            goto label_34d340;
        }
    }
    ctx->pc = 0x34D30Cu;
    // 0x34d30c: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x34d30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x34d310: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34D310u;
    {
        const bool branch_taken_0x34d310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x34d310) {
            ctx->pc = 0x34D340u;
            goto label_34d340;
        }
    }
    ctx->pc = 0x34D318u;
    // 0x34d318: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x34D318u;
    SET_GPR_U32(ctx, 31, 0x34D320u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x34D318u, 0x34D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D320u;
label_34d320:
    // 0x34d320: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x34d320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x34d324: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x34d324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x34d328: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x34d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x34d32c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x34d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x34d330: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x34d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x34d334: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x34d334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34d338: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34D338u;
    {
        const bool branch_taken_0x34d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D338u;
        // 0x34d33c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d338) {
            ctx->pc = 0x34D358u;
            goto label_34d358;
        }
    }
    ctx->pc = 0x34D340u;
label_34d340:
    // 0x34d340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34d340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34d344: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x34d344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x34d348: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x34D348u;
    {
        const bool branch_taken_0x34d348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D348u;
        // 0x34d34c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d348) {
            ctx->pc = 0x34D300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d300;
        }
    }
    ctx->pc = 0x34D350u;
    // 0x34d350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d354: 0x0  nop
    ctx->pc = 0x34d354u;
    // NOP
label_34d358:
    // 0x34d358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d35c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d360: 0x3e00008  jr          $ra
    ctx->pc = 0x34D360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D360u;
        // 0x34d364: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D368u;
}

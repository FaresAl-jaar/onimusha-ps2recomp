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

// Function: sub_00275540
// Address: 0x275540 - 0x2755a8
void sub_00275540_0x275540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275540_0x275540");
#endif

    ctx->pc = 0x275540u;

    // 0x275540: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x275540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275544: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275544u;
    {
        const bool branch_taken_0x275544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275544) {
            ctx->pc = 0x275558u;
            goto label_275558;
        }
    }
    ctx->pc = 0x27554Cu;
    // 0x27554c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27554Cu;
    {
        const bool branch_taken_0x27554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27554Cu;
        // 0x275550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27554c) {
            ctx->pc = 0x2755A0u;
            goto label_2755a0;
        }
    }
    ctx->pc = 0x275554u;
    // 0x275554: 0x0  nop
    ctx->pc = 0x275554u;
    // NOP
label_275558:
    // 0x275558: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x275558u;
    {
        const bool branch_taken_0x275558 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275558u;
        // 0x27555c: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275558) {
            ctx->pc = 0x275570u;
            goto label_275570;
        }
    }
    ctx->pc = 0x275560u;
    // 0x275560: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x275560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x275564: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x275564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275568u;
    {
        const bool branch_taken_0x275568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275568) {
            ctx->pc = 0x275578u;
            goto label_275578;
        }
    }
    ctx->pc = 0x275570u;
label_275570:
    // 0x275570: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275570u;
    {
        const bool branch_taken_0x275570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275570u;
        // 0x275574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275570) {
            ctx->pc = 0x2755A0u;
            goto label_2755a0;
        }
    }
    ctx->pc = 0x275578u;
label_275578:
    // 0x275578: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x275578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x27557c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x27557cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275580: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x275580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275584: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x275584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275588: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275588u;
    {
        const bool branch_taken_0x275588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275588u;
        // 0x27558c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275588) {
            ctx->pc = 0x275598u;
            goto label_275598;
        }
    }
    ctx->pc = 0x275590u;
    // 0x275590: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275590u;
    {
        const bool branch_taken_0x275590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275590) {
            ctx->pc = 0x27559Cu;
            goto label_27559c;
        }
    }
    ctx->pc = 0x275598u;
label_275598:
    // 0x275598: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x275598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_27559c:
    // 0x27559c: 0x0  nop
    ctx->pc = 0x27559cu;
    // NOP
label_2755a0:
    // 0x2755a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2755A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2755A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2755A8u;
}

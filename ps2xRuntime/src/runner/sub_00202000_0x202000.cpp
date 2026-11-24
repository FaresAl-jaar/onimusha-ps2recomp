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

// Function: sub_00202000
// Address: 0x202000 - 0x202040
void sub_00202000_0x202000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202000_0x202000");
#endif

    switch (ctx->pc) {
        case 0x202020u: goto label_202020;
        default: break;
    }

    ctx->pc = 0x202000u;

    // 0x202000: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x202000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202004: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x202004u;
    {
        const bool branch_taken_0x202004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202004u;
        // 0x202008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202004) {
            ctx->pc = 0x202038u;
            goto label_202038;
        }
    }
    ctx->pc = 0x20200Cu;
    // 0x20200c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x20200cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x202010: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202010u;
    {
        const bool branch_taken_0x202010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202010) {
            ctx->pc = 0x202038u;
            goto label_202038;
        }
    }
    ctx->pc = 0x202018u;
    // 0x202018: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x202018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x20201c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202020:
    // 0x202020: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202020u;
    {
        const bool branch_taken_0x202020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x202020) {
            ctx->pc = 0x202038u;
            goto label_202038;
        }
    }
    ctx->pc = 0x202028u;
    // 0x202028: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x202028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x20202c: 0x24420047  addiu       $v0, $v0, 0x47
    ctx->pc = 0x20202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 71));
    // 0x202030: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202034: 0x2c440002  sltiu       $a0, $v0, 0x2
    ctx->pc = 0x202034u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_202038:
    // 0x202038: 0x3e00008  jr          $ra
    ctx->pc = 0x202038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202038u;
        // 0x20203c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202040u;
}

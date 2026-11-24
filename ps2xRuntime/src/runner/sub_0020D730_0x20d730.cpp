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

// Function: sub_0020D730
// Address: 0x20d730 - 0x20d780
void sub_0020D730_0x20d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D730_0x20d730");
#endif

    switch (ctx->pc) {
        case 0x20d74cu: goto label_20d74c;
        default: break;
    }

    ctx->pc = 0x20d730u;

    // 0x20d730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20d738: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20d738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d73c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20d73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20d740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20d744: 0xc083994  jal         func_20E650
    ctx->pc = 0x20D744u;
    SET_GPR_U32(ctx, 31, 0x20D74Cu);
    ctx->pc = 0x20D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D744u;
    // 0x20d748: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E650u, 0x20D744u, 0x20D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D74Cu;
label_20d74c:
    // 0x20d74c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20d74cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d750: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20D750u;
    {
        const bool branch_taken_0x20d750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D750u;
        // 0x20d754: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d750) {
            ctx->pc = 0x20D76Cu;
            goto label_20d76c;
        }
    }
    ctx->pc = 0x20D758u;
    // 0x20d758: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x20d758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20d75c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20d75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d760: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x20d760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x20d764: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x20d764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20d768: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20d768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_20d76c:
    // 0x20d76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20d76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20d770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d778: 0x3e00008  jr          $ra
    ctx->pc = 0x20D778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D778u;
        // 0x20d77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D780u;
}

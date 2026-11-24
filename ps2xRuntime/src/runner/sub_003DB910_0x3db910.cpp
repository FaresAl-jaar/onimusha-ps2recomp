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

// Function: sub_003DB910
// Address: 0x3db910 - 0x3db97c
void sub_003DB910_0x3db910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB910_0x3db910");
#endif

    switch (ctx->pc) {
        case 0x3db930u: goto label_3db930;
        default: break;
    }

    ctx->pc = 0x3db910u;

    // 0x3db910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3db914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3db918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db91c: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x3db91cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x3db920: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DB920u;
    {
        const bool branch_taken_0x3db920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3db920) {
            ctx->pc = 0x3DB938u;
            goto label_3db938;
        }
    }
    ctx->pc = 0x3DB928u;
    // 0x3db928: 0xc0f6e60  jal         func_3DB980
    ctx->pc = 0x3DB928u;
    SET_GPR_U32(ctx, 31, 0x3DB930u);
    ctx->pc = 0x3DB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB980u, 0x3DB928u, 0x3DB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB930u;
label_3db930:
    // 0x3db930: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3DB930u;
    {
        const bool branch_taken_0x3db930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db930) {
            ctx->pc = 0x3DB970u;
            goto label_3db970;
        }
    }
    ctx->pc = 0x3DB938u;
label_3db938:
    // 0x3db938: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3db938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3db93c: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x3db93cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3db940: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3db940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3db944: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3db944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3db948: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3db948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3db94c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3db94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3db950: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DB950u;
    {
        const bool branch_taken_0x3db950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db950) {
            ctx->pc = 0x3DB968u;
            goto label_3db968;
        }
    }
    ctx->pc = 0x3DB958u;
    // 0x3db958: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3db958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3db95c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB95Cu;
    {
        const bool branch_taken_0x3db95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB95Cu;
        // 0x3db960: 0xac8307c0  sw          $v1, 0x7C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db95c) {
            ctx->pc = 0x3DB970u;
            goto label_3db970;
        }
    }
    ctx->pc = 0x3DB964u;
    // 0x3db964: 0x0  nop
    ctx->pc = 0x3db964u;
    // NOP
label_3db968:
    // 0x3db968: 0xac8007c0  sw          $zero, 0x7C0($a0)
    ctx->pc = 0x3db968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1984), GPR_U32(ctx, 0));
    // 0x3db96c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3db96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3db970:
    // 0x3db970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db974: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB974u;
        // 0x3db978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB97Cu;
}

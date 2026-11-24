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

// Function: sub_002BD910
// Address: 0x2bd910 - 0x2bd964
void sub_002BD910_0x2bd910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD910_0x2bd910");
#endif

    switch (ctx->pc) {
        case 0x2bd930u: goto label_2bd930;
        default: break;
    }

    ctx->pc = 0x2bd910u;

    // 0x2bd910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd914: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2bd914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2bd918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bd918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bd91c: 0x2484a790  addiu       $a0, $a0, -0x5870
    ctx->pc = 0x2bd91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
    // 0x2bd920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd924: 0x8ca508e0  lw          $a1, 0x8E0($a1)
    ctx->pc = 0x2bd924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2272)));
    // 0x2bd928: 0xc07cc2c  jal         func_1F30B0
    ctx->pc = 0x2BD928u;
    SET_GPR_U32(ctx, 31, 0x2BD930u);
    ctx->pc = 0x2BD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD928u;
    // 0x2bd92c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B0u, 0x2BD928u, 0x2BD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD930u;
label_2bd930:
    // 0x2bd930: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD930u;
    {
        const bool branch_taken_0x2bd930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd930) {
            ctx->pc = 0x2BD950u;
            goto label_2bd950;
        }
    }
    ctx->pc = 0x2BD938u;
    // 0x2bd938: 0xdc430620  ld          $v1, 0x620($v0)
    ctx->pc = 0x2bd938u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1568)));
    // 0x2bd93c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD93Cu;
    {
        const bool branch_taken_0x2bd93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd93c) {
            ctx->pc = 0x2BD950u;
            goto label_2bd950;
        }
    }
    ctx->pc = 0x2BD944u;
    // 0x2bd944: 0x90430600  lbu         $v1, 0x600($v0)
    ctx->pc = 0x2bd944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x2bd948: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bd948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bd94c: 0xa0430600  sb          $v1, 0x600($v0)
    ctx->pc = 0x2bd94cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1536), (uint8_t)GPR_U32(ctx, 3));
label_2bd950:
    // 0x2bd950: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2bd950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2bd954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd95c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD95Cu;
        // 0x2bd960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD964u;
}

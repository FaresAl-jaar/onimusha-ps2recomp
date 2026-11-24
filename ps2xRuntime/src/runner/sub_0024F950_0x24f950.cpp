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

// Function: sub_0024F950
// Address: 0x24f950 - 0x24f980
void sub_0024F950_0x24f950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F950_0x24f950");
#endif

    ctx->pc = 0x24f950u;

    // 0x24f950: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f958: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f958u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f95c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F95Cu;
    {
        const bool branch_taken_0x24f95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F95Cu;
        // 0x24f960: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f95c) {
            ctx->pc = 0x24F974u;
            goto label_24f974;
        }
    }
    ctx->pc = 0x24F964u;
    // 0x24f964: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24f964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24f968: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24f968u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f96c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24F96Cu;
    {
        const bool branch_taken_0x24f96c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F96Cu;
        // 0x24f970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f96c) {
            ctx->pc = 0x24F978u;
            goto label_24f978;
        }
    }
    ctx->pc = 0x24F974u;
label_24f974:
    // 0x24f974: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x24f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_24f978:
    // 0x24f978: 0x3e00008  jr          $ra
    ctx->pc = 0x24F978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F980u;
}

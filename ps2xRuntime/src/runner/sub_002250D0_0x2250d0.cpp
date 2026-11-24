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

// Function: sub_002250D0
// Address: 0x2250d0 - 0x225108
void sub_002250D0_0x2250d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002250D0_0x2250d0");
#endif

    switch (ctx->pc) {
        case 0x2250d0u: goto label_2250d0;
        case 0x2250d4u: goto label_2250d4;
        case 0x2250d8u: goto label_2250d8;
        case 0x2250dcu: goto label_2250dc;
        case 0x2250e0u: goto label_2250e0;
        case 0x2250e4u: goto label_2250e4;
        case 0x2250e8u: goto label_2250e8;
        case 0x2250ecu: goto label_2250ec;
        case 0x2250f0u: goto label_2250f0;
        case 0x2250f4u: goto label_2250f4;
        case 0x2250f8u: goto label_2250f8;
        case 0x2250fcu: goto label_2250fc;
        case 0x225100u: goto label_225100;
        case 0x225104u: goto label_225104;
        default: break;
    }

    ctx->pc = 0x2250d0u;

label_2250d0:
    // 0x2250d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2250d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2250d4:
    // 0x2250d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2250d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2250d8:
    // 0x2250d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2250d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2250dc:
    // 0x2250dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2250dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2250e0:
    // 0x2250e0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2250e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2250e4:
    // 0x2250e4: 0x90450014  lbu         $a1, 0x14($v0)
    ctx->pc = 0x2250e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_2250e8:
    // 0x2250e8: 0x90460015  lbu         $a2, 0x15($v0)
    ctx->pc = 0x2250e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
label_2250ec:
    // 0x2250ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2250f0:
    if (ctx->pc == 0x2250F0u) {
        ctx->pc = 0x2250F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250ECu;
        // 0x2250f0: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2250F4u;
        goto label_2250f4;
    }
    ctx->pc = 0x2250ECu;
    {
        const bool branch_taken_0x2250ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250ECu;
        // 0x2250f0: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250ec) {
            ctx->pc = 0x2250FCu;
            goto label_2250fc;
        }
    }
    ctx->pc = 0x2250F4u;
label_2250f4:
    // 0x2250f4: 0x60f809  jalr        $v1
label_2250f8:
    if (ctx->pc == 0x2250F8u) {
        ctx->pc = 0x2250FCu;
        goto label_2250fc;
    }
    ctx->pc = 0x2250F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2250FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2250F4u, 0x2250FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2250FCu;
label_2250fc:
    // 0x2250fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2250fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225100:
    // 0x225100: 0x3e00008  jr          $ra
label_225104:
    if (ctx->pc == 0x225104u) {
        ctx->pc = 0x225104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225100u;
        // 0x225104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225108u;
        goto label_fallthrough_0x225100;
    }
    ctx->pc = 0x225100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225100u;
        // 0x225104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x225100:
    ctx->pc = 0x225108u;
}

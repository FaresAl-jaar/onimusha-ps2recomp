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

// Function: sub_00210408
// Address: 0x210408 - 0x21043c
void sub_00210408_0x210408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210408_0x210408");
#endif

    switch (ctx->pc) {
        case 0x210408u: goto label_210408;
        case 0x21040cu: goto label_21040c;
        case 0x210410u: goto label_210410;
        case 0x210414u: goto label_210414;
        case 0x210418u: goto label_210418;
        case 0x21041cu: goto label_21041c;
        case 0x210420u: goto label_210420;
        case 0x210424u: goto label_210424;
        case 0x210428u: goto label_210428;
        case 0x21042cu: goto label_21042c;
        case 0x210430u: goto label_210430;
        case 0x210434u: goto label_210434;
        case 0x210438u: goto label_210438;
        default: break;
    }

    ctx->pc = 0x210408u;

label_210408:
    // 0x210408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21040c:
    // 0x21040c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21040cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_210410:
    // 0x210410: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x210410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_210414:
    // 0x210414: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x210414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_210418:
    // 0x210418: 0x40f809  jalr        $v0
label_21041c:
    if (ctx->pc == 0x21041Cu) {
        ctx->pc = 0x210420u;
        goto label_210420;
    }
    ctx->pc = 0x210418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210420u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210418u, 0x210420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210420u;
label_210420:
    // 0x210420: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x210420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_210424:
    // 0x210424: 0x8c64fb70  lw          $a0, -0x490($v1)
    ctx->pc = 0x210424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966128)));
label_210428:
    // 0x210428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21042c:
    // 0x21042c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x21042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_210430:
    // 0x210430: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x210430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_210434:
    // 0x210434: 0x3e00008  jr          $ra
label_210438:
    if (ctx->pc == 0x210438u) {
        ctx->pc = 0x210438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210434u;
        // 0x210438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21043Cu;
        goto label_fallthrough_0x210434;
    }
    ctx->pc = 0x210434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210434u;
        // 0x210438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x210434:
    ctx->pc = 0x21043Cu;
}

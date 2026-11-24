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

// Function: sub_002123F0
// Address: 0x2123f0 - 0x212430
void sub_002123F0_0x2123f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002123F0_0x2123f0");
#endif

    switch (ctx->pc) {
        case 0x2123f0u: goto label_2123f0;
        case 0x2123f4u: goto label_2123f4;
        case 0x2123f8u: goto label_2123f8;
        case 0x2123fcu: goto label_2123fc;
        case 0x212400u: goto label_212400;
        case 0x212404u: goto label_212404;
        case 0x212408u: goto label_212408;
        case 0x21240cu: goto label_21240c;
        case 0x212410u: goto label_212410;
        case 0x212414u: goto label_212414;
        case 0x212418u: goto label_212418;
        case 0x21241cu: goto label_21241c;
        case 0x212420u: goto label_212420;
        case 0x212424u: goto label_212424;
        case 0x212428u: goto label_212428;
        case 0x21242cu: goto label_21242c;
        default: break;
    }

    ctx->pc = 0x2123f0u;

label_2123f0:
    // 0x2123f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2123f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2123f4:
    // 0x2123f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2123f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2123f8:
    // 0x2123f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2123f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2123fc:
    // 0x2123fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_212400:
    if (ctx->pc == 0x212400u) {
        ctx->pc = 0x212400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123FCu;
        // 0x212400: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212404u;
        goto label_212404;
    }
    ctx->pc = 0x2123FCu;
    {
        const bool branch_taken_0x2123fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123FCu;
        // 0x212400: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123fc) {
            ctx->pc = 0x212408u;
            goto label_212408;
        }
    }
    ctx->pc = 0x212404u;
label_212404:
    // 0x212404: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x212404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_212408:
    // 0x212408: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_21240c:
    if (ctx->pc == 0x21240Cu) {
        ctx->pc = 0x21240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212408u;
        // 0x21240c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212410u;
        goto label_212410;
    }
    ctx->pc = 0x212408u;
    {
        const bool branch_taken_0x212408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212408u;
        // 0x21240c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212408) {
            ctx->pc = 0x212428u;
            goto label_212428;
        }
    }
    ctx->pc = 0x212410u;
label_212410:
    // 0x212410: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x212410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_212414:
    // 0x212414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_212418:
    if (ctx->pc == 0x212418u) {
        ctx->pc = 0x21241Cu;
        goto label_21241c;
    }
    ctx->pc = 0x212414u;
    {
        const bool branch_taken_0x212414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212414) {
            ctx->pc = 0x212428u;
            goto label_212428;
        }
    }
    ctx->pc = 0x21241Cu;
label_21241c:
    // 0x21241c: 0x40f809  jalr        $v0
label_212420:
    if (ctx->pc == 0x212420u) {
        ctx->pc = 0x212420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21241Cu;
        // 0x212420: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212424u;
        goto label_212424;
    }
    ctx->pc = 0x21241Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212424u);
        ctx->pc = 0x212420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21241Cu;
        // 0x212420: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21241Cu, 0x212424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212424u;
label_212424:
    // 0x212424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212428:
    // 0x212428: 0x3e00008  jr          $ra
label_21242c:
    if (ctx->pc == 0x21242Cu) {
        ctx->pc = 0x21242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212428u;
        // 0x21242c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212430u;
        goto label_fallthrough_0x212428;
    }
    ctx->pc = 0x212428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212428u;
        // 0x21242c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212428:
    ctx->pc = 0x212430u;
}

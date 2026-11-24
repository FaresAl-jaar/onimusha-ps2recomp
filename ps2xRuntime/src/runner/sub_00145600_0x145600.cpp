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

// Function: sub_00145600
// Address: 0x145600 - 0x145644
void sub_00145600_0x145600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145600_0x145600");
#endif

    switch (ctx->pc) {
        case 0x145600u: goto label_145600;
        case 0x145604u: goto label_145604;
        case 0x145608u: goto label_145608;
        case 0x14560cu: goto label_14560c;
        case 0x145610u: goto label_145610;
        case 0x145614u: goto label_145614;
        case 0x145618u: goto label_145618;
        case 0x14561cu: goto label_14561c;
        case 0x145620u: goto label_145620;
        case 0x145624u: goto label_145624;
        case 0x145628u: goto label_145628;
        case 0x14562cu: goto label_14562c;
        case 0x145630u: goto label_145630;
        case 0x145634u: goto label_145634;
        case 0x145638u: goto label_145638;
        case 0x14563cu: goto label_14563c;
        case 0x145640u: goto label_145640;
        default: break;
    }

    ctx->pc = 0x145600u;

label_145600:
    // 0x145600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_145604:
    // 0x145604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_145608:
    // 0x145608: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_14560c:
    if (ctx->pc == 0x14560Cu) {
        ctx->pc = 0x14560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145608u;
        // 0x14560c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145610u;
        goto label_145610;
    }
    ctx->pc = 0x145608u;
    {
        const bool branch_taken_0x145608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145608u;
        // 0x14560c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145608) {
            ctx->pc = 0x145638u;
            goto label_145638;
        }
    }
    ctx->pc = 0x145610u;
label_145610:
    // 0x145610: 0x8ca60134  lw          $a2, 0x134($a1)
    ctx->pc = 0x145610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_145614:
    // 0x145614: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_145618:
    if (ctx->pc == 0x145618u) {
        ctx->pc = 0x14561Cu;
        goto label_14561c;
    }
    ctx->pc = 0x145614u;
    {
        const bool branch_taken_0x145614 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x145614) {
            ctx->pc = 0x145638u;
            goto label_145638;
        }
    }
    ctx->pc = 0x14561Cu;
label_14561c:
    // 0x14561c: 0x90a4011c  lbu         $a0, 0x11C($a1)
    ctx->pc = 0x14561cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 284)));
label_145620:
    // 0x145620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145624:
    // 0x145624: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_145628:
    if (ctx->pc == 0x145628u) {
        ctx->pc = 0x145628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145624u;
        // 0x145628: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14562Cu;
        goto label_14562c;
    }
    ctx->pc = 0x145624u;
    {
        const bool branch_taken_0x145624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x145628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145624u;
        // 0x145628: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145624) {
            ctx->pc = 0x145638u;
            goto label_145638;
        }
    }
    ctx->pc = 0x14562Cu;
label_14562c:
    // 0x14562c: 0xc0f809  jalr        $a2
label_145630:
    if (ctx->pc == 0x145630u) {
        ctx->pc = 0x145634u;
        goto label_145634;
    }
    ctx->pc = 0x14562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x145634u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14562Cu, 0x145634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145634u;
label_145634:
    // 0x145634: 0x0  nop
    ctx->pc = 0x145634u;
    // NOP
label_145638:
    // 0x145638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14563c:
    // 0x14563c: 0x3e00008  jr          $ra
label_145640:
    if (ctx->pc == 0x145640u) {
        ctx->pc = 0x145640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14563Cu;
        // 0x145640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145644u;
        goto label_fallthrough_0x14563c;
    }
    ctx->pc = 0x14563Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14563Cu;
        // 0x145640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14563Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14563c:
    ctx->pc = 0x145644u;
}

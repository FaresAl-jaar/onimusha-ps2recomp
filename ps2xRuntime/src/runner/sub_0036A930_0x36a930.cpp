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

// Function: sub_0036A930
// Address: 0x36a930 - 0x36a97c
void sub_0036A930_0x36a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A930_0x36a930");
#endif

    switch (ctx->pc) {
        case 0x36a960u: goto label_36a960;
        case 0x36a970u: goto label_36a970;
        default: break;
    }

    ctx->pc = 0x36a930u;

    // 0x36a930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a934: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a93c: 0x90850020  lbu         $a1, 0x20($a0)
    ctx->pc = 0x36a93cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36a940: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A940u;
    {
        const bool branch_taken_0x36a940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A940u;
        // 0x36a944: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a940) {
            ctx->pc = 0x36A968u;
            goto label_36a968;
        }
    }
    ctx->pc = 0x36A948u;
    // 0x36a948: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A948u;
    {
        const bool branch_taken_0x36a948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a948) {
            ctx->pc = 0x36A958u;
            goto label_36a958;
        }
    }
    ctx->pc = 0x36A950u;
    // 0x36a950: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36A950u;
    {
        const bool branch_taken_0x36a950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a950) {
            ctx->pc = 0x36A970u;
            goto label_36a970;
        }
    }
    ctx->pc = 0x36A958u;
label_36a958:
    // 0x36a958: 0xc0daa88  jal         func_36AA20
    ctx->pc = 0x36A958u;
    SET_GPR_U32(ctx, 31, 0x36A960u);
    ctx->pc = 0x36AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA20u, 0x36A958u, 0x36A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A960u;
label_36a960:
    // 0x36a960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36A960u;
    {
        const bool branch_taken_0x36a960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a960) {
            ctx->pc = 0x36A970u;
            goto label_36a970;
        }
    }
    ctx->pc = 0x36A968u;
label_36a968:
    // 0x36a968: 0xc0dab10  jal         func_36AC40
    ctx->pc = 0x36A968u;
    SET_GPR_U32(ctx, 31, 0x36A970u);
    ctx->pc = 0x36AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AC40u, 0x36A968u, 0x36A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A970u;
label_36a970:
    // 0x36a970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a974: 0x3e00008  jr          $ra
    ctx->pc = 0x36A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A974u;
        // 0x36a978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A97Cu;
}

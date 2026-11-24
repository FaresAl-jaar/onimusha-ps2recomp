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

// Function: sub_00366670
// Address: 0x366670 - 0x3666f4
void sub_00366670_0x366670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366670_0x366670");
#endif

    switch (ctx->pc) {
        case 0x3666b8u: goto label_3666b8;
        case 0x3666c8u: goto label_3666c8;
        case 0x3666d8u: goto label_3666d8;
        case 0x3666e8u: goto label_3666e8;
        default: break;
    }

    ctx->pc = 0x366670u;

    // 0x366670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366674: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x366674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x366678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36667c: 0x90850020  lbu         $a1, 0x20($a0)
    ctx->pc = 0x36667cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x366680: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x366680u;
    {
        const bool branch_taken_0x366680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x366684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366680u;
        // 0x366684: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366680) {
            ctx->pc = 0x3666E0u;
            goto label_3666e0;
        }
    }
    ctx->pc = 0x366688u;
    // 0x366688: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x366688u;
    {
        const bool branch_taken_0x366688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x366688) {
            ctx->pc = 0x3666D0u;
            goto label_3666d0;
        }
    }
    ctx->pc = 0x366690u;
    // 0x366690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x366690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366694: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x366694u;
    {
        const bool branch_taken_0x366694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x366698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366694u;
        // 0x366698: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366694) {
            ctx->pc = 0x3666C0u;
            goto label_3666c0;
        }
    }
    ctx->pc = 0x36669Cu;
    // 0x36669c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36669Cu;
    {
        const bool branch_taken_0x36669c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36669c) {
            ctx->pc = 0x3666B0u;
            goto label_3666b0;
        }
    }
    ctx->pc = 0x3666A4u;
    // 0x3666a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3666A4u;
    {
        const bool branch_taken_0x3666a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3666a4) {
            ctx->pc = 0x3666E8u;
            goto label_3666e8;
        }
    }
    ctx->pc = 0x3666ACu;
    // 0x3666ac: 0x0  nop
    ctx->pc = 0x3666acu;
    // NOP
label_3666b0:
    // 0x3666b0: 0xc0d99e8  jal         func_3667A0
    ctx->pc = 0x3666B0u;
    SET_GPR_U32(ctx, 31, 0x3666B8u);
    ctx->pc = 0x3667A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3667A0u, 0x3666B0u, 0x3666B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3666B8u;
label_3666b8:
    // 0x3666b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3666B8u;
    {
        const bool branch_taken_0x3666b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3666b8) {
            ctx->pc = 0x3666E8u;
            goto label_3666e8;
        }
    }
    ctx->pc = 0x3666C0u;
label_3666c0:
    // 0x3666c0: 0xc0d9acc  jal         func_366B30
    ctx->pc = 0x3666C0u;
    SET_GPR_U32(ctx, 31, 0x3666C8u);
    ctx->pc = 0x366B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366B30u, 0x3666C0u, 0x3666C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3666C8u;
label_3666c8:
    // 0x3666c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3666C8u;
    {
        const bool branch_taken_0x3666c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3666c8) {
            ctx->pc = 0x3666E8u;
            goto label_3666e8;
        }
    }
    ctx->pc = 0x3666D0u;
label_3666d0:
    // 0x3666d0: 0xc0d9b54  jal         func_366D50
    ctx->pc = 0x3666D0u;
    SET_GPR_U32(ctx, 31, 0x3666D8u);
    ctx->pc = 0x366D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366D50u, 0x3666D0u, 0x3666D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3666D8u;
label_3666d8:
    // 0x3666d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3666D8u;
    {
        const bool branch_taken_0x3666d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3666d8) {
            ctx->pc = 0x3666E8u;
            goto label_3666e8;
        }
    }
    ctx->pc = 0x3666E0u;
label_3666e0:
    // 0x3666e0: 0xc0d9d58  jal         func_367560
    ctx->pc = 0x3666E0u;
    SET_GPR_U32(ctx, 31, 0x3666E8u);
    ctx->pc = 0x367560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367560u, 0x3666E0u, 0x3666E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3666E8u;
label_3666e8:
    // 0x3666e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3666e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3666ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3666ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3666F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3666ECu;
        // 0x3666f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3666ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3666F4u;
}

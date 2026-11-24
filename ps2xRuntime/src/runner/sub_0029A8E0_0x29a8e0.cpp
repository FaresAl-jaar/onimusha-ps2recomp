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

// Function: sub_0029A8E0
// Address: 0x29a8e0 - 0x29a964
void sub_0029A8E0_0x29a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A8E0_0x29a8e0");
#endif

    switch (ctx->pc) {
        case 0x29a920u: goto label_29a920;
        case 0x29a930u: goto label_29a930;
        case 0x29a940u: goto label_29a940;
        default: break;
    }

    ctx->pc = 0x29a8e0u;

    // 0x29a8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a8e4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x29a8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x29a8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a8ec: 0x24030562  addiu       $v1, $zero, 0x562
    ctx->pc = 0x29a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
    // 0x29a8f0: 0x94266ac4  lhu         $a2, 0x6AC4($at)
    ctx->pc = 0x29a8f0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x29a8f4: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A8F4u;
    {
        const bool branch_taken_0x29a8f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x29A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8F4u;
        // 0x29a8f8: 0x240308c7  addiu       $v1, $zero, 0x8C7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8f4) {
            ctx->pc = 0x29A938u;
            goto label_29a938;
        }
    }
    ctx->pc = 0x29A8FCu;
    // 0x29a8fc: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x29A8FCu;
    {
        const bool branch_taken_0x29a8fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x29a8fc) {
            ctx->pc = 0x29A928u;
            goto label_29a928;
        }
    }
    ctx->pc = 0x29A904u;
    // 0x29a904: 0x24030c50  addiu       $v1, $zero, 0xC50
    ctx->pc = 0x29a904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x29a908: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A908u;
    {
        const bool branch_taken_0x29a908 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x29a908) {
            ctx->pc = 0x29A918u;
            goto label_29a918;
        }
    }
    ctx->pc = 0x29A910u;
    // 0x29a910: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29A910u;
    {
        const bool branch_taken_0x29a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a910) {
            ctx->pc = 0x29A948u;
            goto label_29a948;
        }
    }
    ctx->pc = 0x29A918u;
label_29a918:
    // 0x29a918: 0xc0d7194  jal         func_35C650
    ctx->pc = 0x29A918u;
    SET_GPR_U32(ctx, 31, 0x29A920u);
    ctx->pc = 0x35C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C650u, 0x29A918u, 0x29A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A920u;
label_29a920:
    // 0x29a920: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29A920u;
    {
        const bool branch_taken_0x29a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a920) {
            ctx->pc = 0x29A958u;
            goto label_29a958;
        }
    }
    ctx->pc = 0x29A928u;
label_29a928:
    // 0x29a928: 0xc0e8918  jal         func_3A2460
    ctx->pc = 0x29A928u;
    SET_GPR_U32(ctx, 31, 0x29A930u);
    ctx->pc = 0x3A2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2460u, 0x29A928u, 0x29A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A930u;
label_29a930:
    // 0x29a930: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29A930u;
    {
        const bool branch_taken_0x29a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a930) {
            ctx->pc = 0x29A958u;
            goto label_29a958;
        }
    }
    ctx->pc = 0x29A938u;
label_29a938:
    // 0x29a938: 0xc0f8a38  jal         func_3E28E0
    ctx->pc = 0x29A938u;
    SET_GPR_U32(ctx, 31, 0x29A940u);
    ctx->pc = 0x3E28E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E28E0u, 0x29A938u, 0x29A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A940u;
label_29a940:
    // 0x29a940: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29A940u;
    {
        const bool branch_taken_0x29a940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a940) {
            ctx->pc = 0x29A958u;
            goto label_29a958;
        }
    }
    ctx->pc = 0x29A948u;
label_29a948:
    // 0x29a948: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x29a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x29a94c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x29a94cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a950: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x29a950u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x29a954: 0x0  nop
    ctx->pc = 0x29a954u;
    // NOP
label_29a958:
    // 0x29a958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a95c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A95Cu;
        // 0x29a960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A964u;
}

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

// Function: sub_00382490
// Address: 0x382490 - 0x3824f0
void sub_00382490_0x382490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382490_0x382490");
#endif

    switch (ctx->pc) {
        case 0x3824c0u: goto label_3824c0;
        case 0x3824c8u: goto label_3824c8;
        default: break;
    }

    ctx->pc = 0x382490u;

    // 0x382490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x382494: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x382494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x382498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38249c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3824a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3824a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3824a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3824a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3824a8: 0xaf828c24  sw          $v0, -0x73DC($gp)
    ctx->pc = 0x3824a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937636), GPR_U32(ctx, 2));
    // 0x3824ac: 0x3c100092  lui         $s0, 0x92
    ctx->pc = 0x3824acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)146 << 16));
    // 0x3824b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3824b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3824b4: 0x26101760  addiu       $s0, $s0, 0x1760
    ctx->pc = 0x3824b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5984));
    // 0x3824b8: 0xa3828c28  sb          $v0, -0x73D8($gp)
    ctx->pc = 0x3824b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937640), (uint8_t)GPR_U32(ctx, 2));
    // 0x3824bc: 0x0  nop
    ctx->pc = 0x3824bcu;
    // NOP
label_3824c0:
    // 0x3824c0: 0xc0e093c  jal         func_3824F0
    ctx->pc = 0x3824C0u;
    SET_GPR_U32(ctx, 31, 0x3824C8u);
    ctx->pc = 0x3824C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3824C0u;
    // 0x3824c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3824F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3824F0u, 0x3824C0u, 0x3824C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3824C8u;
label_3824c8:
    // 0x3824c8: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x3824c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x3824cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3824ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3824d0: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x3824d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3824d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3824D4u;
    {
        const bool branch_taken_0x3824d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3824D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824D4u;
        // 0x3824d8: 0x26100200  addiu       $s0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3824d4) {
            ctx->pc = 0x3824C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3824c0;
        }
    }
    ctx->pc = 0x3824DCu;
    // 0x3824dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3824dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3824e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3824e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3824e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3824e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3824e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3824E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3824ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824E8u;
        // 0x3824ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3824E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3824F0u;
}

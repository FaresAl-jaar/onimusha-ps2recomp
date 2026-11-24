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

// Function: sub_003DF9B0
// Address: 0x3df9b0 - 0x3dfa18
void sub_003DF9B0_0x3df9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF9B0_0x3df9b0");
#endif

    switch (ctx->pc) {
        case 0x3df9e8u: goto label_3df9e8;
        case 0x3dfa00u: goto label_3dfa00;
        case 0x3dfa08u: goto label_3dfa08;
        default: break;
    }

    ctx->pc = 0x3df9b0u;

    // 0x3df9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3df9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3df9b4: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x3df9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x3df9b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3df9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3df9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3df9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3df9c0: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x3df9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3df9c4: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3df9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x3df9c8: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x3df9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x3df9cc: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3df9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3df9d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DF9D0u;
    {
        const bool branch_taken_0x3df9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9D0u;
        // 0x3df9d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df9d0) {
            ctx->pc = 0x3DF9E0u;
            goto label_3df9e0;
        }
    }
    ctx->pc = 0x3DF9D8u;
    // 0x3df9d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DF9D8u;
    {
        const bool branch_taken_0x3df9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df9d8) {
            ctx->pc = 0x3DF9E8u;
            goto label_3df9e8;
        }
    }
    ctx->pc = 0x3DF9E0u;
label_3df9e0:
    // 0x3df9e0: 0xc0f7c88  jal         func_3DF220
    ctx->pc = 0x3DF9E0u;
    SET_GPR_U32(ctx, 31, 0x3DF9E8u);
    ctx->pc = 0x3DF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF220u, 0x3DF9E0u, 0x3DF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF9E8u;
label_3df9e8:
    // 0x3df9e8: 0xde020500  ld          $v0, 0x500($s0)
    ctx->pc = 0x3df9e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3df9ec: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3df9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3df9f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DF9F0u;
    {
        const bool branch_taken_0x3df9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df9f0) {
            ctx->pc = 0x3DFA00u;
            goto label_3dfa00;
        }
    }
    ctx->pc = 0x3DF9F8u;
    // 0x3df9f8: 0xc0f84e0  jal         func_3E1380
    ctx->pc = 0x3DF9F8u;
    SET_GPR_U32(ctx, 31, 0x3DFA00u);
    ctx->pc = 0x3E1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1380u, 0x3DF9F8u, 0x3DFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFA00u;
label_3dfa00:
    // 0x3dfa00: 0xc098770  jal         func_261DC0
    ctx->pc = 0x3DFA00u;
    SET_GPR_U32(ctx, 31, 0x3DFA08u);
    ctx->pc = 0x3DFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFA00u;
    // 0x3dfa04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DC0u, 0x3DFA00u, 0x3DFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFA08u;
label_3dfa08:
    // 0x3dfa08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dfa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dfa0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfa0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dfa10: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA10u;
        // 0x3dfa14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFA18u;
}

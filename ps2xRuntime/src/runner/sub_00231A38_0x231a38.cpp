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

// Function: sub_00231A38
// Address: 0x231a38 - 0x231a98
void sub_00231A38_0x231a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A38_0x231a38");
#endif

    switch (ctx->pc) {
        case 0x231a58u: goto label_231a58;
        default: break;
    }

    ctx->pc = 0x231a38u;

    // 0x231a38: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x231a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x231a3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231a40: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x231a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x231a44: 0x24a5a4a0  addiu       $a1, $a1, -0x5B60
    ctx->pc = 0x231a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943904));
    // 0x231a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231a4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231a50: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x231A50u;
    SET_GPR_U32(ctx, 31, 0x231A58u);
    ctx->pc = 0x231A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A50u;
    // 0x231a54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x231A50u, 0x231A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A58u;
label_231a58:
    // 0x231a58: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x231A58u;
    {
        const bool branch_taken_0x231a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A58u;
        // 0x231a5c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a58) {
            ctx->pc = 0x231A88u;
            goto label_231a88;
        }
    }
    ctx->pc = 0x231A60u;
    // 0x231a60: 0x92050005  lbu         $a1, 0x5($s0)
    ctx->pc = 0x231a60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x231a64: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x231a64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x231a68: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x231a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x231a6c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x231a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x231a70: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x231a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x231a74: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x231a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x231a78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x231a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x231a7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x231a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x231a80: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x231a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x231a84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x231a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_231a88:
    // 0x231a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231a8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231a90: 0x3e00008  jr          $ra
    ctx->pc = 0x231A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A90u;
        // 0x231a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A98u;
}

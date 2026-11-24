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

// Function: sub_00246940
// Address: 0x246940 - 0x24697c
void sub_00246940_0x246940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246940_0x246940");
#endif

    ctx->pc = 0x246940u;

    // 0x246940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246944: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x246948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24694c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24694cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246950: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x246950u;
    {
        const bool branch_taken_0x246950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x246954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246950u;
        // 0x246954: 0xac44e9f0  sw          $a0, -0x1610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961648), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246950) {
            ctx->pc = 0x246970u;
            goto label_246970;
        }
    }
    ctx->pc = 0x246958u;
    // 0x246958: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24695c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24695cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246960: 0x2484cad8  addiu       $a0, $a0, -0x3528
    ctx->pc = 0x246960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953688));
    // 0x246964: 0x8044332  j           func_110CC8
    ctx->pc = 0x246964u;
    ctx->pc = 0x246968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246964u;
    // 0x246968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    sub_00110CC8_0x110cc8(rdram, ctx, runtime); return;
    ctx->pc = 0x24696Cu;
    // 0x24696c: 0x0  nop
    ctx->pc = 0x24696cu;
    // NOP
label_246970:
    // 0x246970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246974: 0x3e00008  jr          $ra
    ctx->pc = 0x246974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246974u;
        // 0x246978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24697Cu;
}

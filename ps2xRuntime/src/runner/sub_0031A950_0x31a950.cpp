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

// Function: sub_0031A950
// Address: 0x31a950 - 0x31a984
void sub_0031A950_0x31a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A950_0x31a950");
#endif

    switch (ctx->pc) {
        case 0x31a974u: goto label_31a974;
        default: break;
    }

    ctx->pc = 0x31a950u;

    // 0x31a950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31a954: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31a954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31a958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a95c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a960: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x31a960u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x31a964: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A964u;
    {
        const bool branch_taken_0x31a964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x31A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A964u;
        // 0x31a968: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a964) {
            ctx->pc = 0x31A978u;
            goto label_31a978;
        }
    }
    ctx->pc = 0x31A96Cu;
    // 0x31a96c: 0xc0c6a64  jal         func_31A990
    ctx->pc = 0x31A96Cu;
    SET_GPR_U32(ctx, 31, 0x31A974u);
    ctx->pc = 0x31A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A990u, 0x31A96Cu, 0x31A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A974u;
label_31a974:
    // 0x31a974: 0x0  nop
    ctx->pc = 0x31a974u;
    // NOP
label_31a978:
    // 0x31a978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a97c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A97Cu;
        // 0x31a980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A984u;
}

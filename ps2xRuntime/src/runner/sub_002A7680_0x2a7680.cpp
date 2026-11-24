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

// Function: sub_002A7680
// Address: 0x2a7680 - 0x2a76c8
void sub_002A7680_0x2a7680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7680_0x2a7680");
#endif

    switch (ctx->pc) {
        case 0x2a76bcu: goto label_2a76bc;
        default: break;
    }

    ctx->pc = 0x2a7680u;

    // 0x2a7680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a7684: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a7684u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a768c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a7690: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a7690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a7694: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7698: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a7698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a769c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a769cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a76a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76a4: 0x3405dcc4  ori         $a1, $zero, 0xDCC4
    ctx->pc = 0x2a76a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56516);
    // 0x2a76a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a76a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76ac: 0x24060248  addiu       $a2, $zero, 0x248
    ctx->pc = 0x2a76acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
    // 0x2a76b0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a76b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a76b4: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A76B4u;
    SET_GPR_U32(ctx, 31, 0x2A76BCu);
    ctx->pc = 0x2A76B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A76B4u;
    // 0x2a76b8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A76B4u, 0x2A76BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76BCu;
label_2a76bc:
    // 0x2a76bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a76bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a76c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A76C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76C0u;
        // 0x2a76c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A76C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A76C8u;
}

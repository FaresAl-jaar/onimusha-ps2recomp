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

// Function: sub_002A9930
// Address: 0x2a9930 - 0x2a997c
void sub_002A9930_0x2a9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9930_0x2a9930");
#endif

    switch (ctx->pc) {
        case 0x2a9970u: goto label_2a9970;
        default: break;
    }

    ctx->pc = 0x2a9930u;

    // 0x2a9930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9934: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a9934u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9938: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a9938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a993c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a9940: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a9940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a9944: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a9944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9948: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a9948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a994c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a994cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9950: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a9950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9954: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a9954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a9958: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a9958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a995c: 0x3445a59c  ori         $a1, $v0, 0xA59C
    ctx->pc = 0x2a995cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42396);
    // 0x2a9960: 0x240601f0  addiu       $a2, $zero, 0x1F0
    ctx->pc = 0x2a9960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x2a9964: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a9964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9968: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A9968u;
    SET_GPR_U32(ctx, 31, 0x2A9970u);
    ctx->pc = 0x2A996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9968u;
    // 0x2a996c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A9968u, 0x2A9970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9970u;
label_2a9970:
    // 0x2a9970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9974: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9974u;
        // 0x2a9978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A997Cu;
}

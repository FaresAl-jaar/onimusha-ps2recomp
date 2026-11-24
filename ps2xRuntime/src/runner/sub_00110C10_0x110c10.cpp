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

// Function: sub_00110C10
// Address: 0x110c10 - 0x110c58
void sub_00110C10_0x110c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110C10_0x110c10");
#endif

    switch (ctx->pc) {
        case 0x110c4cu: goto label_110c4c;
        default: break;
    }

    ctx->pc = 0x110c10u;

    // 0x110c10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x110c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x110c14: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x110c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x110c18: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x110c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x110c1c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x110c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c20: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x110c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x110c24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x110c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c28: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x110c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x110c2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110c30: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x110c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x110c34: 0x24840ae0  addiu       $a0, $a0, 0xAE0
    ctx->pc = 0x110c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2784));
    // 0x110c38: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x110c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x110c3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c40: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x110c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x110c44: 0xc043f72  jal         func_10FDC8
    ctx->pc = 0x110C44u;
    SET_GPR_U32(ctx, 31, 0x110C4Cu);
    ctx->pc = 0x110C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C44u;
    // 0x110c48: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDC8u, 0x110C44u, 0x110C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C4Cu;
label_110c4c:
    // 0x110c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110c50: 0x3e00008  jr          $ra
    ctx->pc = 0x110C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C50u;
        // 0x110c54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110C58u;
}

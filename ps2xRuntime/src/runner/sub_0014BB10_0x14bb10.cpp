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

// Function: sub_0014BB10
// Address: 0x14bb10 - 0x14bb5c
void sub_0014BB10_0x14bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BB10_0x14bb10");
#endif

    switch (ctx->pc) {
        case 0x14bb48u: goto label_14bb48;
        default: break;
    }

    ctx->pc = 0x14bb10u;

    // 0x14bb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14bb14: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14bb18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14bb1c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14bb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14bb20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14bb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14bb24: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x14bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x14bb28: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14bb28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14bb2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14bb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb30: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x14bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x14bb34: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x14bb34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x14bb38: 0x24c6bb80  addiu       $a2, $a2, -0x4480
    ctx->pc = 0x14bb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949760));
    // 0x14bb3c: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14bb40: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14BB40u;
    SET_GPR_U32(ctx, 31, 0x14BB48u);
    ctx->pc = 0x14BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB40u;
    // 0x14bb44: 0x24e7bb60  addiu       $a3, $a3, -0x44A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14BB40u, 0x14BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB48u;
label_14bb48:
    // 0x14bb48: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x14bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x14bb4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bb50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14bb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bb54: 0x3e00008  jr          $ra
    ctx->pc = 0x14BB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB54u;
        // 0x14bb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BB5Cu;
}

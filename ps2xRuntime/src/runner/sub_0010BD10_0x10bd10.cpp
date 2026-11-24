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

// Function: sub_0010BD10
// Address: 0x10bd10 - 0x10bd60
void sub_0010BD10_0x10bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BD10_0x10bd10");
#endif

    switch (ctx->pc) {
        case 0x10bd54u: goto label_10bd54;
        default: break;
    }

    ctx->pc = 0x10bd10u;

    // 0x10bd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bd14: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10bd18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bd1c: 0xc74018  mult        $t0, $a2, $a3
    ctx->pc = 0x10bd1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x10bd20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10bd24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x10bd24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10bd28: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10bd28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10bd2c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10bd30: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10bd34: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x10bd34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x10bd38: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x10bd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x10bd3c: 0xac6700f4  sw          $a3, 0xF4($v1)
    ctx->pc = 0x10bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 7));
    // 0x10bd40: 0xac6500ec  sw          $a1, 0xEC($v1)
    ctx->pc = 0x10bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 5));
    // 0x10bd44: 0xac6800f8  sw          $t0, 0xF8($v1)
    ctx->pc = 0x10bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 8));
    // 0x10bd48: 0xac6600f0  sw          $a2, 0xF0($v1)
    ctx->pc = 0x10bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 6));
    // 0x10bd4c: 0xc042c3a  jal         func_10B0E8
    ctx->pc = 0x10BD4Cu;
    SET_GPR_U32(ctx, 31, 0x10BD54u);
    ctx->pc = 0x10BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD4Cu;
    // 0x10bd50: 0xac6000c4  sw          $zero, 0xC4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B0E8u, 0x10BD4Cu, 0x10BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD54u;
label_10bd54:
    // 0x10bd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bd58: 0x3e00008  jr          $ra
    ctx->pc = 0x10BD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD58u;
        // 0x10bd5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BD60u;
}

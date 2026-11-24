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

// Function: sub_00275040
// Address: 0x275040 - 0x27508c
void sub_00275040_0x275040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275040_0x275040");
#endif

    ctx->pc = 0x275040u;

    // 0x275040: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x275040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x275044: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x275044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x275048: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27504c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275050: 0xfc600018  sd          $zero, 0x18($v1)
    ctx->pc = 0x275050u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 0));
    // 0x275054: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x275054u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x275058: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x275058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27505c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27505cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275060: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x275060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275064: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x275064u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x275068: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x275068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x27506c: 0xfce30010  sd          $v1, 0x10($a3)
    ctx->pc = 0x27506cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 3));
    // 0x275070: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x275070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x275074: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275078: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x275078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27507c: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x27507cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x275080: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x275080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x275084: 0x3e00008  jr          $ra
    ctx->pc = 0x275084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275084u;
        // 0x275088: 0xfc830018  sd          $v1, 0x18($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27508Cu;
}

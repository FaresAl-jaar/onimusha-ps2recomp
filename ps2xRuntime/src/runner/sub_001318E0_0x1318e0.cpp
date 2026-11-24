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

// Function: sub_001318E0
// Address: 0x1318e0 - 0x131930
void sub_001318E0_0x1318e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001318E0_0x1318e0");
#endif

    switch (ctx->pc) {
        case 0x131910u: goto label_131910;
        case 0x131920u: goto label_131920;
        default: break;
    }

    ctx->pc = 0x1318e0u;

    // 0x1318e0: 0x2402022c  addiu       $v0, $zero, 0x22C
    ctx->pc = 0x1318e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x1318e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1318e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1318e8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1318e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1318ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1318ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1318f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1318f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1318f4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1318f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1318f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1318f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1318fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1318fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131900: 0x24500128  addiu       $s0, $v0, 0x128
    ctx->pc = 0x131900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x131904: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x131904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
    // 0x131908: 0xc049590  jal         func_125640
    ctx->pc = 0x131908u;
    SET_GPR_U32(ctx, 31, 0x131910u);
    ctx->pc = 0x13190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131908u;
    // 0x13190c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x131908u, 0x131910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131910u;
label_131910:
    // 0x131910: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x131910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x131914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131918: 0xc049590  jal         func_125640
    ctx->pc = 0x131918u;
    SET_GPR_U32(ctx, 31, 0x131920u);
    ctx->pc = 0x13191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131918u;
    // 0x13191c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x131918u, 0x131920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131920u;
label_131920:
    // 0x131920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131928: 0x3e00008  jr          $ra
    ctx->pc = 0x131928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131928u;
        // 0x13192c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131930u;
}

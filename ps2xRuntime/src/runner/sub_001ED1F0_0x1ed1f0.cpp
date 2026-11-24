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

// Function: sub_001ED1F0
// Address: 0x1ed1f0 - 0x1ed268
void sub_001ED1F0_0x1ed1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED1F0_0x1ed1f0");
#endif

    switch (ctx->pc) {
        case 0x1ed20cu: goto label_1ed20c;
        case 0x1ed21cu: goto label_1ed21c;
        case 0x1ed240u: goto label_1ed240;
        case 0x1ed250u: goto label_1ed250;
        default: break;
    }

    ctx->pc = 0x1ed1f0u;

    // 0x1ed1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ed1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ed1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed204: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1ED204u;
    SET_GPR_U32(ctx, 31, 0x1ED20Cu);
    ctx->pc = 0x1ED208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED204u;
    // 0x1ed208: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1ED204u, 0x1ED20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED20Cu;
label_1ed20c:
    // 0x1ed20c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1ed20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1ed210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed214: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1ED214u;
    SET_GPR_U32(ctx, 31, 0x1ED21Cu);
    ctx->pc = 0x1ED218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED214u;
    // 0x1ed218: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1ED214u, 0x1ED21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED21Cu;
label_1ed21c:
    // 0x1ed21c: 0x7a220080  lq          $v0, 0x80($s1)
    ctx->pc = 0x1ed21cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1ed220: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1ed220u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1ed224: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ed224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed228: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1ed228u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ed22c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1ed22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed230: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x1ed230u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ed234: 0x92260039  lbu         $a2, 0x39($s1)
    ctx->pc = 0x1ed234u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x1ed238: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1ED238u;
    SET_GPR_U32(ctx, 31, 0x1ED240u);
    ctx->pc = 0x1ED23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED238u;
    // 0x1ed23c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1ED238u, 0x1ED240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED240u;
label_1ed240:
    // 0x1ed240: 0x9225003a  lbu         $a1, 0x3A($s1)
    ctx->pc = 0x1ed240u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x1ed244: 0x9226003b  lbu         $a2, 0x3B($s1)
    ctx->pc = 0x1ed244u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
    // 0x1ed248: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1ED248u;
    SET_GPR_U32(ctx, 31, 0x1ED250u);
    ctx->pc = 0x1ED24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED248u;
    // 0x1ed24c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1ED248u, 0x1ED250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED250u;
label_1ed250:
    // 0x1ed250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ed250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed25c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed260: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED260u;
        // 0x1ed264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED268u;
}

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

// Function: sub_002920F0
// Address: 0x2920f0 - 0x292144
void sub_002920F0_0x2920f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002920F0_0x2920f0");
#endif

    switch (ctx->pc) {
        case 0x29212cu: goto label_29212c;
        case 0x292134u: goto label_292134;
        default: break;
    }

    ctx->pc = 0x2920f0u;

    // 0x2920f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2920f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2920f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2920f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2920f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2920f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2920fc: 0x948229de  lhu         $v0, 0x29DE($a0)
    ctx->pc = 0x2920fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10718)));
    // 0x292100: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x292100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x292104: 0xa48229de  sh          $v0, 0x29DE($a0)
    ctx->pc = 0x292104u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x292108: 0x948229de  lhu         $v0, 0x29DE($a0)
    ctx->pc = 0x292108u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10718)));
    // 0x29210c: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x29210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x292110: 0xa48229de  sh          $v0, 0x29DE($a0)
    ctx->pc = 0x292110u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x292114: 0x948229de  lhu         $v0, 0x29DE($a0)
    ctx->pc = 0x292114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10718)));
    // 0x292118: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x292118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x29211c: 0xa48229de  sh          $v0, 0x29DE($a0)
    ctx->pc = 0x29211cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x292120: 0x8c842978  lw          $a0, 0x2978($a0)
    ctx->pc = 0x292120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10616)));
    // 0x292124: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x292124u;
    SET_GPR_U32(ctx, 31, 0x29212Cu);
    ctx->pc = 0x292128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292124u;
    // 0x292128: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x292124u, 0x29212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29212Cu;
label_29212c:
    // 0x29212c: 0xc09782c  jal         func_25E0B0
    ctx->pc = 0x29212Cu;
    SET_GPR_U32(ctx, 31, 0x292134u);
    ctx->pc = 0x292130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29212Cu;
    // 0x292130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0B0u, 0x29212Cu, 0x292134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292134u;
label_292134:
    // 0x292134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29213c: 0x3e00008  jr          $ra
    ctx->pc = 0x29213Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29213Cu;
        // 0x292140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29213Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292144u;
}

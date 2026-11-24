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

// Function: sub_00317A00
// Address: 0x317a00 - 0x317a50
void sub_00317A00_0x317a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317A00_0x317a00");
#endif

    switch (ctx->pc) {
        case 0x317a2cu: goto label_317a2c;
        case 0x317a34u: goto label_317a34;
        case 0x317a3cu: goto label_317a3c;
        default: break;
    }

    ctx->pc = 0x317a00u;

    // 0x317a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317a04: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x317a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x317a08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x317a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x317a0c: 0x24030ff7  addiu       $v1, $zero, 0xFF7
    ctx->pc = 0x317a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
    // 0x317a10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x317a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x317a14: 0xac802000  sw          $zero, 0x2000($a0)
    ctx->pc = 0x317a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8192), GPR_U32(ctx, 0));
    // 0x317a18: 0x94256ac4  lhu         $a1, 0x6AC4($at)
    ctx->pc = 0x317a18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x317a1c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x317A1Cu;
    {
        const bool branch_taken_0x317a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x317A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A1Cu;
        // 0x317a20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a1c) {
            ctx->pc = 0x317A40u;
            goto label_317a40;
        }
    }
    ctx->pc = 0x317A24u;
    // 0x317a24: 0xc0c48f0  jal         func_3123C0
    ctx->pc = 0x317A24u;
    SET_GPR_U32(ctx, 31, 0x317A2Cu);
    ctx->pc = 0x3123C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3123C0u, 0x317A24u, 0x317A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A2Cu;
label_317a2c:
    // 0x317a2c: 0xc0c42a8  jal         func_310AA0
    ctx->pc = 0x317A2Cu;
    SET_GPR_U32(ctx, 31, 0x317A34u);
    ctx->pc = 0x317A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A2Cu;
    // 0x317a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310AA0u, 0x317A2Cu, 0x317A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A34u;
label_317a34:
    // 0x317a34: 0xc0c4614  jal         func_311850
    ctx->pc = 0x317A34u;
    SET_GPR_U32(ctx, 31, 0x317A3Cu);
    ctx->pc = 0x317A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317A34u;
    // 0x317a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311850u, 0x317A34u, 0x317A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A3Cu;
label_317a3c:
    // 0x317a3c: 0x0  nop
    ctx->pc = 0x317a3cu;
    // NOP
label_317a40:
    // 0x317a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x317a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x317a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317a48: 0x3e00008  jr          $ra
    ctx->pc = 0x317A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A48u;
        // 0x317a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317A50u;
}

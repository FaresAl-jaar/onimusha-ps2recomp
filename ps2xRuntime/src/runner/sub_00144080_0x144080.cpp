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

// Function: sub_00144080
// Address: 0x144080 - 0x144120
void sub_00144080_0x144080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144080_0x144080");
#endif

    switch (ctx->pc) {
        case 0x1440a8u: goto label_1440a8;
        case 0x1440bcu: goto label_1440bc;
        case 0x1440d0u: goto label_1440d0;
        case 0x1440e4u: goto label_1440e4;
        case 0x1440f8u: goto label_1440f8;
        case 0x14410cu: goto label_14410c;
        default: break;
    }

    ctx->pc = 0x144080u;

    // 0x144080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14408c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144094: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x144094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144098: 0x2626001c  addiu       $a2, $s1, 0x1C
    ctx->pc = 0x144098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x14409c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x14409cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1440a0: 0xc051484  jal         func_145210
    ctx->pc = 0x1440A0u;
    SET_GPR_U32(ctx, 31, 0x1440A8u);
    ctx->pc = 0x1440A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440A0u;
    // 0x1440a4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145210u, 0x1440A0u, 0x1440A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440A8u;
label_1440a8:
    // 0x1440a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1440a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440ac: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1440acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1440b0: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x1440b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1440b4: 0xc051484  jal         func_145210
    ctx->pc = 0x1440B4u;
    SET_GPR_U32(ctx, 31, 0x1440BCu);
    ctx->pc = 0x1440B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440B4u;
    // 0x1440b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145210u, 0x1440B4u, 0x1440BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440BCu;
label_1440bc:
    // 0x1440bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1440bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440c0: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x1440c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1440c4: 0x26260024  addiu       $a2, $s1, 0x24
    ctx->pc = 0x1440c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1440c8: 0xc051484  jal         func_145210
    ctx->pc = 0x1440C8u;
    SET_GPR_U32(ctx, 31, 0x1440D0u);
    ctx->pc = 0x1440CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440C8u;
    // 0x1440cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145210u, 0x1440C8u, 0x1440D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440D0u;
label_1440d0:
    // 0x1440d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1440d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440d4: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1440d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1440d8: 0x26260028  addiu       $a2, $s1, 0x28
    ctx->pc = 0x1440d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1440dc: 0xc051484  jal         func_145210
    ctx->pc = 0x1440DCu;
    SET_GPR_U32(ctx, 31, 0x1440E4u);
    ctx->pc = 0x1440E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440DCu;
    // 0x1440e0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145210u, 0x1440DCu, 0x1440E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440E4u;
label_1440e4:
    // 0x1440e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1440e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440e8: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x1440e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1440ec: 0x2626002c  addiu       $a2, $s1, 0x2C
    ctx->pc = 0x1440ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x1440f0: 0xc051484  jal         func_145210
    ctx->pc = 0x1440F0u;
    SET_GPR_U32(ctx, 31, 0x1440F8u);
    ctx->pc = 0x1440F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440F0u;
    // 0x1440f4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145210u, 0x1440F0u, 0x1440F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440F8u;
label_1440f8:
    // 0x1440f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1440f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1440fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144100: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x144100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x144104: 0xc051484  jal         func_145210
    ctx->pc = 0x144104u;
    SET_GPR_U32(ctx, 31, 0x14410Cu);
    ctx->pc = 0x144108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144104u;
    // 0x144108: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145210u, 0x144104u, 0x14410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14410Cu;
label_14410c:
    // 0x14410c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144118: 0x3e00008  jr          $ra
    ctx->pc = 0x144118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144118u;
        // 0x14411c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144120u;
}

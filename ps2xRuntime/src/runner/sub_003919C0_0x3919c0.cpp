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

// Function: sub_003919C0
// Address: 0x3919c0 - 0x391a20
void sub_003919C0_0x3919c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003919C0_0x3919c0");
#endif

    switch (ctx->pc) {
        case 0x3919e4u: goto label_3919e4;
        case 0x3919ecu: goto label_3919ec;
        case 0x391a04u: goto label_391a04;
        case 0x391a0cu: goto label_391a0c;
        default: break;
    }

    ctx->pc = 0x3919c0u;

    // 0x3919c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3919c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3919c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3919c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3919c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3919c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3919cc: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x3919ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3919d0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3919D0u;
    {
        const bool branch_taken_0x3919d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3919D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919D0u;
        // 0x3919d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3919d0) {
            ctx->pc = 0x3919F8u;
            goto label_3919f8;
        }
    }
    ctx->pc = 0x3919D8u;
    // 0x3919d8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3919d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3919dc: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3919DCu;
    SET_GPR_U32(ctx, 31, 0x3919E4u);
    ctx->pc = 0x3919E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3919DCu;
    // 0x3919e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3919DCu, 0x3919E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3919E4u;
label_3919e4:
    // 0x3919e4: 0xc0e4688  jal         func_391A20
    ctx->pc = 0x3919E4u;
    SET_GPR_U32(ctx, 31, 0x3919ECu);
    ctx->pc = 0x3919E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3919E4u;
    // 0x3919e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391A20u, 0x3919E4u, 0x3919ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3919ECu;
label_3919ec:
    // 0x3919ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3919ECu;
    {
        const bool branch_taken_0x3919ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3919ec) {
            ctx->pc = 0x391A10u;
            goto label_391a10;
        }
    }
    ctx->pc = 0x3919F4u;
    // 0x3919f4: 0x0  nop
    ctx->pc = 0x3919f4u;
    // NOP
label_3919f8:
    // 0x3919f8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3919f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3919fc: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3919FCu;
    SET_GPR_U32(ctx, 31, 0x391A04u);
    ctx->pc = 0x391A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3919FCu;
    // 0x391a00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3919FCu, 0x391A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391A04u;
label_391a04:
    // 0x391a04: 0xc0e4720  jal         func_391C80
    ctx->pc = 0x391A04u;
    SET_GPR_U32(ctx, 31, 0x391A0Cu);
    ctx->pc = 0x391A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391A04u;
    // 0x391a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391C80u, 0x391A04u, 0x391A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391A0Cu;
label_391a0c:
    // 0x391a0c: 0x0  nop
    ctx->pc = 0x391a0cu;
    // NOP
label_391a10:
    // 0x391a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x391a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x391a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391a18: 0x3e00008  jr          $ra
    ctx->pc = 0x391A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A18u;
        // 0x391a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391A20u;
}

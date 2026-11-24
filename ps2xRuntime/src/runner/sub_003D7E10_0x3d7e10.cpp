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

// Function: sub_003D7E10
// Address: 0x3d7e10 - 0x3d7e60
void sub_003D7E10_0x3d7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7E10_0x3d7e10");
#endif

    switch (ctx->pc) {
        case 0x3d7e24u: goto label_3d7e24;
        case 0x3d7e3cu: goto label_3d7e3c;
        case 0x3d7e50u: goto label_3d7e50;
        default: break;
    }

    ctx->pc = 0x3d7e10u;

    // 0x3d7e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d7e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d7e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d7e1c: 0xc0f5ec0  jal         func_3D7B00
    ctx->pc = 0x3D7E1Cu;
    SET_GPR_U32(ctx, 31, 0x3D7E24u);
    ctx->pc = 0x3D7E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7E1Cu;
    // 0x3d7e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7B00u, 0x3D7E1Cu, 0x3D7E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E24u;
label_3d7e24:
    // 0x3d7e24: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3d7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3d7e28: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3d7e28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d7e2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D7E2Cu;
    {
        const bool branch_taken_0x3d7e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E2Cu;
        // 0x3d7e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7e2c) {
            ctx->pc = 0x3D7E48u;
            goto label_3d7e48;
        }
    }
    ctx->pc = 0x3D7E34u;
    // 0x3d7e34: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x3D7E34u;
    SET_GPR_U32(ctx, 31, 0x3D7E3Cu);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x3D7E34u, 0x3D7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E3Cu;
label_3d7e3c:
    // 0x3d7e3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D7E3Cu;
    {
        const bool branch_taken_0x3d7e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7e3c) {
            ctx->pc = 0x3D7E50u;
            goto label_3d7e50;
        }
    }
    ctx->pc = 0x3D7E44u;
    // 0x3d7e44: 0x0  nop
    ctx->pc = 0x3d7e44u;
    // NOP
label_3d7e48:
    // 0x3d7e48: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3D7E48u;
    SET_GPR_U32(ctx, 31, 0x3D7E50u);
    ctx->pc = 0x3D7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7E48u;
    // 0x3d7e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3D7E48u, 0x3D7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E50u;
label_3d7e50:
    // 0x3d7e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7e58: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E58u;
        // 0x3d7e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7E60u;
}

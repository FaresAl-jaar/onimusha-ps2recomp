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

// Function: sub_00112E20
// Address: 0x112e20 - 0x112e64
void sub_00112E20_0x112e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112E20_0x112e20");
#endif

    switch (ctx->pc) {
        case 0x112e20u: goto label_112e20;
        case 0x112e24u: goto label_112e24;
        case 0x112e28u: goto label_112e28;
        case 0x112e2cu: goto label_112e2c;
        case 0x112e30u: goto label_112e30;
        case 0x112e34u: goto label_112e34;
        case 0x112e38u: goto label_112e38;
        case 0x112e3cu: goto label_112e3c;
        case 0x112e40u: goto label_112e40;
        case 0x112e44u: goto label_112e44;
        case 0x112e48u: goto label_112e48;
        case 0x112e4cu: goto label_112e4c;
        case 0x112e50u: goto label_112e50;
        case 0x112e54u: goto label_112e54;
        case 0x112e58u: goto label_112e58;
        case 0x112e5cu: goto label_112e5c;
        case 0x112e60u: goto label_112e60;
        default: break;
    }

    ctx->pc = 0x112e20u;

label_112e20:
    // 0x112e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_112e24:
    // 0x112e24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x112e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_112e28:
    // 0x112e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_112e2c:
    // 0x112e2c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_112e30:
    if (ctx->pc == 0x112E30u) {
        ctx->pc = 0x112E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E2Cu;
        // 0x112e30: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E34u;
        goto label_112e34;
    }
    ctx->pc = 0x112E2Cu;
    {
        const bool branch_taken_0x112e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E2Cu;
        // 0x112e30: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e2c) {
            ctx->pc = 0x112E4Cu;
            goto label_112e4c;
        }
    }
    ctx->pc = 0x112E34u;
label_112e34:
    // 0x112e34: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x112e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_112e38:
    // 0x112e38: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x112e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_112e3c:
    // 0x112e3c: 0x8c5c0440  lw          $gp, 0x440($v0)
    ctx->pc = 0x112e3cu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
label_112e40:
    // 0x112e40: 0x60f809  jalr        $v1
label_112e44:
    if (ctx->pc == 0x112E44u) {
        ctx->pc = 0x112E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E40u;
        // 0x112e44: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E48u;
        goto label_112e48;
    }
    ctx->pc = 0x112E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x112E48u);
        ctx->pc = 0x112E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E40u;
        // 0x112e44: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112E40u, 0x112E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112E48u;
label_112e48:
    // 0x112e48: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x112e48u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112e4c:
    // 0x112e4c: 0xf  sync
    ctx->pc = 0x112e4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_112e50:
    // 0x112e50: 0x42000038  ei
    ctx->pc = 0x112e50u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_112e54:
    // 0x112e54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_112e58:
    // 0x112e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112e5c:
    // 0x112e5c: 0x3e00008  jr          $ra
label_112e60:
    if (ctx->pc == 0x112E60u) {
        ctx->pc = 0x112E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E5Cu;
        // 0x112e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E64u;
        goto label_fallthrough_0x112e5c;
    }
    ctx->pc = 0x112E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E5Cu;
        // 0x112e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x112e5c:
    ctx->pc = 0x112E64u;
}

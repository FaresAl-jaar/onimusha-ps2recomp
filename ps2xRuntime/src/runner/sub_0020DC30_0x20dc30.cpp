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

// Function: sub_0020DC30
// Address: 0x20dc30 - 0x20dc94
void sub_0020DC30_0x20dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DC30_0x20dc30");
#endif

    switch (ctx->pc) {
        case 0x20dc50u: goto label_20dc50;
        default: break;
    }

    ctx->pc = 0x20dc30u;

    // 0x20dc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20dc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20dc34: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x20dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20dc38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20dc3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20dc40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20dc44: 0x8c912004  lw          $s1, 0x2004($a0)
    ctx->pc = 0x20dc44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20dc48: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20DC48u;
    SET_GPR_U32(ctx, 31, 0x20DC50u);
    ctx->pc = 0x20DC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC48u;
    // 0x20dc4c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20DC48u, 0x20DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC50u;
label_20dc50:
    // 0x20dc50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20dc50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc54: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x20dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x20dc58: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x20dc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc5c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DC5Cu;
    {
        const bool branch_taken_0x20dc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC5Cu;
        // 0x20dc60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc5c) {
            ctx->pc = 0x20DC80u;
            goto label_20dc80;
        }
    }
    ctx->pc = 0x20DC64u;
    // 0x20dc64: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x20dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x20dc68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20dc68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dc6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20dc6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20dc70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20dc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dc74: 0x808eb54  j           func_23AD50
    ctx->pc = 0x20DC74u;
    ctx->pc = 0x20DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC74u;
    // 0x20dc78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AD50u;
    sub_0023AD50_0x23ad50(rdram, ctx, runtime); return;
    ctx->pc = 0x20DC7Cu;
    // 0x20dc7c: 0x0  nop
    ctx->pc = 0x20dc7cu;
    // NOP
label_20dc80:
    // 0x20dc80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20dc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dc84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20dc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20dc88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20dc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC8Cu;
        // 0x20dc90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DC94u;
}

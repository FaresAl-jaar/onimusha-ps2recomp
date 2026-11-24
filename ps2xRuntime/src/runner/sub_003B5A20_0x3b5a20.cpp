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

// Function: sub_003B5A20
// Address: 0x3b5a20 - 0x3b5a98
void sub_003B5A20_0x3b5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5A20_0x3b5a20");
#endif

    switch (ctx->pc) {
        case 0x3b5a34u: goto label_3b5a34;
        case 0x3b5a4cu: goto label_3b5a4c;
        case 0x3b5a78u: goto label_3b5a78;
        case 0x3b5a88u: goto label_3b5a88;
        default: break;
    }

    ctx->pc = 0x3b5a20u;

    // 0x3b5a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b5a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b5a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b5a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b5a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b5a2c: 0xc0ed648  jal         func_3B5920
    ctx->pc = 0x3B5A2Cu;
    SET_GPR_U32(ctx, 31, 0x3B5A34u);
    ctx->pc = 0x3B5A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A2Cu;
    // 0x3b5a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5920u, 0x3B5A2Cu, 0x3B5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A34u;
label_3b5a34:
    // 0x3b5a34: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3b5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3b5a38: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3b5a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5a3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B5A3Cu;
    {
        const bool branch_taken_0x3b5a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A3Cu;
        // 0x3b5a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5a3c) {
            ctx->pc = 0x3B5A58u;
            goto label_3b5a58;
        }
    }
    ctx->pc = 0x3B5A44u;
    // 0x3b5a44: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x3B5A44u;
    SET_GPR_U32(ctx, 31, 0x3B5A4Cu);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x3B5A44u, 0x3B5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A4Cu;
label_3b5a4c:
    // 0x3b5a4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B5A4Cu;
    {
        const bool branch_taken_0x3b5a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5a4c) {
            ctx->pc = 0x3B5A88u;
            goto label_3b5a88;
        }
    }
    ctx->pc = 0x3B5A54u;
    // 0x3b5a54: 0x0  nop
    ctx->pc = 0x3b5a54u;
    // NOP
label_3b5a58:
    // 0x3b5a58: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3b5a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3b5a5c: 0x2402008e  addiu       $v0, $zero, 0x8E
    ctx->pc = 0x3b5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x3b5a60: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5A60u;
    {
        const bool branch_taken_0x3b5a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b5a60) {
            ctx->pc = 0x3B5A70u;
            goto label_3b5a70;
        }
    }
    ctx->pc = 0x3B5A68u;
    // 0x3b5a68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5A68u;
    {
        const bool branch_taken_0x3b5a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5a68) {
            ctx->pc = 0x3B5A80u;
            goto label_3b5a80;
        }
    }
    ctx->pc = 0x3B5A70u;
label_3b5a70:
    // 0x3b5a70: 0xc0a0a38  jal         func_2828E0
    ctx->pc = 0x3B5A70u;
    SET_GPR_U32(ctx, 31, 0x3B5A78u);
    ctx->pc = 0x3B5A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A70u;
    // 0x3b5a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2828E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2828E0u, 0x3B5A70u, 0x3B5A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A78u;
label_3b5a78:
    // 0x3b5a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5A78u;
    {
        const bool branch_taken_0x3b5a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5a78) {
            ctx->pc = 0x3B5A88u;
            goto label_3b5a88;
        }
    }
    ctx->pc = 0x3B5A80u;
label_3b5a80:
    // 0x3b5a80: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3B5A80u;
    SET_GPR_U32(ctx, 31, 0x3B5A88u);
    ctx->pc = 0x3B5A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5A80u;
    // 0x3b5a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3B5A80u, 0x3B5A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5A88u;
label_3b5a88:
    // 0x3b5a88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b5a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b5a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5a90: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A90u;
        // 0x3b5a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5A98u;
}

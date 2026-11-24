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

// Function: sub_00207A20
// Address: 0x207a20 - 0x207a98
void sub_00207A20_0x207a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207A20_0x207a20");
#endif

    switch (ctx->pc) {
        case 0x207a34u: goto label_207a34;
        case 0x207a4cu: goto label_207a4c;
        case 0x207a70u: goto label_207a70;
        case 0x207a84u: goto label_207a84;
        default: break;
    }

    ctx->pc = 0x207a20u;

    // 0x207a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207a24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x207a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x207a28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x207a2c: 0xc081d84  jal         func_207610
    ctx->pc = 0x207A2Cu;
    SET_GPR_U32(ctx, 31, 0x207A34u);
    ctx->pc = 0x207A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207A2Cu;
    // 0x207a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207A2Cu, 0x207A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A34u;
label_207a34:
    // 0x207a34: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207a3c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207A3Cu;
    {
        const bool branch_taken_0x207a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A3Cu;
        // 0x207a40: 0x24847890  addiu       $a0, $a0, 0x7890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a3c) {
            ctx->pc = 0x207A58u;
            goto label_207a58;
        }
    }
    ctx->pc = 0x207A44u;
    // 0x207a44: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207A44u;
    SET_GPR_U32(ctx, 31, 0x207A4Cu);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207A44u, 0x207A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A4Cu;
label_207a4c:
    // 0x207a4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x207A4Cu;
    {
        const bool branch_taken_0x207a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A4Cu;
        // 0x207a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a4c) {
            ctx->pc = 0x207A88u;
            goto label_207a88;
        }
    }
    ctx->pc = 0x207A54u;
    // 0x207a54: 0x0  nop
    ctx->pc = 0x207a54u;
    // NOP
label_207a58:
    // 0x207a58: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x207a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x207a5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x207a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a60: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x207A60u;
    {
        const bool branch_taken_0x207a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A60u;
        // 0x207a64: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a60) {
            ctx->pc = 0x207A88u;
            goto label_207a88;
        }
    }
    ctx->pc = 0x207A68u;
    // 0x207a68: 0xc08533c  jal         func_214CF0
    ctx->pc = 0x207A68u;
    SET_GPR_U32(ctx, 31, 0x207A70u);
    ctx->pc = 0x207A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207A68u;
    // 0x207a6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214CF0u, 0x207A68u, 0x207A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A70u;
label_207a70:
    // 0x207a70: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207A74u;
    {
        const bool branch_taken_0x207a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A74u;
        // 0x207a78: 0x248478c8  addiu       $a0, $a0, 0x78C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a74) {
            ctx->pc = 0x207A84u;
            goto label_207a84;
        }
    }
    ctx->pc = 0x207A7Cu;
    // 0x207a7c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207A7Cu;
    SET_GPR_U32(ctx, 31, 0x207A84u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207A7Cu, 0x207A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A84u;
label_207a84:
    // 0x207a84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x207a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_207a88:
    // 0x207a88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x207a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207a90: 0x3e00008  jr          $ra
    ctx->pc = 0x207A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A90u;
        // 0x207a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207A98u;
}

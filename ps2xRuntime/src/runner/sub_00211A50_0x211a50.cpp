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

// Function: sub_00211A50
// Address: 0x211a50 - 0x211a9c
void sub_00211A50_0x211a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211A50_0x211a50");
#endif

    switch (ctx->pc) {
        case 0x211a74u: goto label_211a74;
        default: break;
    }

    ctx->pc = 0x211a50u;

    // 0x211a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x211a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x211a60: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x211a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x211a64: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x211A64u;
    {
        const bool branch_taken_0x211a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A64u;
        // 0x211a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a64) {
            ctx->pc = 0x211A8Cu;
            goto label_211a8c;
        }
    }
    ctx->pc = 0x211A6Cu;
    // 0x211a6c: 0xc085216  jal         func_214858
    ctx->pc = 0x211A6Cu;
    SET_GPR_U32(ctx, 31, 0x211A74u);
    ctx->pc = 0x214858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214858u, 0x211A6Cu, 0x211A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A74u;
label_211a74:
    // 0x211a74: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x211A74u;
    {
        const bool branch_taken_0x211a74 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x211a74) {
            ctx->pc = 0x211A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211A74u;
            // 0x211a78: 0x8e0236b0  lw          $v0, 0x36B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A88u;
            goto label_211a88;
        }
    }
    ctx->pc = 0x211A7Cu;
    // 0x211a7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211A7Cu;
    {
        const bool branch_taken_0x211a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A7Cu;
        // 0x211a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a7c) {
            ctx->pc = 0x211A8Cu;
            goto label_211a8c;
        }
    }
    ctx->pc = 0x211A84u;
    // 0x211a84: 0x0  nop
    ctx->pc = 0x211a84u;
    // NOP
label_211a88:
    // 0x211a88: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x211a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_211a8c:
    // 0x211a8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211a90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x211a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211a94: 0x3e00008  jr          $ra
    ctx->pc = 0x211A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A94u;
        // 0x211a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211A9Cu;
}

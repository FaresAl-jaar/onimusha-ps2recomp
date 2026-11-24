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

// Function: sub_0014F0D0
// Address: 0x14f0d0 - 0x14f134
void sub_0014F0D0_0x14f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F0D0_0x14f0d0");
#endif

    switch (ctx->pc) {
        case 0x14f0f8u: goto label_14f0f8;
        case 0x14f100u: goto label_14f100;
        case 0x14f118u: goto label_14f118;
        case 0x14f128u: goto label_14f128;
        default: break;
    }

    ctx->pc = 0x14f0d0u;

    // 0x14f0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f0d8: 0x8cc200e0  lw          $v0, 0xE0($a2)
    ctx->pc = 0x14f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x14f0dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14f0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14f0e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F0E0u;
    {
        const bool branch_taken_0x14f0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0E0u;
        // 0x14f0e4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0e0) {
            ctx->pc = 0x14F100u;
            goto label_14f100;
        }
    }
    ctx->pc = 0x14F0E8u;
    // 0x14f0e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14f0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f0ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14f0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f0f0: 0xc053dc4  jal         func_14F710
    ctx->pc = 0x14F0F0u;
    SET_GPR_U32(ctx, 31, 0x14F0F8u);
    ctx->pc = 0x14F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F0F0u;
    // 0x14f0f4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F710u, 0x14F0F0u, 0x14F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0F8u;
label_14f0f8:
    // 0x14f0f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14F0F8u;
    {
        const bool branch_taken_0x14f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f0f8) {
            ctx->pc = 0x14F128u;
            goto label_14f128;
        }
    }
    ctx->pc = 0x14F100u;
label_14f100:
    // 0x14f100: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x14f104: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14f104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14f108: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F108u;
    {
        const bool branch_taken_0x14f108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F108u;
        // 0x14f10c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f108) {
            ctx->pc = 0x14F120u;
            goto label_14f120;
        }
    }
    ctx->pc = 0x14F110u;
    // 0x14f110: 0xc053ca0  jal         func_14F280
    ctx->pc = 0x14F110u;
    SET_GPR_U32(ctx, 31, 0x14F118u);
    ctx->pc = 0x14F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F110u;
    // 0x14f114: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F280u, 0x14F110u, 0x14F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F118u;
label_14f118:
    // 0x14f118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F118u;
    {
        const bool branch_taken_0x14f118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f118) {
            ctx->pc = 0x14F128u;
            goto label_14f128;
        }
    }
    ctx->pc = 0x14F120u;
label_14f120:
    // 0x14f120: 0xc053dc4  jal         func_14F710
    ctx->pc = 0x14F120u;
    SET_GPR_U32(ctx, 31, 0x14F128u);
    ctx->pc = 0x14F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F710u, 0x14F120u, 0x14F128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F128u;
label_14f128:
    // 0x14f128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F12Cu;
        // 0x14f130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F134u;
}

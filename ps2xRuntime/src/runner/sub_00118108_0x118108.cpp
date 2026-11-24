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

// Function: sub_00118108
// Address: 0x118108 - 0x118168
void sub_00118108_0x118108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118108_0x118108");
#endif

    switch (ctx->pc) {
        case 0x118144u: goto label_118144;
        case 0x118154u: goto label_118154;
        default: break;
    }

    ctx->pc = 0x118108u;

    // 0x118108: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x118108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x11810c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x11810cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x118110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x118114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118118: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x118118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
    // 0x11811c: 0x24a52a00  addiu       $a1, $a1, 0x2A00
    ctx->pc = 0x11811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    // 0x118120: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x118120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x118124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x118124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118128: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x118128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11812c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x11812cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x118130: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x118130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x118134: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x118134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x118138: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x118138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x11813c: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x11813Cu;
    SET_GPR_U32(ctx, 31, 0x118144u);
    ctx->pc = 0x118140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11813Cu;
    // 0x118140: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x11813Cu, 0x118144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118144u;
label_118144:
    // 0x118144: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x118144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x118148: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x118148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11814c: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x11814Cu;
    SET_GPR_U32(ctx, 31, 0x118154u);
    ctx->pc = 0x118150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11814Cu;
    // 0x118150: 0xac6231d0  sw          $v0, 0x31D0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x11814Cu, 0x118154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118154u;
label_118154:
    // 0x118154: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x118154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x118158: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11815c: 0xac6231d4  sw          $v0, 0x31D4($v1)
    ctx->pc = 0x11815cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4031D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4031D4u, _value); } while (0);
    // 0x118160: 0x3e00008  jr          $ra
    ctx->pc = 0x118160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118160u;
        // 0x118164: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118168u;
}

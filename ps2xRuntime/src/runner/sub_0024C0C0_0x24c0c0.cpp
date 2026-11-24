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

// Function: sub_0024C0C0
// Address: 0x24c0c0 - 0x24c140
void sub_0024C0C0_0x24c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C0C0_0x24c0c0");
#endif

    switch (ctx->pc) {
        case 0x24c0e0u: goto label_24c0e0;
        case 0x24c108u: goto label_24c108;
        case 0x24c110u: goto label_24c110;
        case 0x24c11cu: goto label_24c11c;
        case 0x24c130u: goto label_24c130;
        default: break;
    }

    ctx->pc = 0x24c0c0u;

    // 0x24c0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c0c4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24c0c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24c0cc: 0x24421360  addiu       $v0, $v0, 0x1360
    ctx->pc = 0x24c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4960));
    // 0x24c0d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24c0d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0d8: 0xc092ff2  jal         func_24BFC8
    ctx->pc = 0x24C0D8u;
    SET_GPR_U32(ctx, 31, 0x24C0E0u);
    ctx->pc = 0x24C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C0D8u;
    // 0x24c0dc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC8u, 0x24C0D8u, 0x24C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0E0u;
label_24c0e0:
    // 0x24c0e0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24c0e4: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24c0e8: 0x24501378  addiu       $s0, $v0, 0x1378
    ctx->pc = 0x24c0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x24c0ec: 0x24841380  addiu       $a0, $a0, 0x1380
    ctx->pc = 0x24c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x24c0f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D1378u));
    // 0x24c0f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C0F8u;
    {
        const bool branch_taken_0x24c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0F8u;
        // 0x24c0fc: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c0f8) {
            ctx->pc = 0x24C120u;
            goto label_24c120;
        }
    }
    ctx->pc = 0x24C100u;
    // 0x24c100: 0xc049590  jal         func_125640
    ctx->pc = 0x24C100u;
    SET_GPR_U32(ctx, 31, 0x24C108u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24C100u, 0x24C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C108u;
label_24c108:
    // 0x24c108: 0xc09302c  jal         func_24C0B0
    ctx->pc = 0x24C108u;
    SET_GPR_U32(ctx, 31, 0x24C110u);
    ctx->pc = 0x24C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C0B0u, 0x24C108u, 0x24C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C110u;
label_24c110:
    // 0x24c110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24c110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c114: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x24C114u;
    SET_GPR_U32(ctx, 31, 0x24C11Cu);
    ctx->pc = 0x24C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C114u;
    // 0x24c118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x24C114u, 0x24C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C11Cu;
label_24c11c:
    // 0x24c11c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24c120:
    // 0x24c120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24c120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24c124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c128: 0xc092ff8  jal         func_24BFE0
    ctx->pc = 0x24C128u;
    SET_GPR_U32(ctx, 31, 0x24C130u);
    ctx->pc = 0x24C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C128u;
    // 0x24c12c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFE0u, 0x24C128u, 0x24C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C130u;
label_24c130:
    // 0x24c130: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c134: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24c134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c138: 0x3e00008  jr          $ra
    ctx->pc = 0x24C138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C138u;
        // 0x24c13c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C140u;
}

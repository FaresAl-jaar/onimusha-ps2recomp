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

// Function: sub_00210A78
// Address: 0x210a78 - 0x210ad8
void sub_00210A78_0x210a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210A78_0x210a78");
#endif

    switch (ctx->pc) {
        case 0x210a94u: goto label_210a94;
        default: break;
    }

    ctx->pc = 0x210a78u;

    // 0x210a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a80: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x210a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x210a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210a88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x210a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x210a8c: 0xc049590  jal         func_125640
    ctx->pc = 0x210A8Cu;
    SET_GPR_U32(ctx, 31, 0x210A94u);
    ctx->pc = 0x210A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A8Cu;
    // 0x210a90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x210A8Cu, 0x210A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A94u;
label_210a94:
    // 0x210a94: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x210a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x210a98: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x210a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x210a9c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x210a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x210aa0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x210aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x210aa4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x210aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x210aa8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x210aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x210aac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x210aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x210ab0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x210ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x210ab4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x210ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x210ab8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x210ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x210abc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x210abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x210ac0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x210ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x210ac4: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x210ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x210ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x210ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x210AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AD0u;
        // 0x210ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210AD8u;
}

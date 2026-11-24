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

// Function: sub_003BD180
// Address: 0x3bd180 - 0x3bd1d0
void sub_003BD180_0x3bd180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD180_0x3bd180");
#endif

    switch (ctx->pc) {
        case 0x3bd19cu: goto label_3bd19c;
        case 0x3bd1b4u: goto label_3bd1b4;
        default: break;
    }

    ctx->pc = 0x3bd180u;

    // 0x3bd180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bd180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bd184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bd184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bd188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bd188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bd18c: 0xa0852b90  sb          $a1, 0x2B90($a0)
    ctx->pc = 0x3bd18cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11152), (uint8_t)GPR_U32(ctx, 5));
    // 0x3bd190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bd190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd194: 0xc0ef474  jal         func_3BD1D0
    ctx->pc = 0x3BD194u;
    SET_GPR_U32(ctx, 31, 0x3BD19Cu);
    ctx->pc = 0x3BD198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD194u;
    // 0x3bd198: 0xa0802b91  sb          $zero, 0x2B91($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 11153), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD1D0u, 0x3BD194u, 0x3BD19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD19Cu;
label_3bd19c:
    // 0x3bd19c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3bd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3bd1a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bd1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd1a4: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3bd1a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3bd1a8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3bd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3bd1ac: 0xc0bc80c  jal         func_2F2030
    ctx->pc = 0x3BD1ACu;
    SET_GPR_U32(ctx, 31, 0x3BD1B4u);
    ctx->pc = 0x3BD1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD1ACu;
    // 0x3bd1b0: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2030u, 0x3BD1ACu, 0x3BD1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD1B4u;
label_3bd1b4:
    // 0x3bd1b4: 0xae022b8c  sw          $v0, 0x2B8C($s0)
    ctx->pc = 0x3bd1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11148), GPR_U32(ctx, 2));
    // 0x3bd1b8: 0x8e022b8c  lw          $v0, 0x2B8C($s0)
    ctx->pc = 0x3bd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11148)));
    // 0x3bd1bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bd1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd1c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bd1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd1c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3bd1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3bd1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD1C8u;
        // 0x3bd1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD1D0u;
}

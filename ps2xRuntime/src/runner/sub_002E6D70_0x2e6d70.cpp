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

// Function: sub_002E6D70
// Address: 0x2e6d70 - 0x2e6de4
void sub_002E6D70_0x2e6d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6D70_0x2e6d70");
#endif

    switch (ctx->pc) {
        case 0x2e6d90u: goto label_2e6d90;
        case 0x2e6da0u: goto label_2e6da0;
        case 0x2e6dd0u: goto label_2e6dd0;
        default: break;
    }

    ctx->pc = 0x2e6d70u;

    // 0x2e6d70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e6d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e6d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e6d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e6d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e6d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e6d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d88: 0xc04150c  jal         func_105430
    ctx->pc = 0x2E6D88u;
    SET_GPR_U32(ctx, 31, 0x2E6D90u);
    ctx->pc = 0x2E6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D88u;
    // 0x2e6d8c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x2E6D88u, 0x2E6D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D90u;
label_2e6d90:
    // 0x2e6d90: 0x860600c2  lh          $a2, 0xC2($s0)
    ctx->pc = 0x2e6d90u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x2e6d94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e6d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6d98: 0xc04d64c  jal         func_135930
    ctx->pc = 0x2E6D98u;
    SET_GPR_U32(ctx, 31, 0x2E6DA0u);
    ctx->pc = 0x2E6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D98u;
    // 0x2e6d9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135930u, 0x2E6D98u, 0x2E6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DA0u;
label_2e6da0:
    // 0x2e6da0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2e6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e6da4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2e6da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e6da8: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2e6da8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6dac: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x2e6dacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x2e6db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6db4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2e6db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6db8: 0x24c66910  addiu       $a2, $a2, 0x6910
    ctx->pc = 0x2e6db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26896));
    // 0x2e6dbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6dc0: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x2e6dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x2e6dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6dc8: 0xc041442  jal         func_105108
    ctx->pc = 0x2E6DC8u;
    SET_GPR_U32(ctx, 31, 0x2E6DD0u);
    ctx->pc = 0x2E6DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DC8u;
    // 0x2e6dcc: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2E6DC8u, 0x2E6DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DD0u;
label_2e6dd0:
    // 0x2e6dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e6dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DDCu;
        // 0x2e6de0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6DE4u;
}

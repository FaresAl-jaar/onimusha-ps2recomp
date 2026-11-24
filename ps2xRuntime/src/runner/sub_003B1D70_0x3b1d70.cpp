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

// Function: sub_003B1D70
// Address: 0x3b1d70 - 0x3b1df4
void sub_003B1D70_0x3b1d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1D70_0x3b1d70");
#endif

    switch (ctx->pc) {
        case 0x3b1d9cu: goto label_3b1d9c;
        case 0x3b1de4u: goto label_3b1de4;
        default: break;
    }

    ctx->pc = 0x3b1d70u;

    // 0x3b1d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b1d74: 0x3c023ef5  lui         $v0, 0x3EF5
    ctx->pc = 0x3b1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16117 << 16));
    // 0x3b1d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b1d7c: 0x3442be0b  ori         $v0, $v0, 0xBE0B
    ctx->pc = 0x3b1d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48651);
    // 0x3b1d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b1d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b1d84: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3b1d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3b1d88: 0x8c23fde8  lw          $v1, -0x218($at)
    ctx->pc = 0x3b1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x3b1d8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b1d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b1d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1d94: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x3B1D94u;
    SET_GPR_U32(ctx, 31, 0x3B1D9Cu);
    ctx->pc = 0x3B1D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D94u;
    // 0x3b1d98: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x3B1D94u, 0x3B1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D9Cu;
label_3b1d9c:
    // 0x3b1d9c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x3b1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x3b1da0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3b1da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3b1da4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b1da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b1da8: 0x8c22fde8  lw          $v0, -0x218($at)
    ctx->pc = 0x3b1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x3b1dac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b1dacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b1db0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3b1db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3b1db4: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x3b1db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x3b1db8: 0x8c22fde8  lw          $v0, -0x218($at)
    ctx->pc = 0x3b1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x3b1dbc: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3b1dbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3b1dc0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3b1dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3b1dc4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3b1dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3b1dc8: 0x8c22fde8  lw          $v0, -0x218($at)
    ctx->pc = 0x3b1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x3b1dcc: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3b1dccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b1dd0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3b1dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3b1dd4: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x3b1dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x3b1dd8: 0x8c24fde8  lw          $a0, -0x218($at)
    ctx->pc = 0x3b1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x3b1ddc: 0xc04bc7c  jal         func_12F1F0
    ctx->pc = 0x3B1DDCu;
    SET_GPR_U32(ctx, 31, 0x3B1DE4u);
    ctx->pc = 0x3B1DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1DDCu;
    // 0x3b1de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1F0u, 0x3B1DDCu, 0x3B1DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1DE4u;
label_3b1de4:
    // 0x3b1de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1de8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b1de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1dec: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DECu;
        // 0x3b1df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1DF4u;
}

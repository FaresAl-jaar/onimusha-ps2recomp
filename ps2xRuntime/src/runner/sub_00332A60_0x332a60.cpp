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

// Function: sub_00332A60
// Address: 0x332a60 - 0x332acc
void sub_00332A60_0x332a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332A60_0x332a60");
#endif

    switch (ctx->pc) {
        case 0x332a84u: goto label_332a84;
        case 0x332a8cu: goto label_332a8c;
        case 0x332a9cu: goto label_332a9c;
        case 0x332ab0u: goto label_332ab0;
        case 0x332ac0u: goto label_332ac0;
        default: break;
    }

    ctx->pc = 0x332a60u;

    // 0x332a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332a64: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x332a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x332a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332a6c: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x332a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
    // 0x332a70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x332a70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4EA280u));
    // 0x332a74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x332a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x332a78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x332a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332a7c: 0xc0640c4  jal         func_190310
    ctx->pc = 0x332A7Cu;
    SET_GPR_U32(ctx, 31, 0x332A84u);
    ctx->pc = 0x332A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332A7Cu;
    // 0x332a80: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190310u, 0x332A7Cu, 0x332A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332A84u;
label_332a84:
    // 0x332a84: 0xc064114  jal         func_190450
    ctx->pc = 0x332A84u;
    SET_GPR_U32(ctx, 31, 0x332A8Cu);
    ctx->pc = 0x332A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332A84u;
    // 0x332a88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190450u, 0x332A84u, 0x332A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332A8Cu;
label_332a8c:
    // 0x332a8c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x332a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x332a90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332a94: 0xc0640e4  jal         func_190390
    ctx->pc = 0x332A94u;
    SET_GPR_U32(ctx, 31, 0x332A9Cu);
    ctx->pc = 0x190390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190390u, 0x332A94u, 0x332A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332A9Cu;
label_332a9c:
    // 0x332a9c: 0x3c02be68  lui         $v0, 0xBE68
    ctx->pc = 0x332a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48744 << 16));
    // 0x332aa0: 0x34425697  ori         $v0, $v0, 0x5697
    ctx->pc = 0x332aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22167);
    // 0x332aa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332aa8: 0xc064104  jal         func_190410
    ctx->pc = 0x332AA8u;
    SET_GPR_U32(ctx, 31, 0x332AB0u);
    ctx->pc = 0x190410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190410u, 0x332AA8u, 0x332AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AB0u;
label_332ab0:
    // 0x332ab0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x332ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x332ab4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332ab8: 0xc0640f4  jal         func_1903D0
    ctx->pc = 0x332AB8u;
    SET_GPR_U32(ctx, 31, 0x332AC0u);
    ctx->pc = 0x1903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1903D0u, 0x332AB8u, 0x332AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AC0u;
label_332ac0:
    // 0x332ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x332AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AC4u;
        // 0x332ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332ACCu;
}

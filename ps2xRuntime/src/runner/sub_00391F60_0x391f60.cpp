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

// Function: sub_00391F60
// Address: 0x391f60 - 0x391fe8
void sub_00391F60_0x391f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391F60_0x391f60");
#endif

    switch (ctx->pc) {
        case 0x391f9cu: goto label_391f9c;
        case 0x391fa4u: goto label_391fa4;
        case 0x391fb8u: goto label_391fb8;
        case 0x391fd0u: goto label_391fd0;
        case 0x391fd8u: goto label_391fd8;
        default: break;
    }

    ctx->pc = 0x391f60u;

    // 0x391f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x391f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x391f64: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x391f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x391f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x391f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x391f6c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x391f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x391f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x391f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x391f74: 0x278283b0  addiu       $v0, $gp, -0x7C50
    ctx->pc = 0x391f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935472));
    // 0x391f78: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x391f78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x391f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x391f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x391f80: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x391f80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x391f84: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x391f84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x391f88: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x391f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x391f8c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x391f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x391f90: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x391f90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x391f94: 0xc0e4918  jal         func_392460
    ctx->pc = 0x391F94u;
    SET_GPR_U32(ctx, 31, 0x391F9Cu);
    ctx->pc = 0x391F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F94u;
    // 0x391f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392460u, 0x391F94u, 0x391F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F9Cu;
label_391f9c:
    // 0x391f9c: 0xc0e4864  jal         func_392190
    ctx->pc = 0x391F9Cu;
    SET_GPR_U32(ctx, 31, 0x391FA4u);
    ctx->pc = 0x391FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F9Cu;
    // 0x391fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392190u, 0x391F9Cu, 0x391FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391FA4u;
label_391fa4:
    // 0x391fa4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x391fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x391fa8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x391fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x391fac: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x391facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x391fb0: 0xc0ceb84  jal         func_33AE10
    ctx->pc = 0x391FB0u;
    SET_GPR_U32(ctx, 31, 0x391FB8u);
    ctx->pc = 0x391FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391FB0u;
    // 0x391fb4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE10u, 0x391FB0u, 0x391FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391FB8u;
label_391fb8:
    // 0x391fb8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x391fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x391fbc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x391fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x391fc0: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x391fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x391fc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x391fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x391fc8: 0xc0cebec  jal         func_33AFB0
    ctx->pc = 0x391FC8u;
    SET_GPR_U32(ctx, 31, 0x391FD0u);
    ctx->pc = 0x391FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391FC8u;
    // 0x391fcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFB0u, 0x391FC8u, 0x391FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391FD0u;
label_391fd0:
    // 0x391fd0: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x391FD0u;
    SET_GPR_U32(ctx, 31, 0x391FD8u);
    ctx->pc = 0x391FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391FD0u;
    // 0x391fd4: 0x26040278  addiu       $a0, $s0, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x391FD0u, 0x391FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391FD8u;
label_391fd8:
    // 0x391fd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x391fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x391fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x391FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FE0u;
        // 0x391fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391FE8u;
}

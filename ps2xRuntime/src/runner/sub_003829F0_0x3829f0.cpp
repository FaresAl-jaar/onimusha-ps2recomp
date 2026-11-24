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

// Function: sub_003829F0
// Address: 0x3829f0 - 0x382ac8
void sub_003829F0_0x3829f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003829F0_0x3829f0");
#endif

    switch (ctx->pc) {
        case 0x382a0cu: goto label_382a0c;
        case 0x382a24u: goto label_382a24;
        case 0x382a3cu: goto label_382a3c;
        case 0x382a6cu: goto label_382a6c;
        case 0x382a84u: goto label_382a84;
        case 0x382a94u: goto label_382a94;
        case 0x382aacu: goto label_382aac;
        default: break;
    }

    ctx->pc = 0x3829f0u;

    // 0x3829f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3829f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3829f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3829f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3829f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3829f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3829fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3829fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x382a00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x382a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a04: 0xc0e0f00  jal         func_383C00
    ctx->pc = 0x382A04u;
    SET_GPR_U32(ctx, 31, 0x382A0Cu);
    ctx->pc = 0x382A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382A04u;
    // 0x382a08: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C00u, 0x382A04u, 0x382A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A0Cu;
label_382a0c:
    // 0x382a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x382a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a10: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x382A10u;
    {
        const bool branch_taken_0x382a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x382a10) {
            ctx->pc = 0x382AB0u;
            goto label_382ab0;
        }
    }
    ctx->pc = 0x382A18u;
    // 0x382a18: 0x96110000  lhu         $s1, 0x0($s0)
    ctx->pc = 0x382a18u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x382a1c: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x382A1Cu;
    SET_GPR_U32(ctx, 31, 0x382A24u);
    ctx->pc = 0x382A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382A1Cu;
    // 0x382a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x382A1Cu, 0x382A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A24u;
label_382a24:
    // 0x382a24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x382a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x382a28: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x382a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x382a2c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x382A2Cu;
    {
        const bool branch_taken_0x382a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A2Cu;
        // 0x382a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a2c) {
            ctx->pc = 0x382A40u;
            goto label_382a40;
        }
    }
    ctx->pc = 0x382A34u;
    // 0x382a34: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x382A34u;
    SET_GPR_U32(ctx, 31, 0x382A3Cu);
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x382A34u, 0x382A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A3Cu;
label_382a3c:
    // 0x382a3c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x382a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_382a40:
    // 0x382a40: 0x8e4201d4  lw          $v0, 0x1D4($s2)
    ctx->pc = 0x382a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x382a44: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x382a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x382a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x382A48u;
    {
        const bool branch_taken_0x382a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x382a48) {
            ctx->pc = 0x382A60u;
            goto label_382a60;
        }
    }
    ctx->pc = 0x382A50u;
    // 0x382a50: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x382a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x382a54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x382A54u;
    {
        const bool branch_taken_0x382a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A54u;
        // 0x382a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a54) {
            ctx->pc = 0x382A60u;
            goto label_382a60;
        }
    }
    ctx->pc = 0x382A5Cu;
    // 0x382a5c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x382a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_382a60:
    // 0x382a60: 0x96110006  lhu         $s1, 0x6($s0)
    ctx->pc = 0x382a60u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x382a64: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x382A64u;
    SET_GPR_U32(ctx, 31, 0x382A6Cu);
    ctx->pc = 0x382A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382A64u;
    // 0x382a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x382A64u, 0x382A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A6Cu;
label_382a6c:
    // 0x382a6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x382a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x382a70: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x382a70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x382a74: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x382A74u;
    {
        const bool branch_taken_0x382a74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A74u;
        // 0x382a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a74) {
            ctx->pc = 0x382A88u;
            goto label_382a88;
        }
    }
    ctx->pc = 0x382A7Cu;
    // 0x382a7c: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x382A7Cu;
    SET_GPR_U32(ctx, 31, 0x382A84u);
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x382A7Cu, 0x382A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A84u;
label_382a84:
    // 0x382a84: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x382a84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_382a88:
    // 0x382a88: 0x9611000a  lhu         $s1, 0xA($s0)
    ctx->pc = 0x382a88u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x382a8c: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x382A8Cu;
    SET_GPR_U32(ctx, 31, 0x382A94u);
    ctx->pc = 0x382A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382A8Cu;
    // 0x382a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x382A8Cu, 0x382A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A94u;
label_382a94:
    // 0x382a94: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x382a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x382a98: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x382a98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x382a9c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x382A9Cu;
    {
        const bool branch_taken_0x382a9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x382AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A9Cu;
        // 0x382aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a9c) {
            ctx->pc = 0x382AB0u;
            goto label_382ab0;
        }
    }
    ctx->pc = 0x382AA4u;
    // 0x382aa4: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x382AA4u;
    SET_GPR_U32(ctx, 31, 0x382AACu);
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x382AA4u, 0x382AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382AACu;
label_382aac:
    // 0x382aac: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x382aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_382ab0:
    // 0x382ab0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x382ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x382ab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x382ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382ab8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x382AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382AC0u;
        // 0x382ac4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382AC8u;
}

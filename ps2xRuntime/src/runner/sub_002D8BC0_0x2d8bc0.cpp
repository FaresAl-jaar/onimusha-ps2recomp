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

// Function: sub_002D8BC0
// Address: 0x2d8bc0 - 0x2d8c6c
void sub_002D8BC0_0x2d8bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8BC0_0x2d8bc0");
#endif

    switch (ctx->pc) {
        case 0x2d8c0cu: goto label_2d8c0c;
        case 0x2d8c1cu: goto label_2d8c1c;
        case 0x2d8c2cu: goto label_2d8c2c;
        case 0x2d8c3cu: goto label_2d8c3c;
        case 0x2d8c44u: goto label_2d8c44;
        default: break;
    }

    ctx->pc = 0x2d8bc0u;

    // 0x2d8bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8bc4: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x2d8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d8bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d8bcc: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2d8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2d8bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8bd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d8bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d8bd8: 0xa4820034  sh          $v0, 0x34($a0)
    ctx->pc = 0x2d8bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d8bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8be0: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x2d8be0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d8be4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8be8: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x2d8be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x2d8bec: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x2d8becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x2d8bf0: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x2d8bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x2d8bf4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d8bf8: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x2d8bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2d8bfc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d8c00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d8c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d8c04: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D8C04u;
    SET_GPR_U32(ctx, 31, 0x2D8C0Cu);
    ctx->pc = 0x2D8C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C04u;
    // 0x2d8c08: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48B0u, 0x2D8C04u, 0x2D8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C0Cu;
label_2d8c0c:
    // 0x2d8c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d8c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c14: 0xc0b59a8  jal         func_2D66A0
    ctx->pc = 0x2D8C14u;
    SET_GPR_U32(ctx, 31, 0x2D8C1Cu);
    ctx->pc = 0x2D8C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C14u;
    // 0x2d8c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66A0u, 0x2D8C14u, 0x2D8C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C1Cu;
label_2d8c1c:
    // 0x2d8c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d8c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c24: 0xc0b5a4c  jal         func_2D6930
    ctx->pc = 0x2D8C24u;
    SET_GPR_U32(ctx, 31, 0x2D8C2Cu);
    ctx->pc = 0x2D8C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C24u;
    // 0x2d8c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6930u, 0x2D8C24u, 0x2D8C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C2Cu;
label_2d8c2c:
    // 0x2d8c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d8c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c34: 0xc0b5ac8  jal         func_2D6B20
    ctx->pc = 0x2D8C34u;
    SET_GPR_U32(ctx, 31, 0x2D8C3Cu);
    ctx->pc = 0x2D8C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C34u;
    // 0x2d8c38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B20u, 0x2D8C34u, 0x2D8C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C3Cu;
label_2d8c3c:
    // 0x2d8c3c: 0xc0b5204  jal         func_2D4810
    ctx->pc = 0x2D8C3Cu;
    SET_GPR_U32(ctx, 31, 0x2D8C44u);
    ctx->pc = 0x2D8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C3Cu;
    // 0x2d8c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4810u, 0x2D8C3Cu, 0x2D8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8C44u;
label_2d8c44:
    // 0x2d8c44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d8c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8c48: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2d8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d8c4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d8c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d8c50: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2d8c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d8c54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d8c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d8c58: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2d8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x2d8c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8c64: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C64u;
        // 0x2d8c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8C6Cu;
}

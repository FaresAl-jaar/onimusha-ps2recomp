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

// Function: sub_00326D40
// Address: 0x326d40 - 0x326dc8
void sub_00326D40_0x326d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326D40_0x326d40");
#endif

    switch (ctx->pc) {
        case 0x326d70u: goto label_326d70;
        case 0x326d9cu: goto label_326d9c;
        case 0x326db0u: goto label_326db0;
        case 0x326db8u: goto label_326db8;
        default: break;
    }

    ctx->pc = 0x326d40u;

    // 0x326d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x326d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x326d4c: 0xac8004e0  sw          $zero, 0x4E0($a0)
    ctx->pc = 0x326d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1248), GPR_U32(ctx, 0));
    // 0x326d50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x326D50u;
    {
        const bool branch_taken_0x326d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D50u;
        // 0x326d54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d50) {
            ctx->pc = 0x326D60u;
            goto label_326d60;
        }
    }
    ctx->pc = 0x326D58u;
    // 0x326d58: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x326d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x326d5c: 0xae0204e0  sw          $v0, 0x4E0($s0)
    ctx->pc = 0x326d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1248), GPR_U32(ctx, 2));
label_326d60:
    // 0x326d60: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x326d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x326d64: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x326d64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x326d68: 0xc0a6c8c  jal         func_29B230
    ctx->pc = 0x326D68u;
    SET_GPR_U32(ctx, 31, 0x326D70u);
    ctx->pc = 0x326D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D68u;
    // 0x326d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B230u, 0x326D68u, 0x326D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D70u;
label_326d70:
    // 0x326d70: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x326d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x326d74: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x326D74u;
    {
        const bool branch_taken_0x326d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x326d74) {
            ctx->pc = 0x326DA0u;
            goto label_326da0;
        }
    }
    ctx->pc = 0x326D7Cu;
    // 0x326d7c: 0x908300ce  lbu         $v1, 0xCE($a0)
    ctx->pc = 0x326d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 206)));
    // 0x326d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326d84: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326D84u;
    {
        const bool branch_taken_0x326d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x326D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D84u;
        // 0x326d88: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d84) {
            ctx->pc = 0x326DA0u;
            goto label_326da0;
        }
    }
    ctx->pc = 0x326D8Cu;
    // 0x326d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d90: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x326d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d94: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x326D94u;
    SET_GPR_U32(ctx, 31, 0x326D9Cu);
    ctx->pc = 0x326D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D94u;
    // 0x326d98: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x326D94u, 0x326D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D9Cu;
label_326d9c:
    // 0x326d9c: 0x0  nop
    ctx->pc = 0x326d9cu;
    // NOP
label_326da0:
    // 0x326da0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x326da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x326da4: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x326da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x326da8: 0xc0a7394  jal         func_29CE50
    ctx->pc = 0x326DA8u;
    SET_GPR_U32(ctx, 31, 0x326DB0u);
    ctx->pc = 0x326DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DA8u;
    // 0x326dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE50u, 0x326DA8u, 0x326DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DB0u;
label_326db0:
    // 0x326db0: 0xc0a72a8  jal         func_29CAA0
    ctx->pc = 0x326DB0u;
    SET_GPR_U32(ctx, 31, 0x326DB8u);
    ctx->pc = 0x326DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DB0u;
    // 0x326db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CAA0u, 0x326DB0u, 0x326DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DB8u;
label_326db8:
    // 0x326db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x326DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DC0u;
        // 0x326dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326DC8u;
}

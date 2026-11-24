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

// Function: sub_0036A2D0
// Address: 0x36a2d0 - 0x36a374
void sub_0036A2D0_0x36a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A2D0_0x36a2d0");
#endif

    switch (ctx->pc) {
        case 0x36a2e4u: goto label_36a2e4;
        case 0x36a364u: goto label_36a364;
        default: break;
    }

    ctx->pc = 0x36a2d0u;

    // 0x36a2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a2d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a2d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a2dc: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x36A2DCu;
    SET_GPR_U32(ctx, 31, 0x36A2E4u);
    ctx->pc = 0x36A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2DCu;
    // 0x36a2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x36A2DCu, 0x36A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2E4u;
label_36a2e4:
    // 0x36a2e4: 0xa2002b29  sb          $zero, 0x2B29($s0)
    ctx->pc = 0x36a2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11049), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a2e8: 0x920207d8  lbu         $v0, 0x7D8($s0)
    ctx->pc = 0x36a2e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x36a2ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A2ECu;
    {
        const bool branch_taken_0x36a2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a2ec) {
            ctx->pc = 0x36A300u;
            goto label_36a300;
        }
    }
    ctx->pc = 0x36A2F4u;
    // 0x36a2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a2f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36A2F8u;
    {
        const bool branch_taken_0x36a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A2F8u;
        // 0x36a2fc: 0xa2022b28  sb          $v0, 0x2B28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11048), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a2f8) {
            ctx->pc = 0x36A308u;
            goto label_36a308;
        }
    }
    ctx->pc = 0x36A300u;
label_36a300:
    // 0x36a300: 0xa2022b28  sb          $v0, 0x2B28($s0)
    ctx->pc = 0x36a300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11048), (uint8_t)GPR_U32(ctx, 2));
    // 0x36a304: 0x0  nop
    ctx->pc = 0x36a304u;
    // NOP
label_36a308:
    // 0x36a308: 0x92022b28  lbu         $v0, 0x2B28($s0)
    ctx->pc = 0x36a308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x36a30c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x36a30cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x36a310: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A310u;
    {
        const bool branch_taken_0x36a310 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A310u;
        // 0x36a314: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a310) {
            ctx->pc = 0x36A320u;
            goto label_36a320;
        }
    }
    ctx->pc = 0x36A318u;
    // 0x36a318: 0xa2022b28  sb          $v0, 0x2B28($s0)
    ctx->pc = 0x36a318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11048), (uint8_t)GPR_U32(ctx, 2));
    // 0x36a31c: 0x0  nop
    ctx->pc = 0x36a31cu;
    // NOP
label_36a320:
    // 0x36a320: 0xae002b20  sw          $zero, 0x2B20($s0)
    ctx->pc = 0x36a320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 0));
    // 0x36a324: 0xae002b24  sw          $zero, 0x2B24($s0)
    ctx->pc = 0x36a324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 0));
    // 0x36a328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a32c: 0xa2002b2a  sb          $zero, 0x2B2A($s0)
    ctx->pc = 0x36a32cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11050), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a330: 0xae002b2c  sw          $zero, 0x2B2C($s0)
    ctx->pc = 0x36a330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11052), GPR_U32(ctx, 0));
    // 0x36a334: 0xae002b3c  sw          $zero, 0x2B3C($s0)
    ctx->pc = 0x36a334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11068), GPR_U32(ctx, 0));
    // 0x36a338: 0xa2002b4c  sb          $zero, 0x2B4C($s0)
    ctx->pc = 0x36a338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a33c: 0xae002b30  sw          $zero, 0x2B30($s0)
    ctx->pc = 0x36a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11056), GPR_U32(ctx, 0));
    // 0x36a340: 0xae002b40  sw          $zero, 0x2B40($s0)
    ctx->pc = 0x36a340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11072), GPR_U32(ctx, 0));
    // 0x36a344: 0xa2002b4d  sb          $zero, 0x2B4D($s0)
    ctx->pc = 0x36a344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11085), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a348: 0xae002b34  sw          $zero, 0x2B34($s0)
    ctx->pc = 0x36a348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11060), GPR_U32(ctx, 0));
    // 0x36a34c: 0xae002b44  sw          $zero, 0x2B44($s0)
    ctx->pc = 0x36a34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11076), GPR_U32(ctx, 0));
    // 0x36a350: 0xa2002b4e  sb          $zero, 0x2B4E($s0)
    ctx->pc = 0x36a350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11086), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a354: 0xae002b38  sw          $zero, 0x2B38($s0)
    ctx->pc = 0x36a354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11064), GPR_U32(ctx, 0));
    // 0x36a358: 0xae002b48  sw          $zero, 0x2B48($s0)
    ctx->pc = 0x36a358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11080), GPR_U32(ctx, 0));
    // 0x36a35c: 0xc0da6d8  jal         func_369B60
    ctx->pc = 0x36A35Cu;
    SET_GPR_U32(ctx, 31, 0x36A364u);
    ctx->pc = 0x36A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A35Cu;
    // 0x36a360: 0xa2002b4f  sb          $zero, 0x2B4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11087), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369B60u, 0x36A35Cu, 0x36A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A364u;
label_36a364:
    // 0x36a364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a36c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A36Cu;
        // 0x36a370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A374u;
}

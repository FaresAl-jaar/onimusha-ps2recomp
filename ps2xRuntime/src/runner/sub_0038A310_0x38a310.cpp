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

// Function: sub_0038A310
// Address: 0x38a310 - 0x38a384
void sub_0038A310_0x38a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A310_0x38a310");
#endif

    switch (ctx->pc) {
        case 0x38a310u: goto label_38a310;
        case 0x38a314u: goto label_38a314;
        case 0x38a318u: goto label_38a318;
        case 0x38a31cu: goto label_38a31c;
        case 0x38a320u: goto label_38a320;
        case 0x38a324u: goto label_38a324;
        case 0x38a328u: goto label_38a328;
        case 0x38a32cu: goto label_38a32c;
        case 0x38a330u: goto label_38a330;
        case 0x38a334u: goto label_38a334;
        case 0x38a338u: goto label_38a338;
        case 0x38a33cu: goto label_38a33c;
        case 0x38a340u: goto label_38a340;
        case 0x38a344u: goto label_38a344;
        case 0x38a348u: goto label_38a348;
        case 0x38a34cu: goto label_38a34c;
        case 0x38a350u: goto label_38a350;
        case 0x38a354u: goto label_38a354;
        case 0x38a358u: goto label_38a358;
        case 0x38a35cu: goto label_38a35c;
        case 0x38a360u: goto label_38a360;
        case 0x38a364u: goto label_38a364;
        case 0x38a368u: goto label_38a368;
        case 0x38a36cu: goto label_38a36c;
        case 0x38a370u: goto label_38a370;
        case 0x38a374u: goto label_38a374;
        case 0x38a378u: goto label_38a378;
        case 0x38a37cu: goto label_38a37c;
        case 0x38a380u: goto label_38a380;
        default: break;
    }

    ctx->pc = 0x38a310u;

label_38a310:
    // 0x38a310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38a314:
    // 0x38a314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38a318:
    // 0x38a318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38a31c:
    // 0x38a31c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38a320:
    // 0x38a320: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x38a320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_38a324:
    // 0x38a324: 0xc0ce238  jal         func_3388E0
label_38a328:
    if (ctx->pc == 0x38A328u) {
        ctx->pc = 0x38A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A324u;
        // 0x38a328: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A32Cu;
        goto label_38a32c;
    }
    ctx->pc = 0x38A324u;
    SET_GPR_U32(ctx, 31, 0x38A32Cu);
    ctx->pc = 0x38A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A324u;
    // 0x38a328: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3388E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3388E0u, 0x38A324u, 0x38A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A32Cu;
label_38a32c:
    // 0x38a32c: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38a330:
    // 0x38a330: 0xc096c3c  jal         func_25B0F0
label_38a334:
    if (ctx->pc == 0x38A334u) {
        ctx->pc = 0x38A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A330u;
        // 0x38a334: 0x8c44012c  lw          $a0, 0x12C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A338u;
        goto label_38a338;
    }
    ctx->pc = 0x38A330u;
    SET_GPR_U32(ctx, 31, 0x38A338u);
    ctx->pc = 0x38A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A330u;
    // 0x38a334: 0x8c44012c  lw          $a0, 0x12C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x38A330u, 0x38A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A338u;
label_38a338:
    // 0x38a338: 0x96052acc  lhu         $a1, 0x2ACC($s0)
    ctx->pc = 0x38a338u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
label_38a33c:
    // 0x38a33c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x38a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
label_38a340:
    // 0x38a340: 0xc056e04  jal         func_15B810
label_38a344:
    if (ctx->pc == 0x38A344u) {
        ctx->pc = 0x38A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A340u;
        // 0x38a344: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A348u;
        goto label_38a348;
    }
    ctx->pc = 0x38A340u;
    SET_GPR_U32(ctx, 31, 0x38A348u);
    ctx->pc = 0x38A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A340u;
    // 0x38a344: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x38A340u, 0x38A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A348u;
label_38a348:
    // 0x38a348: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38a34c:
    // 0x38a34c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
label_38a350:
    // 0x38a350: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x38a350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_38a354:
    // 0x38a354: 0xc0c8b74  jal         func_322DD0
label_38a358:
    if (ctx->pc == 0x38A358u) {
        ctx->pc = 0x38A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A354u;
        // 0x38a358: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A35Cu;
        goto label_38a35c;
    }
    ctx->pc = 0x38A354u;
    SET_GPR_U32(ctx, 31, 0x38A35Cu);
    ctx->pc = 0x38A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A354u;
    // 0x38a358: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322DD0u, 0x38A354u, 0x38A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A35Cu;
label_38a35c:
    // 0x38a35c: 0xc0d0538  jal         func_3414E0
label_38a360:
    if (ctx->pc == 0x38A360u) {
        ctx->pc = 0x38A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A35Cu;
        // 0x38a360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A364u;
        goto label_38a364;
    }
    ctx->pc = 0x38A35Cu;
    SET_GPR_U32(ctx, 31, 0x38A364u);
    ctx->pc = 0x38A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A35Cu;
    // 0x38a360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3414E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3414E0u, 0x38A35Cu, 0x38A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A364u;
label_38a364:
    // 0x38a364: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x38a364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_38a368:
    // 0x38a368: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x38a368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38a36c:
    // 0x38a36c: 0x320f809  jalr        $t9
label_38a370:
    if (ctx->pc == 0x38A370u) {
        ctx->pc = 0x38A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A36Cu;
        // 0x38a370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A374u;
        goto label_38a374;
    }
    ctx->pc = 0x38A36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A374u);
        ctx->pc = 0x38A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A36Cu;
        // 0x38a370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A36Cu, 0x38A374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38A374u;
label_38a374:
    // 0x38a374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38a378:
    // 0x38a378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38a37c:
    // 0x38a37c: 0x3e00008  jr          $ra
label_38a380:
    if (ctx->pc == 0x38A380u) {
        ctx->pc = 0x38A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A37Cu;
        // 0x38a380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A384u;
        goto label_fallthrough_0x38a37c;
    }
    ctx->pc = 0x38A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A37Cu;
        // 0x38a380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38a37c:
    ctx->pc = 0x38A384u;
}

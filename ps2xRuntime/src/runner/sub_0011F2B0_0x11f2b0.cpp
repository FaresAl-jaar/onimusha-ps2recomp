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

// Function: sub_0011F2B0
// Address: 0x11f2b0 - 0x11f350
void sub_0011F2B0_0x11f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F2B0_0x11f2b0");
#endif

    switch (ctx->pc) {
        case 0x11f2e0u: goto label_11f2e0;
        case 0x11f2f8u: goto label_11f2f8;
        case 0x11f304u: goto label_11f304;
        case 0x11f310u: goto label_11f310;
        case 0x11f318u: goto label_11f318;
        case 0x11f320u: goto label_11f320;
        case 0x11f330u: goto label_11f330;
        default: break;
    }

    ctx->pc = 0x11f2b0u;

    // 0x11f2b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11f2b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f2b8: 0x8c434194  lw          $v1, 0x4194($v0)
    ctx->pc = 0x11f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x404194u));
    // 0x11f2bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f2c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F2C0u;
    {
        const bool branch_taken_0x11f2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2C0u;
        // 0x11f2c4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2c0) {
            ctx->pc = 0x11F2E8u;
            goto label_11f2e8;
        }
    }
    ctx->pc = 0x11F2C8u;
    // 0x11f2c8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11f2cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f2d0: 0xac6241e0  sw          $v0, 0x41E0($v1)
    ctx->pc = 0x11f2d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4041E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4041E0u, _value); } while (0);
    // 0x11f2d4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x11f2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x11f2d8: 0xc043800  jal         func_10E000
    ctx->pc = 0x11F2D8u;
    SET_GPR_U32(ctx, 31, 0x11F2E0u);
    ctx->pc = 0x11F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2D8u;
    // 0x11f2dc: 0x8e0441a0  lw          $a0, 0x41A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x11F2D8u, 0x11F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2E0u;
label_11f2e0:
    // 0x11f2e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F2E0u;
    {
        const bool branch_taken_0x11f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2E0u;
        // 0x11f2e4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2e0) {
            ctx->pc = 0x11F2F0u;
            goto label_11f2f0;
        }
    }
    ctx->pc = 0x11F2E8u;
label_11f2e8:
    // 0x11f2e8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x11f2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x11f2ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_11f2f0:
    // 0x11f2f0: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x11F2F0u;
    SET_GPR_U32(ctx, 31, 0x11F2F8u);
    ctx->pc = 0x11F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2F0u;
    // 0x11f2f4: 0x8c4441a8  lw          $a0, 0x41A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x11F2F0u, 0x11F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2F8u;
label_11f2f8:
    // 0x11f2f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11f2fc: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x11F2FCu;
    SET_GPR_U32(ctx, 31, 0x11F304u);
    ctx->pc = 0x11F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2FCu;
    // 0x11f300: 0x8c6441ac  lw          $a0, 0x41AC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x11F2FCu, 0x11F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F304u;
label_11f304:
    // 0x11f304: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11f304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11f308: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x11F308u;
    SET_GPR_U32(ctx, 31, 0x11F310u);
    ctx->pc = 0x11F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F308u;
    // 0x11f30c: 0x8c6441b0  lw          $a0, 0x41B0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x11F308u, 0x11F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F310u;
label_11f310:
    // 0x11f310: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x11F310u;
    SET_GPR_U32(ctx, 31, 0x11F318u);
    ctx->pc = 0x11F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F310u;
    // 0x11f314: 0x8e0441a0  lw          $a0, 0x41A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x11F310u, 0x11F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F318u;
label_11f318:
    // 0x11f318: 0xc046028  jal         func_1180A0
    ctx->pc = 0x11F318u;
    SET_GPR_U32(ctx, 31, 0x11F320u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x11F318u, 0x11F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F320u;
label_11f320:
    // 0x11f320: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11f320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11f324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11f324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f328: 0xc044468  jal         func_1111A0
    ctx->pc = 0x11F328u;
    SET_GPR_U32(ctx, 31, 0x11F330u);
    ctx->pc = 0x11F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F328u;
    // 0x11f32c: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1111A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1111A0u, 0x11F328u, 0x11F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F330u;
label_11f330:
    // 0x11f330: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F330u;
    {
        const bool branch_taken_0x11f330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F330u;
        // 0x11f334: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f330) {
            ctx->pc = 0x11F344u;
            goto label_11f344;
        }
    }
    ctx->pc = 0x11F338u;
    // 0x11f338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f33c: 0x804603c  j           func_1180F0
    ctx->pc = 0x11F33Cu;
    ctx->pc = 0x11F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F33Cu;
    // 0x11f340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x11F344u;
label_11f344:
    // 0x11f344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f348: 0x3e00008  jr          $ra
    ctx->pc = 0x11F348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F348u;
        // 0x11f34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F350u;
}

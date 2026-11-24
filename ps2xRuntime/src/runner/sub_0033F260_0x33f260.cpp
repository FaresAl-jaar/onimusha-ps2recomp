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

// Function: sub_0033F260
// Address: 0x33f260 - 0x33f360
void sub_0033F260_0x33f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F260_0x33f260");
#endif

    switch (ctx->pc) {
        case 0x33f2a8u: goto label_33f2a8;
        case 0x33f2e0u: goto label_33f2e0;
        case 0x33f2f8u: goto label_33f2f8;
        case 0x33f338u: goto label_33f338;
        default: break;
    }

    ctx->pc = 0x33f260u;

    // 0x33f260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f264: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33f268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33f26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f270: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x33f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x33f274: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x33f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x33f278: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x33F278u;
    {
        const bool branch_taken_0x33f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F278u;
        // 0x33f27c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f278) {
            ctx->pc = 0x33F2F0u;
            goto label_33f2f0;
        }
    }
    ctx->pc = 0x33F280u;
    // 0x33f280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33f280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f284: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33F284u;
    {
        const bool branch_taken_0x33f284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33f284) {
            ctx->pc = 0x33F2B0u;
            goto label_33f2b0;
        }
    }
    ctx->pc = 0x33F28Cu;
    // 0x33f28c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f290: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F290u;
    {
        const bool branch_taken_0x33f290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33f290) {
            ctx->pc = 0x33F2A0u;
            goto label_33f2a0;
        }
    }
    ctx->pc = 0x33F298u;
    // 0x33f298: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x33F298u;
    {
        const bool branch_taken_0x33f298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f298) {
            ctx->pc = 0x33F348u;
            goto label_33f348;
        }
    }
    ctx->pc = 0x33F2A0u;
label_33f2a0:
    // 0x33f2a0: 0xc0cfad8  jal         func_33EB60
    ctx->pc = 0x33F2A0u;
    SET_GPR_U32(ctx, 31, 0x33F2A8u);
    ctx->pc = 0x33F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F2A0u;
    // 0x33f2a4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB60u, 0x33F2A0u, 0x33F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2A8u;
label_33f2a8:
    // 0x33f2a8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x33F2A8u;
    {
        const bool branch_taken_0x33f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f2a8) {
            ctx->pc = 0x33F350u;
            goto label_33f350;
        }
    }
    ctx->pc = 0x33F2B0u;
label_33f2b0:
    // 0x33f2b0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33f2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33f2b4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x33f2b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33f2b8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f2bc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33f2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33f2c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f2c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f2c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f2cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x33f2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33f2d0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x33F2D0u;
    {
        const bool branch_taken_0x33f2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f2d0) {
            ctx->pc = 0x33F350u;
            goto label_33f350;
        }
    }
    ctx->pc = 0x33F2D8u;
    // 0x33f2d8: 0xc0cfad8  jal         func_33EB60
    ctx->pc = 0x33F2D8u;
    SET_GPR_U32(ctx, 31, 0x33F2E0u);
    ctx->pc = 0x33F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F2D8u;
    // 0x33f2dc: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB60u, 0x33F2D8u, 0x33F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2E0u;
label_33f2e0:
    // 0x33f2e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x33f2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33f2e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x33F2E4u;
    {
        const bool branch_taken_0x33f2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f2e4) {
            ctx->pc = 0x33F350u;
            goto label_33f350;
        }
    }
    ctx->pc = 0x33F2ECu;
    // 0x33f2ec: 0x0  nop
    ctx->pc = 0x33f2ecu;
    // NOP
label_33f2f0:
    // 0x33f2f0: 0xc0cfad8  jal         func_33EB60
    ctx->pc = 0x33F2F0u;
    SET_GPR_U32(ctx, 31, 0x33F2F8u);
    ctx->pc = 0x33F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F2F0u;
    // 0x33f2f4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB60u, 0x33F2F0u, 0x33F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2F8u;
label_33f2f8:
    // 0x33f2f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F2F8u;
    {
        const bool branch_taken_0x33f2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f2f8) {
            ctx->pc = 0x33F308u;
            goto label_33f308;
        }
    }
    ctx->pc = 0x33F300u;
    // 0x33f300: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F300u;
    {
        const bool branch_taken_0x33f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F300u;
        // 0x33f304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f300) {
            ctx->pc = 0x33F350u;
            goto label_33f350;
        }
    }
    ctx->pc = 0x33F308u;
label_33f308:
    // 0x33f308: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33f308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33f30c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x33f30cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33f310: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f314: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33f314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33f318: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f320: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f324: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33F324u;
    {
        const bool branch_taken_0x33f324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f324) {
            ctx->pc = 0x33F348u;
            goto label_33f348;
        }
    }
    ctx->pc = 0x33F32Cu;
    // 0x33f32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f330: 0xc0cfad8  jal         func_33EB60
    ctx->pc = 0x33F330u;
    SET_GPR_U32(ctx, 31, 0x33F338u);
    ctx->pc = 0x33F334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F330u;
    // 0x33f334: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB60u, 0x33F330u, 0x33F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F338u;
label_33f338:
    // 0x33f338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F338u;
    {
        const bool branch_taken_0x33f338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f338) {
            ctx->pc = 0x33F348u;
            goto label_33f348;
        }
    }
    ctx->pc = 0x33F340u;
    // 0x33f340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33F340u;
    {
        const bool branch_taken_0x33f340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F340u;
        // 0x33f344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f340) {
            ctx->pc = 0x33F350u;
            goto label_33f350;
        }
    }
    ctx->pc = 0x33F348u;
label_33f348:
    // 0x33f348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33f348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f34c: 0x0  nop
    ctx->pc = 0x33f34cu;
    // NOP
label_33f350:
    // 0x33f350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f358: 0x3e00008  jr          $ra
    ctx->pc = 0x33F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F358u;
        // 0x33f35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F360u;
}

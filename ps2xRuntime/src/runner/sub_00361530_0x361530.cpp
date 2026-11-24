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

// Function: sub_00361530
// Address: 0x361530 - 0x3615b8
void sub_00361530_0x361530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361530_0x361530");
#endif

    switch (ctx->pc) {
        case 0x361560u: goto label_361560;
        case 0x361570u: goto label_361570;
        case 0x361598u: goto label_361598;
        case 0x3615a8u: goto label_3615a8;
        default: break;
    }

    ctx->pc = 0x361530u;

    // 0x361530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x361530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x361534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x361534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x361538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36153c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361540: 0x94830786  lhu         $v1, 0x786($a0)
    ctx->pc = 0x361540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1926)));
    // 0x361544: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x361544u;
    {
        const bool branch_taken_0x361544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x361548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361544u;
        // 0x361548: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361544) {
            ctx->pc = 0x361568u;
            goto label_361568;
        }
    }
    ctx->pc = 0x36154Cu;
    // 0x36154c: 0x92022b25  lbu         $v0, 0x2B25($s0)
    ctx->pc = 0x36154cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x361550: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x361550u;
    {
        const bool branch_taken_0x361550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361550) {
            ctx->pc = 0x361568u;
            goto label_361568;
        }
    }
    ctx->pc = 0x361558u;
    // 0x361558: 0xc0d8570  jal         func_3615C0
    ctx->pc = 0x361558u;
    SET_GPR_U32(ctx, 31, 0x361560u);
    ctx->pc = 0x3615C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3615C0u, 0x361558u, 0x361560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361560u;
label_361560:
    // 0x361560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x361560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361564: 0xa2022b25  sb          $v0, 0x2B25($s0)
    ctx->pc = 0x361564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 2));
label_361568:
    // 0x361568: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x361568u;
    SET_GPR_U32(ctx, 31, 0x361570u);
    ctx->pc = 0x36156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361568u;
    // 0x36156c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x361568u, 0x361570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361570u;
label_361570:
    // 0x361570: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x361570u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x361574: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x361574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x361578: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x361578u;
    {
        const bool branch_taken_0x361578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361578u;
        // 0x36157c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361578) {
            ctx->pc = 0x3615A0u;
            goto label_3615a0;
        }
    }
    ctx->pc = 0x361580u;
    // 0x361580: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x361580u;
    {
        const bool branch_taken_0x361580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x361580) {
            ctx->pc = 0x361590u;
            goto label_361590;
        }
    }
    ctx->pc = 0x361588u;
    // 0x361588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x361588u;
    {
        const bool branch_taken_0x361588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361588) {
            ctx->pc = 0x3615A8u;
            goto label_3615a8;
        }
    }
    ctx->pc = 0x361590u;
label_361590:
    // 0x361590: 0xc0d8520  jal         func_361480
    ctx->pc = 0x361590u;
    SET_GPR_U32(ctx, 31, 0x361598u);
    ctx->pc = 0x361594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361590u;
    // 0x361594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361480u, 0x361590u, 0x361598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361598u;
label_361598:
    // 0x361598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x361598u;
    {
        const bool branch_taken_0x361598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361598) {
            ctx->pc = 0x3615A8u;
            goto label_3615a8;
        }
    }
    ctx->pc = 0x3615A0u;
label_3615a0:
    // 0x3615a0: 0xc0d8548  jal         func_361520
    ctx->pc = 0x3615A0u;
    SET_GPR_U32(ctx, 31, 0x3615A8u);
    ctx->pc = 0x3615A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3615A0u;
    // 0x3615a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361520u, 0x3615A0u, 0x3615A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615A8u;
label_3615a8:
    // 0x3615a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3615a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3615ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3615acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3615b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3615B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3615B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3615B0u;
        // 0x3615b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3615B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3615B8u;
}

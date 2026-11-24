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

// Function: sub_0021C900
// Address: 0x21c900 - 0x21c970
void sub_0021C900_0x21c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C900_0x21c900");
#endif

    switch (ctx->pc) {
        case 0x21c914u: goto label_21c914;
        case 0x21c924u: goto label_21c924;
        default: break;
    }

    ctx->pc = 0x21c900u;

    // 0x21c900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c908: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21c908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21c90c: 0xc0873b2  jal         func_21CEC8
    ctx->pc = 0x21C90Cu;
    SET_GPR_U32(ctx, 31, 0x21C914u);
    ctx->pc = 0x21C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C90Cu;
    // 0x21c910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CEC8u, 0x21C90Cu, 0x21C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C914u;
label_21c914:
    // 0x21c914: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C914u;
    {
        const bool branch_taken_0x21c914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C914u;
        // 0x21c918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c914) {
            ctx->pc = 0x21C92Cu;
            goto label_21c92c;
        }
    }
    ctx->pc = 0x21C91Cu;
    // 0x21c91c: 0xc087278  jal         func_21C9E0
    ctx->pc = 0x21C91Cu;
    SET_GPR_U32(ctx, 31, 0x21C924u);
    ctx->pc = 0x21C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C9E0u, 0x21C91Cu, 0x21C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C924u;
label_21c924:
    // 0x21c924: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C924u;
    {
        const bool branch_taken_0x21c924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c924) {
            ctx->pc = 0x21C928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C924u;
            // 0x21c928: 0x8e05004c  lw          $a1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C938u;
            goto label_21c938;
        }
    }
    ctx->pc = 0x21C92Cu;
label_21c92c:
    // 0x21c92c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21C92Cu;
    {
        const bool branch_taken_0x21c92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C92Cu;
        // 0x21c930: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c92c) {
            ctx->pc = 0x21C960u;
            goto label_21c960;
        }
    }
    ctx->pc = 0x21C934u;
    // 0x21c934: 0x0  nop
    ctx->pc = 0x21c934u;
    // NOP
label_21c938:
    // 0x21c938: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x21c938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21c93c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x21c93cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21c940: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C940u;
    {
        const bool branch_taken_0x21c940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C940u;
        // 0x21c944: 0x28a30005  slti        $v1, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c940) {
            ctx->pc = 0x21C95Cu;
            goto label_21c95c;
        }
    }
    ctx->pc = 0x21C948u;
    // 0x21c948: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C948u;
    {
        const bool branch_taken_0x21c948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C948u;
        // 0x21c94c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c948) {
            ctx->pc = 0x21C960u;
            goto label_21c960;
        }
    }
    ctx->pc = 0x21C950u;
    // 0x21c950: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21c950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c954: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x21c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x21c958: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x21c958u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_21c95c:
    // 0x21c95c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21c95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c960:
    // 0x21c960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c964: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c968: 0x3e00008  jr          $ra
    ctx->pc = 0x21C968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C968u;
        // 0x21c96c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C970u;
}

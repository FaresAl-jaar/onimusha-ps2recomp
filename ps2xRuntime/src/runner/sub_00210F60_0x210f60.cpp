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

// Function: sub_00210F60
// Address: 0x210f60 - 0x210fc8
void sub_00210F60_0x210f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210F60_0x210f60");
#endif

    switch (ctx->pc) {
        case 0x210f88u: goto label_210f88;
        case 0x210f90u: goto label_210f90;
        default: break;
    }

    ctx->pc = 0x210f60u;

    // 0x210f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210f64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210f68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x210f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f6c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x210f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x210f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210f74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x210f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x210f78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x210f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x210f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x210f80: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x210F80u;
    {
        const bool branch_taken_0x210f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F80u;
        // 0x210f84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f80) {
            ctx->pc = 0x210FACu;
            goto label_210fac;
        }
    }
    ctx->pc = 0x210F88u;
label_210f88:
    // 0x210f88: 0xc07f410  jal         func_1FD040
    ctx->pc = 0x210F88u;
    SET_GPR_U32(ctx, 31, 0x210F90u);
    ctx->pc = 0x210F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F88u;
    // 0x210f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD040u, 0x210F88u, 0x210F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F90u;
label_210f90:
    // 0x210f90: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x210F90u;
    {
        const bool branch_taken_0x210f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x210F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F90u;
        // 0x210f94: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f90) {
            ctx->pc = 0x210FA0u;
            goto label_210fa0;
        }
    }
    ctx->pc = 0x210F98u;
    // 0x210f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x210F98u;
    {
        const bool branch_taken_0x210f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F98u;
        // 0x210f9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f98) {
            ctx->pc = 0x210FB0u;
            goto label_210fb0;
        }
    }
    ctx->pc = 0x210FA0u;
label_210fa0:
    // 0x210fa0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x210fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x210fa4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x210FA4u;
    {
        const bool branch_taken_0x210fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FA4u;
        // 0x210fa8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fa4) {
            ctx->pc = 0x210F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210f88;
        }
    }
    ctx->pc = 0x210FACu;
label_210fac:
    // 0x210fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x210facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210fb0:
    // 0x210fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210fb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210fb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210fbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x210fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x210FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FC0u;
        // 0x210fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210FC8u;
}

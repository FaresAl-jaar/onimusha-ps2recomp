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

// Function: sub_00212F28
// Address: 0x212f28 - 0x213004
void sub_00212F28_0x212f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212F28_0x212f28");
#endif

    switch (ctx->pc) {
        case 0x212f78u: goto label_212f78;
        case 0x212f90u: goto label_212f90;
        case 0x212f9cu: goto label_212f9c;
        case 0x212fd4u: goto label_212fd4;
        default: break;
    }

    ctx->pc = 0x212f28u;

    // 0x212f28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x212f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x212f2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x212f30: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x212f30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212f38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x212f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212f40: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x212f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x212f44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x212f44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x212f4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x212f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x212f50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x212f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x212f54: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x212f54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x212f58: 0x8eb20028  lw          $s2, 0x28($s5)
    ctx->pc = 0x212f58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x212f5c: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x212f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x212f60: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x212f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x212f64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x212F64u;
    {
        const bool branch_taken_0x212f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F64u;
        // 0x212f68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f64) {
            ctx->pc = 0x212F80u;
            goto label_212f80;
        }
    }
    ctx->pc = 0x212F6Cu;
    // 0x212f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f70: 0xc084c02  jal         func_213008
    ctx->pc = 0x212F70u;
    SET_GPR_U32(ctx, 31, 0x212F78u);
    ctx->pc = 0x212F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F70u;
    // 0x212f74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213008u, 0x212F70u, 0x212F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F78u;
label_212f78:
    // 0x212f78: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x212F78u;
    {
        const bool branch_taken_0x212f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212f78) {
            ctx->pc = 0x212F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212F78u;
            // 0x212f7c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212FE0u;
            goto label_212fe0;
        }
    }
    ctx->pc = 0x212F80u;
label_212f80:
    // 0x212f80: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x212f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x212f84: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x212F84u;
    {
        const bool branch_taken_0x212f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F84u;
        // 0x212f88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f84) {
            ctx->pc = 0x212FB8u;
            goto label_212fb8;
        }
    }
    ctx->pc = 0x212F8Cu;
    // 0x212f8c: 0x3c14000d  lui         $s4, 0xD
    ctx->pc = 0x212f8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)13 << 16));
label_212f90:
    // 0x212f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f94: 0xc07f410  jal         func_1FD040
    ctx->pc = 0x212F94u;
    SET_GPR_U32(ctx, 31, 0x212F9Cu);
    ctx->pc = 0x212F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F94u;
    // 0x212f98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD040u, 0x212F94u, 0x212F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F9Cu;
label_212f9c:
    // 0x212f9c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x212f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x212fa0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x212FA0u;
    {
        const bool branch_taken_0x212fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212fa0) {
            ctx->pc = 0x212FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212FA0u;
            // 0x212fa4: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212FE0u;
            goto label_212fe0;
        }
    }
    ctx->pc = 0x212FA8u;
    // 0x212fa8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x212fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x212fac: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x212facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x212fb0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x212FB0u;
    {
        const bool branch_taken_0x212fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FB0u;
        // 0x212fb4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fb0) {
            ctx->pc = 0x212F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212f90;
        }
    }
    ctx->pc = 0x212FB8u;
label_212fb8:
    // 0x212fb8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x212fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x212fbc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x212fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x212fc0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x212FC0u;
    {
        const bool branch_taken_0x212fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212fc0) {
            ctx->pc = 0x212FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212FC0u;
            // 0x212fc4: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212FE0u;
            goto label_212fe0;
        }
    }
    ctx->pc = 0x212FC8u;
    // 0x212fc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x212fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fcc: 0xc084c12  jal         func_213048
    ctx->pc = 0x212FCCu;
    SET_GPR_U32(ctx, 31, 0x212FD4u);
    ctx->pc = 0x212FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FCCu;
    // 0x212fd0: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213048u, 0x212FCCu, 0x212FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FD4u;
label_212fd4:
    // 0x212fd4: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x212fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x212fd8: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x212fd8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x212fdc: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x212fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_212fe0:
    // 0x212fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x212fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212ff0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x212ff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212ff4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x212ff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212ff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x212ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x212FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FFCu;
        // 0x213000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213004u;
}

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

// Function: sub_00227D48
// Address: 0x227d48 - 0x227e10
void sub_00227D48_0x227d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227D48_0x227d48");
#endif

    switch (ctx->pc) {
        case 0x227da0u: goto label_227da0;
        case 0x227db0u: goto label_227db0;
        case 0x227dc8u: goto label_227dc8;
        case 0x227ddcu: goto label_227ddc;
        default: break;
    }

    ctx->pc = 0x227d48u;

    // 0x227d48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x227d4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227d50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x227d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x227d58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x227d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x227d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x227d60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x227d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227d68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x227d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x227d6c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x227d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x227d70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x227d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x227d74: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x227d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x227d78: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x227D78u;
    {
        const bool branch_taken_0x227d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D78u;
        // 0x227d7c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d78) {
            ctx->pc = 0x227DECu;
            goto label_227dec;
        }
    }
    ctx->pc = 0x227D80u;
    // 0x227d80: 0x58a0001b  blezl       $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x227D80u;
    {
        const bool branch_taken_0x227d80 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x227d80) {
            ctx->pc = 0x227D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227D80u;
            // 0x227d84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227DF0u;
            goto label_227df0;
        }
    }
    ctx->pc = 0x227D88u;
    // 0x227d88: 0x58a00019  blezl       $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x227D88u;
    {
        const bool branch_taken_0x227d88 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x227d88) {
            ctx->pc = 0x227D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227D88u;
            // 0x227d8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227DF0u;
            goto label_227df0;
        }
    }
    ctx->pc = 0x227D90u;
    // 0x227d90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x227d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d94: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x227d94u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
    // 0x227d98: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x227d98u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    // 0x227d9c: 0x0  nop
    ctx->pc = 0x227d9cu;
    // NOP
label_227da0:
    // 0x227da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227da4: 0x26a595a8  addiu       $a1, $s5, -0x6A58
    ctx->pc = 0x227da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940072));
    // 0x227da8: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x227DA8u;
    SET_GPR_U32(ctx, 31, 0x227DB0u);
    ctx->pc = 0x227DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227DA8u;
    // 0x227dac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x227DA8u, 0x227DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DB0u;
label_227db0:
    // 0x227db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227db4: 0x26859538  addiu       $a1, $s4, -0x6AC8
    ctx->pc = 0x227db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939960));
    // 0x227db8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x227DB8u;
    {
        const bool branch_taken_0x227db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DB8u;
        // 0x227dbc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227db8) {
            ctx->pc = 0x227DE0u;
            goto label_227de0;
        }
    }
    ctx->pc = 0x227DC0u;
    // 0x227dc0: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x227DC0u;
    SET_GPR_U32(ctx, 31, 0x227DC8u);
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x227DC0u, 0x227DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DC8u;
label_227dc8:
    // 0x227dc8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x227DC8u;
    {
        const bool branch_taken_0x227dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227dc8) {
            ctx->pc = 0x227DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227DC8u;
            // 0x227dcc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227DE4u;
            goto label_227de4;
        }
    }
    ctx->pc = 0x227DD0u;
    // 0x227dd0: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x227dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x227dd4: 0xc089f84  jal         func_227E10
    ctx->pc = 0x227DD4u;
    SET_GPR_U32(ctx, 31, 0x227DDCu);
    ctx->pc = 0x227DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227DD4u;
    // 0x227dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E10u, 0x227DD4u, 0x227DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DDCu;
label_227ddc:
    // 0x227ddc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x227ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_227de0:
    // 0x227de0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x227de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_227de4:
    // 0x227de4: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x227DE4u;
    {
        const bool branch_taken_0x227de4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x227DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DE4u;
        // 0x227de8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227de4) {
            ctx->pc = 0x227DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227da0;
        }
    }
    ctx->pc = 0x227DECu;
label_227dec:
    // 0x227dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227df0:
    // 0x227df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227df4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x227df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227df8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x227df8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x227dfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x227dfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227e00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x227e00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x227e04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x227e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227e08: 0x3e00008  jr          $ra
    ctx->pc = 0x227E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E08u;
        // 0x227e0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E10u;
}

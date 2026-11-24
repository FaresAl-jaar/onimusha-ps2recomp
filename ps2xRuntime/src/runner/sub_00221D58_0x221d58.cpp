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

// Function: sub_00221D58
// Address: 0x221d58 - 0x221e10
void sub_00221D58_0x221d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221D58_0x221d58");
#endif

    switch (ctx->pc) {
        case 0x221d90u: goto label_221d90;
        case 0x221da8u: goto label_221da8;
        case 0x221dbcu: goto label_221dbc;
        default: break;
    }

    ctx->pc = 0x221d58u;

    // 0x221d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221d5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x221d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x221d60: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x221d60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x221d64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x221d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x221d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221d6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x221d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x221d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x221d74: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x221d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x221d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x221d7c: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x221d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221d80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x221d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x221d84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x221d84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d88: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x221d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x221d8c: 0x0  nop
    ctx->pc = 0x221d8cu;
    // NOP
label_221d90:
    // 0x221d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d94: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x221d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x221d98: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x221d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x221d9c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x221d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x221da0: 0xc088784  jal         func_221E10
    ctx->pc = 0x221DA0u;
    SET_GPR_U32(ctx, 31, 0x221DA8u);
    ctx->pc = 0x221DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DA0u;
    // 0x221da4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221E10u, 0x221DA0u, 0x221DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DA8u;
label_221da8:
    // 0x221da8: 0x643fff9  bgezl       $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x221DA8u;
    {
        const bool branch_taken_0x221da8 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x221da8) {
            ctx->pc = 0x221DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221DA8u;
            // 0x221dac: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221d90;
        }
    }
    ctx->pc = 0x221DB0u;
    // 0x221db0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x221db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221db4: 0xc088796  jal         func_221E58
    ctx->pc = 0x221DB4u;
    SET_GPR_U32(ctx, 31, 0x221DBCu);
    ctx->pc = 0x221DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DB4u;
    // 0x221db8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221E58u, 0x221DB4u, 0x221DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DBCu;
label_221dbc:
    // 0x221dbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x221DBCu;
    {
        const bool branch_taken_0x221dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DBCu;
        // 0x221dc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dbc) {
            ctx->pc = 0x221DF0u;
            goto label_221df0;
        }
    }
    ctx->pc = 0x221DC4u;
    // 0x221dc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x221dc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221dc8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x221dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x221dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221dd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221dd4: 0x34a50302  ori         $a1, $a1, 0x302
    ctx->pc = 0x221dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)770);
    // 0x221dd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x221dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221ddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x221ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x221de0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x221de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x221de4: 0x80848e0  j           func_212380
    ctx->pc = 0x221DE4u;
    ctx->pc = 0x221DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DE4u;
    // 0x221de8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x221DECu;
    // 0x221dec: 0x0  nop
    ctx->pc = 0x221decu;
    // NOP
label_221df0:
    // 0x221df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221df4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221df8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x221df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221dfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x221dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x221e00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x221e00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221e04: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x221e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x221e08: 0x3e00008  jr          $ra
    ctx->pc = 0x221E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E08u;
        // 0x221e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221E10u;
}

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

// Function: sub_00216F58
// Address: 0x216f58 - 0x217034
void sub_00216F58_0x216f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216F58_0x216f58");
#endif

    switch (ctx->pc) {
        case 0x216f8cu: goto label_216f8c;
        case 0x216fc8u: goto label_216fc8;
        case 0x216fe0u: goto label_216fe0;
        default: break;
    }

    ctx->pc = 0x216f58u;

    // 0x216f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216f5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216f60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x216f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f64: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x216f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x216f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216f6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216f70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x216f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216f78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x216f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x216f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216f80: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216f84: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x216F84u;
    SET_GPR_U32(ctx, 31, 0x216F8Cu);
    ctx->pc = 0x216F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F84u;
    // 0x216f88: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x216F84u, 0x216F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F8Cu;
label_216f8c:
    // 0x216f8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x216f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f90: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x216F90u;
    {
        const bool branch_taken_0x216f90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x216F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F90u;
        // 0x216f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f90) {
            ctx->pc = 0x216FE4u;
            goto label_216fe4;
        }
    }
    ctx->pc = 0x216F98u;
    // 0x216f98: 0x661000d  bgez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x216F98u;
    {
        const bool branch_taken_0x216f98 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x216F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F98u;
        // 0x216f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f98) {
            ctx->pc = 0x216FD0u;
            goto label_216fd0;
        }
    }
    ctx->pc = 0x216FA0u;
    // 0x216fa0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x216fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x216fa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x216FA4u;
    {
        const bool branch_taken_0x216fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FA4u;
        // 0x216fa8: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fa4) {
            ctx->pc = 0x216FD4u;
            goto label_216fd4;
        }
    }
    ctx->pc = 0x216FACu;
    // 0x216fac: 0x82220057  lb          $v0, 0x57($s1)
    ctx->pc = 0x216facu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
    // 0x216fb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216FB0u;
    {
        const bool branch_taken_0x216fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FB0u;
        // 0x216fb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fb0) {
            ctx->pc = 0x216FD8u;
            goto label_216fd8;
        }
    }
    ctx->pc = 0x216FB8u;
    // 0x216fb8: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x216FB8u;
    {
        const bool branch_taken_0x216fb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x216fb8) {
            ctx->pc = 0x216FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216FB8u;
            // 0x216fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216FE4u;
            goto label_216fe4;
        }
    }
    ctx->pc = 0x216FC0u;
    // 0x216fc0: 0xc085c0e  jal         func_217038
    ctx->pc = 0x216FC0u;
    SET_GPR_U32(ctx, 31, 0x216FC8u);
    ctx->pc = 0x216FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FC0u;
    // 0x216fc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217038u, 0x216FC0u, 0x216FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FC8u;
label_216fc8:
    // 0x216fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216FC8u;
    {
        const bool branch_taken_0x216fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FC8u;
        // 0x216fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fc8) {
            ctx->pc = 0x216FE0u;
            goto label_216fe0;
        }
    }
    ctx->pc = 0x216FD0u;
label_216fd0:
    // 0x216fd0: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x216fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_216fd4:
    // 0x216fd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x216fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216fd8:
    // 0x216fd8: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x216FD8u;
    SET_GPR_U32(ctx, 31, 0x216FE0u);
    ctx->pc = 0x216FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FD8u;
    // 0x216fdc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x216FD8u, 0x216FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FE0u;
label_216fe0:
    // 0x216fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216fe4:
    // 0x216fe4: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x216FE4u;
    {
        const bool branch_taken_0x216fe4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x216FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FE4u;
        // 0x216fe8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fe4) {
            ctx->pc = 0x217018u;
            goto label_217018;
        }
    }
    ctx->pc = 0x216FECu;
    // 0x216fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x216fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ff0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216ff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x216ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ff8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216ffc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x216ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217000: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217004: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x217004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217008: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x217008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21700c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21700cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217010: 0x8085c3e  j           func_2170F8
    ctx->pc = 0x217010u;
    ctx->pc = 0x217014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217010u;
    // 0x217014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170F8u;
    sub_002170F8_0x2170f8(rdram, ctx, runtime); return;
    ctx->pc = 0x217018u;
label_217018:
    // 0x217018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21701c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21701cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217020: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217024: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x217024u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217028: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x217028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21702c: 0x3e00008  jr          $ra
    ctx->pc = 0x21702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21702Cu;
        // 0x217030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21702Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217034u;
}

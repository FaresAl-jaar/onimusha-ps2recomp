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

// Function: sub_0010AB20
// Address: 0x10ab20 - 0x10ac14
void sub_0010AB20_0x10ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AB20_0x10ab20");
#endif

    switch (ctx->pc) {
        case 0x10aba0u: goto label_10aba0;
        case 0x10aba8u: goto label_10aba8;
        case 0x10abc0u: goto label_10abc0;
        case 0x10abd0u: goto label_10abd0;
        case 0x10abe4u: goto label_10abe4;
        default: break;
    }

    ctx->pc = 0x10ab20u;

    // 0x10ab20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10ab24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ab28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10ab2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ab2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab30: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10ab34: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10ab38: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10ab3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ab40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ab44: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x10ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x10ab48: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10AB48u;
    {
        const bool branch_taken_0x10ab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ab48) {
            ctx->pc = 0x10AB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AB48u;
            // 0x10ab4c: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AB6Cu;
            goto label_10ab6c;
        }
    }
    ctx->pc = 0x10AB50u;
    // 0x10ab50: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x10ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x10ab54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10AB54u;
    {
        const bool branch_taken_0x10ab54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB54u;
        // 0x10ab58: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab54) {
            ctx->pc = 0x10AB78u;
            goto label_10ab78;
        }
    }
    ctx->pc = 0x10AB5Cu;
    // 0x10ab5c: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x10ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x10ab60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ab64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10AB64u;
    {
        const bool branch_taken_0x10ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB64u;
        // 0x10ab68: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab64) {
            ctx->pc = 0x10AB88u;
            goto label_10ab88;
        }
    }
    ctx->pc = 0x10AB6Cu;
label_10ab6c:
    // 0x10ab6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ab70: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AB70u;
    {
        const bool branch_taken_0x10ab70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10ab70) {
            ctx->pc = 0x10AB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AB70u;
            // 0x10ab74: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AB80u;
            goto label_10ab80;
        }
    }
    ctx->pc = 0x10AB78u;
label_10ab78:
    // 0x10ab78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10AB78u;
    {
        const bool branch_taken_0x10ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB78u;
        // 0x10ab7c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab78) {
            ctx->pc = 0x10AB88u;
            goto label_10ab88;
        }
    }
    ctx->pc = 0x10AB80u;
label_10ab80:
    // 0x10ab80: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x10ab80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ab84: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x10ab84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_10ab88:
    // 0x10ab88: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x10AB88u;
    {
        const bool branch_taken_0x10ab88 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x10AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB88u;
        // 0x10ab8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab88) {
            ctx->pc = 0x10ABF0u;
            goto label_10abf0;
        }
    }
    ctx->pc = 0x10AB90u;
    // 0x10ab90: 0x2635019c  addiu       $s5, $s1, 0x19C
    ctx->pc = 0x10ab90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x10ab94: 0x263401a8  addiu       $s4, $s1, 0x1A8
    ctx->pc = 0x10ab94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    // 0x10ab98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ab98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab9c: 0x0  nop
    ctx->pc = 0x10ab9cu;
    // NOP
label_10aba0:
    // 0x10aba0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10ABA0u;
    SET_GPR_U32(ctx, 31, 0x10ABA8u);
    ctx->pc = 0x10ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABA0u;
    // 0x10aba4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10ABA0u, 0x10ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABA8u;
label_10aba8:
    // 0x10aba8: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x10aba8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10abac: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x10abacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x10abb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10abb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10abb8: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10ABB8u;
    SET_GPR_U32(ctx, 31, 0x10ABC0u);
    ctx->pc = 0x10ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABB8u;
    // 0x10abbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10ABB8u, 0x10ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABC0u;
label_10abc0:
    // 0x10abc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10abc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10abc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abc8: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10ABC8u;
    SET_GPR_U32(ctx, 31, 0x10ABD0u);
    ctx->pc = 0x10ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABC8u;
    // 0x10abcc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10ABC8u, 0x10ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABD0u;
label_10abd0:
    // 0x10abd0: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x10abd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x10abd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10abd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10abdc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10ABDCu;
    SET_GPR_U32(ctx, 31, 0x10ABE4u);
    ctx->pc = 0x10ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABDCu;
    // 0x10abe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10ABDCu, 0x10ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABE4u;
label_10abe4:
    // 0x10abe4: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x10abe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x10abe8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10ABE8u;
    {
        const bool branch_taken_0x10abe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABE8u;
        // 0x10abec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abe8) {
            ctx->pc = 0x10ABA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aba0;
        }
    }
    ctx->pc = 0x10ABF0u;
label_10abf0:
    // 0x10abf0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10abf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10abf4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10abf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10abf8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10abf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10abfc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10abfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ac00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ac00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ac04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ac04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ac08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ac08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC0Cu;
        // 0x10ac10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AC14u;
}

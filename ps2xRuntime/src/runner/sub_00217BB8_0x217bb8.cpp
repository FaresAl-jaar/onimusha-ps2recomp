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

// Function: sub_00217BB8
// Address: 0x217bb8 - 0x217cac
void sub_00217BB8_0x217bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217BB8_0x217bb8");
#endif

    switch (ctx->pc) {
        case 0x217becu: goto label_217bec;
        case 0x217c00u: goto label_217c00;
        case 0x217c28u: goto label_217c28;
        case 0x217c3cu: goto label_217c3c;
        case 0x217c50u: goto label_217c50;
        case 0x217c60u: goto label_217c60;
        case 0x217c74u: goto label_217c74;
        case 0x217c88u: goto label_217c88;
        default: break;
    }

    ctx->pc = 0x217bb8u;

    // 0x217bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217bbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217bc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217bc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217bcc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x217bccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217bd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x217bd4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x217bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217bdc: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x217bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x217be0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x217be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x217be4: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x217BE4u;
    SET_GPR_U32(ctx, 31, 0x217BECu);
    ctx->pc = 0x217BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BE4u;
    // 0x217be8: 0x8e111fc0  lw          $s1, 0x1FC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x217BE4u, 0x217BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BECu;
label_217bec:
    // 0x217bec: 0x10530027  beq         $v0, $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x217BECu;
    {
        const bool branch_taken_0x217bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x217BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BECu;
        // 0x217bf0: 0x2632008c  addiu       $s2, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217bec) {
            ctx->pc = 0x217C8Cu;
            goto label_217c8c;
        }
    }
    ctx->pc = 0x217BF4u;
    // 0x217bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bf8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x217BF8u;
    SET_GPR_U32(ctx, 31, 0x217C00u);
    ctx->pc = 0x217BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BF8u;
    // 0x217bfc: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x217BF8u, 0x217C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C00u;
label_217c00:
    // 0x217c00: 0x54530003  bnel        $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x217C00u;
    {
        const bool branch_taken_0x217c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x217c00) {
            ctx->pc = 0x217C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217C00u;
            // 0x217c04: 0x82420058  lb          $v0, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217C10u;
            goto label_217c10;
        }
    }
    ctx->pc = 0x217C08u;
    // 0x217c08: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x217C08u;
    {
        const bool branch_taken_0x217c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C08u;
        // 0x217c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c08) {
            ctx->pc = 0x217C8Cu;
            goto label_217c8c;
        }
    }
    ctx->pc = 0x217C10u;
label_217c10:
    // 0x217c10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217C10u;
    {
        const bool branch_taken_0x217c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C10u;
        // 0x217c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c10) {
            ctx->pc = 0x217C20u;
            goto label_217c20;
        }
    }
    ctx->pc = 0x217C18u;
    // 0x217c18: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x217C18u;
    {
        const bool branch_taken_0x217c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C18u;
        // 0x217c1c: 0x8e22016c  lw          $v0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c18) {
            ctx->pc = 0x217C8Cu;
            goto label_217c8c;
        }
    }
    ctx->pc = 0x217C20u;
label_217c20:
    // 0x217c20: 0xc085f86  jal         func_217E18
    ctx->pc = 0x217C20u;
    SET_GPR_U32(ctx, 31, 0x217C28u);
    ctx->pc = 0x217C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C20u;
    // 0x217c24: 0x8e510018  lw          $s1, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E18u, 0x217C20u, 0x217C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C28u;
label_217c28:
    // 0x217c28: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x217C28u;
    {
        const bool branch_taken_0x217c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C28u;
        // 0x217c2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c28) {
            ctx->pc = 0x217C78u;
            goto label_217c78;
        }
    }
    ctx->pc = 0x217C30u;
    // 0x217c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c34: 0xc085f9a  jal         func_217E68
    ctx->pc = 0x217C34u;
    SET_GPR_U32(ctx, 31, 0x217C3Cu);
    ctx->pc = 0x217C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C34u;
    // 0x217c38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E68u, 0x217C34u, 0x217C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C3Cu;
label_217c3c:
    // 0x217c3c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x217C3Cu;
    {
        const bool branch_taken_0x217c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C3Cu;
        // 0x217c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c3c) {
            ctx->pc = 0x217C7Cu;
            goto label_217c7c;
        }
    }
    ctx->pc = 0x217C44u;
    // 0x217c44: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x217c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c48: 0xc085fae  jal         func_217EB8
    ctx->pc = 0x217C48u;
    SET_GPR_U32(ctx, 31, 0x217C50u);
    ctx->pc = 0x217C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C48u;
    // 0x217c4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217EB8u, 0x217C48u, 0x217C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C50u;
label_217c50:
    // 0x217c50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x217C50u;
    {
        const bool branch_taken_0x217c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C50u;
        // 0x217c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c50) {
            ctx->pc = 0x217C7Cu;
            goto label_217c7c;
        }
    }
    ctx->pc = 0x217C58u;
    // 0x217c58: 0xc085f2c  jal         func_217CB0
    ctx->pc = 0x217C58u;
    SET_GPR_U32(ctx, 31, 0x217C60u);
    ctx->pc = 0x217C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C58u;
    // 0x217c5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217CB0u, 0x217C58u, 0x217C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C60u;
label_217c60:
    // 0x217c60: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x217C60u;
    {
        const bool branch_taken_0x217c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217c60) {
            ctx->pc = 0x217C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217C60u;
            // 0x217c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217C7Cu;
            goto label_217c7c;
        }
    }
    ctx->pc = 0x217C68u;
    // 0x217c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x217c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c6c: 0xc085fe6  jal         func_217F98
    ctx->pc = 0x217C6Cu;
    SET_GPR_U32(ctx, 31, 0x217C74u);
    ctx->pc = 0x217C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C6Cu;
    // 0x217c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217F98u, 0x217C6Cu, 0x217C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C74u;
label_217c74:
    // 0x217c74: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x217c74u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_217c78:
    // 0x217c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217c7c:
    // 0x217c7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c80: 0xc085f44  jal         func_217D10
    ctx->pc = 0x217C80u;
    SET_GPR_U32(ctx, 31, 0x217C88u);
    ctx->pc = 0x217C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C80u;
    // 0x217c84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D10u, 0x217C80u, 0x217C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C88u;
label_217c88:
    // 0x217c88: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x217c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217c8c:
    // 0x217c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217c90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217c94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217c98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217c9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x217c9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217ca0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x217ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x217CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CA4u;
        // 0x217ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217CACu;
}

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

// Function: sub_00223B48
// Address: 0x223b48 - 0x223c18
void sub_00223B48_0x223b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223B48_0x223b48");
#endif

    switch (ctx->pc) {
        case 0x223b84u: goto label_223b84;
        case 0x223bb8u: goto label_223bb8;
        case 0x223bd0u: goto label_223bd0;
        case 0x223be0u: goto label_223be0;
        case 0x223bf8u: goto label_223bf8;
        default: break;
    }

    ctx->pc = 0x223b48u;

    // 0x223b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x223b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223b54: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x223b54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x223b58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223b5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x223b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x223b64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x223b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x223b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x223b6c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x223b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x223b70: 0x2863006e  slti        $v1, $v1, 0x6E
    ctx->pc = 0x223b70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x223b74: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x223B74u;
    {
        const bool branch_taken_0x223b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B74u;
        // 0x223b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b74) {
            ctx->pc = 0x223C00u;
            goto label_223c00;
        }
    }
    ctx->pc = 0x223B7Cu;
    // 0x223b7c: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x223B7Cu;
    SET_GPR_U32(ctx, 31, 0x223B84u);
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x223B7Cu, 0x223B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B84u;
label_223b84:
    // 0x223b84: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x223b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x223b88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x223b88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b8c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x223b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x223b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b94: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223B94u;
    {
        const bool branch_taken_0x223b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x223B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B94u;
        // 0x223b98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b94) {
            ctx->pc = 0x223BB0u;
            goto label_223bb0;
        }
    }
    ctx->pc = 0x223B9Cu;
    // 0x223b9c: 0x1066000e  beq         $v1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x223B9Cu;
    {
        const bool branch_taken_0x223b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x223BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B9Cu;
        // 0x223ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b9c) {
            ctx->pc = 0x223BD8u;
            goto label_223bd8;
        }
    }
    ctx->pc = 0x223BA4u;
    // 0x223ba4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x223BA4u;
    {
        const bool branch_taken_0x223ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BA4u;
        // 0x223ba8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ba4) {
            ctx->pc = 0x223C04u;
            goto label_223c04;
        }
    }
    ctx->pc = 0x223BACu;
    // 0x223bac: 0x0  nop
    ctx->pc = 0x223bacu;
    // NOP
label_223bb0:
    // 0x223bb0: 0xc089168  jal         func_2245A0
    ctx->pc = 0x223BB0u;
    SET_GPR_U32(ctx, 31, 0x223BB8u);
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x223BB0u, 0x223BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BB8u;
label_223bb8:
    // 0x223bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223bbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x223bbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223bc0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x223BC0u;
    {
        const bool branch_taken_0x223bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC0u;
        // 0x223bc4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bc0) {
            ctx->pc = 0x223C00u;
            goto label_223c00;
        }
    }
    ctx->pc = 0x223BC8u;
    // 0x223bc8: 0xc089386  jal         func_224E18
    ctx->pc = 0x223BC8u;
    SET_GPR_U32(ctx, 31, 0x223BD0u);
    ctx->pc = 0x224E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E18u, 0x223BC8u, 0x223BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BD0u;
label_223bd0:
    // 0x223bd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x223BD0u;
    {
        const bool branch_taken_0x223bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BD0u;
        // 0x223bd4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bd0) {
            ctx->pc = 0x223BFCu;
            goto label_223bfc;
        }
    }
    ctx->pc = 0x223BD8u;
label_223bd8:
    // 0x223bd8: 0xc089168  jal         func_2245A0
    ctx->pc = 0x223BD8u;
    SET_GPR_U32(ctx, 31, 0x223BE0u);
    ctx->pc = 0x223BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BD8u;
    // 0x223bdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x223BD8u, 0x223BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BE0u;
label_223be0:
    // 0x223be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223be4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x223be4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223be8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x223BE8u;
    {
        const bool branch_taken_0x223be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BE8u;
        // 0x223bec: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223be8) {
            ctx->pc = 0x223C00u;
            goto label_223c00;
        }
    }
    ctx->pc = 0x223BF0u;
    // 0x223bf0: 0xc089396  jal         func_224E58
    ctx->pc = 0x223BF0u;
    SET_GPR_U32(ctx, 31, 0x223BF8u);
    ctx->pc = 0x224E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E58u, 0x223BF0u, 0x223BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BF8u;
label_223bf8:
    // 0x223bf8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x223bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_223bfc:
    // 0x223bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223c00:
    // 0x223c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223c04:
    // 0x223c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223c08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223c08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223c0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x223c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223c10: 0x3e00008  jr          $ra
    ctx->pc = 0x223C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C10u;
        // 0x223c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223C18u;
}

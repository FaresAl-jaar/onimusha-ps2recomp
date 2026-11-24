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

// Function: sub_00125E40
// Address: 0x125e40 - 0x125f44
void sub_00125E40_0x125e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125E40_0x125e40");
#endif

    switch (ctx->pc) {
        case 0x125e8cu: goto label_125e8c;
        case 0x125eb4u: goto label_125eb4;
        case 0x125ec0u: goto label_125ec0;
        case 0x125edcu: goto label_125edc;
        case 0x125ef0u: goto label_125ef0;
        case 0x125f14u: goto label_125f14;
        default: break;
    }

    ctx->pc = 0x125e40u;

    // 0x125e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125e44: 0x30ce0003  andi        $t6, $a2, 0x3
    ctx->pc = 0x125e44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x125e48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125e4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x125e50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x125e54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x125e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125e5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x125e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x125e64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x125e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x125e68: 0x11c00009  beqz        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x125E68u;
    {
        const bool branch_taken_0x125e68 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E68u;
        // 0x125e6c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e68) {
            ctx->pc = 0x125E90u;
            goto label_125e90;
        }
    }
    ctx->pc = 0x125E70u;
    // 0x125e70: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x125e70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x125e74: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x125e74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x125e78: 0x25ef3c30  addiu       $t7, $t7, 0x3C30
    ctx->pc = 0x125e78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15408));
    // 0x125e7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e80: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x125e80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x125e84: 0xc049622  jal         func_125888
    ctx->pc = 0x125E84u;
    SET_GPR_U32(ctx, 31, 0x125E8Cu);
    ctx->pc = 0x125E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E84u;
    // 0x125e88: 0x8dc6fffc  lw          $a2, -0x4($t6) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x125E84u, 0x125E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E8Cu;
label_125e8c:
    // 0x125e8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x125e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125e90:
    // 0x125e90: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x125e90u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x125e94: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x125E94u;
    {
        const bool branch_taken_0x125e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E94u;
        // 0x125e98: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e94) {
            ctx->pc = 0x125F24u;
            goto label_125f24;
        }
    }
    ctx->pc = 0x125E9Cu;
    // 0x125e9c: 0x8e920048  lw          $s2, 0x48($s4)
    ctx->pc = 0x125e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x125ea0: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x125EA0u;
    {
        const bool branch_taken_0x125ea0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x125EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EA0u;
        // 0x125ea4: 0x322f0001  andi        $t7, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ea0) {
            ctx->pc = 0x125EC4u;
            goto label_125ec4;
        }
    }
    ctx->pc = 0x125EA8u;
    // 0x125ea8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x125ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125eac: 0xc049700  jal         func_125C00
    ctx->pc = 0x125EACu;
    SET_GPR_U32(ctx, 31, 0x125EB4u);
    ctx->pc = 0x125EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125EACu;
    // 0x125eb0: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C00u, 0x125EACu, 0x125EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125EB4u;
label_125eb4:
    // 0x125eb4: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x125eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
    // 0x125eb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x125eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ebc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x125ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_125ec0:
    // 0x125ec0: 0x322f0001  andi        $t7, $s1, 0x1
    ctx->pc = 0x125ec0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_125ec4:
    // 0x125ec4: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x125EC4u;
    {
        const bool branch_taken_0x125ec4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EC4u;
        // 0x125ec8: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ec4) {
            ctx->pc = 0x125EF0u;
            goto label_125ef0;
        }
    }
    ctx->pc = 0x125ECCu;
    // 0x125ecc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x125eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ed0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x125ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ed4: 0xc04970e  jal         func_125C38
    ctx->pc = 0x125ED4u;
    SET_GPR_U32(ctx, 31, 0x125EDCu);
    ctx->pc = 0x125ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125ED4u;
    // 0x125ed8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x125ED4u, 0x125EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125EDCu;
label_125edc:
    // 0x125edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ee0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x125ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ee4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x125ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ee8: 0xc049616  jal         func_125858
    ctx->pc = 0x125EE8u;
    SET_GPR_U32(ctx, 31, 0x125EF0u);
    ctx->pc = 0x125EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125EE8u;
    // 0x125eec: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x125EE8u, 0x125EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125EF0u;
label_125ef0:
    // 0x125ef0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x125EF0u;
    {
        const bool branch_taken_0x125ef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EF0u;
        // 0x125ef4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ef0) {
            ctx->pc = 0x125F24u;
            goto label_125f24;
        }
    }
    ctx->pc = 0x125EF8u;
    // 0x125ef8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x125ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125efc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x125EFCu;
    {
        const bool branch_taken_0x125efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125efc) {
            ctx->pc = 0x125F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125EFCu;
            // 0x125f00: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125ec0;
        }
    }
    ctx->pc = 0x125F04u;
    // 0x125f04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x125f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x125f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f0c: 0xc04970e  jal         func_125C38
    ctx->pc = 0x125F0Cu;
    SET_GPR_U32(ctx, 31, 0x125F14u);
    ctx->pc = 0x125F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F0Cu;
    // 0x125f10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x125F0Cu, 0x125F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F14u;
label_125f14:
    // 0x125f14: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x125f14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x125f18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x125f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x125f1c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x125F1Cu;
    {
        const bool branch_taken_0x125f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F1Cu;
        // 0x125f20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f1c) {
            ctx->pc = 0x125EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125ec0;
        }
    }
    ctx->pc = 0x125F24u;
label_125f24:
    // 0x125f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125f2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125f2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125f30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125f30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125f34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125f38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x125f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x125F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F3Cu;
        // 0x125f40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125F44u;
}

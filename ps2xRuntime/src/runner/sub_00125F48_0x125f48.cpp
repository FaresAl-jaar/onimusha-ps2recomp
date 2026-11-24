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

// Function: sub_00125F48
// Address: 0x125f48 - 0x1260a4
void sub_00125F48_0x125f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125F48_0x125f48");
#endif

    switch (ctx->pc) {
        case 0x125f94u: goto label_125f94;
        case 0x125fb8u: goto label_125fb8;
        case 0x125fccu: goto label_125fcc;
        case 0x126010u: goto label_126010;
        case 0x126048u: goto label_126048;
        case 0x126058u: goto label_126058;
        case 0x126080u: goto label_126080;
        default: break;
    }

    ctx->pc = 0x125f48u;

    // 0x125f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125f50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125f54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x125f58: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x125f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x125f60: 0x68943  sra         $s1, $a2, 5
    ctx->pc = 0x125f60u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 5));
    // 0x125f64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x125f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x125f68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x125f6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x125f6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125f74: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x125f74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f78: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x125f78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x125f7c: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x125f7cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x125f80: 0x22e7021  addu        $t6, $s1, $t6
    ctx->pc = 0x125f80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x125f84: 0x25d20001  addiu       $s2, $t6, 0x1
    ctx->pc = 0x125f84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x125f88: 0x1b2782a  slt         $t7, $t5, $s2
    ctx->pc = 0x125f88u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x125f8c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x125F8Cu;
    {
        const bool branch_taken_0x125f8c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F8Cu;
        // 0x125f90: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f8c) {
            ctx->pc = 0x125FB0u;
            goto label_125fb0;
        }
    }
    ctx->pc = 0x125F94u;
label_125f94:
    // 0x125f94: 0xd6840  sll         $t5, $t5, 1
    ctx->pc = 0x125f94u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x125f98: 0x1b2782a  slt         $t7, $t5, $s2
    ctx->pc = 0x125f98u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x125f9c: 0x0  nop
    ctx->pc = 0x125f9cu;
    // NOP
    // 0x125fa0: 0x0  nop
    ctx->pc = 0x125fa0u;
    // NOP
    // 0x125fa4: 0x0  nop
    ctx->pc = 0x125fa4u;
    // NOP
    // 0x125fa8: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125FA8u;
    {
        const bool branch_taken_0x125fa8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FA8u;
        // 0x125fac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fa8) {
            ctx->pc = 0x125F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125f94;
        }
    }
    ctx->pc = 0x125FB0u;
label_125fb0:
    // 0x125fb0: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x125FB0u;
    SET_GPR_U32(ctx, 31, 0x125FB8u);
    ctx->pc = 0x125FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FB0u;
    // 0x125fb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x125FB0u, 0x125FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FB8u;
label_125fb8:
    // 0x125fb8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x125fb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fbc: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x125FBCu;
    {
        const bool branch_taken_0x125fbc = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x125FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FBCu;
        // 0x125fc0: 0x244d0014  addiu       $t5, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fbc) {
            ctx->pc = 0x125FECu;
            goto label_125fec;
        }
    }
    ctx->pc = 0x125FC4u;
    // 0x125fc4: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x125fc4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fc8: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x125fc8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125fcc:
    // 0x125fcc: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x125fccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
    // 0x125fd0: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x125fd0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x125fd4: 0x0  nop
    ctx->pc = 0x125fd4u;
    // NOP
    // 0x125fd8: 0x0  nop
    ctx->pc = 0x125fd8u;
    // NOP
    // 0x125fdc: 0x0  nop
    ctx->pc = 0x125fdcu;
    // NOP
    // 0x125fe0: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125FE0u;
    {
        const bool branch_taken_0x125fe0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x125FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FE0u;
        // 0x125fe4: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fe0) {
            ctx->pc = 0x125FCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125fcc;
        }
    }
    ctx->pc = 0x125FE8u;
    // 0x125fe8: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x125fe8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_125fec:
    // 0x125fec: 0x8e6f0010  lw          $t7, 0x10($s3)
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x125ff0: 0x266c0014  addiu       $t4, $s3, 0x14
    ctx->pc = 0x125ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x125ff4: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x125ff4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x125ff8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x125ff8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x125ffc: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x125FFCu;
    {
        const bool branch_taken_0x125ffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FFCu;
        // 0x126000: 0x18f5821  addu        $t3, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ffc) {
            ctx->pc = 0x126080u;
            goto label_126080;
        }
    }
    ctx->pc = 0x126004u;
    // 0x126004: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x126004u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x126008: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x126008u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12600c: 0x1f05023  subu        $t2, $t7, $s0
    ctx->pc = 0x12600cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_126010:
    // 0x126010: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x126010u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x126014: 0x20f7804  sllv        $t7, $t7, $s0
    ctx->pc = 0x126014u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 16) & 0x1F));
    // 0x126018: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x126018u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12601c: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x12601cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x126020: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x126020u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x126024: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x126024u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x126028: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x126028u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x12602c: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12602cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x126030: 0x15e0fff7  bnez        $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x126030u;
    {
        const bool branch_taken_0x126030 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126030u;
        // 0x126034: 0x14e7006  srlv        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126030) {
            ctx->pc = 0x126010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126010;
        }
    }
    ctx->pc = 0x126038u;
    // 0x126038: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x126038u;
    {
        const bool branch_taken_0x126038 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126038u;
        // 0x12603c: 0xadae0000  sw          $t6, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126038) {
            ctx->pc = 0x126044u;
            goto label_126044;
        }
    }
    ctx->pc = 0x126040u;
    // 0x126040: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x126040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_126044:
    // 0x126044: 0x264fffff  addiu       $t7, $s2, -0x1
    ctx->pc = 0x126044u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_126048:
    // 0x126048: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12604c: 0xae8f0010  sw          $t7, 0x10($s4)
    ctx->pc = 0x12604cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 15));
    // 0x126050: 0xc049616  jal         func_125858
    ctx->pc = 0x126050u;
    SET_GPR_U32(ctx, 31, 0x126058u);
    ctx->pc = 0x126054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126050u;
    // 0x126054: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x126050u, 0x126058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126058u;
label_126058:
    // 0x126058: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x126058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12605c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12605cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126064: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126068: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12606c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12606cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126070: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x126070u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126074: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x126074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126078: 0x3e00008  jr          $ra
    ctx->pc = 0x126078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126078u;
        // 0x12607c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126080u;
label_126080:
    // 0x126080: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x126080u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x126084: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x126084u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x126088: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x126088u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x12608c: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12608cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x126090: 0x0  nop
    ctx->pc = 0x126090u;
    // NOP
    // 0x126094: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126094u;
    {
        const bool branch_taken_0x126094 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126094u;
        // 0x126098: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126094) {
            ctx->pc = 0x126080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126080;
        }
    }
    ctx->pc = 0x12609Cu;
    // 0x12609c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x12609Cu;
    {
        const bool branch_taken_0x12609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12609Cu;
        // 0x1260a0: 0x264fffff  addiu       $t7, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12609c) {
            ctx->pc = 0x126048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126048;
        }
    }
    ctx->pc = 0x1260A4u;
}

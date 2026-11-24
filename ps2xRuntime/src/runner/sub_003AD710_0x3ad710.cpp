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

// Function: sub_003AD710
// Address: 0x3ad710 - 0x3ad81c
void sub_003AD710_0x3ad710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD710_0x3ad710");
#endif

    switch (ctx->pc) {
        case 0x3ad738u: goto label_3ad738;
        case 0x3ad77cu: goto label_3ad77c;
        case 0x3ad7c4u: goto label_3ad7c4;
        case 0x3ad7e4u: goto label_3ad7e4;
        default: break;
    }

    ctx->pc = 0x3ad710u;

    // 0x3ad710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ad710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ad714: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ad714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ad718: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ad718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ad71c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ad71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ad720: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ad720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ad724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ad728: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ad728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad72c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ad730: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ad730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad734: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ad734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad738:
    // 0x3ad738: 0x92440013  lbu         $a0, 0x13($s2)
    ctx->pc = 0x3ad738u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x3ad73c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ad73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad740: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x3ad740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x3ad744: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ad744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ad748: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3AD748u;
    {
        const bool branch_taken_0x3ad748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad748) {
            ctx->pc = 0x3AD7F0u;
            goto label_3ad7f0;
        }
    }
    ctx->pc = 0x3AD750u;
    // 0x3ad750: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x3ad750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x3ad754: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD754u;
    {
        const bool branch_taken_0x3ad754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ad754) {
            ctx->pc = 0x3AD768u;
            goto label_3ad768;
        }
    }
    ctx->pc = 0x3AD75Cu;
    // 0x3ad75c: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x3ad75cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x3ad760: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AD760u;
    {
        const bool branch_taken_0x3ad760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3ad760) {
            ctx->pc = 0x3AD780u;
            goto label_3ad780;
        }
    }
    ctx->pc = 0x3AD768u;
label_3ad768:
    // 0x3ad768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ad768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad76c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x3ad76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x3ad770: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ad770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad774: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AD774u;
    SET_GPR_U32(ctx, 31, 0x3AD77Cu);
    ctx->pc = 0x3AD778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD774u;
    // 0x3ad778: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AD774u, 0x3AD77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD77Cu;
label_3ad77c:
    // 0x3ad77c: 0x0  nop
    ctx->pc = 0x3ad77cu;
    // NOP
label_3ad780:
    // 0x3ad780: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ad780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ad784: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AD784u;
    {
        const bool branch_taken_0x3ad784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ad784) {
            ctx->pc = 0x3AD7D0u;
            goto label_3ad7d0;
        }
    }
    ctx->pc = 0x3AD78Cu;
    // 0x3ad78c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x3ad78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3ad790: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3ad790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x3ad794: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ad794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ad798: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AD798u;
    {
        const bool branch_taken_0x3ad798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad798) {
            ctx->pc = 0x3AD7B0u;
            goto label_3ad7b0;
        }
    }
    ctx->pc = 0x3AD7A0u;
    // 0x3ad7a0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x3ad7a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3ad7a4: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x3ad7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3ad7a8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AD7A8u;
    {
        const bool branch_taken_0x3ad7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ad7a8) {
            ctx->pc = 0x3AD7D0u;
            goto label_3ad7d0;
        }
    }
    ctx->pc = 0x3AD7B0u;
label_3ad7b0:
    // 0x3ad7b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ad7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad7b4: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x3ad7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3ad7b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ad7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad7bc: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AD7BCu;
    SET_GPR_U32(ctx, 31, 0x3AD7C4u);
    ctx->pc = 0x3AD7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD7BCu;
    // 0x3ad7c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AD7BCu, 0x3AD7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD7C4u;
label_3ad7c4:
    // 0x3ad7c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AD7C4u;
    {
        const bool branch_taken_0x3ad7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad7c4) {
            ctx->pc = 0x3AD7E8u;
            goto label_3ad7e8;
        }
    }
    ctx->pc = 0x3AD7CCu;
    // 0x3ad7cc: 0x0  nop
    ctx->pc = 0x3ad7ccu;
    // NOP
label_3ad7d0:
    // 0x3ad7d0: 0x2605002a  addiu       $a1, $s0, 0x2A
    ctx->pc = 0x3ad7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
    // 0x3ad7d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ad7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad7d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ad7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad7dc: 0xc0eb298  jal         func_3ACA60
    ctx->pc = 0x3AD7DCu;
    SET_GPR_U32(ctx, 31, 0x3AD7E4u);
    ctx->pc = 0x3AD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD7DCu;
    // 0x3ad7e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA60u, 0x3AD7DCu, 0x3AD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD7E4u;
label_3ad7e4:
    // 0x3ad7e4: 0x0  nop
    ctx->pc = 0x3ad7e4u;
    // NOP
label_3ad7e8:
    // 0x3ad7e8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x3ad7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3ad7ec: 0x0  nop
    ctx->pc = 0x3ad7ecu;
    // NOP
label_3ad7f0:
    // 0x3ad7f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ad7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ad7f4: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x3ad7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x3ad7f8: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3AD7F8u;
    {
        const bool branch_taken_0x3ad7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad7f8) {
            ctx->pc = 0x3AD738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad738;
        }
    }
    ctx->pc = 0x3AD800u;
    // 0x3ad800: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ad800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ad804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ad804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ad808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ad808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad80c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ad80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ad810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad814: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD814u;
        // 0x3ad818: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD81Cu;
}

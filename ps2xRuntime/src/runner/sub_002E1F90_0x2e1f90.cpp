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

// Function: sub_002E1F90
// Address: 0x2e1f90 - 0x2e2054
void sub_002E1F90_0x2e1f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1F90_0x2e1f90");
#endif

    switch (ctx->pc) {
        case 0x2e1f90u: goto label_2e1f90;
        case 0x2e1f94u: goto label_2e1f94;
        case 0x2e1f98u: goto label_2e1f98;
        case 0x2e1f9cu: goto label_2e1f9c;
        case 0x2e1fa0u: goto label_2e1fa0;
        case 0x2e1fa4u: goto label_2e1fa4;
        case 0x2e1fa8u: goto label_2e1fa8;
        case 0x2e1facu: goto label_2e1fac;
        case 0x2e1fb0u: goto label_2e1fb0;
        case 0x2e1fb4u: goto label_2e1fb4;
        case 0x2e1fb8u: goto label_2e1fb8;
        case 0x2e1fbcu: goto label_2e1fbc;
        case 0x2e1fc0u: goto label_2e1fc0;
        case 0x2e1fc4u: goto label_2e1fc4;
        case 0x2e1fc8u: goto label_2e1fc8;
        case 0x2e1fccu: goto label_2e1fcc;
        case 0x2e1fd0u: goto label_2e1fd0;
        case 0x2e1fd4u: goto label_2e1fd4;
        case 0x2e1fd8u: goto label_2e1fd8;
        case 0x2e1fdcu: goto label_2e1fdc;
        case 0x2e1fe0u: goto label_2e1fe0;
        case 0x2e1fe4u: goto label_2e1fe4;
        case 0x2e1fe8u: goto label_2e1fe8;
        case 0x2e1fecu: goto label_2e1fec;
        case 0x2e1ff0u: goto label_2e1ff0;
        case 0x2e1ff4u: goto label_2e1ff4;
        case 0x2e1ff8u: goto label_2e1ff8;
        case 0x2e1ffcu: goto label_2e1ffc;
        case 0x2e2000u: goto label_2e2000;
        case 0x2e2004u: goto label_2e2004;
        case 0x2e2008u: goto label_2e2008;
        case 0x2e200cu: goto label_2e200c;
        case 0x2e2010u: goto label_2e2010;
        case 0x2e2014u: goto label_2e2014;
        case 0x2e2018u: goto label_2e2018;
        case 0x2e201cu: goto label_2e201c;
        case 0x2e2020u: goto label_2e2020;
        case 0x2e2024u: goto label_2e2024;
        case 0x2e2028u: goto label_2e2028;
        case 0x2e202cu: goto label_2e202c;
        case 0x2e2030u: goto label_2e2030;
        case 0x2e2034u: goto label_2e2034;
        case 0x2e2038u: goto label_2e2038;
        case 0x2e203cu: goto label_2e203c;
        case 0x2e2040u: goto label_2e2040;
        case 0x2e2044u: goto label_2e2044;
        case 0x2e2048u: goto label_2e2048;
        case 0x2e204cu: goto label_2e204c;
        case 0x2e2050u: goto label_2e2050;
        default: break;
    }

    ctx->pc = 0x2e1f90u;

label_2e1f90:
    // 0x2e1f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e1f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e1f94:
    // 0x2e1f94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e1f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e1f98:
    // 0x2e1f98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e1f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e1f9c:
    // 0x2e1f9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e1fa0:
    // 0x2e1fa0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e1fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1fa4:
    // 0x2e1fa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e1fa8:
    // 0x2e1fa8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e1fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1fac:
    // 0x2e1fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e1fb0:
    // 0x2e1fb0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2e1fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e1fb4:
    // 0x2e1fb4: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2e1fb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2e1fb8:
    // 0x2e1fb8: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2e1fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2e1fbc:
    // 0x2e1fbc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_2e1fc0:
    if (ctx->pc == 0x2E1FC0u) {
        ctx->pc = 0x2E1FC4u;
        goto label_2e1fc4;
    }
    ctx->pc = 0x2E1FBCu;
    {
        const bool branch_taken_0x2e1fbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fbc) {
            ctx->pc = 0x2E2028u;
            goto label_2e2028;
        }
    }
    ctx->pc = 0x2E1FC4u;
label_2e1fc4:
    // 0x2e1fc4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2e1fc8:
    if (ctx->pc == 0x2E1FC8u) {
        ctx->pc = 0x2E1FCCu;
        goto label_2e1fcc;
    }
    ctx->pc = 0x2E1FC4u;
    {
        const bool branch_taken_0x2e1fc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fc4) {
            ctx->pc = 0x2E1FD8u;
            goto label_2e1fd8;
        }
    }
    ctx->pc = 0x2E1FCCu;
label_2e1fcc:
    // 0x2e1fcc: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x2e1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_2e1fd0:
    // 0x2e1fd0: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
label_2e1fd4:
    if (ctx->pc == 0x2E1FD4u) {
        ctx->pc = 0x2E1FD8u;
        goto label_2e1fd8;
    }
    ctx->pc = 0x2E1FD0u;
    {
        const bool branch_taken_0x2e1fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1fd0) {
            ctx->pc = 0x2E2028u;
            goto label_2e2028;
        }
    }
    ctx->pc = 0x2E1FD8u;
label_2e1fd8:
    // 0x2e1fd8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2e1fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2e1fdc:
    // 0x2e1fdc: 0xc07cce0  jal         func_1F3380
label_2e1fe0:
    if (ctx->pc == 0x2E1FE0u) {
        ctx->pc = 0x2E1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FDCu;
        // 0x2e1fe0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1FE4u;
        goto label_2e1fe4;
    }
    ctx->pc = 0x2E1FDCu;
    SET_GPR_U32(ctx, 31, 0x2E1FE4u);
    ctx->pc = 0x2E1FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1FDCu;
    // 0x2e1fe0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E1FDCu, 0x2E1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1FE4u;
label_2e1fe4:
    // 0x2e1fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e1fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1fe8:
    // 0x2e1fe8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2e1fec:
    if (ctx->pc == 0x2E1FECu) {
        ctx->pc = 0x2E1FF0u;
        goto label_2e1ff0;
    }
    ctx->pc = 0x2E1FE8u;
    {
        const bool branch_taken_0x2e1fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fe8) {
            ctx->pc = 0x2E2028u;
            goto label_2e2028;
        }
    }
    ctx->pc = 0x2E1FF0u;
label_2e1ff0:
    // 0x2e1ff0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2e1ff0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1ff4:
    // 0x2e1ff4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e1ff8:
    // 0x2e1ff8: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
label_2e1ffc:
    if (ctx->pc == 0x2E1FFCu) {
        ctx->pc = 0x2E2000u;
        goto label_2e2000;
    }
    ctx->pc = 0x2E1FF8u;
    {
        const bool branch_taken_0x2e1ff8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e1ff8) {
            ctx->pc = 0x2E2028u;
            goto label_2e2028;
        }
    }
    ctx->pc = 0x2E2000u;
label_2e2000:
    // 0x2e2000: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x2e2000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
label_2e2004:
    // 0x2e2004: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2e2004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2e2008:
    // 0x2e2008: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2e200c:
    if (ctx->pc == 0x2E200Cu) {
        ctx->pc = 0x2E2010u;
        goto label_2e2010;
    }
    ctx->pc = 0x2E2008u;
    {
        const bool branch_taken_0x2e2008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2008) {
            ctx->pc = 0x2E2028u;
            goto label_2e2028;
        }
    }
    ctx->pc = 0x2E2010u;
label_2e2010:
    // 0x2e2010: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2e2010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2e2014:
    // 0x2e2014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e2014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2018:
    // 0x2e2018: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2e2018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2e201c:
    // 0x2e201c: 0x320f809  jalr        $t9
label_2e2020:
    if (ctx->pc == 0x2E2020u) {
        ctx->pc = 0x2E2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E201Cu;
        // 0x2e2020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2024u;
        goto label_2e2024;
    }
    ctx->pc = 0x2E201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E2024u);
        ctx->pc = 0x2E2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E201Cu;
        // 0x2e2020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E201Cu, 0x2E2024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E2024u;
label_2e2024:
    // 0x2e2024: 0x0  nop
    ctx->pc = 0x2e2024u;
    // NOP
label_2e2028:
    // 0x2e2028: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e2028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e202c:
    // 0x2e202c: 0x2e430020  sltiu       $v1, $s2, 0x20
    ctx->pc = 0x2e202cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2e2030:
    // 0x2e2030: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_2e2034:
    if (ctx->pc == 0x2E2034u) {
        ctx->pc = 0x2E2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2030u;
        // 0x2e2034: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2038u;
        goto label_2e2038;
    }
    ctx->pc = 0x2E2030u;
    {
        const bool branch_taken_0x2e2030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2030u;
        // 0x2e2034: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2030) {
            ctx->pc = 0x2E1FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1fb8;
        }
    }
    ctx->pc = 0x2E2038u;
label_2e2038:
    // 0x2e2038: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e2038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e203c:
    // 0x2e203c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e203cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e2040:
    // 0x2e2040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e2044:
    // 0x2e2044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2048:
    // 0x2e2048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e204c:
    // 0x2e204c: 0x3e00008  jr          $ra
label_2e2050:
    if (ctx->pc == 0x2E2050u) {
        ctx->pc = 0x2E2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E204Cu;
        // 0x2e2050: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2054u;
        goto label_fallthrough_0x2e204c;
    }
    ctx->pc = 0x2E204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E204Cu;
        // 0x2e2050: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e204c:
    ctx->pc = 0x2E2054u;
}

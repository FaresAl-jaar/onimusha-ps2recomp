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

// Function: sub_0025DAB0
// Address: 0x25dab0 - 0x25dbbc
void sub_0025DAB0_0x25dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DAB0_0x25dab0");
#endif

    switch (ctx->pc) {
        case 0x25dae4u: goto label_25dae4;
        case 0x25daf4u: goto label_25daf4;
        case 0x25db08u: goto label_25db08;
        default: break;
    }

    ctx->pc = 0x25dab0u;

    // 0x25dab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25dab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25dab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25dabc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25dac0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25dac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25dac8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25dac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25dad0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25dad4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25dad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dad8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25dad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dadc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25DADCu;
    SET_GPR_U32(ctx, 31, 0x25DAE4u);
    ctx->pc = 0x25DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DADCu;
    // 0x25dae0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25DADCu, 0x25DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAE4u;
label_25dae4:
    // 0x25dae4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25dae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25dae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25daec: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25DAECu;
    SET_GPR_U32(ctx, 31, 0x25DAF4u);
    ctx->pc = 0x25DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAECu;
    // 0x25daf0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25DAECu, 0x25DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAF4u;
label_25daf4:
    // 0x25daf4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25daf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25daf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dafc: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x25dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x25db00: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25DB00u;
    SET_GPR_U32(ctx, 31, 0x25DB08u);
    ctx->pc = 0x25DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB00u;
    // 0x25db04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25DB00u, 0x25DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB08u;
label_25db08:
    // 0x25db08: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DB08u;
    {
        const bool branch_taken_0x25db08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB08u;
        // 0x25db0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db08) {
            ctx->pc = 0x25DB18u;
            goto label_25db18;
        }
    }
    ctx->pc = 0x25DB10u;
    // 0x25db10: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x25DB10u;
    {
        const bool branch_taken_0x25db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db10) {
            ctx->pc = 0x25DBA0u;
            goto label_25dba0;
        }
    }
    ctx->pc = 0x25DB18u;
label_25db18:
    // 0x25db18: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x25db18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x25db1c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25db1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25db20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DB20u;
    {
        const bool branch_taken_0x25db20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB20u;
        // 0x25db24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db20) {
            ctx->pc = 0x25DB30u;
            goto label_25db30;
        }
    }
    ctx->pc = 0x25DB28u;
    // 0x25db28: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25DB28u;
    {
        const bool branch_taken_0x25db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db28) {
            ctx->pc = 0x25DBA0u;
            goto label_25dba0;
        }
    }
    ctx->pc = 0x25DB30u;
label_25db30:
    // 0x25db30: 0x960329de  lhu         $v1, 0x29DE($s0)
    ctx->pc = 0x25db30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x25db34: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x25db34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x25db38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25db3c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x25db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x25db40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25db44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DB44u;
    {
        const bool branch_taken_0x25db44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25db44) {
            ctx->pc = 0x25DB58u;
            goto label_25db58;
        }
    }
    ctx->pc = 0x25DB4Cu;
    // 0x25db4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25DB4Cu;
    {
        const bool branch_taken_0x25db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB4Cu;
        // 0x25db50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db4c) {
            ctx->pc = 0x25DBA0u;
            goto label_25dba0;
        }
    }
    ctx->pc = 0x25DB54u;
    // 0x25db54: 0x0  nop
    ctx->pc = 0x25db54u;
    // NOP
label_25db58:
    // 0x25db58: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25DB58u;
    {
        const bool branch_taken_0x25db58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db58) {
            ctx->pc = 0x25DB98u;
            goto label_25db98;
        }
    }
    ctx->pc = 0x25DB60u;
    // 0x25db60: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25db60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25db64: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x25db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25db68: 0x8c622a04  lw          $v0, 0x2A04($v1)
    ctx->pc = 0x25db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10756)));
    // 0x25db6c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DB6Cu;
    {
        const bool branch_taken_0x25db6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB6Cu;
        // 0x25db70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db6c) {
            ctx->pc = 0x25DB80u;
            goto label_25db80;
        }
    }
    ctx->pc = 0x25DB74u;
    // 0x25db74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25DB74u;
    {
        const bool branch_taken_0x25db74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db74) {
            ctx->pc = 0x25DBA0u;
            goto label_25dba0;
        }
    }
    ctx->pc = 0x25DB7Cu;
    // 0x25db7c: 0x0  nop
    ctx->pc = 0x25db7cu;
    // NOP
label_25db80:
    // 0x25db80: 0x8c622a44  lw          $v0, 0x2A44($v1)
    ctx->pc = 0x25db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10820)));
    // 0x25db84: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DB84u;
    {
        const bool branch_taken_0x25db84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB84u;
        // 0x25db88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db84) {
            ctx->pc = 0x25DB98u;
            goto label_25db98;
        }
    }
    ctx->pc = 0x25DB8Cu;
    // 0x25db8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25DB8Cu;
    {
        const bool branch_taken_0x25db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db8c) {
            ctx->pc = 0x25DBA0u;
            goto label_25dba0;
        }
    }
    ctx->pc = 0x25DB94u;
    // 0x25db94: 0x0  nop
    ctx->pc = 0x25db94u;
    // NOP
label_25db98:
    // 0x25db98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25db9c: 0x0  nop
    ctx->pc = 0x25db9cu;
    // NOP
label_25dba0:
    // 0x25dba0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25dba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25dba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25dba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25dba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25dba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25dbac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25dbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25dbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25dbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x25DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBB4u;
        // 0x25dbb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DBBCu;
}

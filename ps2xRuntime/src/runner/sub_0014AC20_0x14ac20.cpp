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

// Function: sub_0014AC20
// Address: 0x14ac20 - 0x14adb4
void sub_0014AC20_0x14ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AC20_0x14ac20");
#endif

    switch (ctx->pc) {
        case 0x14ac94u: goto label_14ac94;
        case 0x14acdcu: goto label_14acdc;
        case 0x14ad08u: goto label_14ad08;
        default: break;
    }

    ctx->pc = 0x14ac20u;

    // 0x14ac20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14ac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14ac24: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14ac28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14ac2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ac30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14ac34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14ac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14ac38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14ac38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14ac3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ac44: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x14ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14ac48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ac4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14ac50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14ac54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14ac58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14ac5c: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x14ac5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x14ac60: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x14ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x14ac64: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14AC64u;
    {
        const bool branch_taken_0x14ac64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC64u;
        // 0x14ac68: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac64) {
            ctx->pc = 0x14ACF8u;
            goto label_14acf8;
        }
    }
    ctx->pc = 0x14AC6Cu;
    // 0x14ac6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ac70: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14AC70u;
    {
        const bool branch_taken_0x14ac70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14ac70) {
            ctx->pc = 0x14ACC8u;
            goto label_14acc8;
        }
    }
    ctx->pc = 0x14AC78u;
    // 0x14ac78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AC78u;
    {
        const bool branch_taken_0x14ac78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac78) {
            ctx->pc = 0x14AC88u;
            goto label_14ac88;
        }
    }
    ctx->pc = 0x14AC80u;
    // 0x14ac80: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x14AC80u;
    {
        const bool branch_taken_0x14ac80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac80) {
            ctx->pc = 0x14AD90u;
            goto label_14ad90;
        }
    }
    ctx->pc = 0x14AC88u;
label_14ac88:
    // 0x14ac88: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14ac8c: 0xc048566  jal         func_121598
    ctx->pc = 0x14AC8Cu;
    SET_GPR_U32(ctx, 31, 0x14AC94u);
    ctx->pc = 0x14AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC8Cu;
    // 0x14ac90: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14AC8Cu, 0x14AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC94u;
label_14ac94:
    // 0x14ac94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AC94u;
    {
        const bool branch_taken_0x14ac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ac94) {
            ctx->pc = 0x14ACA8u;
            goto label_14aca8;
        }
    }
    ctx->pc = 0x14AC9Cu;
    // 0x14ac9c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14AC9Cu;
    {
        const bool branch_taken_0x14ac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC9Cu;
        // 0x14aca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac9c) {
            ctx->pc = 0x14AD98u;
            goto label_14ad98;
        }
    }
    ctx->pc = 0x14ACA4u;
    // 0x14aca4: 0x0  nop
    ctx->pc = 0x14aca4u;
    // NOP
label_14aca8:
    // 0x14aca8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14acac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14acb0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14acb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14acb8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14acbc: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x14acbcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14acc0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x14acc0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14acc4: 0x0  nop
    ctx->pc = 0x14acc4u;
    // NOP
label_14acc8:
    // 0x14acc8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x14acc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x14accc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14acccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14acd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acd4: 0xc048420  jal         func_121080
    ctx->pc = 0x14ACD4u;
    SET_GPR_U32(ctx, 31, 0x14ACDCu);
    ctx->pc = 0x14ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACD4u;
    // 0x14acd8: 0x24c649d8  addiu       $a2, $a2, 0x49D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121080u, 0x14ACD4u, 0x14ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ACDCu;
label_14acdc:
    // 0x14acdc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14ACDCu;
    {
        const bool branch_taken_0x14acdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14acdc) {
            ctx->pc = 0x14AD90u;
            goto label_14ad90;
        }
    }
    ctx->pc = 0x14ACE4u;
    // 0x14ace4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ace8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14acec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x14ACECu;
    {
        const bool branch_taken_0x14acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACECu;
        // 0x14acf0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acec) {
            ctx->pc = 0x14AD90u;
            goto label_14ad90;
        }
    }
    ctx->pc = 0x14ACF4u;
    // 0x14acf4: 0x0  nop
    ctx->pc = 0x14acf4u;
    // NOP
label_14acf8:
    // 0x14acf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14acfc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14ad00: 0xc048566  jal         func_121598
    ctx->pc = 0x14AD00u;
    SET_GPR_U32(ctx, 31, 0x14AD08u);
    ctx->pc = 0x14AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD00u;
    // 0x14ad04: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14AD00u, 0x14AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD08u;
label_14ad08:
    // 0x14ad08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ad0c: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14AD0Cu;
    {
        const bool branch_taken_0x14ad0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ad0c) {
            ctx->pc = 0x14AD90u;
            goto label_14ad90;
        }
    }
    ctx->pc = 0x14AD14u;
    // 0x14ad14: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14ad18: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x14ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x14ad1c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14AD1Cu;
    {
        const bool branch_taken_0x14ad1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD1Cu;
        // 0x14ad20: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad1c) {
            ctx->pc = 0x14AD60u;
            goto label_14ad60;
        }
    }
    ctx->pc = 0x14AD24u;
    // 0x14ad24: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14AD24u;
    {
        const bool branch_taken_0x14ad24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ad24) {
            ctx->pc = 0x14AD50u;
            goto label_14ad50;
        }
    }
    ctx->pc = 0x14AD2Cu;
    // 0x14ad2c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14ad30: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14AD30u;
    {
        const bool branch_taken_0x14ad30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD30u;
        // 0x14ad34: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad30) {
            ctx->pc = 0x14AD50u;
            goto label_14ad50;
        }
    }
    ctx->pc = 0x14AD38u;
    // 0x14ad38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AD38u;
    {
        const bool branch_taken_0x14ad38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ad38) {
            ctx->pc = 0x14AD50u;
            goto label_14ad50;
        }
    }
    ctx->pc = 0x14AD40u;
    // 0x14ad40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AD40u;
    {
        const bool branch_taken_0x14ad40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ad40) {
            ctx->pc = 0x14AD50u;
            goto label_14ad50;
        }
    }
    ctx->pc = 0x14AD48u;
    // 0x14ad48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14AD48u;
    {
        const bool branch_taken_0x14ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ad48) {
            ctx->pc = 0x14AD60u;
            goto label_14ad60;
        }
    }
    ctx->pc = 0x14AD50u;
label_14ad50:
    // 0x14ad50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14ad54: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14ad54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ad58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14AD58u;
    {
        const bool branch_taken_0x14ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD58u;
        // 0x14ad5c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad58) {
            ctx->pc = 0x14AD98u;
            goto label_14ad98;
        }
    }
    ctx->pc = 0x14AD60u;
label_14ad60:
    // 0x14ad60: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14ad60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ad64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14AD64u;
    {
        const bool branch_taken_0x14ad64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD64u;
        // 0x14ad68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad64) {
            ctx->pc = 0x14AD80u;
            goto label_14ad80;
        }
    }
    ctx->pc = 0x14AD6Cu;
    // 0x14ad6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14ad70: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14ad70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ad74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14ad78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14AD78u;
    {
        const bool branch_taken_0x14ad78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD78u;
        // 0x14ad7c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad78) {
            ctx->pc = 0x14AD90u;
            goto label_14ad90;
        }
    }
    ctx->pc = 0x14AD80u;
label_14ad80:
    // 0x14ad80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14ad84: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14ad84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ad88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14AD88u;
    {
        const bool branch_taken_0x14ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD88u;
        // 0x14ad8c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad88) {
            ctx->pc = 0x14AD98u;
            goto label_14ad98;
        }
    }
    ctx->pc = 0x14AD90u;
label_14ad90:
    // 0x14ad90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ad94: 0x0  nop
    ctx->pc = 0x14ad94u;
    // NOP
label_14ad98:
    // 0x14ad98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14ad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ad9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ad9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ada0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ada0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ada4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ada4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ada8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ada8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14adac: 0x3e00008  jr          $ra
    ctx->pc = 0x14ADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADACu;
        // 0x14adb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ADB4u;
}

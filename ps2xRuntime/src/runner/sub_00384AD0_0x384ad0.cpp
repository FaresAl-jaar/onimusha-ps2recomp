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

// Function: sub_00384AD0
// Address: 0x384ad0 - 0x384c4c
void sub_00384AD0_0x384ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384AD0_0x384ad0");
#endif

    switch (ctx->pc) {
        case 0x384b08u: goto label_384b08;
        case 0x384b10u: goto label_384b10;
        case 0x384b68u: goto label_384b68;
        case 0x384bacu: goto label_384bac;
        case 0x384bd8u: goto label_384bd8;
        default: break;
    }

    ctx->pc = 0x384ad0u;

    // 0x384ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x384ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x384ad4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x384ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x384ad8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x384ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x384adc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x384adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x384ae0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x384ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x384ae8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x384ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x384aec: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x384AECu;
    {
        const bool branch_taken_0x384aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x384AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AECu;
        // 0x384af0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384aec) {
            ctx->pc = 0x384C30u;
            goto label_384c30;
        }
    }
    ctx->pc = 0x384AF4u;
    // 0x384af4: 0x86630028  lh          $v1, 0x28($s3)
    ctx->pc = 0x384af4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x384af8: 0x1860004d  blez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x384AF8u;
    {
        const bool branch_taken_0x384af8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x384AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AF8u;
        // 0x384afc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384af8) {
            ctx->pc = 0x384C30u;
            goto label_384c30;
        }
    }
    ctx->pc = 0x384B00u;
    // 0x384b00: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x384B00u;
    SET_GPR_U32(ctx, 31, 0x384B08u);
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x384B00u, 0x384B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384B08u;
label_384b08:
    // 0x384b08: 0xc0e1314  jal         func_384C50
    ctx->pc = 0x384B08u;
    SET_GPR_U32(ctx, 31, 0x384B10u);
    ctx->pc = 0x384B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384B08u;
    // 0x384b0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C50u, 0x384B08u, 0x384B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384B10u;
label_384b10:
    // 0x384b10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x384B10u;
    {
        const bool branch_taken_0x384b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B10u;
        // 0x384b14: 0x3c120066  lui         $s2, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b10) {
            ctx->pc = 0x384B20u;
            goto label_384b20;
        }
    }
    ctx->pc = 0x384B18u;
    // 0x384b18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x384B18u;
    {
        const bool branch_taken_0x384b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B18u;
        // 0x384b1c: 0x2652c5ac  addiu       $s2, $s2, -0x3A54 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b18) {
            ctx->pc = 0x384B28u;
            goto label_384b28;
        }
    }
    ctx->pc = 0x384B20u;
label_384b20:
    // 0x384b20: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x384b20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x384b24: 0x2652c5c4  addiu       $s2, $s2, -0x3A3C
    ctx->pc = 0x384b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952388));
label_384b28:
    // 0x384b28: 0x82660030  lb          $a2, 0x30($s3)
    ctx->pc = 0x384b28u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x384b2c: 0x24c5fffb  addiu       $a1, $a2, -0x5
    ctx->pc = 0x384b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967291));
    // 0x384b30: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x384B30u;
    {
        const bool branch_taken_0x384b30 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x384b30) {
            ctx->pc = 0x384B40u;
            goto label_384b40;
        }
    }
    ctx->pc = 0x384B38u;
    // 0x384b38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x384B38u;
    {
        const bool branch_taken_0x384b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B38u;
        // 0x384b3c: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b38) {
            ctx->pc = 0x384B48u;
            goto label_384b48;
        }
    }
    ctx->pc = 0x384B40u;
label_384b40:
    // 0x384b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x384b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384b44: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x384b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_384b48:
    // 0x384b48: 0x24030127  addiu       $v1, $zero, 0x127
    ctx->pc = 0x384b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x384b4c: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x384b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x384b50: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x384b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x384b54: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x384b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x384b58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x384b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384b5c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x384b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x384b60: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x384B60u;
    {
        const bool branch_taken_0x384b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B60u;
        // 0x384b64: 0x648823  subu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b60) {
            ctx->pc = 0x384BF0u;
            goto label_384bf0;
        }
    }
    ctx->pc = 0x384B68u;
label_384b68:
    // 0x384b68: 0x8262002f  lb          $v0, 0x2F($s3)
    ctx->pc = 0x384b68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 47)));
    // 0x384b6c: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x384B6Cu;
    {
        const bool branch_taken_0x384b6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x384B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B6Cu;
        // 0x384b70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b6c) {
            ctx->pc = 0x384BB0u;
            goto label_384bb0;
        }
    }
    ctx->pc = 0x384B74u;
    // 0x384b74: 0x866a002c  lh          $t2, 0x2C($s3)
    ctx->pc = 0x384b74u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x384b78: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x384b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x384b7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384b80: 0x2484c570  addiu       $a0, $a0, -0x3A90
    ctx->pc = 0x384b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952304));
    // 0x384b84: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x384b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x384b88: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x384b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x384b8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x384b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384b90: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x384b90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x384b94: 0xa1a00  sll         $v1, $t2, 8
    ctx->pc = 0x384b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x384b98: 0xa4c00  sll         $t1, $t2, 16
    ctx->pc = 0x384b98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x384b9c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x384b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x384ba0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x384ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x384ba4: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x384BA4u;
    SET_GPR_U32(ctx, 31, 0x384BACu);
    ctx->pc = 0x384BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384BA4u;
    // 0x384ba8: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x384BA4u, 0x384BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384BACu;
label_384bac:
    // 0x384bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x384bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384bb0:
    // 0x384bb0: 0x86630028  lh          $v1, 0x28($s3)
    ctx->pc = 0x384bb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x384bb4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x384bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x384bb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384bbc: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x384bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x384bc0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x384bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x384bc4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x384bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384bc8: 0x3408fff9  ori         $t0, $zero, 0xFFF9
    ctx->pc = 0x384bc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x384bcc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x384bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x384bd0: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x384BD0u;
    SET_GPR_U32(ctx, 31, 0x384BD8u);
    ctx->pc = 0x384BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384BD0u;
    // 0x384bd4: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x384BD0u, 0x384BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384BD8u;
label_384bd8:
    // 0x384bd8: 0x82630030  lb          $v1, 0x30($s3)
    ctx->pc = 0x384bd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x384bdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x384bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x384be0: 0x26310015  addiu       $s1, $s1, 0x15
    ctx->pc = 0x384be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21));
    // 0x384be4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x384be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x384be8: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x384BE8u;
    {
        const bool branch_taken_0x384be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x384BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BE8u;
        // 0x384bec: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384be8) {
            ctx->pc = 0x384B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384b68;
        }
    }
    ctx->pc = 0x384BF0u;
label_384bf0:
    // 0x384bf0: 0x8664002c  lh          $a0, 0x2C($s3)
    ctx->pc = 0x384bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x384bf4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x384bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x384bf8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x384BF8u;
    {
        const bool branch_taken_0x384bf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x384BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BF8u;
        // 0x384bfc: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384bf8) {
            ctx->pc = 0x384C08u;
            goto label_384c08;
        }
    }
    ctx->pc = 0x384C00u;
    // 0x384c00: 0xa263002e  sb          $v1, 0x2E($s3)
    ctx->pc = 0x384c00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x384c04: 0x0  nop
    ctx->pc = 0x384c04u;
    // NOP
label_384c08:
    // 0x384c08: 0x8664002c  lh          $a0, 0x2C($s3)
    ctx->pc = 0x384c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x384c0c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x384c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384c10: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x384C10u;
    {
        const bool branch_taken_0x384c10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x384C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C10u;
        // 0x384c14: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c10) {
            ctx->pc = 0x384C20u;
            goto label_384c20;
        }
    }
    ctx->pc = 0x384C18u;
    // 0x384c18: 0xa263002e  sb          $v1, 0x2E($s3)
    ctx->pc = 0x384c18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x384c1c: 0x0  nop
    ctx->pc = 0x384c1cu;
    // NOP
label_384c20:
    // 0x384c20: 0x8264002e  lb          $a0, 0x2E($s3)
    ctx->pc = 0x384c20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 46)));
    // 0x384c24: 0x8663002c  lh          $v1, 0x2C($s3)
    ctx->pc = 0x384c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x384c28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x384c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x384c2c: 0xa663002c  sh          $v1, 0x2C($s3)
    ctx->pc = 0x384c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 3));
label_384c30:
    // 0x384c30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x384c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384c34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x384c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384c38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x384c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x384c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384c44: 0x3e00008  jr          $ra
    ctx->pc = 0x384C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C44u;
        // 0x384c48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384C4Cu;
}

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

// Function: sub_00148A60
// Address: 0x148a60 - 0x148bec
void sub_00148A60_0x148a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148A60_0x148a60");
#endif

    switch (ctx->pc) {
        case 0x148aa8u: goto label_148aa8;
        case 0x148ac4u: goto label_148ac4;
        default: break;
    }

    ctx->pc = 0x148a60u;

    // 0x148a60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x148a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x148a64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x148a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x148a68: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x148a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x148a6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x148a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x148a70: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x148a70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x148a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x148a78: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x148a78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x148a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x148a80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x148a80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148a88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x148a88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148a90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x148a90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148a98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x148a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148aa0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148aa4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x148aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_148aa8:
    // 0x148aa8: 0x96030032  lhu         $v1, 0x32($s0)
    ctx->pc = 0x148aa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x148aac: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x148AACu;
    {
        const bool branch_taken_0x148aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AACu;
        // 0x148ab0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148aac) {
            ctx->pc = 0x148B08u;
            goto label_148b08;
        }
    }
    ctx->pc = 0x148AB4u;
    // 0x148ab4: 0x26050032  addiu       $a1, $s0, 0x32
    ctx->pc = 0x148ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    // 0x148ab8: 0x27a6009e  addiu       $a2, $sp, 0x9E
    ctx->pc = 0x148ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 158));
    // 0x148abc: 0xc0522fc  jal         func_148BF0
    ctx->pc = 0x148ABCu;
    SET_GPR_U32(ctx, 31, 0x148AC4u);
    ctx->pc = 0x148AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148ABCu;
    // 0x148ac0: 0x27a7009c  addiu       $a3, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148BF0u, 0x148ABCu, 0x148AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148AC4u;
label_148ac4:
    // 0x148ac4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x148AC4u;
    {
        const bool branch_taken_0x148ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ac4) {
            ctx->pc = 0x148B08u;
            goto label_148b08;
        }
    }
    ctx->pc = 0x148ACCu;
    // 0x148acc: 0x87a4009e  lh          $a0, 0x9E($sp)
    ctx->pc = 0x148accu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 158)));
    // 0x148ad0: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x148ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x148ad4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x148ad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x148ad8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x148ad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x148adc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x148ADCu;
    {
        const bool branch_taken_0x148adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148ADCu;
        // 0x148ae0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148adc) {
            ctx->pc = 0x148AE8u;
            goto label_148ae8;
        }
    }
    ctx->pc = 0x148AE4u;
    // 0x148ae4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x148ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148ae8:
    // 0x148ae8: 0x87a4009c  lh          $a0, 0x9C($sp)
    ctx->pc = 0x148ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x148aec: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x148aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x148af0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x148af0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x148af4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x148af4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x148af8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x148AF8u;
    {
        const bool branch_taken_0x148af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148af8) {
            ctx->pc = 0x148B08u;
            goto label_148b08;
        }
    }
    ctx->pc = 0x148B00u;
    // 0x148b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x148b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b04: 0x0  nop
    ctx->pc = 0x148b04u;
    // NOP
label_148b08:
    // 0x148b08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x148b08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x148b0c: 0x2a830010  slti        $v1, $s4, 0x10
    ctx->pc = 0x148b0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x148b10: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x148B10u;
    {
        const bool branch_taken_0x148b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B10u;
        // 0x148b14: 0x2610000a  addiu       $s0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b10) {
            ctx->pc = 0x148AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148aa8;
        }
    }
    ctx->pc = 0x148B18u;
    // 0x148b18: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x148B18u;
    {
        const bool branch_taken_0x148b18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x148b18) {
            ctx->pc = 0x148B30u;
            goto label_148b30;
        }
    }
    ctx->pc = 0x148B20u;
    // 0x148b20: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x148b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x148b24: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x148b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x148b28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x148b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x148b2c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x148b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_148b30:
    // 0x148b30: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x148B30u;
    {
        const bool branch_taken_0x148b30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x148b30) {
            ctx->pc = 0x148B40u;
            goto label_148b40;
        }
    }
    ctx->pc = 0x148B38u;
    // 0x148b38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x148B38u;
    {
        const bool branch_taken_0x148b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B38u;
        // 0x148b3c: 0xa6c00000  sh          $zero, 0x0($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b38) {
            ctx->pc = 0x148B68u;
            goto label_148b68;
        }
    }
    ctx->pc = 0x148B40u;
label_148b40:
    // 0x148b40: 0x92a300d2  lbu         $v1, 0xD2($s5)
    ctx->pc = 0x148b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x148b44: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x148b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x148b48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148B48u;
    {
        const bool branch_taken_0x148b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148b48) {
            ctx->pc = 0x148B58u;
            goto label_148b58;
        }
    }
    ctx->pc = 0x148B50u;
    // 0x148b50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x148B50u;
    {
        const bool branch_taken_0x148b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B50u;
        // 0x148b54: 0xa6d20000  sh          $s2, 0x0($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b50) {
            ctx->pc = 0x148B68u;
            goto label_148b68;
        }
    }
    ctx->pc = 0x148B58u;
label_148b58:
    // 0x148b58: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x148b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x148b5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x148b5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x148b60: 0x31823  negu        $v1, $v1
    ctx->pc = 0x148b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x148b64: 0xa6c30000  sh          $v1, 0x0($s6)
    ctx->pc = 0x148b64u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
label_148b68:
    // 0x148b68: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148B68u;
    {
        const bool branch_taken_0x148b68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x148b68) {
            ctx->pc = 0x148B78u;
            goto label_148b78;
        }
    }
    ctx->pc = 0x148B70u;
    // 0x148b70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x148B70u;
    {
        const bool branch_taken_0x148b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B70u;
        // 0x148b74: 0xa6e00000  sh          $zero, 0x0($s7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b70) {
            ctx->pc = 0x148BA0u;
            goto label_148ba0;
        }
    }
    ctx->pc = 0x148B78u;
label_148b78:
    // 0x148b78: 0x92a300d2  lbu         $v1, 0xD2($s5)
    ctx->pc = 0x148b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x148b7c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x148b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x148b80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148B80u;
    {
        const bool branch_taken_0x148b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148b80) {
            ctx->pc = 0x148B90u;
            goto label_148b90;
        }
    }
    ctx->pc = 0x148B88u;
    // 0x148b88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x148B88u;
    {
        const bool branch_taken_0x148b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B88u;
        // 0x148b8c: 0xa6f10000  sh          $s1, 0x0($s7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b88) {
            ctx->pc = 0x148BA0u;
            goto label_148ba0;
        }
    }
    ctx->pc = 0x148B90u;
label_148b90:
    // 0x148b90: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x148b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x148b94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x148b94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x148b98: 0x31823  negu        $v1, $v1
    ctx->pc = 0x148b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x148b9c: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x148b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
label_148ba0:
    // 0x148ba0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x148ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x148ba4: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x148ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x148ba8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x148BA8u;
    {
        const bool branch_taken_0x148ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ba8) {
            ctx->pc = 0x148BC0u;
            goto label_148bc0;
        }
    }
    ctx->pc = 0x148BB0u;
    // 0x148bb0: 0x92a300d2  lbu         $v1, 0xD2($s5)
    ctx->pc = 0x148bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 210)));
    // 0x148bb4: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x148bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x148bb8: 0xa2a300d2  sb          $v1, 0xD2($s5)
    ctx->pc = 0x148bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 210), (uint8_t)GPR_U32(ctx, 3));
    // 0x148bbc: 0x0  nop
    ctx->pc = 0x148bbcu;
    // NOP
label_148bc0:
    // 0x148bc0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x148bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148bc4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x148bc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148bc8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x148bc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148bcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x148bccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148bd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x148bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148bd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148be4: 0x3e00008  jr          $ra
    ctx->pc = 0x148BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BE4u;
        // 0x148be8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148BECu;
}

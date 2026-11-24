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

// Function: sub_00386A10
// Address: 0x386a10 - 0x386b5c
void sub_00386A10_0x386a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386A10_0x386a10");
#endif

    switch (ctx->pc) {
        case 0x386a78u: goto label_386a78;
        case 0x386afcu: goto label_386afc;
        case 0x386b14u: goto label_386b14;
        default: break;
    }

    ctx->pc = 0x386a10u;

    // 0x386a10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x386a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x386a14: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x386a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x386a18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x386a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x386a1c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x386a1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x386a20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x386a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x386a24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x386a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x386a28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x386a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x386a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x386a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x386a30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x386a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x386a34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386a38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x386a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x386a3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x386a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x386a40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x386a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x386a44: 0x24540120  addiu       $s4, $v0, 0x120
    ctx->pc = 0x386a44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x386a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x386a4c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x386a4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x386a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x386a54: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x386a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a58: 0x8c53012c  lw          $s3, 0x12C($v0)
    ctx->pc = 0x386a58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x386a5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x386a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a60: 0x8042012a  lb          $v0, 0x12A($v0)
    ctx->pc = 0x386a60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 298)));
    // 0x386a64: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x386a64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x386a68: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x386A68u;
    {
        const bool branch_taken_0x386a68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A68u;
        // 0x386a6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a68) {
            ctx->pc = 0x386B30u;
            goto label_386b30;
        }
    }
    ctx->pc = 0x386A70u;
    // 0x386a70: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x386a70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x386a74: 0x0  nop
    ctx->pc = 0x386a74u;
    // NOP
label_386a78:
    // 0x386a78: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x386a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x386a7c: 0x14500026  bne         $v0, $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x386A7Cu;
    {
        const bool branch_taken_0x386a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x386a7c) {
            ctx->pc = 0x386B18u;
            goto label_386b18;
        }
    }
    ctx->pc = 0x386A84u;
    // 0x386a84: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x386a84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x386a88: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x386A88u;
    {
        const bool branch_taken_0x386a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A88u;
        // 0x386a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a88) {
            ctx->pc = 0x386B08u;
            goto label_386b08;
        }
    }
    ctx->pc = 0x386A90u;
    // 0x386a90: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x386A90u;
    {
        const bool branch_taken_0x386a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x386a90) {
            ctx->pc = 0x386B08u;
            goto label_386b08;
        }
    }
    ctx->pc = 0x386A98u;
    // 0x386a98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386a9c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386A9Cu;
    {
        const bool branch_taken_0x386a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x386a9c) {
            ctx->pc = 0x386AB0u;
            goto label_386ab0;
        }
    }
    ctx->pc = 0x386AA4u;
    // 0x386aa4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x386AA4u;
    {
        const bool branch_taken_0x386aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386aa4) {
            ctx->pc = 0x386B18u;
            goto label_386b18;
        }
    }
    ctx->pc = 0x386AACu;
    // 0x386aac: 0x0  nop
    ctx->pc = 0x386aacu;
    // NOP
label_386ab0:
    // 0x386ab0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x386AB0u;
    {
        const bool branch_taken_0x386ab0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x386AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AB0u;
        // 0x386ab4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ab0) {
            ctx->pc = 0x386AC0u;
            goto label_386ac0;
        }
    }
    ctx->pc = 0x386AB8u;
    // 0x386ab8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x386AB8u;
    {
        const bool branch_taken_0x386ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AB8u;
        // 0x386abc: 0xa2820002  sb          $v0, 0x2($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ab8) {
            ctx->pc = 0x386B00u;
            goto label_386b00;
        }
    }
    ctx->pc = 0x386AC0u;
label_386ac0:
    // 0x386ac0: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x386ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x386ac4: 0x8282000b  lb          $v0, 0xB($s4)
    ctx->pc = 0x386ac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x386ac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386acc: 0xa282000b  sb          $v0, 0xB($s4)
    ctx->pc = 0x386accu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x386ad0: 0x82830005  lb          $v1, 0x5($s4)
    ctx->pc = 0x386ad0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x386ad4: 0x8282000a  lb          $v0, 0xA($s4)
    ctx->pc = 0x386ad4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x386ad8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x386ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x386adc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x386adcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x386ae0: 0x0  nop
    ctx->pc = 0x386ae0u;
    // NOP
    // 0x386ae4: 0x0  nop
    ctx->pc = 0x386ae4u;
    // NOP
    // 0x386ae8: 0x1010  mfhi        $v0
    ctx->pc = 0x386ae8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x386aec: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x386aecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x386af0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x386af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x386af4: 0xc0e1c0c  jal         func_387030
    ctx->pc = 0x386AF4u;
    SET_GPR_U32(ctx, 31, 0x386AFCu);
    ctx->pc = 0x386AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386AF4u;
    // 0x386af8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387030u, 0x386AF4u, 0x386AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386AFCu;
label_386afc:
    // 0x386afc: 0x0  nop
    ctx->pc = 0x386afcu;
    // NOP
label_386b00:
    // 0x386b00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x386B00u;
    {
        const bool branch_taken_0x386b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B00u;
        // 0x386b04: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b00) {
            ctx->pc = 0x386B18u;
            goto label_386b18;
        }
    }
    ctx->pc = 0x386B08u;
label_386b08:
    // 0x386b08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x386b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386b0c: 0xc0e1c0c  jal         func_387030
    ctx->pc = 0x386B0Cu;
    SET_GPR_U32(ctx, 31, 0x386B14u);
    ctx->pc = 0x386B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386B0Cu;
    // 0x386b10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387030u, 0x386B0Cu, 0x386B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386B14u;
label_386b14:
    // 0x386b14: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x386b14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
label_386b18:
    // 0x386b18: 0x8282000a  lb          $v0, 0xA($s4)
    ctx->pc = 0x386b18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x386b1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x386b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x386b20: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x386b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x386b24: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x386B24u;
    {
        const bool branch_taken_0x386b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B24u;
        // 0x386b28: 0x26730006  addiu       $s3, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b24) {
            ctx->pc = 0x386A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386a78;
        }
    }
    ctx->pc = 0x386B2Cu;
    // 0x386b2c: 0x0  nop
    ctx->pc = 0x386b2cu;
    // NOP
label_386b30:
    // 0x386b30: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x386b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386b34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x386b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x386b38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x386b38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x386b3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x386b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x386b40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x386b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x386b44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x386b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386b48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x386b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x386b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x386b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386b54: 0x3e00008  jr          $ra
    ctx->pc = 0x386B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B54u;
        // 0x386b58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386B5Cu;
}

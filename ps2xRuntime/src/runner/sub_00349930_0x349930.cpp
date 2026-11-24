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

// Function: sub_00349930
// Address: 0x349930 - 0x349a78
void sub_00349930_0x349930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349930_0x349930");
#endif

    switch (ctx->pc) {
        case 0x3499a4u: goto label_3499a4;
        case 0x3499c4u: goto label_3499c4;
        case 0x349a10u: goto label_349a10;
        case 0x349a28u: goto label_349a28;
        case 0x349a50u: goto label_349a50;
        default: break;
    }

    ctx->pc = 0x349930u;

    // 0x349930: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x349930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x349934: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x349934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x349938: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x349938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x34993c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x34993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x349940: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x349940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x349944: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x349944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x349948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x349948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34994c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x349950: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x349950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349958: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x349958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34995c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349960: 0x24700044  addiu       $s0, $v1, 0x44
    ctx->pc = 0x349960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x349964: 0x94630044  lhu         $v1, 0x44($v1)
    ctx->pc = 0x349964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x349968: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349968u;
    {
        const bool branch_taken_0x349968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349968u;
        // 0x34996c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349968) {
            ctx->pc = 0x349978u;
            goto label_349978;
        }
    }
    ctx->pc = 0x349970u;
    // 0x349970: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x349970u;
    {
        const bool branch_taken_0x349970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349970u;
        // 0x349974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349970) {
            ctx->pc = 0x349A58u;
            goto label_349a58;
        }
    }
    ctx->pc = 0x349978u;
label_349978:
    // 0x349978: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x349978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34997c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34997Cu;
    {
        const bool branch_taken_0x34997c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34997c) {
            ctx->pc = 0x3499A8u;
            goto label_3499a8;
        }
    }
    ctx->pc = 0x349984u;
    // 0x349984: 0x9263005f  lbu         $v1, 0x5F($s3)
    ctx->pc = 0x349984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 95)));
    // 0x349988: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x349988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x34998c: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x34998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x349990: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x349990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x349994: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x349994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349998: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x349998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x34999c: 0xc0e09b0  jal         func_3826C0
    ctx->pc = 0x34999Cu;
    SET_GPR_U32(ctx, 31, 0x3499A4u);
    ctx->pc = 0x3499A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34999Cu;
    // 0x3499a0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3826C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3826C0u, 0x34999Cu, 0x3499A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499A4u;
label_3499a4:
    // 0x3499a4: 0x0  nop
    ctx->pc = 0x3499a4u;
    // NOP
label_3499a8:
    // 0x3499a8: 0x96140000  lhu         $s4, 0x0($s0)
    ctx->pc = 0x3499a8u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3499ac: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x3499ACu;
    {
        const bool branch_taken_0x3499ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3499B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499ACu;
        // 0x3499b0: 0xa6110000  sh          $s1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3499ac) {
            ctx->pc = 0x3499E0u;
            goto label_3499e0;
        }
    }
    ctx->pc = 0x3499B4u;
    // 0x3499b4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3499b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3499b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3499b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3499bc: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x3499BCu;
    SET_GPR_U32(ctx, 31, 0x3499C4u);
    ctx->pc = 0x3499C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499BCu;
    // 0x3499c0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x3499BCu, 0x3499C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499C4u;
label_3499c4:
    // 0x3499c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3499C4u;
    {
        const bool branch_taken_0x3499c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3499c4) {
            ctx->pc = 0x3499D4u;
            goto label_3499d4;
        }
    }
    ctx->pc = 0x3499CCu;
    // 0x3499cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3499CCu;
    {
        const bool branch_taken_0x3499cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3499D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499CCu;
        // 0x3499d0: 0x94420004  lhu         $v0, 0x4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3499cc) {
            ctx->pc = 0x3499D8u;
            goto label_3499d8;
        }
    }
    ctx->pc = 0x3499D4u;
label_3499d4:
    // 0x3499d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3499d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3499d8:
    // 0x3499d8: 0xa6620058  sh          $v0, 0x58($s3)
    ctx->pc = 0x3499d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x3499dc: 0x0  nop
    ctx->pc = 0x3499dcu;
    // NOP
label_3499e0:
    // 0x3499e0: 0x16400013  bnez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3499E0u;
    {
        const bool branch_taken_0x3499e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3499E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499E0u;
        // 0x3499e4: 0x3283ffff  andi        $v1, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3499e0) {
            ctx->pc = 0x349A30u;
            goto label_349a30;
        }
    }
    ctx->pc = 0x3499E8u;
    // 0x3499e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3499e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3499ec: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3499ECu;
    {
        const bool branch_taken_0x3499ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3499ec) {
            ctx->pc = 0x349A30u;
            goto label_349a30;
        }
    }
    ctx->pc = 0x3499F4u;
    // 0x3499f4: 0x9263005f  lbu         $v1, 0x5F($s3)
    ctx->pc = 0x3499f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 95)));
    // 0x3499f8: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x3499f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x3499fc: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x3499fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x349a00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x349a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349a04: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x349a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x349a08: 0xc0e098c  jal         func_382630
    ctx->pc = 0x349A08u;
    SET_GPR_U32(ctx, 31, 0x349A10u);
    ctx->pc = 0x349A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349A08u;
    // 0x349a0c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382630u, 0x349A08u, 0x349A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A10u;
label_349a10:
    // 0x349a10: 0x9263005f  lbu         $v1, 0x5F($s3)
    ctx->pc = 0x349a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 95)));
    // 0x349a14: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x349a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x349a18: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x349a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x349a1c: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x349a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x349a20: 0xc0e0a7c  jal         func_3829F0
    ctx->pc = 0x349A20u;
    SET_GPR_U32(ctx, 31, 0x349A28u);
    ctx->pc = 0x349A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349A20u;
    // 0x349a24: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3829F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3829F0u, 0x349A20u, 0x349A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A28u;
label_349a28:
    // 0x349a28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x349A28u;
    {
        const bool branch_taken_0x349a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349a28) {
            ctx->pc = 0x349A50u;
            goto label_349a50;
        }
    }
    ctx->pc = 0x349A30u;
label_349a30:
    // 0x349a30: 0x9263005f  lbu         $v1, 0x5F($s3)
    ctx->pc = 0x349a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 95)));
    // 0x349a34: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x349a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x349a38: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x349a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x349a3c: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x349a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x349a40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x349a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349a44: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x349a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x349a48: 0xc0e09b0  jal         func_3826C0
    ctx->pc = 0x349A48u;
    SET_GPR_U32(ctx, 31, 0x349A50u);
    ctx->pc = 0x349A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349A48u;
    // 0x349a4c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3826C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3826C0u, 0x349A48u, 0x349A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A50u;
label_349a50:
    // 0x349a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349a54: 0x0  nop
    ctx->pc = 0x349a54u;
    // NOP
label_349a58:
    // 0x349a58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x349a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349a5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x349a5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349a60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x349a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349a64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x349a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349a70: 0x3e00008  jr          $ra
    ctx->pc = 0x349A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A70u;
        // 0x349a74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A78u;
}

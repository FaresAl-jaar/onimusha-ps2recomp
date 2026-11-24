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

// Function: sub_0030BC50
// Address: 0x30bc50 - 0x30bda8
void sub_0030BC50_0x30bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BC50_0x30bc50");
#endif

    switch (ctx->pc) {
        case 0x30bcb8u: goto label_30bcb8;
        case 0x30bd80u: goto label_30bd80;
        default: break;
    }

    ctx->pc = 0x30bc50u;

    // 0x30bc50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30bc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30bc54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30bc58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30bc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30bc5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30bc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30bc60: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x30bc60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30bc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30bc68: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30bc68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30bc70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30bc70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30bc78: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30bc78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc7c: 0x90820044  lbu         $v0, 0x44($a0)
    ctx->pc = 0x30bc7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x30bc80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BC80u;
    {
        const bool branch_taken_0x30bc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC80u;
        // 0x30bc84: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc80) {
            ctx->pc = 0x30BC90u;
            goto label_30bc90;
        }
    }
    ctx->pc = 0x30BC88u;
    // 0x30bc88: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x30BC88u;
    {
        const bool branch_taken_0x30bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC88u;
        // 0x30bc8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc88) {
            ctx->pc = 0x30BD88u;
            goto label_30bd88;
        }
    }
    ctx->pc = 0x30BC90u;
label_30bc90:
    // 0x30bc90: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x30bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x30bc94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BC94u;
    {
        const bool branch_taken_0x30bc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC94u;
        // 0x30bc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc94) {
            ctx->pc = 0x30BCA8u;
            goto label_30bca8;
        }
    }
    ctx->pc = 0x30BC9Cu;
    // 0x30bc9c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x30BC9Cu;
    {
        const bool branch_taken_0x30bc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bc9c) {
            ctx->pc = 0x30BD88u;
            goto label_30bd88;
        }
    }
    ctx->pc = 0x30BCA4u;
    // 0x30bca4: 0x0  nop
    ctx->pc = 0x30bca4u;
    // NOP
label_30bca8:
    // 0x30bca8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x30bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x30bcac: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x30bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x30bcb0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x30BCB0u;
    SET_GPR_U32(ctx, 31, 0x30BCB8u);
    ctx->pc = 0x30BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BCB0u;
    // 0x30bcb4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x30BCB0u, 0x30BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BCB8u;
label_30bcb8:
    // 0x30bcb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BCB8u;
    {
        const bool branch_taken_0x30bcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bcb8) {
            ctx->pc = 0x30BCC8u;
            goto label_30bcc8;
        }
    }
    ctx->pc = 0x30BCC0u;
    // 0x30bcc0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x30BCC0u;
    {
        const bool branch_taken_0x30bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCC0u;
        // 0x30bcc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bcc0) {
            ctx->pc = 0x30BD88u;
            goto label_30bd88;
        }
    }
    ctx->pc = 0x30BCC8u;
label_30bcc8:
    // 0x30bcc8: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x30bcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x30bccc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30bcccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30bcd0: 0x105602  srl         $t2, $s0, 24
    ctx->pc = 0x30bcd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x30bcd4: 0x24640690  addiu       $a0, $v1, 0x690
    ctx->pc = 0x30bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1680));
    // 0x30bcd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30bcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcdc: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x30bcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30bce0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30bce4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30bce4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30bce8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x30bce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30bcec: 0x24630ee0  addiu       $v1, $v1, 0xEE0
    ctx->pc = 0x30bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3808));
    // 0x30bcf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30bcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bcf4: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x30bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x30bcf8: 0x834825  or          $t1, $a0, $v1
    ctx->pc = 0x30bcf8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30bcfc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x30bd00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x30bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x30bd04: 0x3c032028  lui         $v1, 0x2028
    ctx->pc = 0x30bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8232 << 16));
    // 0x30bd08: 0x34640116  ori         $a0, $v1, 0x116
    ctx->pc = 0x30bd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)278);
    // 0x30bd0c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x30bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x30bd10: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x30bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x30bd14: 0x8c4c0004  lw          $t4, 0x4($v0)
    ctx->pc = 0x30bd14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30bd18: 0x346b2000  ori         $t3, $v1, 0x2000
    ctx->pc = 0x30bd18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x30bd1c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x30bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x30bd20: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x30bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x30bd24: 0x34880e00  ori         $t0, $a0, 0xE00
    ctx->pc = 0x30bd24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3584);
    // 0x30bd28: 0x34670208  ori         $a3, $v1, 0x208
    ctx->pc = 0x30bd28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)520);
    // 0x30bd2c: 0x3c030808  lui         $v1, 0x808
    ctx->pc = 0x30bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2056 << 16));
    // 0x30bd30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30bd34: 0x34631008  ori         $v1, $v1, 0x1008
    ctx->pc = 0x30bd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4104);
    // 0x30bd38: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x30bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x30bd3c: 0x358c0040  ori         $t4, $t4, 0x40
    ctx->pc = 0x30bd3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)64);
    // 0x30bd40: 0xac4c0004  sw          $t4, 0x4($v0)
    ctx->pc = 0x30bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 12));
    // 0x30bd44: 0x8e6c0040  lw          $t4, 0x40($s3)
    ctx->pc = 0x30bd44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x30bd48: 0xac4c0010  sw          $t4, 0x10($v0)
    ctx->pc = 0x30bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 12));
    // 0x30bd4c: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x30bd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x30bd50: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x30bd50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x30bd54: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x30bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x30bd58: 0x8c4c0004  lw          $t4, 0x4($v0)
    ctx->pc = 0x30bd58u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30bd5c: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x30bd5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x30bd60: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x30bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x30bd64: 0xa04a000f  sb          $t2, 0xF($v0)
    ctx->pc = 0x30bd64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 10));
    // 0x30bd68: 0xac490020  sw          $t1, 0x20($v0)
    ctx->pc = 0x30bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 9));
    // 0x30bd6c: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x30bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x30bd70: 0xac480028  sw          $t0, 0x28($v0)
    ctx->pc = 0x30bd70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 8));
    // 0x30bd74: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x30bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x30bd78: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x30BD78u;
    SET_GPR_U32(ctx, 31, 0x30BD80u);
    ctx->pc = 0x30BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD78u;
    // 0x30bd7c: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x30BD78u, 0x30BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD80u;
label_30bd80:
    // 0x30bd80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bd84: 0x0  nop
    ctx->pc = 0x30bd84u;
    // NOP
label_30bd88:
    // 0x30bd88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30bd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30bd8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30bd8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30bd90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30bd90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30bd94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30bd94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bd98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bd9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30bd9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bda0: 0x3e00008  jr          $ra
    ctx->pc = 0x30BDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDA0u;
        // 0x30bda4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BDA8u;
}

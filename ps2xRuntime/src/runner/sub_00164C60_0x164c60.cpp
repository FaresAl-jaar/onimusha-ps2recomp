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

// Function: sub_00164C60
// Address: 0x164c60 - 0x1657c4
void sub_00164C60_0x164c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164C60_0x164c60");
#endif

    switch (ctx->pc) {
        case 0x164d04u: goto label_164d04;
        case 0x164dc0u: goto label_164dc0;
        case 0x1655c8u: goto label_1655c8;
        case 0x165624u: goto label_165624;
        case 0x165680u: goto label_165680;
        case 0x1656dcu: goto label_1656dc;
        default: break;
    }

    ctx->pc = 0x164c60u;

    // 0x164c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x164c64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x164c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x164c68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x164c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x164c6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164c70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x164c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164c78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x164c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164c80: 0x8cb10090  lw          $s1, 0x90($a1)
    ctx->pc = 0x164c80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x164c84: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x164c84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x164c88: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x164c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x164c8c: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x164c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x164c90: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x164c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x164c94: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x164c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
    // 0x164c98: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x164c98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x164c9c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x164c9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x164ca0: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x164ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x164ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164CA4u;
    {
        const bool branch_taken_0x164ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CA4u;
        // 0x164ca8: 0x2610aad0  addiu       $s0, $s0, -0x5530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ca4) {
            ctx->pc = 0x164CB8u;
            goto label_164cb8;
        }
    }
    ctx->pc = 0x164CACu;
    // 0x164cac: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x164cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x164cb0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x164cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x164cb4: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x164cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_164cb8:
    // 0x164cb8: 0x92220035  lbu         $v0, 0x35($s1)
    ctx->pc = 0x164cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x164cbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164CBCu;
    {
        const bool branch_taken_0x164cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164cbc) {
            ctx->pc = 0x164CD0u;
            goto label_164cd0;
        }
    }
    ctx->pc = 0x164CC4u;
    // 0x164cc4: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x164cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x164cc8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x164cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x164ccc: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x164cccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_164cd0:
    // 0x164cd0: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x164cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x164cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164CD4u;
    {
        const bool branch_taken_0x164cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164cd4) {
            ctx->pc = 0x164CE8u;
            goto label_164ce8;
        }
    }
    ctx->pc = 0x164CDCu;
    // 0x164cdc: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x164cdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x164ce0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x164ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x164ce4: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x164ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_164ce8:
    // 0x164ce8: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x164ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x164cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cf4: 0xa2620012  sb          $v0, 0x12($s3)
    ctx->pc = 0x164cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x164cf8: 0x92420013  lbu         $v0, 0x13($s2)
    ctx->pc = 0x164cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x164cfc: 0xc059924  jal         func_166490
    ctx->pc = 0x164CFCu;
    SET_GPR_U32(ctx, 31, 0x164D04u);
    ctx->pc = 0x164D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CFCu;
    // 0x164d00: 0xa2620013  sb          $v0, 0x13($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166490u, 0x164CFCu, 0x164D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D04u;
label_164d04:
    // 0x164d04: 0x8642002c  lh          $v0, 0x2C($s2)
    ctx->pc = 0x164d04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x164d08: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x164d08u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x164d0c: 0x9242004e  lbu         $v0, 0x4E($s2)
    ctx->pc = 0x164d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x164d10: 0xa262004e  sb          $v0, 0x4E($s3)
    ctx->pc = 0x164d10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x164d14: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x164d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x164d18: 0xa26200a0  sb          $v0, 0xA0($s3)
    ctx->pc = 0x164d18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x164d1c: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x164d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x164d20: 0xa26200a1  sb          $v0, 0xA1($s3)
    ctx->pc = 0x164d20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 2));
    // 0x164d24: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x164d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x164d28: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x164d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x164d2c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x164D2Cu;
    {
        const bool branch_taken_0x164d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164d2c) {
            ctx->pc = 0x164D40u;
            goto label_164d40;
        }
    }
    ctx->pc = 0x164D34u;
    // 0x164d34: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x164D34u;
    {
        const bool branch_taken_0x164d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d34) {
            ctx->pc = 0x164D98u;
            goto label_164d98;
        }
    }
    ctx->pc = 0x164D3Cu;
    // 0x164d3c: 0x0  nop
    ctx->pc = 0x164d3cu;
    // NOP
label_164d40:
    // 0x164d40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164d44: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x164d44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x164d48: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x164d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164d4c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x164d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164d50: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x164d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164d54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164d58: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x164d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x164d5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x164d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x164d60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164d64: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x164d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x164d68: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x164d68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x164d6c: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x164d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x164d70: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x164d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x164d74: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x164d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x164d78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x164d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164d7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164d80: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x164d80u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x164d84: 0x0  nop
    ctx->pc = 0x164d84u;
    // NOP
    // 0x164d88: 0x0  nop
    ctx->pc = 0x164d88u;
    // NOP
    // 0x164d8c: 0x1010  mfhi        $v0
    ctx->pc = 0x164d8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x164d90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164d94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_164d98:
    // 0x164d98: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x164d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x164d9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x164d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164da4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164dac: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x164dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x164db0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164db4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164DB4u;
    {
        const bool branch_taken_0x164db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DB4u;
        // 0x164db8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164db4) {
            ctx->pc = 0x164DC8u;
            goto label_164dc8;
        }
    }
    ctx->pc = 0x164DBCu;
    // 0x164dbc: 0x0  nop
    ctx->pc = 0x164dbcu;
    // NOP
label_164dc0:
    // 0x164dc0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x164dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x164dc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x164dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_164dc8:
    // 0x164dc8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x164dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x164dcc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x164DCCu;
    {
        const bool branch_taken_0x164dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164dcc) {
            ctx->pc = 0x164DE8u;
            goto label_164de8;
        }
    }
    ctx->pc = 0x164DD4u;
    // 0x164dd4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x164dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x164dd8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x164dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x164ddc: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x164DDCu;
    {
        const bool branch_taken_0x164ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164ddc) {
            ctx->pc = 0x164DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164dc0;
        }
    }
    ctx->pc = 0x164DE4u;
    // 0x164de4: 0x0  nop
    ctx->pc = 0x164de4u;
    // NOP
label_164de8:
    // 0x164de8: 0x92260023  lbu         $a2, 0x23($s1)
    ctx->pc = 0x164de8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x164dec: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x164decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x164df0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x164df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x164df4: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x164df4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x164df8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x164DF8u;
    {
        const bool branch_taken_0x164df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DF8u;
        // 0x164dfc: 0x92250022  lbu         $a1, 0x22($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164df8) {
            ctx->pc = 0x164E18u;
            goto label_164e18;
        }
    }
    ctx->pc = 0x164E00u;
    // 0x164e00: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x164e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x164e04: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x164e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x164e08: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x164e08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x164e0c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x164E0Cu;
    {
        const bool branch_taken_0x164e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164e0c) {
            ctx->pc = 0x164E18u;
            goto label_164e18;
        }
    }
    ctx->pc = 0x164E14u;
    // 0x164e14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x164e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164e18:
    // 0x164e18: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x164e18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x164e1c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x164e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x164e20: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164E20u;
    {
        const bool branch_taken_0x164e20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x164e20) {
            ctx->pc = 0x164E30u;
            goto label_164e30;
        }
    }
    ctx->pc = 0x164E28u;
    // 0x164e28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x164E28u;
    {
        const bool branch_taken_0x164e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164e28) {
            ctx->pc = 0x164E80u;
            goto label_164e80;
        }
    }
    ctx->pc = 0x164E30u;
label_164e30:
    // 0x164e30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164e34: 0x8c25f008  lw          $a1, -0xFF8($at)
    ctx->pc = 0x164e34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F008u));
    // 0x164e38: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x164e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x164e3c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x164e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x164e40: 0x3484a9e5  ori         $a0, $a0, 0xA9E5
    ctx->pc = 0x164e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x164e44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164e48: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x164e48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x164e4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164e50: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x164e50u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x164e54: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x164e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x164e58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x164e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x164e5c: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x164e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x164e60: 0xac24f008  sw          $a0, -0xFF8($at)
    ctx->pc = 0x164e60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 4));
    // 0x164e64: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x164e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x164e68: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x164e68u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x164e6c: 0x0  nop
    ctx->pc = 0x164e6cu;
    // NOP
    // 0x164e70: 0x0  nop
    ctx->pc = 0x164e70u;
    // NOP
    // 0x164e74: 0x1810  mfhi        $v1
    ctx->pc = 0x164e74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x164e78: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x164e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x164e7c: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x164e7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_164e80:
    // 0x164e80: 0x8e680018  lw          $t0, 0x18($s3)
    ctx->pc = 0x164e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x164e84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164e88: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x164e88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x164e8c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x164e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x164e90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164e94: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x164e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164e98: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x164e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x164e9c: 0x3449a9e5  ori         $t1, $v0, 0xA9E5
    ctx->pc = 0x164e9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164ea0: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x164ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x164ea4: 0x24020fff  addiu       $v0, $zero, 0xFFF
    ctx->pc = 0x164ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x164ea8: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x164ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x164eac: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x164eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x164eb0: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x164eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x164eb4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x164eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x164eb8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x164eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x164ebc: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x164ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x164ec0: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x164ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
    // 0x164ec4: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x164ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x164ec8: 0x90c60002  lbu         $a2, 0x2($a2)
    ctx->pc = 0x164ec8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x164ecc: 0xa266002f  sb          $a2, 0x2F($s3)
    ctx->pc = 0x164eccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 47), (uint8_t)GPR_U32(ctx, 6));
    // 0x164ed0: 0x8c26f008  lw          $a2, -0xFF8($at)
    ctx->pc = 0x164ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x164ed4: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x164ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x164ed8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164edc: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x164edcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x164ee0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x164ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x164ee4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x164ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x164ee8: 0xc93026  xor         $a2, $a2, $t1
    ctx->pc = 0x164ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 9));
    // 0x164eec: 0xac26f008  sw          $a2, -0xFF8($at)
    ctx->pc = 0x164eecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 6));
    // 0x164ef0: 0x64202  srl         $t0, $a2, 8
    ctx->pc = 0x164ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x164ef4: 0x92270028  lbu         $a3, 0x28($s1)
    ctx->pc = 0x164ef4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x164ef8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164efc: 0x96460028  lhu         $a2, 0x28($s2)
    ctx->pc = 0x164efcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x164f00: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x164f00u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x164f04: 0xe23807  srav        $a3, $v0, $a3
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x164f08: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x164f08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x164f0c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x164f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x164f10: 0xa6660028  sh          $a2, 0x28($s3)
    ctx->pc = 0x164f10u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x164f14: 0x8c26f008  lw          $a2, -0xFF8($at)
    ctx->pc = 0x164f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x164f18: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x164f18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x164f1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164f20: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x164f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x164f24: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x164f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x164f28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x164f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x164f2c: 0xc93026  xor         $a2, $a2, $t1
    ctx->pc = 0x164f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 9));
    // 0x164f30: 0xac26f008  sw          $a2, -0xFF8($at)
    ctx->pc = 0x164f30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 6));
    // 0x164f34: 0x64202  srl         $t0, $a2, 8
    ctx->pc = 0x164f34u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x164f38: 0x92270029  lbu         $a3, 0x29($s1)
    ctx->pc = 0x164f38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x164f3c: 0x9646002a  lhu         $a2, 0x2A($s2)
    ctx->pc = 0x164f3cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x164f40: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x164f40u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x164f44: 0xe23807  srav        $a3, $v0, $a3
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x164f48: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x164f48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x164f4c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x164f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x164f50: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x164f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x164f54: 0xa666002a  sh          $a2, 0x2A($s3)
    ctx->pc = 0x164f54u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 6));
    // 0x164f58: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x164f58u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164f5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164f60: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x164f60u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f64: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x164f64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x164f68: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x164f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x164f6c: 0x8c2bf008  lw          $t3, -0xFF8($at)
    ctx->pc = 0x164f6cu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81F008u));
    // 0x164f70: 0x3489a9e5  ori         $t1, $a0, 0xA9E5
    ctx->pc = 0x164f70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x164f74: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x164f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x164f78: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x164f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x164f7c: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x164f7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x164f80: 0x3c06873c  lui         $a2, 0x873C
    ctx->pc = 0x164f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34620 << 16));
    // 0x164f84: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x164f84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x164f88: 0x34c6a9e5  ori         $a2, $a2, 0xA9E5
    ctx->pc = 0x164f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43493);
    // 0x164f8c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x164f90: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x164f90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x164f94: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x164f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x164f98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164f9c: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x164f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x164fa0: 0x8c2af008  lw          $t2, -0xFF8($at)
    ctx->pc = 0x164fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x164fa4: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x164fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x164fa8: 0x3488a9e5  ori         $t0, $a0, 0xA9E5
    ctx->pc = 0x164fa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x164fac: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x164facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x164fb0: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x164fb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x164fb4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x164fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x164fb8: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x164fb8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x164fbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164fc0: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x164fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x164fc4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x164fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x164fc8: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x164fc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x164fcc: 0xac29f008  sw          $t1, -0xFF8($at)
    ctx->pc = 0x164fccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 9));
    // 0x164fd0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x164fd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x164fd4: 0x94ac2  srl         $t1, $t1, 11
    ctx->pc = 0x164fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 11));
    // 0x164fd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164fdc: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x164fdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x164fe0: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x164fe4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x164fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x164fe8: 0x3487a9e5  ori         $a3, $a0, 0xA9E5
    ctx->pc = 0x164fe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x164fec: 0x2094821  addu        $t1, $s0, $t1
    ctx->pc = 0x164fecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x164ff0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x164ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x164ff4: 0xc5270000  lwc1        $f7, 0x0($t1)
    ctx->pc = 0x164ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x164ff8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x164ff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164ffc: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x164ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165000: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x165000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165004: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x165008: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x165008u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x16500c: 0x46053941  sub.s       $f5, $f7, $f5
    ctx->pc = 0x16500cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x165010: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x165010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x165014: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x165014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x165018: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x165018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x16501c: 0x8c2af008  lw          $t2, -0xFF8($at)
    ctx->pc = 0x16501cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x165020: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x165020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165024: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x165024u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x165028: 0x8c29f008  lw          $t1, -0xFF8($at)
    ctx->pc = 0x165028u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x16502c: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x16502cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x165030: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x165030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165034: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x165034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x165038: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x165038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x16503c: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x16503cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x165040: 0xac28f008  sw          $t0, -0xFF8($at)
    ctx->pc = 0x165040u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 8));
    // 0x165044: 0x84382  srl         $t0, $t0, 14
    ctx->pc = 0x165044u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x165048: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x165048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16504c: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x16504cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x165050: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x165050u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x165054: 0x2084021  addu        $t0, $s0, $t0
    ctx->pc = 0x165054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x165058: 0xc5050000  lwc1        $f5, 0x0($t0)
    ctx->pc = 0x165058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16505c: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x16505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165060: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x165060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165064: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x165064u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x165068: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x165068u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x16506c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16506cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x165070: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x165070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x165074: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x165074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x165078: 0x8c29f008  lw          $t1, -0xFF8($at)
    ctx->pc = 0x165078u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x16507c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16507cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165080: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x165080u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x165084: 0x8c28f008  lw          $t0, -0xFF8($at)
    ctx->pc = 0x165084u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x165088: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x165088u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x16508c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16508cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165090: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x165090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x165094: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x165098: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x165098u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x16509c: 0xac27f008  sw          $a3, -0xFF8($at)
    ctx->pc = 0x16509cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 7));
    // 0x1650a0: 0x73c42  srl         $a3, $a3, 17
    ctx->pc = 0x1650a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 17));
    // 0x1650a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1650a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1650a8: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x1650a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x1650ac: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1650acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1650b0: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1650b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1650b4: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x1650b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1650b8: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x1650b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1650bc: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x1650bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1650c0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1650c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1650c4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1650c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1650c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1650c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1650cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1650ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1650d0: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x1650d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x1650d4: 0x788c0000  lq          $t4, 0x0($a0)
    ctx->pc = 0x1650d4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1650d8: 0x7cac0000  sq          $t4, 0x0($a1)
    ctx->pc = 0x1650d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 12));
    // 0x1650dc: 0x92640023  lbu         $a0, 0x23($s3)
    ctx->pc = 0x1650dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x1650e0: 0xa2640094  sb          $a0, 0x94($s3)
    ctx->pc = 0x1650e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 4));
    // 0x1650e4: 0xa2600095  sb          $zero, 0x95($s3)
    ctx->pc = 0x1650e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 149), (uint8_t)GPR_U32(ctx, 0));
    // 0x1650e8: 0x8c25f008  lw          $a1, -0xFF8($at)
    ctx->pc = 0x1650e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x1650ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1650ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1650f0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1650f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1650f4: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x1650f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x1650f8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1650f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1650fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1650fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165100: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x165100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x165104: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x165104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x165108: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x165108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x16510c: 0xac24f008  sw          $a0, -0xFF8($at)
    ctx->pc = 0x16510cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 4));
    // 0x165110: 0x422c2  srl         $a0, $a0, 11
    ctx->pc = 0x165110u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x165114: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x165114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x165118: 0x9624003e  lhu         $a0, 0x3E($s1)
    ctx->pc = 0x165118u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x16511c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16511cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x165120: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x165120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x165124: 0x30e4f000  andi        $a0, $a3, 0xF000
    ctx->pc = 0x165124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x165128: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165128u;
    {
        const bool branch_taken_0x165128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165128u;
        // 0x16512c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165128) {
            ctx->pc = 0x165138u;
            goto label_165138;
        }
    }
    ctx->pc = 0x165130u;
    // 0x165130: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x165130u;
    {
        const bool branch_taken_0x165130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165130u;
        // 0x165134: 0x30e20fff  andi        $v0, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165130) {
            ctx->pc = 0x165158u;
            goto label_165158;
        }
    }
    ctx->pc = 0x165138u;
label_165138:
    // 0x165138: 0x73303  sra         $a2, $a3, 12
    ctx->pc = 0x165138u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 12));
    // 0x16513c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x16513cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x165140: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x165140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x165144: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x165144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x165148: 0x30e40fff  andi        $a0, $a3, 0xFFF
    ctx->pc = 0x165148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x16514c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x16514cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x165150: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x165150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x165154: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x165154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_165158:
    // 0x165158: 0xa6620096  sh          $v0, 0x96($s3)
    ctx->pc = 0x165158u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x16515c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16515cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165160: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x165160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x165164: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x165164u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x165168: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x165168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x16516c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x16516cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x165170: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x165170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165174: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x165174u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x165178: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x165178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16517c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165180: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x165180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x165184: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x165184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x165188: 0x96240040  lhu         $a0, 0x40($s1)
    ctx->pc = 0x165188u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x16518c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x16518cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x165190: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x165190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x165194: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x165194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x165198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165198u;
    {
        const bool branch_taken_0x165198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165198) {
            ctx->pc = 0x1651A8u;
            goto label_1651a8;
        }
    }
    ctx->pc = 0x1651A0u;
    // 0x1651a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1651A0u;
    {
        const bool branch_taken_0x1651a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651A0u;
        // 0x1651a4: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651a0) {
            ctx->pc = 0x1651D0u;
            goto label_1651d0;
        }
    }
    ctx->pc = 0x1651A8u;
label_1651a8:
    // 0x1651a8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x1651a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1651ac: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1651acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1651b0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1651b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1651b4: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x1651b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1651b8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1651b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1651bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1651bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1651c0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x1651c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1651c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1651c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1651c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1651c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1651cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1651ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1651d0:
    // 0x1651d0: 0xa6620098  sh          $v0, 0x98($s3)
    ctx->pc = 0x1651d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x1651d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1651d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1651d8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1651d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1651dc: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x1651dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x1651e0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1651e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1651e4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1651e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1651e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1651e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1651ec: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1651ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1651f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1651f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1651f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1651f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1651f8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1651f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1651fc: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x1651fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x165200: 0x96240042  lhu         $a0, 0x42($s1)
    ctx->pc = 0x165200u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x165204: 0x21442  srl         $v0, $v0, 17
    ctx->pc = 0x165204u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 17));
    // 0x165208: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x165208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16520c: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x16520cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x165210: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165210u;
    {
        const bool branch_taken_0x165210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165210) {
            ctx->pc = 0x165220u;
            goto label_165220;
        }
    }
    ctx->pc = 0x165218u;
    // 0x165218: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x165218u;
    {
        const bool branch_taken_0x165218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165218u;
        // 0x16521c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165218) {
            ctx->pc = 0x165248u;
            goto label_165248;
        }
    }
    ctx->pc = 0x165220u;
label_165220:
    // 0x165220: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x165220u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x165224: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x165224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x165228: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x165228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16522c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x16522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x165230: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x165230u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165234: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x165234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x165238: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x165238u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x16523c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16523cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x165240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165244: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x165244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_165248:
    // 0x165248: 0xa662009a  sh          $v0, 0x9A($s3)
    ctx->pc = 0x165248u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 154), (uint16_t)GPR_U32(ctx, 2));
    // 0x16524c: 0x96640096  lhu         $a0, 0x96($s3)
    ctx->pc = 0x16524cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x165250: 0x96630098  lhu         $v1, 0x98($s3)
    ctx->pc = 0x165250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x165254: 0x9662009a  lhu         $v0, 0x9A($s3)
    ctx->pc = 0x165254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x165258: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x165258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16525c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165260: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x165260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x165264: 0xa6620092  sh          $v0, 0x92($s3)
    ctx->pc = 0x165264u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x165268: 0x96620096  lhu         $v0, 0x96($s3)
    ctx->pc = 0x165268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x16526c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16526Cu;
    {
        const bool branch_taken_0x16526c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16526Cu;
        // 0x165270: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16526c) {
            ctx->pc = 0x1652E8u;
            goto label_1652e8;
        }
    }
    ctx->pc = 0x165274u;
    // 0x165274: 0xa6640090  sh          $a0, 0x90($s3)
    ctx->pc = 0x165274u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x165278: 0x92630094  lbu         $v1, 0x94($s3)
    ctx->pc = 0x165278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x16527c: 0x96620096  lhu         $v0, 0x96($s3)
    ctx->pc = 0x16527cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x165280: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x165280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x165284: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x165284u;
    {
        const bool branch_taken_0x165284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x165284) {
            ctx->pc = 0x165298u;
            goto label_165298;
        }
    }
    ctx->pc = 0x16528Cu;
    // 0x16528c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16528Cu;
    {
        const bool branch_taken_0x16528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16528Cu;
        // 0x165290: 0xae640030  sw          $a0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16528c) {
            ctx->pc = 0x1652C0u;
            goto label_1652c0;
        }
    }
    ctx->pc = 0x165294u;
    // 0x165294: 0x0  nop
    ctx->pc = 0x165294u;
    // NOP
label_165298:
    // 0x165298: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x165298u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16529c: 0x0  nop
    ctx->pc = 0x16529cu;
    // NOP
    // 0x1652a0: 0x0  nop
    ctx->pc = 0x1652a0u;
    // NOP
    // 0x1652a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1652a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1652a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1652A8u;
    {
        const bool branch_taken_0x1652a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1652a8) {
            ctx->pc = 0x1652B8u;
            goto label_1652b8;
        }
    }
    ctx->pc = 0x1652B0u;
    // 0x1652b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1652B0u;
    {
        const bool branch_taken_0x1652b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652B0u;
        // 0x1652b4: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652b0) {
            ctx->pc = 0x1652C0u;
            goto label_1652c0;
        }
    }
    ctx->pc = 0x1652B8u;
label_1652b8:
    // 0x1652b8: 0xae640030  sw          $a0, 0x30($s3)
    ctx->pc = 0x1652b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 4));
    // 0x1652bc: 0x0  nop
    ctx->pc = 0x1652bcu;
    // NOP
label_1652c0:
    // 0x1652c0: 0x92630094  lbu         $v1, 0x94($s3)
    ctx->pc = 0x1652c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x1652c4: 0x96620096  lhu         $v0, 0x96($s3)
    ctx->pc = 0x1652c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x1652c8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1652c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1652cc: 0x0  nop
    ctx->pc = 0x1652ccu;
    // NOP
    // 0x1652d0: 0x0  nop
    ctx->pc = 0x1652d0u;
    // NOP
    // 0x1652d4: 0x1012  mflo        $v0
    ctx->pc = 0x1652d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1652d8: 0xa2620095  sb          $v0, 0x95($s3)
    ctx->pc = 0x1652d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 149), (uint8_t)GPR_U32(ctx, 2));
    // 0x1652dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1652DCu;
    {
        const bool branch_taken_0x1652dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652DCu;
        // 0x1652e0: 0xa2620023  sb          $v0, 0x23($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652dc) {
            ctx->pc = 0x1652F8u;
            goto label_1652f8;
        }
    }
    ctx->pc = 0x1652E4u;
    // 0x1652e4: 0x0  nop
    ctx->pc = 0x1652e4u;
    // NOP
label_1652e8:
    // 0x1652e8: 0x96630098  lhu         $v1, 0x98($s3)
    ctx->pc = 0x1652e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x1652ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1652ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1652f0: 0xa6630090  sh          $v1, 0x90($s3)
    ctx->pc = 0x1652f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x1652f4: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x1652f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_1652f8:
    // 0x1652f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1652f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1652fc: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x1652fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x165300: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x165300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x165304: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x165304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x165308: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x165308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16530c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16530cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165310: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x165310u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x165314: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x165314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x165318: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16531c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x16531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x165320: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x165320u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x165324: 0x96250044  lhu         $a1, 0x44($s1)
    ctx->pc = 0x165324u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x165328: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x16532c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16532cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x165330: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x165330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x165334: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x165334u;
    {
        const bool branch_taken_0x165334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165334u;
        // 0x165338: 0x30a20800  andi        $v0, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165334) {
            ctx->pc = 0x165378u;
            goto label_165378;
        }
    }
    ctx->pc = 0x16533Cu;
    // 0x16533c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16533Cu;
    {
        const bool branch_taken_0x16533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16533c) {
            ctx->pc = 0x165358u;
            goto label_165358;
        }
    }
    ctx->pc = 0x165344u;
    // 0x165344: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x165344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x165348: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16534c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16534cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x165350: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x165350u;
    {
        const bool branch_taken_0x165350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165350u;
        // 0x165354: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165350) {
            ctx->pc = 0x165368u;
            goto label_165368;
        }
    }
    ctx->pc = 0x165358u;
label_165358:
    // 0x165358: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x165358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x16535c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x165360: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x165364: 0x0  nop
    ctx->pc = 0x165364u;
    // NOP
label_165368:
    // 0x165368: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16536c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16536Cu;
    {
        const bool branch_taken_0x16536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16536Cu;
        // 0x165370: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16536c) {
            ctx->pc = 0x1653D0u;
            goto label_1653d0;
        }
    }
    ctx->pc = 0x165374u;
    // 0x165374: 0x0  nop
    ctx->pc = 0x165374u;
    // NOP
label_165378:
    // 0x165378: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x165378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16537c: 0x52303  sra         $a0, $a1, 12
    ctx->pc = 0x16537cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 12));
    // 0x165380: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x165380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x165384: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x165384u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x165388: 0x24030fff  addiu       $v1, $zero, 0xFFF
    ctx->pc = 0x165388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x16538c: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x16538cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x165390: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x165390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x165394: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x165394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x165398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x165398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16539c: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x16539cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x1653a0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1653a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1653a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1653A4u;
    {
        const bool branch_taken_0x1653a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653A4u;
        // 0x1653a8: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653a4) {
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x1653ACu;
    // 0x1653ac: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1653acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1653b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1653b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1653b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1653B4u;
    {
        const bool branch_taken_0x1653b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653B4u;
        // 0x1653b8: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653b4) {
            ctx->pc = 0x1653C8u;
            goto label_1653c8;
        }
    }
    ctx->pc = 0x1653BCu;
    // 0x1653bc: 0x0  nop
    ctx->pc = 0x1653bcu;
    // NOP
label_1653c0:
    // 0x1653c0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1653c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1653c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1653c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1653c8:
    // 0x1653c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1653c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1653cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1653ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1653d0:
    // 0x1653d0: 0xa662009c  sh          $v0, 0x9C($s3)
    ctx->pc = 0x1653d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 156), (uint16_t)GPR_U32(ctx, 2));
    // 0x1653d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1653d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1653d8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1653d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1653dc: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x1653dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x1653e0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1653e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1653e4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1653e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1653e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1653e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1653ec: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1653ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1653f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1653f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1653f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1653f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1653f8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1653f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1653fc: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x1653fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x165400: 0x96250046  lhu         $a1, 0x46($s1)
    ctx->pc = 0x165400u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x165404: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x165404u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x165408: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x165408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16540c: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x16540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x165410: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x165410u;
    {
        const bool branch_taken_0x165410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165410) {
            ctx->pc = 0x165458u;
            goto label_165458;
        }
    }
    ctx->pc = 0x165418u;
    // 0x165418: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x165418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x16541c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16541Cu;
    {
        const bool branch_taken_0x16541c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16541Cu;
        // 0x165420: 0x30a207ff  andi        $v0, $a1, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16541c) {
            ctx->pc = 0x165438u;
            goto label_165438;
        }
    }
    ctx->pc = 0x165424u;
    // 0x165424: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x165428: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165428u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16542c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16542Cu;
    {
        const bool branch_taken_0x16542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16542Cu;
        // 0x165430: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16542c) {
            ctx->pc = 0x165448u;
            goto label_165448;
        }
    }
    ctx->pc = 0x165434u;
    // 0x165434: 0x0  nop
    ctx->pc = 0x165434u;
    // NOP
label_165438:
    // 0x165438: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x165438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x16543c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x165440: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165440u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x165444: 0x0  nop
    ctx->pc = 0x165444u;
    // NOP
label_165448:
    // 0x165448: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16544c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16544Cu;
    {
        const bool branch_taken_0x16544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16544Cu;
        // 0x165450: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16544c) {
            ctx->pc = 0x1654B0u;
            goto label_1654b0;
        }
    }
    ctx->pc = 0x165454u;
    // 0x165454: 0x0  nop
    ctx->pc = 0x165454u;
    // NOP
label_165458:
    // 0x165458: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x165458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16545c: 0x52303  sra         $a0, $a1, 12
    ctx->pc = 0x16545cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 12));
    // 0x165460: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x165460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x165464: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x165464u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x165468: 0x24030fff  addiu       $v1, $zero, 0xFFF
    ctx->pc = 0x165468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x16546c: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x16546cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x165470: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x165470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x165474: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x165474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x165478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x165478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16547c: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x16547cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x165480: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x165480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x165484: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x165484u;
    {
        const bool branch_taken_0x165484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165484u;
        // 0x165488: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165484) {
            ctx->pc = 0x1654A0u;
            goto label_1654a0;
        }
    }
    ctx->pc = 0x16548Cu;
    // 0x16548c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x16548cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x165490: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x165494: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165494u;
    {
        const bool branch_taken_0x165494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165494u;
        // 0x165498: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165494) {
            ctx->pc = 0x1654A8u;
            goto label_1654a8;
        }
    }
    ctx->pc = 0x16549Cu;
    // 0x16549c: 0x0  nop
    ctx->pc = 0x16549cu;
    // NOP
label_1654a0:
    // 0x1654a0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1654a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1654a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1654a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1654a8:
    // 0x1654a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1654a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1654ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1654acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1654b0:
    // 0x1654b0: 0xa662009e  sh          $v0, 0x9E($s3)
    ctx->pc = 0x1654b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x1654b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1654b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1654b8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1654b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1654bc: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x1654bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x1654c0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1654c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1654c4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1654c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1654c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1654c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1654cc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1654ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1654d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1654d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1654d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1654d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1654d8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1654d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1654dc: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x1654dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x1654e0: 0x96240054  lhu         $a0, 0x54($s1)
    ctx->pc = 0x1654e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1654e4: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x1654e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1654e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1654e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1654ec: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x1654ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x1654f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1654F0u;
    {
        const bool branch_taken_0x1654f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1654f0) {
            ctx->pc = 0x165500u;
            goto label_165500;
        }
    }
    ctx->pc = 0x1654F8u;
    // 0x1654f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1654F8u;
    {
        const bool branch_taken_0x1654f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1654FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654F8u;
        // 0x1654fc: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654f8) {
            ctx->pc = 0x165528u;
            goto label_165528;
        }
    }
    ctx->pc = 0x165500u;
label_165500:
    // 0x165500: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x165500u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x165504: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x165504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x165508: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x165508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16550c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x16550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x165510: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x165510u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165514: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x165514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x165518: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x165518u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x16551c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x165520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165524: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x165524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_165528:
    // 0x165528: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x165528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16552c: 0xa4220280  sh          $v0, 0x280($at)
    ctx->pc = 0x16552cu;
    runtime->Store16(rdram, ctx, 0x70000280u, (uint16_t)GPR_U32(ctx, 2));
    // 0x165530: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165534: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x165534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x165538: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x165538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x16553c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x16553cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x165540: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x165540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x165544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x165544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165548: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x165548u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x16554c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16554cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x165550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165554: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x165554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x165558: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x165558u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x16555c: 0x96240056  lhu         $a0, 0x56($s1)
    ctx->pc = 0x16555cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
    // 0x165560: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x165560u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x165564: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x165564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x165568: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x165568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x16556c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16556Cu;
    {
        const bool branch_taken_0x16556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16556c) {
            ctx->pc = 0x165580u;
            goto label_165580;
        }
    }
    ctx->pc = 0x165574u;
    // 0x165574: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x165574u;
    {
        const bool branch_taken_0x165574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165574u;
        // 0x165578: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165574) {
            ctx->pc = 0x1655A8u;
            goto label_1655a8;
        }
    }
    ctx->pc = 0x16557Cu;
    // 0x16557c: 0x0  nop
    ctx->pc = 0x16557cu;
    // NOP
label_165580:
    // 0x165580: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x165584: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x165584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x165588: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x165588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16558c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x16558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x165590: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x165590u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165594: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x165594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x165598: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x165598u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x16559c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16559cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1655a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1655a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1655a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1655a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1655a8:
    // 0x1655a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1655a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1655ac: 0xa4220282  sh          $v0, 0x282($at)
    ctx->pc = 0x1655acu;
    runtime->Store16(rdram, ctx, 0x70000282u, (uint16_t)GPR_U32(ctx, 2));
    // 0x1655b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1655b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1655b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1655b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1655b8: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x1655b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1655bc: 0x34450280  ori         $a1, $v0, 0x280
    ctx->pc = 0x1655bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)640);
    // 0x1655c0: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x1655C0u;
    SET_GPR_U32(ctx, 31, 0x1655C8u);
    ctx->pc = 0x1655C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655C0u;
    // 0x1655c4: 0xa4200284  sh          $zero, 0x284($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 644), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x1655C0u, 0x1655C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655C8u;
label_1655c8:
    // 0x1655c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1655c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1655cc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1655ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1655d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1655d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1655d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1655d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1655d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1655d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1655dc: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1655dcu;
    runtime->Store128(rdram, ctx, 0x70000000u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1655e0: 0x44011000  mfc1        $at, $f2
    ctx->pc = 0x1655e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1655e4: 0x0  nop
    ctx->pc = 0x1655e4u;
    // NOP
    // 0x1655e8: 0xac610000  sw          $at, 0x0($v1)
    ctx->pc = 0x1655e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 1));
    // 0x1655ec: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x1655ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1655f0: 0x0  nop
    ctx->pc = 0x1655f0u;
    // NOP
    // 0x1655f4: 0xac610004  sw          $at, 0x4($v1)
    ctx->pc = 0x1655f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 1));
    // 0x1655f8: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x1655f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1655fc: 0x0  nop
    ctx->pc = 0x1655fcu;
    // NOP
    // 0x165600: 0xac610008  sw          $at, 0x8($v1)
    ctx->pc = 0x165600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 1));
    // 0x165604: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x165604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x165608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x165608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16560c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16560cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x165610: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x165610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x165614: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x165614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x165618: 0xe420000c  swc1        $f0, 0xC($at)
    ctx->pc = 0x165618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000000Cu, bits); }
    // 0x16561c: 0xc041442  jal         func_105108
    ctx->pc = 0x16561Cu;
    SET_GPR_U32(ctx, 31, 0x165624u);
    ctx->pc = 0x165620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16561Cu;
    // 0x165620: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x16561Cu, 0x165624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165624u;
label_165624:
    // 0x165624: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x165624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165628: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x165628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x16562c: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x16562cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x165630: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x165630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x165634: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x165634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x165638: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x165638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16563c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x16563cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x165640: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x165640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165644: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x165648: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x165648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16564c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165650: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x165650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x165654: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x165654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x165658: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x165658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x16565c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x16565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x165660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165664: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x165664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x165668: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x165668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16566c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165670: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x165670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165674: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x165674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x165678: 0xc0414dc  jal         func_105370
    ctx->pc = 0x165678u;
    SET_GPR_U32(ctx, 31, 0x165680u);
    ctx->pc = 0x16567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165678u;
    // 0x16567c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x165678u, 0x165680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165680u;
label_165680:
    // 0x165680: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x165680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x165684: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x165684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x165688: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x165688u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x16568c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x16568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x165690: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x165690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x165694: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x165694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x165698: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x165698u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16569c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1656a0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1656a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1656a4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1656a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1656a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1656a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1656ac: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1656acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1656b0: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x1656b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x1656b4: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1656b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x1656b8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1656b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1656bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1656c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1656c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1656c4: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x1656c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1656c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1656c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1656cc: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x1656ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1656d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1656d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1656d4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1656D4u;
    SET_GPR_U32(ctx, 31, 0x1656DCu);
    ctx->pc = 0x1656D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656D4u;
    // 0x1656d8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1656D4u, 0x1656DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656DCu;
label_1656dc:
    // 0x1656dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1656dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1656e0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1656e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1656e4: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x1656e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x1656e8: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1656e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1656ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1656ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1656f0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1656f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1656f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1656f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1656f8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1656f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1656fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1656fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x165700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x165700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x165704: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x165704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x165708: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x165708u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x16570c: 0x31c42  srl         $v1, $v1, 17
    ctx->pc = 0x16570cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
    // 0x165710: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x165710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x165714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165718: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x165718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16571c: 0xc624006c  lwc1        $f4, 0x6C($s1)
    ctx->pc = 0x16571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x165720: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x165720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x165724: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x165724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165728: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x165728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16572c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x16572cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x165730: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x165730u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x165734: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x165734u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x165738: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x165738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x16573c: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x16573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165740: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x165740u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165744: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x165744u;
    {
        const bool branch_taken_0x165744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165744) {
            ctx->pc = 0x1657A8u;
            goto label_1657a8;
        }
    }
    ctx->pc = 0x16574Cu;
    // 0x16574c: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x16574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165750: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x165750u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165754: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x165754u;
    {
        const bool branch_taken_0x165754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165754) {
            ctx->pc = 0x1657A8u;
            goto label_1657a8;
        }
    }
    ctx->pc = 0x16575Cu;
    // 0x16575c: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x16575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165760: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x165760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165764: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x165764u;
    {
        const bool branch_taken_0x165764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165764) {
            ctx->pc = 0x1657A8u;
            goto label_1657a8;
        }
    }
    ctx->pc = 0x16576Cu;
    // 0x16576c: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x16576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165770: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x165770u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165774: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x165774u;
    {
        const bool branch_taken_0x165774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165774) {
            ctx->pc = 0x1657A8u;
            goto label_1657a8;
        }
    }
    ctx->pc = 0x16577Cu;
    // 0x16577c: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x16577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165780: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x165780u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165784: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x165784u;
    {
        const bool branch_taken_0x165784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165784) {
            ctx->pc = 0x1657A8u;
            goto label_1657a8;
        }
    }
    ctx->pc = 0x16578Cu;
    // 0x16578c: 0xc6600088  lwc1        $f0, 0x88($s3)
    ctx->pc = 0x16578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165790: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x165790u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165794: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x165794u;
    {
        const bool branch_taken_0x165794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165794) {
            ctx->pc = 0x1657A8u;
            goto label_1657a8;
        }
    }
    ctx->pc = 0x16579Cu;
    // 0x16579c: 0x96630010  lhu         $v1, 0x10($s3)
    ctx->pc = 0x16579cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1657a0: 0x3063ffe7  andi        $v1, $v1, 0xFFE7
    ctx->pc = 0x1657a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65511);
    // 0x1657a4: 0xa6630010  sh          $v1, 0x10($s3)
    ctx->pc = 0x1657a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
label_1657a8:
    // 0x1657a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1657a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1657ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1657acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1657b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1657b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1657b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1657b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1657b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1657b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1657bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1657BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1657C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657BCu;
        // 0x1657c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1657BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1657C4u;
}

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

// Function: sub_002A0C60
// Address: 0x2a0c60 - 0x2a0dec
void sub_002A0C60_0x2a0c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0C60_0x2a0c60");
#endif

    switch (ctx->pc) {
        case 0x2a0c9cu: goto label_2a0c9c;
        case 0x2a0cc8u: goto label_2a0cc8;
        case 0x2a0d2cu: goto label_2a0d2c;
        case 0x2a0d50u: goto label_2a0d50;
        case 0x2a0d68u: goto label_2a0d68;
        case 0x2a0d8cu: goto label_2a0d8c;
        case 0x2a0db8u: goto label_2a0db8;
        default: break;
    }

    ctx->pc = 0x2a0c60u;

    // 0x2a0c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a0c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a0c64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a0c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a0c68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a0c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a0c6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a0c70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a0c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a0c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a0c7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a0c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a0c80: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2a0c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2a0c84: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2A0C84u;
    {
        const bool branch_taken_0x2a0c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C84u;
        // 0x2a0c88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c84) {
            ctx->pc = 0x2A0DD0u;
            goto label_2a0dd0;
        }
    }
    ctx->pc = 0x2A0C8Cu;
    // 0x2a0c8c: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2A0C8Cu;
    {
        const bool branch_taken_0x2a0c8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C8Cu;
        // 0x2a0c90: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c8c) {
            ctx->pc = 0x2A0CC0u;
            goto label_2a0cc0;
        }
    }
    ctx->pc = 0x2A0C94u;
    // 0x2a0c94: 0xc04d60c  jal         func_135830
    ctx->pc = 0x2A0C94u;
    SET_GPR_U32(ctx, 31, 0x2A0C9Cu);
    ctx->pc = 0x2A0C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C94u;
    // 0x2a0c98: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135830u, 0x2A0C94u, 0x2A0C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C9Cu;
label_2a0c9c:
    // 0x2a0c9c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a0c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0ca0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0ca4: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x2a0ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x2a0ca8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a0ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0cac: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x2a0cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x2a0cb0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0cb4: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x2a0cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x2a0cb8: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x2a0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
    // 0x2a0cbc: 0x0  nop
    ctx->pc = 0x2a0cbcu;
    // NOP
label_2a0cc0:
    // 0x2a0cc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a0cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0cc4: 0x0  nop
    ctx->pc = 0x2a0cc4u;
    // NOP
label_2a0cc8:
    // 0x2a0cc8: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2a0cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2a0ccc: 0x722023  subu        $a0, $v1, $s2
    ctx->pc = 0x2a0cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a0cd0: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x2a0cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2a0cd4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a0cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a0cd8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2a0cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0cdc: 0x960300c6  lhu         $v1, 0xC6($s0)
    ctx->pc = 0x2a0cdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x2a0ce0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2a0ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2a0ce4: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A0CE4u;
    {
        const bool branch_taken_0x2a0ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ce4) {
            ctx->pc = 0x2A0DB8u;
            goto label_2a0db8;
        }
    }
    ctx->pc = 0x2A0CECu;
    // 0x2a0cec: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x2a0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2a0cf0: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x2a0cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2a0cf4: 0x8e640094  lw          $a0, 0x94($s3)
    ctx->pc = 0x2a0cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2a0cf8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0cfc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2a0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a0d00: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2a0d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a0d04: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0D04u;
    {
        const bool branch_taken_0x2a0d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D04u;
        // 0x2a0d08: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d04) {
            ctx->pc = 0x2A0D20u;
            goto label_2a0d20;
        }
    }
    ctx->pc = 0x2A0D0Cu;
    // 0x2a0d0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0d10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0D10u;
    {
        const bool branch_taken_0x2a0d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0d10) {
            ctx->pc = 0x2A0D20u;
            goto label_2a0d20;
        }
    }
    ctx->pc = 0x2A0D18u;
    // 0x2a0d18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A0D18u;
    {
        const bool branch_taken_0x2a0d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d18) {
            ctx->pc = 0x2A0D70u;
            goto label_2a0d70;
        }
    }
    ctx->pc = 0x2A0D20u;
label_2a0d20:
    // 0x2a0d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d24: 0xc04d4e8  jal         func_1353A0
    ctx->pc = 0x2A0D24u;
    SET_GPR_U32(ctx, 31, 0x2A0D2Cu);
    ctx->pc = 0x2A0D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D24u;
    // 0x2a0d28: 0x260500c8  addiu       $a1, $s0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353A0u, 0x2A0D24u, 0x2A0D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D2Cu;
label_2a0d2c:
    // 0x2a0d2c: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x2a0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2a0d30: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2a0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a0d34: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2a0d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0d38: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2a0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2a0d3c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x2a0d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2a0d40: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0D40u;
    {
        const bool branch_taken_0x2a0d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D40u;
        // 0x2a0d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d40) {
            ctx->pc = 0x2A0D50u;
            goto label_2a0d50;
        }
    }
    ctx->pc = 0x2A0D48u;
    // 0x2a0d48: 0xc04144e  jal         func_105138
    ctx->pc = 0x2A0D48u;
    SET_GPR_U32(ctx, 31, 0x2A0D50u);
    ctx->pc = 0x2A0D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D48u;
    // 0x2a0d4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x2A0D48u, 0x2A0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D50u;
label_2a0d50:
    // 0x2a0d50: 0x8e620128  lw          $v0, 0x128($s3)
    ctx->pc = 0x2a0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x2a0d54: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x2a0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2a0d58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d5c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x2a0d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2a0d60: 0xc04144e  jal         func_105138
    ctx->pc = 0x2A0D60u;
    SET_GPR_U32(ctx, 31, 0x2A0D68u);
    ctx->pc = 0x2A0D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D60u;
    // 0x2a0d64: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x2A0D60u, 0x2A0D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D68u;
label_2a0d68:
    // 0x2a0d68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A0D68u;
    {
        const bool branch_taken_0x2a0d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d68) {
            ctx->pc = 0x2A0DB8u;
            goto label_2a0db8;
        }
    }
    ctx->pc = 0x2A0D70u;
label_2a0d70:
    // 0x2a0d70: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2a0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2a0d74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0D74u;
    {
        const bool branch_taken_0x2a0d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d74) {
            ctx->pc = 0x2A0D98u;
            goto label_2a0d98;
        }
    }
    ctx->pc = 0x2A0D7Cu;
    // 0x2a0d7c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x2a0d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2a0d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d84: 0xc04144e  jal         func_105138
    ctx->pc = 0x2A0D84u;
    SET_GPR_U32(ctx, 31, 0x2A0D8Cu);
    ctx->pc = 0x2A0D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D84u;
    // 0x2a0d88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x2A0D84u, 0x2A0D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D8Cu;
label_2a0d8c:
    // 0x2a0d8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0D8Cu;
    {
        const bool branch_taken_0x2a0d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d8c) {
            ctx->pc = 0x2A0DA0u;
            goto label_2a0da0;
        }
    }
    ctx->pc = 0x2A0D94u;
    // 0x2a0d94: 0x0  nop
    ctx->pc = 0x2a0d94u;
    // NOP
label_2a0d98:
    // 0x2a0d98: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2a0d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x2a0d9c: 0x0  nop
    ctx->pc = 0x2a0d9cu;
    // NOP
label_2a0da0:
    // 0x2a0da0: 0x8e620128  lw          $v0, 0x128($s3)
    ctx->pc = 0x2a0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x2a0da4: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x2a0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2a0da8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0dac: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x2a0dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2a0db0: 0xc04144e  jal         func_105138
    ctx->pc = 0x2A0DB0u;
    SET_GPR_U32(ctx, 31, 0x2A0DB8u);
    ctx->pc = 0x2A0DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DB0u;
    // 0x2a0db4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x2A0DB0u, 0x2A0DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DB8u;
label_2a0db8:
    // 0x2a0db8: 0x9663006a  lhu         $v1, 0x6A($s3)
    ctx->pc = 0x2a0db8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 106)));
    // 0x2a0dbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a0dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a0dc0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2a0dc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a0dc4: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2A0DC4u;
    {
        const bool branch_taken_0x2a0dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0dc4) {
            ctx->pc = 0x2A0CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0cc8;
        }
    }
    ctx->pc = 0x2A0DCCu;
    // 0x2a0dcc: 0x0  nop
    ctx->pc = 0x2a0dccu;
    // NOP
label_2a0dd0:
    // 0x2a0dd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a0dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0dd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0dd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0dd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0ddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0de4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DE4u;
        // 0x2a0de8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0DECu;
}

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

// Function: sub_00258B70
// Address: 0x258b70 - 0x258d0c
void sub_00258B70_0x258b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258B70_0x258b70");
#endif

    switch (ctx->pc) {
        case 0x258c0cu: goto label_258c0c;
        case 0x258c78u: goto label_258c78;
        case 0x258c9cu: goto label_258c9c;
        default: break;
    }

    ctx->pc = 0x258b70u;

    // 0x258b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258b74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x258b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258b78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x258b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x258b7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x258b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258b84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x258b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258b8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x258b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b90: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x258b90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x258b94: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x258B94u;
    {
        const bool branch_taken_0x258b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B94u;
        // 0x258b98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b94) {
            ctx->pc = 0x258CD0u;
            goto label_258cd0;
        }
    }
    ctx->pc = 0x258B9Cu;
    // 0x258b9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258ba0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x258BA0u;
    {
        const bool branch_taken_0x258ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BA0u;
        // 0x258ba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ba0) {
            ctx->pc = 0x258C38u;
            goto label_258c38;
        }
    }
    ctx->pc = 0x258BA8u;
    // 0x258ba8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258BA8u;
    {
        const bool branch_taken_0x258ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x258ba8) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x258BB0u;
    // 0x258bb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x258BB0u;
    {
        const bool branch_taken_0x258bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258bb0) {
            ctx->pc = 0x258BC0u;
            goto label_258bc0;
        }
    }
    ctx->pc = 0x258BB8u;
    // 0x258bb8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x258BB8u;
    {
        const bool branch_taken_0x258bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258bb8) {
            ctx->pc = 0x258CF0u;
            goto label_258cf0;
        }
    }
    ctx->pc = 0x258BC0u;
label_258bc0:
    // 0x258bc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x258bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x258bc4: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x258bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x258bc8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x258bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x258bcc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x258bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x258bd0: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x258bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x258bd4: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x258bd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x258bd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258bdc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x258bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_258be0:
    // 0x258be0: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x258be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258be8: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x258be8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x258bec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258bf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x258bf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x258bf4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258BF4u;
    {
        const bool branch_taken_0x258bf4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x258BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BF4u;
        // 0x258bf8: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bf4) {
            ctx->pc = 0x258C04u;
            goto label_258c04;
        }
    }
    ctx->pc = 0x258BFCu;
    // 0x258bfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258c00: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x258c00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_258c04:
    // 0x258c04: 0xc096530  jal         func_2594C0
    ctx->pc = 0x258C04u;
    SET_GPR_U32(ctx, 31, 0x258C0Cu);
    ctx->pc = 0x258C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C04u;
    // 0x258c08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2594C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2594C0u, 0x258C04u, 0x258C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C0Cu;
label_258c0c:
    // 0x258c0c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x258c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x258c10: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x258c10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258c14: 0x28420028  slti        $v0, $v0, 0x28
    ctx->pc = 0x258c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x258c18: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x258C18u;
    {
        const bool branch_taken_0x258c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258c18) {
            ctx->pc = 0x258CF0u;
            goto label_258cf0;
        }
    }
    ctx->pc = 0x258C20u;
    // 0x258c20: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x258c20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x258c24: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x258c24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x258c28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258c2c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x258C2Cu;
    {
        const bool branch_taken_0x258c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C2Cu;
        // 0x258c30: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c2c) {
            ctx->pc = 0x258CF0u;
            goto label_258cf0;
        }
    }
    ctx->pc = 0x258C34u;
    // 0x258c34: 0x0  nop
    ctx->pc = 0x258c34u;
    // NOP
label_258c38:
    // 0x258c38: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x258c38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258c3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258c40: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x258c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x258c44: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x258c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x258c48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258C48u;
    {
        const bool branch_taken_0x258c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258c48) {
            ctx->pc = 0x258C58u;
            goto label_258c58;
        }
    }
    ctx->pc = 0x258C50u;
    // 0x258c50: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x258c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x258c54: 0x0  nop
    ctx->pc = 0x258c54u;
    // NOP
label_258c58:
    // 0x258c58: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x258c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x258c5c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x258c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x258c60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258c64: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x258c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x258c68: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x258c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x258c6c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x258c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x258c70: 0xc096530  jal         func_2594C0
    ctx->pc = 0x258C70u;
    SET_GPR_U32(ctx, 31, 0x258C78u);
    ctx->pc = 0x258C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C70u;
    // 0x258c74: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2594C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2594C0u, 0x258C70u, 0x258C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C78u;
label_258c78:
    // 0x258c78: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x258c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x258c7c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x258c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258c80: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x258c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x258c84: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x258c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x258c88: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x258c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x258c8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x258c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x258c90: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x258c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x258c94: 0xc074a18  jal         func_1D2860
    ctx->pc = 0x258C94u;
    SET_GPR_U32(ctx, 31, 0x258C9Cu);
    ctx->pc = 0x258C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C94u;
    // 0x258c98: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2860u, 0x258C94u, 0x258C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C9Cu;
label_258c9c:
    // 0x258c9c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x258c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x258ca0: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x258ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258ca4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258ca8: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x258ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x258cac: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x258cacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258cb0: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x258cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x258cb4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x258CB4u;
    {
        const bool branch_taken_0x258cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258cb4) {
            ctx->pc = 0x258CF0u;
            goto label_258cf0;
        }
    }
    ctx->pc = 0x258CBCu;
    // 0x258cbc: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x258cbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x258cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258cc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x258CC4u;
    {
        const bool branch_taken_0x258cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CC4u;
        // 0x258cc8: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cc4) {
            ctx->pc = 0x258CF0u;
            goto label_258cf0;
        }
    }
    ctx->pc = 0x258CCCu;
    // 0x258ccc: 0x0  nop
    ctx->pc = 0x258cccu;
    // NOP
label_258cd0:
    // 0x258cd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x258cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x258cd4: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x258cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x258cd8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x258cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x258cdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x258cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258ce0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x258ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x258ce4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x258ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x258ce8: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x258ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x258cec: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x258cecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_258cf0:
    // 0x258cf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x258cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x258cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258cf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258d04: 0x3e00008  jr          $ra
    ctx->pc = 0x258D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D04u;
        // 0x258d08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258D0Cu;
}

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

// Function: sub_00364A10
// Address: 0x364a10 - 0x364cc0
void sub_00364A10_0x364a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364A10_0x364a10");
#endif

    switch (ctx->pc) {
        case 0x364a4cu: goto label_364a4c;
        case 0x364ad8u: goto label_364ad8;
        case 0x364b10u: goto label_364b10;
        case 0x364b70u: goto label_364b70;
        case 0x364b90u: goto label_364b90;
        case 0x364bd4u: goto label_364bd4;
        case 0x364c18u: goto label_364c18;
        case 0x364c64u: goto label_364c64;
        case 0x364ca8u: goto label_364ca8;
        default: break;
    }

    ctx->pc = 0x364a10u;

    // 0x364a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x364a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x364a14: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x364a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x364a18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x364a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x364a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x364a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x364a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x364a24: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x364a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364a28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x364a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x364a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x364a30: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x364a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x364a34: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x364a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x364a38: 0x2484a884  addiu       $a0, $a0, -0x577C
    ctx->pc = 0x364a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944900));
    // 0x364a3c: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x364a3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x364a40: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x364a40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x364a44: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x364A44u;
    SET_GPR_U32(ctx, 31, 0x364A4Cu);
    ctx->pc = 0x364A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A44u;
    // 0x364a48: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x364A44u, 0x364A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A4Cu;
label_364a4c:
    // 0x364a4c: 0x83888bdc  lb          $t0, -0x7424($gp)
    ctx->pc = 0x364a4cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937564)));
    // 0x364a50: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x364a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x364a54: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x364a54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x364a58: 0x24a5a8a8  addiu       $a1, $a1, -0x5758
    ctx->pc = 0x364a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944936));
    // 0x364a5c: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x364a5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x364a60: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x364a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x364a64: 0x24c6a800  addiu       $a2, $a2, -0x5800
    ctx->pc = 0x364a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944768));
    // 0x364a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x364a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364a6c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x364a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x364a70: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x364a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364a74: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x364a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x364a78: 0x90a80001  lbu         $t0, 0x1($a1)
    ctx->pc = 0x364a78u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x364a7c: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x364a7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x364a80: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x364a80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x364a84: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x364a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364a88: 0xa48025  or          $s0, $a1, $a0
    ctx->pc = 0x364a88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x364a8c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x364a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x364a90: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x364A90u;
    {
        const bool branch_taken_0x364a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x364A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A90u;
        // 0x364a94: 0xc48821  addu        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a90) {
            ctx->pc = 0x364B70u;
            goto label_364b70;
        }
    }
    ctx->pc = 0x364A98u;
    // 0x364a98: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x364a98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x364a9c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x364A9Cu;
    {
        const bool branch_taken_0x364a9c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x364AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A9Cu;
        // 0x364aa0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a9c) {
            ctx->pc = 0x364AACu;
            goto label_364aac;
        }
    }
    ctx->pc = 0x364AA4u;
    // 0x364aa4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x364aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x364aa8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x364aa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_364aac:
    // 0x364aac: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x364aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x364ab0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x364ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x364ab4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x364ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364ab8: 0x2484a800  addiu       $a0, $a0, -0x5800
    ctx->pc = 0x364ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944768));
    // 0x364abc: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x364abcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x364ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x364ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ac4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x364ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x364ac8: 0x24070118  addiu       $a3, $zero, 0x118
    ctx->pc = 0x364ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x364acc: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x364accu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x364ad0: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x364AD0u;
    SET_GPR_U32(ctx, 31, 0x364AD8u);
    ctx->pc = 0x364AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364AD0u;
    // 0x364ad4: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x364AD0u, 0x364AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364AD8u;
label_364ad8:
    // 0x364ad8: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x364ad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x364adc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x364ADCu;
    {
        const bool branch_taken_0x364adc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x364AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364ADCu;
        // 0x364ae0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364adc) {
            ctx->pc = 0x364AECu;
            goto label_364aec;
        }
    }
    ctx->pc = 0x364AE4u;
    // 0x364ae4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x364ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x364ae8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x364ae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_364aec:
    // 0x364aec: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x364aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x364af0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x364af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x364af4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x364af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x364af8: 0x2484a80c  addiu       $a0, $a0, -0x57F4
    ctx->pc = 0x364af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944780));
    // 0x364afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x364afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b00: 0x24070118  addiu       $a3, $zero, 0x118
    ctx->pc = 0x364b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x364b04: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x364b04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x364b08: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x364B08u;
    SET_GPR_U32(ctx, 31, 0x364B10u);
    ctx->pc = 0x364B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B08u;
    // 0x364b0c: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x364B08u, 0x364B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B10u;
label_364b10:
    // 0x364b10: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x364b10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x364b14: 0x8626000a  lh          $a2, 0xA($s1)
    ctx->pc = 0x364b14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x364b18: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x364B18u;
    {
        const bool branch_taken_0x364b18 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x364B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364B18u;
        // 0x364b1c: 0x52043  sra         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364b18) {
            ctx->pc = 0x364B28u;
            goto label_364b28;
        }
    }
    ctx->pc = 0x364B20u;
    // 0x364b20: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x364b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x364b24: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x364b24u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_364b28:
    // 0x364b28: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x364b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364b2c: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x364b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x364b30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x364b30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x364b34: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x364b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x364b38: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x364B38u;
    {
        const bool branch_taken_0x364b38 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x364B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364B38u;
        // 0x364b3c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364b38) {
            ctx->pc = 0x364B48u;
            goto label_364b48;
        }
    }
    ctx->pc = 0x364B40u;
    // 0x364b40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x364b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x364b44: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x364b44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_364b48:
    // 0x364b48: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x364b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x364b4c: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x364b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
    // 0x364b50: 0x8c297184  lw          $t1, 0x7184($at)
    ctx->pc = 0x364b50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29060)));
    // 0x364b54: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x364b54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x364b58: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x364b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x364b5c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x364b5cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x364b60: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x364b60u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x364b64: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x364b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x364b68: 0xc09c4e0  jal         func_271380
    ctx->pc = 0x364B68u;
    SET_GPR_U32(ctx, 31, 0x364B70u);
    ctx->pc = 0x364B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B68u;
    // 0x364b6c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271380u, 0x364B68u, 0x364B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B70u;
label_364b70:
    // 0x364b70: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x364b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x364b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x364b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x364b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b7c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x364b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364b80: 0x24070118  addiu       $a3, $zero, 0x118
    ctx->pc = 0x364b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x364b84: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x364b84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x364b88: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x364B88u;
    SET_GPR_U32(ctx, 31, 0x364B90u);
    ctx->pc = 0x364B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B88u;
    // 0x364b8c: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x364B88u, 0x364B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B90u;
label_364b90:
    // 0x364b90: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x364b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x364b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x364b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364b98: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x364B98u;
    {
        const bool branch_taken_0x364b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x364B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364B98u;
        // 0x364b9c: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364b98) {
            ctx->pc = 0x364BE0u;
            goto label_364be0;
        }
    }
    ctx->pc = 0x364BA0u;
    // 0x364ba0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x364ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x364ba4: 0x24421850  addiu       $v0, $v0, 0x1850
    ctx->pc = 0x364ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6224));
    // 0x364ba8: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x364ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x364bac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x364bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x364bb0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x364bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x364bb4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x364bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364bb8: 0x2406016d  addiu       $a2, $zero, 0x16D
    ctx->pc = 0x364bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    // 0x364bbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364bc0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x364bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x364bc4: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x364bc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x364bc8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x364bc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364bcc: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x364BCCu;
    SET_GPR_U32(ctx, 31, 0x364BD4u);
    ctx->pc = 0x364BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364BCCu;
    // 0x364bd0: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x364BCCu, 0x364BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364BD4u;
label_364bd4:
    // 0x364bd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x364BD4u;
    {
        const bool branch_taken_0x364bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364bd4) {
            ctx->pc = 0x364C18u;
            goto label_364c18;
        }
    }
    ctx->pc = 0x364BDCu;
    // 0x364bdc: 0x0  nop
    ctx->pc = 0x364bdcu;
    // NOP
label_364be0:
    // 0x364be0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x364be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x364be4: 0x24421850  addiu       $v0, $v0, 0x1850
    ctx->pc = 0x364be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6224));
    // 0x364be8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x364be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x364bec: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x364becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x364bf0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x364bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x364bf4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x364bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x364bf8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x364bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364bfc: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x364bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x364c00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c04: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x364c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x364c08: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x364c08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c0c: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x364c0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x364c10: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x364C10u;
    SET_GPR_U32(ctx, 31, 0x364C18u);
    ctx->pc = 0x364C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C10u;
    // 0x364c14: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x364C10u, 0x364C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C18u;
label_364c18:
    // 0x364c18: 0x938a8bd0  lbu         $t2, -0x7430($gp)
    ctx->pc = 0x364c18u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x364c1c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x364c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x364c20: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x364c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x364c24: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x364c24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x364c28: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x364c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x364c2c: 0x2484a890  addiu       $a0, $a0, -0x5770
    ctx->pc = 0x364c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944912));
    // 0x364c30: 0x2463a800  addiu       $v1, $v1, -0x5800
    ctx->pc = 0x364c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944768));
    // 0x364c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x364c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c38: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x364c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364c3c: 0x24070096  addiu       $a3, $zero, 0x96
    ctx->pc = 0x364c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x364c40: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x364c40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x364c44: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x364c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x364c48: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x364c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x364c4c: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x364c4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x364c50: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x364c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x364c54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x364c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x364c58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x364c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x364c5c: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x364C5Cu;
    SET_GPR_U32(ctx, 31, 0x364C64u);
    ctx->pc = 0x364C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C5Cu;
    // 0x364c60: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x364C5Cu, 0x364C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C64u;
label_364c64:
    // 0x364c64: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x364c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x364c68: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x364c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x364c6c: 0x24631850  addiu       $v1, $v1, 0x1850
    ctx->pc = 0x364c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6224));
    // 0x364c70: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x364c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x364c74: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x364c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x364c78: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x364c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x364c7c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x364c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x364c80: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x364c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x364c84: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x364c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364c88: 0x240600aa  addiu       $a2, $zero, 0xAA
    ctx->pc = 0x364c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x364c8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c90: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x364c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x364c94: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x364c94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c98: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x364c98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x364c9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x364c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x364ca0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x364CA0u;
    SET_GPR_U32(ctx, 31, 0x364CA8u);
    ctx->pc = 0x364CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364CA0u;
    // 0x364ca4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x364CA0u, 0x364CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364CA8u;
label_364ca8:
    // 0x364ca8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x364ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x364cac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x364cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364cb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x364cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364cb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x364cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x364CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CB8u;
        // 0x364cbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364CC0u;
}

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

// Function: sub_00340A50
// Address: 0x340a50 - 0x340c34
void sub_00340A50_0x340a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340A50_0x340a50");
#endif

    switch (ctx->pc) {
        case 0x340a74u: goto label_340a74;
        case 0x340b30u: goto label_340b30;
        case 0x340b48u: goto label_340b48;
        case 0x340b7cu: goto label_340b7c;
        case 0x340c14u: goto label_340c14;
        default: break;
    }

    ctx->pc = 0x340a50u;

    // 0x340a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x340a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x340a54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x340a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x340a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x340a60: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x340a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x340a64: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x340A64u;
    {
        const bool branch_taken_0x340a64 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x340A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A64u;
        // 0x340a68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a64) {
            ctx->pc = 0x340A90u;
            goto label_340a90;
        }
    }
    ctx->pc = 0x340A6Cu;
    // 0x340a6c: 0xc0d021c  jal         func_340870
    ctx->pc = 0x340A6Cu;
    SET_GPR_U32(ctx, 31, 0x340A74u);
    ctx->pc = 0x340870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340870u, 0x340A6Cu, 0x340A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340A74u;
label_340a74:
    // 0x340a74: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x340A74u;
    {
        const bool branch_taken_0x340a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a74) {
            ctx->pc = 0x340C20u;
            goto label_340c20;
        }
    }
    ctx->pc = 0x340A7Cu;
    // 0x340a7c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x340a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x340a80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x340a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x340a84: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x340A84u;
    {
        const bool branch_taken_0x340a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A84u;
        // 0x340a88: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a84) {
            ctx->pc = 0x340C20u;
            goto label_340c20;
        }
    }
    ctx->pc = 0x340A8Cu;
    // 0x340a8c: 0x0  nop
    ctx->pc = 0x340a8cu;
    // NOP
label_340a90:
    // 0x340a90: 0x9228001b  lbu         $t0, 0x1B($s1)
    ctx->pc = 0x340a90u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x340a94: 0xc7808328  lwc1        $f0, -0x7CD8($gp)
    ctx->pc = 0x340a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340a98: 0x8784832c  lh          $a0, -0x7CD4($gp)
    ctx->pc = 0x340a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935340)));
    // 0x340a9c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x340a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x340aa0: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x340aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x340aa4: 0x24c67740  addiu       $a2, $a2, 0x7740
    ctx->pc = 0x340aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30528));
    // 0x340aa8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x340aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340aac: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x340aacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x340ab0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x340ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x340ab4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x340ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x340ab8: 0xa4a40004  sh          $a0, 0x4($a1)
    ctx->pc = 0x340ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x340abc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x340abcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x340ac0: 0x9224001d  lbu         $a0, 0x1D($s1)
    ctx->pc = 0x340ac0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x340ac4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x340AC4u;
    {
        const bool branch_taken_0x340ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x340AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AC4u;
        // 0x340ac8: 0xc78021  addu        $s0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ac4) {
            ctx->pc = 0x340AD8u;
            goto label_340ad8;
        }
    }
    ctx->pc = 0x340ACCu;
    // 0x340acc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x340ACCu;
    {
        const bool branch_taken_0x340acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340acc) {
            ctx->pc = 0x340B30u;
            goto label_340b30;
        }
    }
    ctx->pc = 0x340AD4u;
    // 0x340ad4: 0x0  nop
    ctx->pc = 0x340ad4u;
    // NOP
label_340ad8:
    // 0x340ad8: 0x8f848ba8  lw          $a0, -0x7458($gp)
    ctx->pc = 0x340ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x340adc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x340ADCu;
    {
        const bool branch_taken_0x340adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x340adc) {
            ctx->pc = 0x340B30u;
            goto label_340b30;
        }
    }
    ctx->pc = 0x340AE4u;
    // 0x340ae4: 0x9223001a  lbu         $v1, 0x1A($s1)
    ctx->pc = 0x340ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x340ae8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x340AE8u;
    {
        const bool branch_taken_0x340ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340ae8) {
            ctx->pc = 0x340B08u;
            goto label_340b08;
        }
    }
    ctx->pc = 0x340AF0u;
    // 0x340af0: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x340af0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x340af4: 0x28630500  slti        $v1, $v1, 0x500
    ctx->pc = 0x340af4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x340af8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x340AF8u;
    {
        const bool branch_taken_0x340af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AF8u;
        // 0x340afc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340af8) {
            ctx->pc = 0x340B30u;
            goto label_340b30;
        }
    }
    ctx->pc = 0x340B00u;
    // 0x340b00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x340B00u;
    {
        const bool branch_taken_0x340b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B00u;
        // 0x340b04: 0xa223001a  sb          $v1, 0x1A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b00) {
            ctx->pc = 0x340B30u;
            goto label_340b30;
        }
    }
    ctx->pc = 0x340B08u;
label_340b08:
    // 0x340b08: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x340b08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x340b0c: 0x28610500  slti        $at, $v1, 0x500
    ctx->pc = 0x340b0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x340b10: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x340B10u;
    {
        const bool branch_taken_0x340b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x340b10) {
            ctx->pc = 0x340B30u;
            goto label_340b30;
        }
    }
    ctx->pc = 0x340B18u;
    // 0x340b18: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x340b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x340b1c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x340b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x340b20: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x340b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x340b24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b28: 0xc0e1a84  jal         func_386A10
    ctx->pc = 0x340B28u;
    SET_GPR_U32(ctx, 31, 0x340B30u);
    ctx->pc = 0x340B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340B28u;
    // 0x340b2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386A10u, 0x340B28u, 0x340B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B30u;
label_340b30:
    // 0x340b30: 0x9223001a  lbu         $v1, 0x1A($s1)
    ctx->pc = 0x340b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x340b34: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x340B34u;
    {
        const bool branch_taken_0x340b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B34u;
        // 0x340b38: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b34) {
            ctx->pc = 0x340C20u;
            goto label_340c20;
        }
    }
    ctx->pc = 0x340B3Cu;
    // 0x340b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b40: 0xc0e1cf0  jal         func_3873C0
    ctx->pc = 0x340B40u;
    SET_GPR_U32(ctx, 31, 0x340B48u);
    ctx->pc = 0x340B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340B40u;
    // 0x340b44: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3873C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3873C0u, 0x340B40u, 0x340B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B48u;
label_340b48:
    // 0x340b48: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x340B48u;
    {
        const bool branch_taken_0x340b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340b48) {
            ctx->pc = 0x340C20u;
            goto label_340c20;
        }
    }
    ctx->pc = 0x340B50u;
    // 0x340b50: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x340b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x340b54: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x340b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x340b58: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x340B58u;
    {
        const bool branch_taken_0x340b58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x340B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B58u;
        // 0x340b5c: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b58) {
            ctx->pc = 0x340B70u;
            goto label_340b70;
        }
    }
    ctx->pc = 0x340B60u;
    // 0x340b60: 0x90640006  lbu         $a0, 0x6($v1)
    ctx->pc = 0x340b60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x340b64: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x340b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340b68: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x340B68u;
    {
        const bool branch_taken_0x340b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x340b68) {
            ctx->pc = 0x340B88u;
            goto label_340b88;
        }
    }
    ctx->pc = 0x340B70u;
label_340b70:
    // 0x340b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b74: 0xc0d0430  jal         func_3410C0
    ctx->pc = 0x340B74u;
    SET_GPR_U32(ctx, 31, 0x340B7Cu);
    ctx->pc = 0x340B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340B74u;
    // 0x340b78: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410C0u, 0x340B74u, 0x340B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340B7Cu;
label_340b7c:
    // 0x340b7c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x340B7Cu;
    {
        const bool branch_taken_0x340b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340b7c) {
            ctx->pc = 0x340C20u;
            goto label_340c20;
        }
    }
    ctx->pc = 0x340B84u;
    // 0x340b84: 0x0  nop
    ctx->pc = 0x340b84u;
    // NOP
label_340b88:
    // 0x340b88: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x340b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x340b8c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x340b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x340b90: 0x80420038  lb          $v0, 0x38($v0)
    ctx->pc = 0x340b90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x340b94: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x340B94u;
    {
        const bool branch_taken_0x340b94 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x340B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B94u;
        // 0x340b98: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b94) {
            ctx->pc = 0x340BA4u;
            goto label_340ba4;
        }
    }
    ctx->pc = 0x340B9Cu;
    // 0x340b9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x340B9Cu;
    {
        const bool branch_taken_0x340b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B9Cu;
        // 0x340ba0: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b9c) {
            ctx->pc = 0x340C00u;
            goto label_340c00;
        }
    }
    ctx->pc = 0x340BA4u;
label_340ba4:
    // 0x340ba4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x340ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340ba8: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x340ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340bac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x340bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340bb0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x340bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x340bb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x340bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x340bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x340bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340bbc: 0x0  nop
    ctx->pc = 0x340bbcu;
    // NOP
    // 0x340bc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x340bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340bc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x340BC4u;
    {
        const bool branch_taken_0x340bc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340bc4) {
            ctx->pc = 0x340BDCu;
            goto label_340bdc;
        }
    }
    ctx->pc = 0x340BCCu;
    // 0x340bcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x340bd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x340bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x340bd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340BD4u;
    {
        const bool branch_taken_0x340bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BD4u;
        // 0x340bd8: 0x3343c  dsll32      $a2, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340bd4) {
            ctx->pc = 0x340BF8u;
            goto label_340bf8;
        }
    }
    ctx->pc = 0x340BDCu;
label_340bdc:
    // 0x340bdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x340bdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x340be0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x340be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x340be4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340be4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x340be8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x340be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x340bec: 0x0  nop
    ctx->pc = 0x340becu;
    // NOP
    // 0x340bf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x340bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x340bf4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x340bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_340bf8:
    // 0x340bf8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x340bf8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x340bfc: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x340bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_340c00:
    // 0x340c00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x340c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c04: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x340c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x340c08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x340c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c0c: 0xc0e1a40  jal         func_386900
    ctx->pc = 0x340C0Cu;
    SET_GPR_U32(ctx, 31, 0x340C14u);
    ctx->pc = 0x340C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340C0Cu;
    // 0x340c10: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386900u, 0x340C0Cu, 0x340C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C14u;
label_340c14:
    // 0x340c14: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x340c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x340c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x340c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x340c1c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x340c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_340c20:
    // 0x340c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x340c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x340C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C2Cu;
        // 0x340c30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340C34u;
}

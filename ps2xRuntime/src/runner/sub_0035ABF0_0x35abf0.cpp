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

// Function: sub_0035ABF0
// Address: 0x35abf0 - 0x35ad50
void sub_0035ABF0_0x35abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ABF0_0x35abf0");
#endif

    switch (ctx->pc) {
        case 0x35ac50u: goto label_35ac50;
        case 0x35ac78u: goto label_35ac78;
        case 0x35acb8u: goto label_35acb8;
        case 0x35acdcu: goto label_35acdc;
        case 0x35acf8u: goto label_35acf8;
        default: break;
    }

    ctx->pc = 0x35abf0u;

    // 0x35abf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35abf4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x35abf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x35abf8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x35abf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x35abfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35ac00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35ac00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35ac04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x35ac04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35ac0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ac10: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x35AC10u;
    {
        const bool branch_taken_0x35ac10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC10u;
        // 0x35ac14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac10) {
            ctx->pc = 0x35AC98u;
            goto label_35ac98;
        }
    }
    ctx->pc = 0x35AC18u;
    // 0x35ac18: 0x8e860078  lw          $a2, 0x78($s4)
    ctx->pc = 0x35ac18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x35ac1c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35ac1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35ac20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x35ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35ac24: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x35ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x35ac28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35ac2c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x35ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35ac30: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35ac34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ac38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35ac3c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x35ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x35ac40: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x35ac40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ac44: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x35ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x35ac48: 0xc0a8274  jal         func_2A09D0
    ctx->pc = 0x35AC48u;
    SET_GPR_U32(ctx, 31, 0x35AC50u);
    ctx->pc = 0x35AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC48u;
    // 0x35ac4c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A09D0u, 0x35AC48u, 0x35AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC50u;
label_35ac50:
    // 0x35ac50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35ac50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac54: 0x10c00036  beqz        $a2, . + 4 + (0x36 << 2)
    ctx->pc = 0x35AC54u;
    {
        const bool branch_taken_0x35ac54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ac54) {
            ctx->pc = 0x35AD30u;
            goto label_35ad30;
        }
    }
    ctx->pc = 0x35AC5Cu;
    // 0x35ac5c: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x35ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x35ac60: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x35ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x35ac64: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x35ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35ac68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ac6c: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x35ac6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35ac70: 0xc0a8298  jal         func_2A0A60
    ctx->pc = 0x35AC70u;
    SET_GPR_U32(ctx, 31, 0x35AC78u);
    ctx->pc = 0x35AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC70u;
    // 0x35ac74: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0A60u, 0x35AC70u, 0x35AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC78u;
label_35ac78:
    // 0x35ac78: 0x8e84007c  lw          $a0, 0x7C($s4)
    ctx->pc = 0x35ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x35ac7c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x35ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x35ac80: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x35ac80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x35ac84: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x35ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x35ac88: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x35ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35ac8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35ac8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35ac90: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x35AC90u;
    {
        const bool branch_taken_0x35ac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC90u;
        // 0x35ac94: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac90) {
            ctx->pc = 0x35AD30u;
            goto label_35ad30;
        }
    }
    ctx->pc = 0x35AC98u;
label_35ac98:
    // 0x35ac98: 0x96830068  lhu         $v1, 0x68($s4)
    ctx->pc = 0x35ac98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x35ac9c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x35ac9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35aca0: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x35ACA0u;
    {
        const bool branch_taken_0x35aca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ACA0u;
        // 0x35aca4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aca0) {
            ctx->pc = 0x35AD30u;
            goto label_35ad30;
        }
    }
    ctx->pc = 0x35ACA8u;
    // 0x35aca8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35aca8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35acac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35acacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35acb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acb4: 0x0  nop
    ctx->pc = 0x35acb4u;
    // NOP
label_35acb8:
    // 0x35acb8: 0x12700017  beq         $s3, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x35ACB8u;
    {
        const bool branch_taken_0x35acb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x35acb8) {
            ctx->pc = 0x35AD18u;
            goto label_35ad18;
        }
    }
    ctx->pc = 0x35ACC0u;
    // 0x35acc0: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x35acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x35acc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35acc8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35accc: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x35acccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x35acd0: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x35acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x35acd4: 0xc0a8274  jal         func_2A09D0
    ctx->pc = 0x35ACD4u;
    SET_GPR_U32(ctx, 31, 0x35ACDCu);
    ctx->pc = 0x35ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ACD4u;
    // 0x35acd8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A09D0u, 0x35ACD4u, 0x35ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ACDCu;
label_35acdc:
    // 0x35acdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35acdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ace0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x35ACE0u;
    {
        const bool branch_taken_0x35ace0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ace0) {
            ctx->pc = 0x35AD18u;
            goto label_35ad18;
        }
    }
    ctx->pc = 0x35ACE8u;
    // 0x35ace8: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x35ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x35acec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35acecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35acf0: 0xc0a8298  jal         func_2A0A60
    ctx->pc = 0x35ACF0u;
    SET_GPR_U32(ctx, 31, 0x35ACF8u);
    ctx->pc = 0x35ACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ACF0u;
    // 0x35acf4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0A60u, 0x35ACF0u, 0x35ACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ACF8u;
label_35acf8:
    // 0x35acf8: 0x8e84007c  lw          $a0, 0x7C($s4)
    ctx->pc = 0x35acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x35acfc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x35acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x35ad00: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x35ad00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x35ad04: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x35ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x35ad08: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x35ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35ad0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35ad0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35ad10: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x35ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x35ad14: 0x0  nop
    ctx->pc = 0x35ad14u;
    // NOP
label_35ad18:
    // 0x35ad18: 0x96830068  lhu         $v1, 0x68($s4)
    ctx->pc = 0x35ad18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x35ad1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35ad1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35ad20: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x35ad20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x35ad24: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x35ad24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35ad28: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x35AD28u;
    {
        const bool branch_taken_0x35ad28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD28u;
        // 0x35ad2c: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad28) {
            ctx->pc = 0x35ACB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35acb8;
        }
    }
    ctx->pc = 0x35AD30u;
label_35ad30:
    // 0x35ad30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35ad30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35ad34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35ad34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35ad38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35ad38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ad3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35ad3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ad40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ad40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ad44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ad44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ad48: 0x3e00008  jr          $ra
    ctx->pc = 0x35AD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD48u;
        // 0x35ad4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AD50u;
}

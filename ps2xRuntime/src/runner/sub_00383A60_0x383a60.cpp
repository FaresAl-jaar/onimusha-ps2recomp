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

// Function: sub_00383A60
// Address: 0x383a60 - 0x383bf8
void sub_00383A60_0x383a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383A60_0x383a60");
#endif

    switch (ctx->pc) {
        case 0x383a84u: goto label_383a84;
        case 0x383a94u: goto label_383a94;
        case 0x383ab8u: goto label_383ab8;
        case 0x383b00u: goto label_383b00;
        case 0x383b48u: goto label_383b48;
        case 0x383b8cu: goto label_383b8c;
        case 0x383ba0u: goto label_383ba0;
        case 0x383bd4u: goto label_383bd4;
        default: break;
    }

    ctx->pc = 0x383a60u;

    // 0x383a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x383a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x383a64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x383a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x383a68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x383a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x383a6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x383a70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x383a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x383a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x383a78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x383a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a7c: 0xc0e0f00  jal         func_383C00
    ctx->pc = 0x383A7Cu;
    SET_GPR_U32(ctx, 31, 0x383A84u);
    ctx->pc = 0x383A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383A7Cu;
    // 0x383a80: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C00u, 0x383A7Cu, 0x383A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383A84u;
label_383a84:
    // 0x383a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x383a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a8c: 0xc0e0e78  jal         func_3839E0
    ctx->pc = 0x383A8Cu;
    SET_GPR_U32(ctx, 31, 0x383A94u);
    ctx->pc = 0x383A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383A8Cu;
    // 0x383a90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3839E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3839E0u, 0x383A8Cu, 0x383A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383A94u;
label_383a94:
    // 0x383a94: 0x924201f0  lbu         $v0, 0x1F0($s2)
    ctx->pc = 0x383a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x383a98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383A98u;
    {
        const bool branch_taken_0x383a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A98u;
        // 0x383a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a98) {
            ctx->pc = 0x383AA8u;
            goto label_383aa8;
        }
    }
    ctx->pc = 0x383AA0u;
    // 0x383aa0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x383AA0u;
    {
        const bool branch_taken_0x383aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383aa0) {
            ctx->pc = 0x383BE0u;
            goto label_383be0;
        }
    }
    ctx->pc = 0x383AA8u;
label_383aa8:
    // 0x383aa8: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x383aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x383aac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ab0: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x383ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x383ab4: 0x0  nop
    ctx->pc = 0x383ab4u;
    // NOP
label_383ab8:
    // 0x383ab8: 0x10720005  beq         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x383AB8u;
    {
        const bool branch_taken_0x383ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x383ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AB8u;
        // 0x383abc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ab8) {
            ctx->pc = 0x383AD0u;
            goto label_383ad0;
        }
    }
    ctx->pc = 0x383AC0u;
    // 0x383ac0: 0x906201f0  lbu         $v0, 0x1F0($v1)
    ctx->pc = 0x383ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x383ac4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x383AC4u;
    {
        const bool branch_taken_0x383ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383ac4) {
            ctx->pc = 0x383AE8u;
            goto label_383ae8;
        }
    }
    ctx->pc = 0x383ACCu;
    // 0x383acc: 0x0  nop
    ctx->pc = 0x383accu;
    // NOP
label_383ad0:
    // 0x383ad0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x383ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x383ad4: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x383ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x383ad8: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x383ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x383adc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x383ADCu;
    {
        const bool branch_taken_0x383adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383ADCu;
        // 0x383ae0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383adc) {
            ctx->pc = 0x383AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383ab8;
        }
    }
    ctx->pc = 0x383AE4u;
    // 0x383ae4: 0x0  nop
    ctx->pc = 0x383ae4u;
    // NOP
label_383ae8:
    // 0x383ae8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383AE8u;
    {
        const bool branch_taken_0x383ae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x383AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AE8u;
        // 0x383aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ae8) {
            ctx->pc = 0x383AF8u;
            goto label_383af8;
        }
    }
    ctx->pc = 0x383AF0u;
    // 0x383af0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x383AF0u;
    {
        const bool branch_taken_0x383af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383af0) {
            ctx->pc = 0x383BE0u;
            goto label_383be0;
        }
    }
    ctx->pc = 0x383AF8u;
label_383af8:
    // 0x383af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383afc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x383afcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383b00:
    // 0x383b00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x383b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x383b04: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x383B04u;
    {
        const bool branch_taken_0x383b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x383b04) {
            ctx->pc = 0x383B20u;
            goto label_383b20;
        }
    }
    ctx->pc = 0x383B0Cu;
    // 0x383b0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x383b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x383b10: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x383b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x383b14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x383B14u;
    {
        const bool branch_taken_0x383b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B14u;
        // 0x383b18: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b14) {
            ctx->pc = 0x383B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383b00;
        }
    }
    ctx->pc = 0x383B1Cu;
    // 0x383b1c: 0x0  nop
    ctx->pc = 0x383b1cu;
    // NOP
label_383b20:
    // 0x383b20: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x383b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x383b24: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383B24u;
    {
        const bool branch_taken_0x383b24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x383B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B24u;
        // 0x383b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b24) {
            ctx->pc = 0x383B38u;
            goto label_383b38;
        }
    }
    ctx->pc = 0x383B2Cu;
    // 0x383b2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x383B2Cu;
    {
        const bool branch_taken_0x383b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383b2c) {
            ctx->pc = 0x383BE0u;
            goto label_383be0;
        }
    }
    ctx->pc = 0x383B34u;
    // 0x383b34: 0x0  nop
    ctx->pc = 0x383b34u;
    // NOP
label_383b38:
    // 0x383b38: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x383B38u;
    {
        const bool branch_taken_0x383b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x383B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B38u;
        // 0x383b3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b38) {
            ctx->pc = 0x383B98u;
            goto label_383b98;
        }
    }
    ctx->pc = 0x383B40u;
    // 0x383b40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x383b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b44: 0x0  nop
    ctx->pc = 0x383b44u;
    // NOP
label_383b48:
    // 0x383b48: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x383b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x383b4c: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x383B4Cu;
    {
        const bool branch_taken_0x383b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x383b4c) {
            ctx->pc = 0x383B58u;
            goto label_383b58;
        }
    }
    ctx->pc = 0x383B54u;
    // 0x383b54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x383b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_383b58:
    // 0x383b58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x383b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383b5c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x383b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x383b60: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x383B60u;
    {
        const bool branch_taken_0x383b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B60u;
        // 0x383b64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b60) {
            ctx->pc = 0x383B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383b48;
        }
    }
    ctx->pc = 0x383B68u;
    // 0x383b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383b6c: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383B6Cu;
    {
        const bool branch_taken_0x383b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x383B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B6Cu;
        // 0x383b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b6c) {
            ctx->pc = 0x383B80u;
            goto label_383b80;
        }
    }
    ctx->pc = 0x383B74u;
    // 0x383b74: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x383B74u;
    {
        const bool branch_taken_0x383b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383b74) {
            ctx->pc = 0x383BE0u;
            goto label_383be0;
        }
    }
    ctx->pc = 0x383B7Cu;
    // 0x383b7c: 0x0  nop
    ctx->pc = 0x383b7cu;
    // NOP
label_383b80:
    // 0x383b80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b84: 0xc0e0bd4  jal         func_382F50
    ctx->pc = 0x383B84u;
    SET_GPR_U32(ctx, 31, 0x383B8Cu);
    ctx->pc = 0x383B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383B84u;
    // 0x383b88: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382F50u, 0x383B84u, 0x383B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383B8Cu;
label_383b8c:
    // 0x383b8c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x383B8Cu;
    {
        const bool branch_taken_0x383b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383b8c) {
            ctx->pc = 0x383BD8u;
            goto label_383bd8;
        }
    }
    ctx->pc = 0x383B94u;
    // 0x383b94: 0x0  nop
    ctx->pc = 0x383b94u;
    // NOP
label_383b98:
    // 0x383b98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x383b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b9c: 0x0  nop
    ctx->pc = 0x383b9cu;
    // NOP
label_383ba0:
    // 0x383ba0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x383ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x383ba4: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x383BA4u;
    {
        const bool branch_taken_0x383ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x383BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BA4u;
        // 0x383ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ba4) {
            ctx->pc = 0x383BB8u;
            goto label_383bb8;
        }
    }
    ctx->pc = 0x383BACu;
    // 0x383bac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x383BACu;
    {
        const bool branch_taken_0x383bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383bac) {
            ctx->pc = 0x383BE0u;
            goto label_383be0;
        }
    }
    ctx->pc = 0x383BB4u;
    // 0x383bb4: 0x0  nop
    ctx->pc = 0x383bb4u;
    // NOP
label_383bb8:
    // 0x383bb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x383bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383bbc: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x383bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x383bc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x383BC0u;
    {
        const bool branch_taken_0x383bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BC0u;
        // 0x383bc4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bc0) {
            ctx->pc = 0x383BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383ba0;
        }
    }
    ctx->pc = 0x383BC8u;
    // 0x383bc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383bcc: 0xc0e0bd4  jal         func_382F50
    ctx->pc = 0x383BCCu;
    SET_GPR_U32(ctx, 31, 0x383BD4u);
    ctx->pc = 0x383BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383BCCu;
    // 0x383bd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382F50u, 0x383BCCu, 0x383BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383BD4u;
label_383bd4:
    // 0x383bd4: 0x0  nop
    ctx->pc = 0x383bd4u;
    // NOP
label_383bd8:
    // 0x383bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383bdc: 0x0  nop
    ctx->pc = 0x383bdcu;
    // NOP
label_383be0:
    // 0x383be0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x383be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383be4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x383be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x383BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BF0u;
        // 0x383bf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383BF8u;
}

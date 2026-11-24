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

// Function: sub_003E3A80
// Address: 0x3e3a80 - 0x3e3ea8
void sub_003E3A80_0x3e3a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3A80_0x3e3a80");
#endif

    switch (ctx->pc) {
        case 0x3e3af8u: goto label_3e3af8;
        case 0x3e3b00u: goto label_3e3b00;
        case 0x3e3b40u: goto label_3e3b40;
        case 0x3e3b48u: goto label_3e3b48;
        case 0x3e3b70u: goto label_3e3b70;
        case 0x3e3b78u: goto label_3e3b78;
        case 0x3e3bb8u: goto label_3e3bb8;
        case 0x3e3bc0u: goto label_3e3bc0;
        case 0x3e3be8u: goto label_3e3be8;
        case 0x3e3bf0u: goto label_3e3bf0;
        case 0x3e3c84u: goto label_3e3c84;
        case 0x3e3c98u: goto label_3e3c98;
        case 0x3e3ca8u: goto label_3e3ca8;
        case 0x3e3d90u: goto label_3e3d90;
        case 0x3e3e00u: goto label_3e3e00;
        case 0x3e3e74u: goto label_3e3e74;
        case 0x3e3e84u: goto label_3e3e84;
        default: break;
    }

    ctx->pc = 0x3e3a80u;

    // 0x3e3a80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e3a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3e3a84: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3e3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e3a88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3e3a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3e3a8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e3a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3e3a90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e3a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e3a94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e3a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e3a98: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x3e3a98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e3a9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e3a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e3aa0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e3aa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3aa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e3aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e3aa8: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x3e3aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x3e3aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e3aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e3ab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e3ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ab4: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x3e3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x3e3ab8: 0x3c100092  lui         $s0, 0x92
    ctx->pc = 0x3e3ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)146 << 16));
    // 0x3e3abc: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x3e3abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3ac0: 0x26103468  addiu       $s0, $s0, 0x3468
    ctx->pc = 0x3e3ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13416));
    // 0x3e3ac4: 0xa0800055  sb          $zero, 0x55($a0)
    ctx->pc = 0x3e3ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3ac8: 0x2652f9fa  addiu       $s2, $s2, -0x606
    ctx->pc = 0x3e3ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965754));
    // 0x3e3acc: 0xa0800056  sb          $zero, 0x56($a0)
    ctx->pc = 0x3e3accu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3ad0: 0xa0820057  sb          $v0, 0x57($a0)
    ctx->pc = 0x3e3ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3ad4: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x3e3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3e3ad8: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x3e3ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e3adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3ae0: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x3e3ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3ae4: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x3e3ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3ae8: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x3e3ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3aec: 0xa082000d  sb          $v0, 0xD($a0)
    ctx->pc = 0x3e3aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3af0: 0xa082000e  sb          $v0, 0xE($a0)
    ctx->pc = 0x3e3af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3af4: 0x0  nop
    ctx->pc = 0x3e3af4u;
    // NOP
label_3e3af8:
    // 0x3e3af8: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x3E3AF8u;
    SET_GPR_U32(ctx, 31, 0x3E3B00u);
    ctx->pc = 0x3E3AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3AF8u;
    // 0x3e3afc: 0x82440000  lb          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x3E3AF8u, 0x3E3B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B00u;
label_3e3b00:
    // 0x3e3b00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e3b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e3b04: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3B04u;
    {
        const bool branch_taken_0x3e3b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e3b04) {
            ctx->pc = 0x3E3B18u;
            goto label_3e3b18;
        }
    }
    ctx->pc = 0x3E3B0Cu;
    // 0x3e3b0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E3B0Cu;
    {
        const bool branch_taken_0x3e3b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B0Cu;
        // 0x3e3b10: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3b0c) {
            ctx->pc = 0x3E3B28u;
            goto label_3e3b28;
        }
    }
    ctx->pc = 0x3E3B14u;
    // 0x3e3b14: 0x0  nop
    ctx->pc = 0x3e3b14u;
    // NOP
label_3e3b18:
    // 0x3e3b18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e3b18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3e3b1c: 0x2a82000f  slti        $v0, $s4, 0xF
    ctx->pc = 0x3e3b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3e3b20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E3B20u;
    {
        const bool branch_taken_0x3e3b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B20u;
        // 0x3e3b24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3b20) {
            ctx->pc = 0x3E3AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3af8;
        }
    }
    ctx->pc = 0x3E3B28u;
label_3e3b28:
    // 0x3e3b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3b2c: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E3B2Cu;
    {
        const bool branch_taken_0x3e3b2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e3b2c) {
            ctx->pc = 0x3E3B60u;
            goto label_3e3b60;
        }
    }
    ctx->pc = 0x3E3B34u;
    // 0x3e3b34: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3e3b34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x3e3b38: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x3e3b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e3b3c: 0x2673f9fa  addiu       $s3, $s3, -0x606
    ctx->pc = 0x3e3b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965754));
label_3e3b40:
    // 0x3e3b40: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x3E3B40u;
    SET_GPR_U32(ctx, 31, 0x3E3B48u);
    ctx->pc = 0x3E3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B40u;
    // 0x3e3b44: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x3E3B40u, 0x3E3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B48u;
label_3e3b48:
    // 0x3e3b48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e3b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e3b4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e3b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3e3b50: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x3e3b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3e3b54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E3B54u;
    {
        const bool branch_taken_0x3e3b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3b54) {
            ctx->pc = 0x3E3B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3b40;
        }
    }
    ctx->pc = 0x3E3B5Cu;
    // 0x3e3b5c: 0x0  nop
    ctx->pc = 0x3e3b5cu;
    // NOP
label_3e3b60:
    // 0x3e3b60: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3e3b60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
    // 0x3e3b64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e3b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3b68: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x3e3b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e3b6c: 0x2694f9ff  addiu       $s4, $s4, -0x601
    ctx->pc = 0x3e3b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965759));
label_3e3b70:
    // 0x3e3b70: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x3E3B70u;
    SET_GPR_U32(ctx, 31, 0x3E3B78u);
    ctx->pc = 0x3E3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B70u;
    // 0x3e3b74: 0x82840000  lb          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x3E3B70u, 0x3E3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B78u;
label_3e3b78:
    // 0x3e3b78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e3b7c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3B7Cu;
    {
        const bool branch_taken_0x3e3b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e3b7c) {
            ctx->pc = 0x3E3B90u;
            goto label_3e3b90;
        }
    }
    ctx->pc = 0x3E3B84u;
    // 0x3e3b84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E3B84u;
    {
        const bool branch_taken_0x3e3b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B84u;
        // 0x3e3b88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3b84) {
            ctx->pc = 0x3E3BA0u;
            goto label_3e3ba0;
        }
    }
    ctx->pc = 0x3E3B8Cu;
    // 0x3e3b8c: 0x0  nop
    ctx->pc = 0x3e3b8cu;
    // NOP
label_3e3b90:
    // 0x3e3b90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e3b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e3b94: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x3e3b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3e3b98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E3B98u;
    {
        const bool branch_taken_0x3e3b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B98u;
        // 0x3e3b9c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3b98) {
            ctx->pc = 0x3E3B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3b70;
        }
    }
    ctx->pc = 0x3E3BA0u;
label_3e3ba0:
    // 0x3e3ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3ba4: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E3BA4u;
    {
        const bool branch_taken_0x3e3ba4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e3ba4) {
            ctx->pc = 0x3E3BD8u;
            goto label_3e3bd8;
        }
    }
    ctx->pc = 0x3E3BACu;
    // 0x3e3bac: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3e3bacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x3e3bb0: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x3e3bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e3bb4: 0x2673f9ff  addiu       $s3, $s3, -0x601
    ctx->pc = 0x3e3bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965759));
label_3e3bb8:
    // 0x3e3bb8: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x3E3BB8u;
    SET_GPR_U32(ctx, 31, 0x3E3BC0u);
    ctx->pc = 0x3E3BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3BB8u;
    // 0x3e3bbc: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x3E3BB8u, 0x3E3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3BC0u;
label_3e3bc0:
    // 0x3e3bc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e3bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e3bc4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e3bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3e3bc8: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x3e3bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3e3bcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E3BCCu;
    {
        const bool branch_taken_0x3e3bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3bcc) {
            ctx->pc = 0x3E3BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3bb8;
        }
    }
    ctx->pc = 0x3E3BD4u;
    // 0x3e3bd4: 0x0  nop
    ctx->pc = 0x3e3bd4u;
    // NOP
label_3e3bd8:
    // 0x3e3bd8: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3e3bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x3e3bdc: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x3e3bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e3be0: 0x2673f9f5  addiu       $s3, $s3, -0x60B
    ctx->pc = 0x3e3be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965749));
    // 0x3e3be4: 0x0  nop
    ctx->pc = 0x3e3be4u;
    // NOP
label_3e3be8:
    // 0x3e3be8: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x3E3BE8u;
    SET_GPR_U32(ctx, 31, 0x3E3BF0u);
    ctx->pc = 0x3E3BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3BE8u;
    // 0x3e3bec: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x3E3BE8u, 0x3E3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3BF0u;
label_3e3bf0:
    // 0x3e3bf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e3bf4: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E3BF4u;
    {
        const bool branch_taken_0x3e3bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BF4u;
        // 0x3e3bf8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3bf4) {
            ctx->pc = 0x3E3C60u;
            goto label_3e3c60;
        }
    }
    ctx->pc = 0x3E3BFCu;
    // 0x3e3bfc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3e3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3e3c00: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x3e3c00u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e3c04: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3e3c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3e3c08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e3c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3c0c: 0x1247c2  srl         $t0, $s2, 31
    ctx->pc = 0x3e3c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3e3c10: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3e3c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e3c14: 0x1810  mfhi        $v1
    ctx->pc = 0x3e3c14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3e3c18: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x3e3c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3e3c1c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x3e3c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3e3c20: 0x80a4000a  lb          $a0, 0xA($a1)
    ctx->pc = 0x3e3c20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x3e3c24: 0x661004  sllv        $v0, $a2, $v1
    ctx->pc = 0x3e3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e3c28: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3e3c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3e3c2c: 0x1010  mfhi        $v0
    ctx->pc = 0x3e3c2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3e3c30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3e3c30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3e3c34: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3e3c34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3e3c38: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3e3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3e3c3c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e3c40: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x3e3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e3c44: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3e3c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3e3c48: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3e3c48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3e3c4c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3e3c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3e3c50: 0xa0a2000a  sb          $v0, 0xA($a1)
    ctx->pc = 0x3e3c50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3c54: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x3e3c54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e3c58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e3c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3e3c5c: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x3e3c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_3e3c60:
    // 0x3e3c60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e3c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e3c64: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x3e3c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3e3c68: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3E3C68u;
    {
        const bool branch_taken_0x3e3c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C68u;
        // 0x3e3c6c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c68) {
            ctx->pc = 0x3E3BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3be8;
        }
    }
    ctx->pc = 0x3E3C70u;
    // 0x3e3c70: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x3e3c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3e3c74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3e3c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e3c78: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3e3c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e3c7c: 0xc049590  jal         func_125640
    ctx->pc = 0x3E3C7Cu;
    SET_GPR_U32(ctx, 31, 0x3E3C84u);
    ctx->pc = 0x3E3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C7Cu;
    // 0x3e3c80: 0xa2200050  sb          $zero, 0x50($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3E3C7Cu, 0x3E3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C84u;
label_3e3c84:
    // 0x3e3c84: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3e3c84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
    // 0x3e3c88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e3c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3c8c: 0x2694f9f0  addiu       $s4, $s4, -0x610
    ctx->pc = 0x3e3c8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965744));
    // 0x3e3c90: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x3e3c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3c94: 0x0  nop
    ctx->pc = 0x3e3c94u;
    // NOP
label_3e3c98:
    // 0x3e3c98: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x3e3c98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3e3c9c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x3e3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3e3ca0: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x3E3CA0u;
    SET_GPR_U32(ctx, 31, 0x3E3CA8u);
    ctx->pc = 0x3E3CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3CA0u;
    // 0x3e3ca4: 0x2455001e  addiu       $s5, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x3E3CA0u, 0x3E3CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3CA8u;
label_3e3ca8:
    // 0x3e3ca8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x3e3ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3cac: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x3e3cacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3e3cb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e3cb4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E3CB4u;
    {
        const bool branch_taken_0x3e3cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e3cb4) {
            ctx->pc = 0x3E3D28u;
            goto label_3e3d28;
        }
    }
    ctx->pc = 0x3E3CBCu;
    // 0x3e3cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3cc0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3E3CC0u;
    {
        const bool branch_taken_0x3e3cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e3cc0) {
            ctx->pc = 0x3E3CF8u;
            goto label_3e3cf8;
        }
    }
    ctx->pc = 0x3E3CC8u;
    // 0x3e3cc8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E3CC8u;
    {
        const bool branch_taken_0x3e3cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3cc8) {
            ctx->pc = 0x3E3CD8u;
            goto label_3e3cd8;
        }
    }
    ctx->pc = 0x3E3CD0u;
    // 0x3e3cd0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E3CD0u;
    {
        const bool branch_taken_0x3e3cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3cd0) {
            ctx->pc = 0x3E3D48u;
            goto label_3e3d48;
        }
    }
    ctx->pc = 0x3E3CD8u;
label_3e3cd8:
    // 0x3e3cd8: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x3e3cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3e3cdc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3e3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3e3ce0: 0xa0520014  sb          $s2, 0x14($v0)
    ctx->pc = 0x3e3ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e3ce4: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x3e3ce4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3e3ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e3cec: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x3e3cecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3cf0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3E3CF0u;
    {
        const bool branch_taken_0x3e3cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CF0u;
        // 0x3e3cf4: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3cf0) {
            ctx->pc = 0x3E3D48u;
            goto label_3e3d48;
        }
    }
    ctx->pc = 0x3E3CF8u;
label_3e3cf8:
    // 0x3e3cf8: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x3e3cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3e3cfc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3e3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3e3d00: 0xa0520014  sb          $s2, 0x14($v0)
    ctx->pc = 0x3e3d00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e3d04: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x3e3d04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3e3d08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e3d0c: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x3e3d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3d10: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3e3d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3e3d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e3d18: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e3d1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3e3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e3d20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E3D20u;
    {
        const bool branch_taken_0x3e3d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D20u;
        // 0x3e3d24: 0xae620028  sw          $v0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3d20) {
            ctx->pc = 0x3E3D48u;
            goto label_3e3d48;
        }
    }
    ctx->pc = 0x3E3D28u;
label_3e3d28:
    // 0x3e3d28: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x3e3d28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3e3d2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3e3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3e3d30: 0xa0520014  sb          $s2, 0x14($v0)
    ctx->pc = 0x3e3d30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 18));
    // 0x3e3d34: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x3e3d34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3e3d38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e3d3c: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x3e3d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3d40: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x3e3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    // 0x3e3d44: 0x0  nop
    ctx->pc = 0x3e3d44u;
    // NOP
label_3e3d48:
    // 0x3e3d48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e3d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e3d4c: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x3e3d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3e3d50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e3d50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3e3d54: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3E3D54u;
    {
        const bool branch_taken_0x3e3d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D54u;
        // 0x3e3d58: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3d54) {
            ctx->pc = 0x3E3C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3c98;
        }
    }
    ctx->pc = 0x3E3D5Cu;
    // 0x3e3d5c: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x3e3d5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3e3d60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3D60u;
    {
        const bool branch_taken_0x3e3d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3d60) {
            ctx->pc = 0x3E3D78u;
            goto label_3e3d78;
        }
    }
    ctx->pc = 0x3E3D68u;
    // 0x3e3d68: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x3e3d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e3d6c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3e3d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3e3d70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3D70u;
    {
        const bool branch_taken_0x3e3d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D70u;
        // 0x3e3d74: 0xa6220008  sh          $v0, 0x8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3d70) {
            ctx->pc = 0x3E3D88u;
            goto label_3e3d88;
        }
    }
    ctx->pc = 0x3E3D78u;
label_3e3d78:
    // 0x3e3d78: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x3e3d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e3d7c: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x3e3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x3e3d80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e3d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e3d84: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x3e3d84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_3e3d88:
    // 0x3e3d88: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x3E3D88u;
    SET_GPR_U32(ctx, 31, 0x3E3D90u);
    ctx->pc = 0x3E3D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3D88u;
    // 0x3e3d8c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x3E3D88u, 0x3E3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3D90u;
label_3e3d90:
    // 0x3e3d90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3D90u;
    {
        const bool branch_taken_0x3e3d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3d90) {
            ctx->pc = 0x3E3DA8u;
            goto label_3e3da8;
        }
    }
    ctx->pc = 0x3E3D98u;
    // 0x3e3d98: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x3e3d98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e3d9c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3e3d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x3e3da0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3DA0u;
    {
        const bool branch_taken_0x3e3da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DA0u;
        // 0x3e3da4: 0xa6220008  sh          $v0, 0x8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3da0) {
            ctx->pc = 0x3E3DB8u;
            goto label_3e3db8;
        }
    }
    ctx->pc = 0x3E3DA8u;
label_3e3da8:
    // 0x3e3da8: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x3e3da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e3dac: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3e3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3e3db0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e3db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e3db4: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x3e3db4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_3e3db8:
    // 0x3e3db8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e3dbc: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3e3dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e3dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3dc4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E3DC4u;
    {
        const bool branch_taken_0x3e3dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e3dc4) {
            ctx->pc = 0x3E3DE0u;
            goto label_3e3de0;
        }
    }
    ctx->pc = 0x3E3DCCu;
    // 0x3e3dcc: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x3e3dccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e3dd0: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x3e3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x3e3dd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e3dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e3dd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3DD8u;
    {
        const bool branch_taken_0x3e3dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DD8u;
        // 0x3e3ddc: 0xa6220008  sh          $v0, 0x8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3dd8) {
            ctx->pc = 0x3E3DF0u;
            goto label_3e3df0;
        }
    }
    ctx->pc = 0x3E3DE0u;
label_3e3de0:
    // 0x3e3de0: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x3e3de0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e3de4: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3e3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3e3de8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e3de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e3dec: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x3e3decu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_3e3df0:
    // 0x3e3df0: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x3e3df0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e3df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e3df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3dfc: 0x0  nop
    ctx->pc = 0x3e3dfcu;
    // NOP
label_3e3e00:
    // 0x3e3e00: 0x831004  sllv        $v0, $v1, $a0
    ctx->pc = 0x3e3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3e3e04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3e3e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3e3e08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e3e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3e3e0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e3e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3e3e10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E3E10u;
    {
        const bool branch_taken_0x3e3e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3e10) {
            ctx->pc = 0x3E3E20u;
            goto label_3e3e20;
        }
    }
    ctx->pc = 0x3E3E18u;
    // 0x3e3e18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3E18u;
    {
        const bool branch_taken_0x3e3e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E18u;
        // 0x3e3e1c: 0xa2240059  sb          $a0, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3e18) {
            ctx->pc = 0x3E3E30u;
            goto label_3e3e30;
        }
    }
    ctx->pc = 0x3E3E20u;
label_3e3e20:
    // 0x3e3e20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e3e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e3e24: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x3e3e24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e3e28: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E3E28u;
    {
        const bool branch_taken_0x3e3e28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3e28) {
            ctx->pc = 0x3E3E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3e00;
        }
    }
    ctx->pc = 0x3E3E30u;
label_3e3e30:
    // 0x3e3e30: 0x82230059  lb          $v1, 0x59($s1)
    ctx->pc = 0x3e3e30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
    // 0x3e3e34: 0x3c028090  lui         $v0, 0x8090
    ctx->pc = 0x3e3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32912 << 16));
    // 0x3e3e38: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x3e3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3e3e3c: 0x34429090  ori         $v0, $v0, 0x9090
    ctx->pc = 0x3e3e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37008);
    // 0x3e3e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3e44: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3e3e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e3e48: 0xa2230058  sb          $v1, 0x58($s1)
    ctx->pc = 0x3e3e48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e3e4c: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x3e3e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x3e3e50: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x3e3e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x3e3e54: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x3e3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x3e3e58: 0xa2200083  sb          $zero, 0x83($s1)
    ctx->pc = 0x3e3e58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3e5c: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x3e3e5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3e3e60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e3e64: 0xa2220082  sb          $v0, 0x82($s1)
    ctx->pc = 0x3e3e64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3e68: 0xa2200084  sb          $zero, 0x84($s1)
    ctx->pc = 0x3e3e68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3e6c: 0xc049590  jal         func_125640
    ctx->pc = 0x3E3E6Cu;
    SET_GPR_U32(ctx, 31, 0x3E3E74u);
    ctx->pc = 0x3E3E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3E6Cu;
    // 0x3e3e70: 0xa2200081  sb          $zero, 0x81($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 129), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3E3E6Cu, 0x3E3E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E74u;
label_3e3e74:
    // 0x3e3e74: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x3e3e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x3e3e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3e7c: 0xc049590  jal         func_125640
    ctx->pc = 0x3E3E7Cu;
    SET_GPR_U32(ctx, 31, 0x3E3E84u);
    ctx->pc = 0x3E3E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3E7Cu;
    // 0x3e3e80: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3E3E7Cu, 0x3E3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E84u;
label_3e3e84:
    // 0x3e3e84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3e3e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e3e88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e3e88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e3e8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e3e8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e3e90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e3e90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e3e94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e3e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e3e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e3e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e3e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3EA0u;
        // 0x3e3ea4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3EA8u;
}

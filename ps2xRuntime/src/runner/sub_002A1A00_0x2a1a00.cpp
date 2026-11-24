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

// Function: sub_002A1A00
// Address: 0x2a1a00 - 0x2a1b14
void sub_002A1A00_0x2a1a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1A00_0x2a1a00");
#endif

    switch (ctx->pc) {
        case 0x2a1a40u: goto label_2a1a40;
        case 0x2a1a64u: goto label_2a1a64;
        case 0x2a1a7cu: goto label_2a1a7c;
        case 0x2a1aa0u: goto label_2a1aa0;
        default: break;
    }

    ctx->pc = 0x2a1a00u;

    // 0x2a1a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a1a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a1a04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a1a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a1a08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a1a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a1a0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1a10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a1a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1a1c: 0x94820068  lhu         $v0, 0x68($a0)
    ctx->pc = 0x2a1a1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a1a20: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x2a1a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1a24: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2a1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a1a28: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x2a1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2a1a2c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2a1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a1a30: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2a1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a1a34: 0x38900  sll         $s1, $v1, 4
    ctx->pc = 0x2a1a34u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1a38: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x2a1a38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a1a3c: 0x0  nop
    ctx->pc = 0x2a1a3cu;
    // NOP
label_2a1a40:
    // 0x2a1a40: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x2a1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2a1a44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a1a48: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2a1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2a1a4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a1a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a1a50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1A50u;
    {
        const bool branch_taken_0x2a1a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A50u;
        // 0x2a1a54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a50) {
            ctx->pc = 0x2A1A70u;
            goto label_2a1a70;
        }
    }
    ctx->pc = 0x2A1A58u;
    // 0x2a1a58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a1a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a5c: 0xc0a85cc  jal         func_2A1730
    ctx->pc = 0x2A1A5Cu;
    SET_GPR_U32(ctx, 31, 0x2A1A64u);
    ctx->pc = 0x2A1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A5Cu;
    // 0x2a1a60: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1730u, 0x2A1A5Cu, 0x2A1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A64u;
label_2a1a64:
    // 0x2a1a64: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2A1A64u;
    {
        const bool branch_taken_0x2a1a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a64) {
            ctx->pc = 0x2A1AE8u;
            goto label_2a1ae8;
        }
    }
    ctx->pc = 0x2A1A6Cu;
    // 0x2a1a6c: 0x0  nop
    ctx->pc = 0x2a1a6cu;
    // NOP
label_2a1a70:
    // 0x2a1a70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a74: 0xc0a8604  jal         func_2A1810
    ctx->pc = 0x2A1A74u;
    SET_GPR_U32(ctx, 31, 0x2A1A7Cu);
    ctx->pc = 0x2A1A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A74u;
    // 0x2a1a78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1810u, 0x2A1A74u, 0x2A1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A7Cu;
label_2a1a7c:
    // 0x2a1a7c: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x2a1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2a1a80: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2a1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2a1a84: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2a1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2a1a88: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2a1a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a1a8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1A8Cu;
    {
        const bool branch_taken_0x2a1a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A8Cu;
        // 0x2a1a90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a8c) {
            ctx->pc = 0x2A1AA0u;
            goto label_2a1aa0;
        }
    }
    ctx->pc = 0x2A1A94u;
    // 0x2a1a94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a1a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a98: 0xc0a86e0  jal         func_2A1B80
    ctx->pc = 0x2A1A98u;
    SET_GPR_U32(ctx, 31, 0x2A1AA0u);
    ctx->pc = 0x2A1A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A98u;
    // 0x2a1a9c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1B80u, 0x2A1A98u, 0x2A1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AA0u;
label_2a1aa0:
    // 0x2a1aa0: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x2a1aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2a1aa4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2a1aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2a1aa8: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2a1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2a1aac: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2a1aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2a1ab0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1AB0u;
    {
        const bool branch_taken_0x2a1ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ab0) {
            ctx->pc = 0x2A1AD0u;
            goto label_2a1ad0;
        }
    }
    ctx->pc = 0x2A1AB8u;
    // 0x2a1ab8: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2a1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2a1abc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2a1abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2a1ac0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a1ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a1ac4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2a1ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2a1ac8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1AC8u;
    {
        const bool branch_taken_0x2a1ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AC8u;
        // 0x2a1acc: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ac8) {
            ctx->pc = 0x2A1AE8u;
            goto label_2a1ae8;
        }
    }
    ctx->pc = 0x2A1AD0u;
label_2a1ad0:
    // 0x2a1ad0: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x2a1ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2a1ad4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2a1ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2a1ad8: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x2a1ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2a1adc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2a1adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a1ae0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a1ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a1ae4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2a1ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2a1ae8:
    // 0x2a1ae8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2a1ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2a1aec: 0x2631ffb0  addiu       $s1, $s1, -0x50
    ctx->pc = 0x2a1aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967216));
    // 0x2a1af0: 0x641ffd3  bgez        $s2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2A1AF0u;
    {
        const bool branch_taken_0x2a1af0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2A1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AF0u;
        // 0x2a1af4: 0x2610fe10  addiu       $s0, $s0, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1af0) {
            ctx->pc = 0x2A1A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1a40;
        }
    }
    ctx->pc = 0x2A1AF8u;
    // 0x2a1af8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a1af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1afc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a1afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1b00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B0Cu;
        // 0x2a1b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1B14u;
}

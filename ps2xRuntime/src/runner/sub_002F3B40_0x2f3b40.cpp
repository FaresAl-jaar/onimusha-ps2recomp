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

// Function: sub_002F3B40
// Address: 0x2f3b40 - 0x2f3c5c
void sub_002F3B40_0x2f3b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3B40_0x2f3b40");
#endif

    switch (ctx->pc) {
        case 0x2f3b84u: goto label_2f3b84;
        case 0x2f3ba0u: goto label_2f3ba0;
        case 0x2f3bb0u: goto label_2f3bb0;
        default: break;
    }

    ctx->pc = 0x2f3b40u;

    // 0x2f3b40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f3b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f3b44: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x2f3b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2f3b48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f3b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f3b4c: 0x24020346  addiu       $v0, $zero, 0x346
    ctx->pc = 0x2f3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    // 0x2f3b50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f3b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f3b54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f3b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f3b58: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f3b58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f3b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f3b60: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f3b60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f3b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f3b68: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f3b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3b70: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2f3b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b74: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3B74u;
    {
        const bool branch_taken_0x2f3b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B74u;
        // 0x2f3b78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b74) {
            ctx->pc = 0x2F3B90u;
            goto label_2f3b90;
        }
    }
    ctx->pc = 0x2F3B7Cu;
    // 0x2f3b7c: 0xc0bcf18  jal         func_2F3C60
    ctx->pc = 0x2F3B7Cu;
    SET_GPR_U32(ctx, 31, 0x2F3B84u);
    ctx->pc = 0x2F3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B7Cu;
    // 0x2f3b80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3C60u, 0x2F3B7Cu, 0x2F3B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B84u;
label_2f3b84:
    // 0x2f3b84: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F3B84u;
    {
        const bool branch_taken_0x2f3b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3b84) {
            ctx->pc = 0x2F3C38u;
            goto label_2f3c38;
        }
    }
    ctx->pc = 0x2F3B8Cu;
    // 0x2f3b8c: 0x0  nop
    ctx->pc = 0x2f3b8cu;
    // NOP
label_2f3b90:
    // 0x2f3b90: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F3B90u;
    {
        const bool branch_taken_0x2f3b90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B90u;
        // 0x2f3b94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b90) {
            ctx->pc = 0x2F3C20u;
            goto label_2f3c20;
        }
    }
    ctx->pc = 0x2F3B98u;
    // 0x2f3b98: 0x30f000ff  andi        $s0, $a3, 0xFF
    ctx->pc = 0x2f3b98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f3b9c: 0x0  nop
    ctx->pc = 0x2f3b9cu;
    // NOP
label_2f3ba0:
    // 0x2f3ba0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f3ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ba4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f3ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ba8: 0xc0bcdac  jal         func_2F36B0
    ctx->pc = 0x2F3BA8u;
    SET_GPR_U32(ctx, 31, 0x2F3BB0u);
    ctx->pc = 0x2F3BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3BA8u;
    // 0x2f3bac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F36B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F36B0u, 0x2F3BA8u, 0x2F3BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BB0u;
label_2f3bb0:
    // 0x2f3bb0: 0xa6a20008  sh          $v0, 0x8($s5)
    ctx->pc = 0x2f3bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f3bb4: 0x96a30008  lhu         $v1, 0x8($s5)
    ctx->pc = 0x2f3bb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2f3bb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f3bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f3bbc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F3BBCu;
    {
        const bool branch_taken_0x2f3bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f3bbc) {
            ctx->pc = 0x2F3C20u;
            goto label_2f3c20;
        }
    }
    ctx->pc = 0x2F3BC4u;
    // 0x2f3bc4: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x2f3bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2f3bc8: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x2f3bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2f3bcc: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x2f3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2f3bd0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2f3bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f3bd4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2f3bd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3bd8: 0x32060001  andi        $a2, $s0, 0x1
    ctx->pc = 0x2f3bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2f3bdc: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x2f3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x2f3be0: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x2f3be0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x2f3be4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f3be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f3be8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2f3be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2f3bec: 0x90e2009c  lbu         $v0, 0x9C($a3)
    ctx->pc = 0x2f3becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x2f3bf0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f3bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f3bf4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f3bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f3bf8: 0xa0e2009c  sb          $v0, 0x9C($a3)
    ctx->pc = 0x2f3bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 156), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f3bfc: 0x90e2009c  lbu         $v0, 0x9C($a3)
    ctx->pc = 0x2f3bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x2f3c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f3c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f3c04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2f3c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f3c08: 0xa0e2009c  sb          $v0, 0x9C($a3)
    ctx->pc = 0x2f3c08u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 156), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f3c0c: 0xa0e0009d  sb          $zero, 0x9D($a3)
    ctx->pc = 0x2f3c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 157), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3c10: 0xa4e0009e  sh          $zero, 0x9E($a3)
    ctx->pc = 0x2f3c10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 158), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f3c14: 0x1660ffe2  bnez        $s3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2F3C14u;
    {
        const bool branch_taken_0x2f3c14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C14u;
        // 0x2f3c18: 0xa4f400a0  sh          $s4, 0xA0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 160), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c14) {
            ctx->pc = 0x2F3BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3ba0;
        }
    }
    ctx->pc = 0x2F3C1Cu;
    // 0x2f3c1c: 0x0  nop
    ctx->pc = 0x2f3c1cu;
    // NOP
label_2f3c20:
    // 0x2f3c20: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3C20u;
    {
        const bool branch_taken_0x2f3c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3c20) {
            ctx->pc = 0x2F3C30u;
            goto label_2f3c30;
        }
    }
    ctx->pc = 0x2F3C28u;
    // 0x2f3c28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3C28u;
    {
        const bool branch_taken_0x2f3c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C28u;
        // 0x2f3c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c28) {
            ctx->pc = 0x2F3C38u;
            goto label_2f3c38;
        }
    }
    ctx->pc = 0x2F3C30u;
label_2f3c30:
    // 0x2f3c30: 0x2411fffe  addiu       $s1, $zero, -0x2
    ctx->pc = 0x2f3c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f3c34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f3c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c38:
    // 0x2f3c38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f3c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f3c3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f3c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3c40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f3c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3c44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f3c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f3c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C54u;
        // 0x2f3c58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3C5Cu;
}

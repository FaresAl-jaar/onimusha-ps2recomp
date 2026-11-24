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

// Function: sub_00349BB0
// Address: 0x349bb0 - 0x349c6c
void sub_00349BB0_0x349bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349BB0_0x349bb0");
#endif

    switch (ctx->pc) {
        case 0x349bd8u: goto label_349bd8;
        case 0x349bf4u: goto label_349bf4;
        case 0x349c10u: goto label_349c10;
        case 0x349c24u: goto label_349c24;
        default: break;
    }

    ctx->pc = 0x349bb0u;

    // 0x349bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x349bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x349bb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x349bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x349bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x349bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x349bbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x349bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x349bc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x349bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349bc8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x349bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349bd0: 0x26700002  addiu       $s0, $s3, 0x2
    ctx->pc = 0x349bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x349bd4: 0x0  nop
    ctx->pc = 0x349bd4u;
    // NOP
label_349bd8:
    // 0x349bd8: 0x9606004e  lhu         $a2, 0x4E($s0)
    ctx->pc = 0x349bd8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x349bdc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x349bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349be0: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x349BE0u;
    {
        const bool branch_taken_0x349be0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x349BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349BE0u;
        // 0x349be4: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349be0) {
            ctx->pc = 0x349C28u;
            goto label_349c28;
        }
    }
    ctx->pc = 0x349BE8u;
    // 0x349be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349bec: 0xc0bce30  jal         func_2F38C0
    ctx->pc = 0x349BECu;
    SET_GPR_U32(ctx, 31, 0x349BF4u);
    ctx->pc = 0x349BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349BECu;
    // 0x349bf0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38C0u, 0x349BECu, 0x349BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349BF4u;
label_349bf4:
    // 0x349bf4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x349bf4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x349bf8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x349bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349bfc: 0x1223000a  beq         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x349BFCu;
    {
        const bool branch_taken_0x349bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x349C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349BFCu;
        // 0x349c00: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349bfc) {
            ctx->pc = 0x349C28u;
            goto label_349c28;
        }
    }
    ctx->pc = 0x349C04u;
    // 0x349c04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x349c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c08: 0xc0cca10  jal         func_332840
    ctx->pc = 0x349C08u;
    SET_GPR_U32(ctx, 31, 0x349C10u);
    ctx->pc = 0x349C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C08u;
    // 0x349c0c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332840u, 0x349C08u, 0x349C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C10u;
label_349c10:
    // 0x349c10: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x349C10u;
    {
        const bool branch_taken_0x349c10 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x349C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C10u;
        // 0x349c14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c10) {
            ctx->pc = 0x349C28u;
            goto label_349c28;
        }
    }
    ctx->pc = 0x349C18u;
    // 0x349c18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x349c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c1c: 0xc0d264c  jal         func_349930
    ctx->pc = 0x349C1Cu;
    SET_GPR_U32(ctx, 31, 0x349C24u);
    ctx->pc = 0x349C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C1Cu;
    // 0x349c20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349930u, 0x349C1Cu, 0x349C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C24u;
label_349c24:
    // 0x349c24: 0x0  nop
    ctx->pc = 0x349c24u;
    // NOP
label_349c28:
    // 0x349c28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x349c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x349c2c: 0x2a410005  slti        $at, $s2, 0x5
    ctx->pc = 0x349c2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x349c30: 0x1420ffe9  bnez        $at, . + 4 + (-0x17 << 2)
    ctx->pc = 0x349C30u;
    {
        const bool branch_taken_0x349c30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x349C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C30u;
        // 0x349c34: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c30) {
            ctx->pc = 0x349BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349bd8;
        }
    }
    ctx->pc = 0x349C38u;
    // 0x349c38: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x349c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349c3c: 0xa663004e  sh          $v1, 0x4E($s3)
    ctx->pc = 0x349c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 78), (uint16_t)GPR_U32(ctx, 3));
    // 0x349c40: 0xa6630050  sh          $v1, 0x50($s3)
    ctx->pc = 0x349c40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x349c44: 0xa6630052  sh          $v1, 0x52($s3)
    ctx->pc = 0x349c44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x349c48: 0xa6630054  sh          $v1, 0x54($s3)
    ctx->pc = 0x349c48u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x349c4c: 0xa6630056  sh          $v1, 0x56($s3)
    ctx->pc = 0x349c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 3));
    // 0x349c50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x349c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349c54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x349c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349c58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x349c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349c64: 0x3e00008  jr          $ra
    ctx->pc = 0x349C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C64u;
        // 0x349c68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349C6Cu;
}

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

// Function: sub_0037FBF0
// Address: 0x37fbf0 - 0x37fcc0
void sub_0037FBF0_0x37fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FBF0_0x37fbf0");
#endif

    ctx->pc = 0x37fbf0u;

    // 0x37fbf0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x37fbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37fbf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37fbf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37fbf8: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37FBF8u;
    {
        const bool branch_taken_0x37fbf8 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x37fbf8) {
            ctx->pc = 0x37FC30u;
            goto label_37fc30;
        }
    }
    ctx->pc = 0x37FC00u;
    // 0x37fc00: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fc04: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x37fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x37fc08: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37fc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37fc0c: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x37fc10: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fc14: 0x28610800  slti        $at, $v1, 0x800
    ctx->pc = 0x37fc14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x37fc18: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x37FC18u;
    {
        const bool branch_taken_0x37fc18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC18u;
        // 0x37fc1c: 0x28610201  slti        $at, $v1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc18) {
            ctx->pc = 0x37FCB8u;
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FC20u;
    // 0x37fc20: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x37FC20u;
    {
        const bool branch_taken_0x37fc20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC20u;
        // 0x37fc24: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc20) {
            ctx->pc = 0x37FCB8u;
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FC28u;
    // 0x37fc28: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x37FC28u;
    {
        const bool branch_taken_0x37fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC28u;
        // 0x37fc2c: 0xa48300c4  sh          $v1, 0xC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc28) {
            ctx->pc = 0x37FCB8u;
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FC30u;
label_37fc30:
    // 0x37fc30: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37FC30u;
    {
        const bool branch_taken_0x37fc30 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x37fc30) {
            ctx->pc = 0x37FC68u;
            goto label_37fc68;
        }
    }
    ctx->pc = 0x37FC38u;
    // 0x37fc38: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fc3c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x37fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x37fc40: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37fc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37fc44: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x37fc48: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fc4c: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x37fc4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37fc50: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x37FC50u;
    {
        const bool branch_taken_0x37fc50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC50u;
        // 0x37fc54: 0x28610e00  slti        $at, $v1, 0xE00 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3584) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc50) {
            ctx->pc = 0x37FCB8u;
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FC58u;
    // 0x37fc58: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x37FC58u;
    {
        const bool branch_taken_0x37fc58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC58u;
        // 0x37fc5c: 0x24030e00  addiu       $v1, $zero, 0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc58) {
            ctx->pc = 0x37FCB8u;
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FC60u;
    // 0x37fc60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x37FC60u;
    {
        const bool branch_taken_0x37fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC60u;
        // 0x37fc64: 0xa48300c4  sh          $v1, 0xC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc60) {
            ctx->pc = 0x37FCB8u;
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FC68u;
label_37fc68:
    // 0x37fc68: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fc6c: 0x28610800  slti        $at, $v1, 0x800
    ctx->pc = 0x37fc6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x37fc70: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x37FC70u;
    {
        const bool branch_taken_0x37fc70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fc70) {
            ctx->pc = 0x37FC98u;
            goto label_37fc98;
        }
    }
    ctx->pc = 0x37FC78u;
    // 0x37fc78: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x37fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x37fc7c: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x37fc80: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fc84: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37FC84u;
    {
        const bool branch_taken_0x37fc84 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x37fc84) {
            ctx->pc = 0x37FCB8u;
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FC8Cu;
    // 0x37fc8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37FC8Cu;
    {
        const bool branch_taken_0x37fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC8Cu;
        // 0x37fc90: 0xa48000c4  sh          $zero, 0xC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc8c) {
            ctx->pc = 0x37FCB8u;
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FC94u;
    // 0x37fc94: 0x0  nop
    ctx->pc = 0x37fc94u;
    // NOP
label_37fc98:
    // 0x37fc98: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x37fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x37fc9c: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x37fca0: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fca4: 0x28631000  slti        $v1, $v1, 0x1000
    ctx->pc = 0x37fca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x37fca8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FCA8u;
    {
        const bool branch_taken_0x37fca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fca8) {
            ctx->pc = 0x37FCB8u;
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FCB0u;
    // 0x37fcb0: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x37fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x37fcb4: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
label_37fcb8:
    // 0x37fcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x37FCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FCC0u;
}

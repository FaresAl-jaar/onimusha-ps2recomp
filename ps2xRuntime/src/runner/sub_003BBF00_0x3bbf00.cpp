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

// Function: sub_003BBF00
// Address: 0x3bbf00 - 0x3bbfb0
void sub_003BBF00_0x3bbf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBF00_0x3bbf00");
#endif

    switch (ctx->pc) {
        case 0x3bbf44u: goto label_3bbf44;
        case 0x3bbf70u: goto label_3bbf70;
        case 0x3bbf90u: goto label_3bbf90;
        default: break;
    }

    ctx->pc = 0x3bbf00u;

    // 0x3bbf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bbf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bbf04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bbf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bbf08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bbf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bbf0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bbf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bbf10: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3bbf10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3bbf14: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3BBF14u;
    {
        const bool branch_taken_0x3bbf14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF14u;
        // 0x3bbf18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbf14) {
            ctx->pc = 0x3BBF80u;
            goto label_3bbf80;
        }
    }
    ctx->pc = 0x3BBF1Cu;
    // 0x3bbf1c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BBF1Cu;
    {
        const bool branch_taken_0x3bbf1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbf1c) {
            ctx->pc = 0x3BBF30u;
            goto label_3bbf30;
        }
    }
    ctx->pc = 0x3BBF24u;
    // 0x3bbf24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3BBF24u;
    {
        const bool branch_taken_0x3bbf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbf24) {
            ctx->pc = 0x3BBFA0u;
            goto label_3bbfa0;
        }
    }
    ctx->pc = 0x3BBF2Cu;
    // 0x3bbf2c: 0x0  nop
    ctx->pc = 0x3bbf2cu;
    // NOP
label_3bbf30:
    // 0x3bbf30: 0x96032b42  lhu         $v1, 0x2B42($s0)
    ctx->pc = 0x3bbf30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
    // 0x3bbf34: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BBF34u;
    {
        const bool branch_taken_0x3bbf34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bbf34) {
            ctx->pc = 0x3BBF48u;
            goto label_3bbf48;
        }
    }
    ctx->pc = 0x3BBF3Cu;
    // 0x3bbf3c: 0xc0eef28  jal         func_3BBCA0
    ctx->pc = 0x3BBF3Cu;
    SET_GPR_U32(ctx, 31, 0x3BBF44u);
    ctx->pc = 0x3BBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBCA0u, 0x3BBF3Cu, 0x3BBF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBF44u;
label_3bbf44:
    // 0x3bbf44: 0x0  nop
    ctx->pc = 0x3bbf44u;
    // NOP
label_3bbf48:
    // 0x3bbf48: 0x96032b42  lhu         $v1, 0x2B42($s0)
    ctx->pc = 0x3bbf48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11074)));
    // 0x3bbf4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bbf50: 0xa6032b42  sh          $v1, 0x2B42($s0)
    ctx->pc = 0x3bbf50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11074), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bbf54: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3bbf54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3bbf58: 0x96032b44  lhu         $v1, 0x2B44($s0)
    ctx->pc = 0x3bbf58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11076)));
    // 0x3bbf5c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3bbf5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3bbf60: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3BBF60u;
    {
        const bool branch_taken_0x3bbf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF60u;
        // 0x3bbf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbf60) {
            ctx->pc = 0x3BBFA0u;
            goto label_3bbfa0;
        }
    }
    ctx->pc = 0x3BBF68u;
    // 0x3bbf68: 0xc0eef4c  jal         func_3BBD30
    ctx->pc = 0x3BBF68u;
    SET_GPR_U32(ctx, 31, 0x3BBF70u);
    ctx->pc = 0x3BBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBD30u, 0x3BBF68u, 0x3BBF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBF70u;
label_3bbf70:
    // 0x3bbf70: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3bbf70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bbf74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bbf78: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3bbf78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bbf7c: 0x0  nop
    ctx->pc = 0x3bbf7cu;
    // NOP
label_3bbf80:
    // 0x3bbf80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bbf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bbf84: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3bbf84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bbf88: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3BBF88u;
    SET_GPR_U32(ctx, 31, 0x3BBF90u);
    ctx->pc = 0x3BBF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBF88u;
    // 0x3bbf8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3BBF88u, 0x3BBF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBF90u;
label_3bbf90:
    // 0x3bbf90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBF90u;
    {
        const bool branch_taken_0x3bbf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF90u;
        // 0x3bbf94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbf90) {
            ctx->pc = 0x3BBFA0u;
            goto label_3bbfa0;
        }
    }
    ctx->pc = 0x3BBF98u;
    // 0x3bbf98: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3bbf98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bbf9c: 0x0  nop
    ctx->pc = 0x3bbf9cu;
    // NOP
label_3bbfa0:
    // 0x3bbfa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bbfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bbfa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bbfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bbfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFA8u;
        // 0x3bbfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBFB0u;
}

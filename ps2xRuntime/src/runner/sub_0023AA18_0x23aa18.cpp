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

// Function: sub_0023AA18
// Address: 0x23aa18 - 0x23aa88
void sub_0023AA18_0x23aa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AA18_0x23aa18");
#endif

    switch (ctx->pc) {
        case 0x23aa60u: goto label_23aa60;
        default: break;
    }

    ctx->pc = 0x23aa18u;

    // 0x23aa18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23aa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23aa1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23aa20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23aa20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aa24: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23AA24u;
    {
        const bool branch_taken_0x23aa24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA24u;
        // 0x23aa28: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa24) {
            ctx->pc = 0x23AA48u;
            goto label_23aa48;
        }
    }
    ctx->pc = 0x23AA2Cu;
    // 0x23aa2c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23aa30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aa30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aa34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23aa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23aa38: 0x2484b2d8  addiu       $a0, $a0, -0x4D28
    ctx->pc = 0x23aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947544));
    // 0x23aa3c: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23AA3Cu;
    ctx->pc = 0x23AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA3Cu;
    // 0x23aa40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23AA44u;
    // 0x23aa44: 0x0  nop
    ctx->pc = 0x23aa44u;
    // NOP
label_23aa48:
    // 0x23aa48: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x23aa48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x23aa4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23aa50: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23AA50u;
    {
        const bool branch_taken_0x23aa50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA50u;
        // 0x23aa54: 0xa6050040  sh          $a1, 0x40($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa50) {
            ctx->pc = 0x23AA68u;
            goto label_23aa68;
        }
    }
    ctx->pc = 0x23AA58u;
    // 0x23aa58: 0xc08db5c  jal         func_236D70
    ctx->pc = 0x23AA58u;
    SET_GPR_U32(ctx, 31, 0x23AA60u);
    ctx->pc = 0x23AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA58u;
    // 0x23aa5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D70u, 0x23AA58u, 0x23AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA60u;
label_23aa60:
    // 0x23aa60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23AA60u;
    {
        const bool branch_taken_0x23aa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA60u;
        // 0x23aa64: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa60) {
            ctx->pc = 0x23AA70u;
            goto label_23aa70;
        }
    }
    ctx->pc = 0x23AA68u;
label_23aa68:
    // 0x23aa68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23aa68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aa6c: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x23aa6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_23aa70:
    // 0x23aa70: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23aa74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23aa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23aa78: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23aa7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aa7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aa80: 0x808d596  j           func_235658
    ctx->pc = 0x23AA80u;
    ctx->pc = 0x23AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA80u;
    // 0x23aa84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235658u;
    sub_00235658_0x235658(rdram, ctx, runtime); return;
    ctx->pc = 0x23AA88u;
}

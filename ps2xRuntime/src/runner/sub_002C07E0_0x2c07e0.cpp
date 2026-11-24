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

// Function: sub_002C07E0
// Address: 0x2c07e0 - 0x2c085c
void sub_002C07E0_0x2c07e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C07E0_0x2c07e0");
#endif

    switch (ctx->pc) {
        case 0x2c0838u: goto label_2c0838;
        default: break;
    }

    ctx->pc = 0x2c07e0u;

    // 0x2c07e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c07e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c07e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c07e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c07e8: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c07e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c07ec: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C07ECu;
    {
        const bool branch_taken_0x2c07ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C07F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07ECu;
        // 0x2c07f0: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07ec) {
            ctx->pc = 0x2C0840u;
            goto label_2c0840;
        }
    }
    ctx->pc = 0x2C07F4u;
    // 0x2c07f4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C07F4u;
    {
        const bool branch_taken_0x2c07f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07F4u;
        // 0x2c07f8: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07f4) {
            ctx->pc = 0x2C0830u;
            goto label_2c0830;
        }
    }
    ctx->pc = 0x2C07FCu;
    // 0x2c07fc: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c07fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c0800: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c0800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c0804: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c0804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c080c: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c080cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c0810: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c0810u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c0814: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c0814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0818: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c0818u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c081c: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c081cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c0820: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c0820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c0824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0828: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C0828u;
    {
        const bool branch_taken_0x2c0828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0828u;
        // 0x2c082c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0828) {
            ctx->pc = 0x2C0850u;
            goto label_2c0850;
        }
    }
    ctx->pc = 0x2C0830u;
label_2c0830:
    // 0x2c0830: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C0830u;
    SET_GPR_U32(ctx, 31, 0x2C0838u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C0830u, 0x2C0838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0838u;
label_2c0838:
    // 0x2c0838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0838u;
    {
        const bool branch_taken_0x2c0838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0838) {
            ctx->pc = 0x2C0848u;
            goto label_2c0848;
        }
    }
    ctx->pc = 0x2C0840u;
label_2c0840:
    // 0x2c0840: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c0840u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c0844: 0x0  nop
    ctx->pc = 0x2c0844u;
    // NOP
label_2c0848:
    // 0x2c0848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c084c: 0x0  nop
    ctx->pc = 0x2c084cu;
    // NOP
label_2c0850:
    // 0x2c0850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0854: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0854u;
        // 0x2c0858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C085Cu;
}

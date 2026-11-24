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

// Function: sub_003655D0
// Address: 0x3655d0 - 0x365660
void sub_003655D0_0x3655d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003655D0_0x3655d0");
#endif

    switch (ctx->pc) {
        case 0x36560cu: goto label_36560c;
        case 0x36562cu: goto label_36562c;
        case 0x365648u: goto label_365648;
        default: break;
    }

    ctx->pc = 0x3655d0u;

    // 0x3655d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3655d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3655d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3655d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3655d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3655d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3655dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3655dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3655e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3655e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3655e4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3655E4u;
    {
        const bool branch_taken_0x3655e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3655E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655E4u;
        // 0x3655e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3655e4) {
            ctx->pc = 0x365648u;
            goto label_365648;
        }
    }
    ctx->pc = 0x3655ECu;
    // 0x3655ec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3655ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x3655f0: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x3655f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x3655f4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x3655f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x3655f8: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x3655f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x3655fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3655FCu;
    {
        const bool branch_taken_0x3655fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3655fc) {
            ctx->pc = 0x365610u;
            goto label_365610;
        }
    }
    ctx->pc = 0x365604u;
    // 0x365604: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x365604u;
    SET_GPR_U32(ctx, 31, 0x36560Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x365604u, 0x36560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36560Cu;
label_36560c:
    // 0x36560c: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x36560cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_365610:
    // 0x365610: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x365610u;
    {
        const bool branch_taken_0x365610 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x365614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365610u;
        // 0x365614: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365610) {
            ctx->pc = 0x365630u;
            goto label_365630;
        }
    }
    ctx->pc = 0x365618u;
    // 0x365618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36561c: 0x244274e0  addiu       $v0, $v0, 0x74E0
    ctx->pc = 0x36561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29920));
    // 0x365620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365624: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x365624u;
    SET_GPR_U32(ctx, 31, 0x36562Cu);
    ctx->pc = 0x365628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365624u;
    // 0x365628: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x365624u, 0x36562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36562Cu;
label_36562c:
    // 0x36562c: 0x0  nop
    ctx->pc = 0x36562cu;
    // NOP
label_365630:
    // 0x365630: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x365630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x365634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x365638: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365638u;
    {
        const bool branch_taken_0x365638 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x36563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365638u;
        // 0x36563c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365638) {
            ctx->pc = 0x365648u;
            goto label_365648;
        }
    }
    ctx->pc = 0x365640u;
    // 0x365640: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x365640u;
    SET_GPR_U32(ctx, 31, 0x365648u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x365640u, 0x365648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365648u;
label_365648:
    // 0x365648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x365648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36564c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36564cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365658: 0x3e00008  jr          $ra
    ctx->pc = 0x365658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365658u;
        // 0x36565c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365660u;
}

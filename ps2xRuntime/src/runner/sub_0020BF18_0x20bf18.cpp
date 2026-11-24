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

// Function: sub_0020BF18
// Address: 0x20bf18 - 0x20bf80
void sub_0020BF18_0x20bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BF18_0x20bf18");
#endif

    switch (ctx->pc) {
        case 0x20bf3cu: goto label_20bf3c;
        case 0x20bf5cu: goto label_20bf5c;
        default: break;
    }

    ctx->pc = 0x20bf18u;

    // 0x20bf18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bf1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20bf20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20bf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20bf28: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x20bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20bf2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BF2Cu;
    {
        const bool branch_taken_0x20bf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF2Cu;
        // 0x20bf30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf2c) {
            ctx->pc = 0x20BF48u;
            goto label_20bf48;
        }
    }
    ctx->pc = 0x20BF34u;
    // 0x20bf34: 0xc083244  jal         func_20C910
    ctx->pc = 0x20BF34u;
    SET_GPR_U32(ctx, 31, 0x20BF3Cu);
    ctx->pc = 0x20C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C910u, 0x20BF34u, 0x20BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF3Cu;
label_20bf3c:
    // 0x20bf3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20BF3Cu;
    {
        const bool branch_taken_0x20bf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF3Cu;
        // 0x20bf40: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf3c) {
            ctx->pc = 0x20BF48u;
            goto label_20bf48;
        }
    }
    ctx->pc = 0x20BF44u;
    // 0x20bf44: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_20bf48:
    // 0x20bf48: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x20bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x20bf4c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20BF4Cu;
    {
        const bool branch_taken_0x20bf4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf4c) {
            ctx->pc = 0x20BF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BF4Cu;
            // 0x20bf50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BF74u;
            goto label_20bf74;
        }
    }
    ctx->pc = 0x20BF54u;
    // 0x20bf54: 0xc0829c8  jal         func_20A720
    ctx->pc = 0x20BF54u;
    SET_GPR_U32(ctx, 31, 0x20BF5Cu);
    ctx->pc = 0x20A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A720u, 0x20BF54u, 0x20BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF5Cu;
label_20bf5c:
    // 0x20bf5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bf60: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BF60u;
    {
        const bool branch_taken_0x20bf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20bf60) {
            ctx->pc = 0x20BF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BF60u;
            // 0x20bf64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BF74u;
            goto label_20bf74;
        }
    }
    ctx->pc = 0x20BF68u;
    // 0x20bf68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20bf6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20bf70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20bf74:
    // 0x20bf74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20bf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bf78: 0x3e00008  jr          $ra
    ctx->pc = 0x20BF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF78u;
        // 0x20bf7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BF80u;
}

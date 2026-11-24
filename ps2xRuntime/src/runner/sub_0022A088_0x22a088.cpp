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

// Function: sub_0022A088
// Address: 0x22a088 - 0x22a0ec
void sub_0022A088_0x22a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A088_0x22a088");
#endif

    switch (ctx->pc) {
        case 0x22a0a8u: goto label_22a0a8;
        case 0x22a0c4u: goto label_22a0c4;
        default: break;
    }

    ctx->pc = 0x22a088u;

    // 0x22a088: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22a088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22a08c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a08cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a090: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22a090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22a094: 0x24a59968  addiu       $a1, $a1, -0x6698
    ctx->pc = 0x22a094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941032));
    // 0x22a098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a09c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22a09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22a0a0: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22A0A0u;
    SET_GPR_U32(ctx, 31, 0x22A0A8u);
    ctx->pc = 0x22A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0A0u;
    // 0x22a0a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22A0A0u, 0x22A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0A8u;
label_22a0a8:
    // 0x22a0a8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22a0ac: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x22a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x22a0b0: 0x24a59970  addiu       $a1, $a1, -0x6690
    ctx->pc = 0x22a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941040));
    // 0x22a0b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A0B4u;
    {
        const bool branch_taken_0x22a0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0B4u;
        // 0x22a0b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0b4) {
            ctx->pc = 0x22A0D8u;
            goto label_22a0d8;
        }
    }
    ctx->pc = 0x22A0BCu;
    // 0x22a0bc: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22A0BCu;
    SET_GPR_U32(ctx, 31, 0x22A0C4u);
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22A0BCu, 0x22A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0C4u;
label_22a0c4:
    // 0x22a0c4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A0C4u;
    {
        const bool branch_taken_0x22a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a0c4) {
            ctx->pc = 0x22A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A0C4u;
            // 0x22a0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A0DCu;
            goto label_22a0dc;
        }
    }
    ctx->pc = 0x22A0CCu;
    // 0x22a0cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22A0CCu;
    {
        const bool branch_taken_0x22a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0CCu;
        // 0x22a0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0cc) {
            ctx->pc = 0x22A0DCu;
            goto label_22a0dc;
        }
    }
    ctx->pc = 0x22A0D4u;
    // 0x22a0d4: 0x0  nop
    ctx->pc = 0x22a0d4u;
    // NOP
label_22a0d8:
    // 0x22a0d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22a0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a0dc:
    // 0x22a0dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a0e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22a0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0E4u;
        // 0x22a0e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A0ECu;
}

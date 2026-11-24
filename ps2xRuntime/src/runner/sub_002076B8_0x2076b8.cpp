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

// Function: sub_002076B8
// Address: 0x2076b8 - 0x207728
void sub_002076B8_0x2076b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002076B8_0x2076b8");
#endif

    switch (ctx->pc) {
        case 0x2076ccu: goto label_2076cc;
        default: break;
    }

    ctx->pc = 0x2076b8u;

    // 0x2076b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2076b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2076bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2076bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2076c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2076c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2076c4: 0xc081dca  jal         func_207728
    ctx->pc = 0x2076C4u;
    SET_GPR_U32(ctx, 31, 0x2076CCu);
    ctx->pc = 0x2076C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2076C4u;
    // 0x2076c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207728u, 0x2076C4u, 0x2076CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2076CCu;
label_2076cc:
    // 0x2076cc: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x2076ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x2076d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2076d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2076d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2076d8: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2076D8u;
    {
        const bool branch_taken_0x2076d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2076d8) {
            ctx->pc = 0x2076DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2076D8u;
            // 0x2076dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207718u;
            goto label_207718;
        }
    }
    ctx->pc = 0x2076E0u;
    // 0x2076e0: 0x8e0502dc  lw          $a1, 0x2DC($s0)
    ctx->pc = 0x2076e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x2076e4: 0x54a4000c  bnel        $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2076E4u;
    {
        const bool branch_taken_0x2076e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2076e4) {
            ctx->pc = 0x2076E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2076E4u;
            // 0x2076e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207718u;
            goto label_207718;
        }
    }
    ctx->pc = 0x2076ECu;
    // 0x2076ec: 0x8e0202e8  lw          $v0, 0x2E8($s0)
    ctx->pc = 0x2076ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x2076f0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2076f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2076f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2076f8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2076F8u;
    {
        const bool branch_taken_0x2076f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2076f8) {
            ctx->pc = 0x2076FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2076F8u;
            // 0x2076fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207718u;
            goto label_207718;
        }
    }
    ctx->pc = 0x207700u;
    // 0x207700: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207700u;
    {
        const bool branch_taken_0x207700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x207704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207700u;
        // 0x207704: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207700) {
            ctx->pc = 0x207710u;
            goto label_207710;
        }
    }
    ctx->pc = 0x207708u;
    // 0x207708: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207708u;
    {
        const bool branch_taken_0x207708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207708u;
        // 0x20770c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207708) {
            ctx->pc = 0x207718u;
            goto label_207718;
        }
    }
    ctx->pc = 0x207710u;
label_207710:
    // 0x207710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x207710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207718:
    // 0x207718: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x207718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20771c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20771cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207720: 0x3e00008  jr          $ra
    ctx->pc = 0x207720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207720u;
        // 0x207724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207728u;
}

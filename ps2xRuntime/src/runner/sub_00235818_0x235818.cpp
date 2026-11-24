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

// Function: sub_00235818
// Address: 0x235818 - 0x23586c
void sub_00235818_0x235818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235818_0x235818");
#endif

    switch (ctx->pc) {
        case 0x23583cu: goto label_23583c;
        case 0x235850u: goto label_235850;
        default: break;
    }

    ctx->pc = 0x235818u;

    // 0x235818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23581c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23581cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x235820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235824: 0x24507560  addiu       $s0, $v0, 0x7560
    ctx->pc = 0x235824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30048));
    // 0x235828: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C7560u));
    // 0x23582c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23582Cu;
    {
        const bool branch_taken_0x23582c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23582Cu;
        // 0x235830: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23582c) {
            ctx->pc = 0x235850u;
            goto label_235850;
        }
    }
    ctx->pc = 0x235834u;
    // 0x235834: 0xc08acfe  jal         func_22B3F8
    ctx->pc = 0x235834u;
    SET_GPR_U32(ctx, 31, 0x23583Cu);
    ctx->pc = 0x22B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3F8u, 0x235834u, 0x23583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23583Cu;
label_23583c:
    // 0x23583c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x23583cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x235840: 0x24847568  addiu       $a0, $a0, 0x7568
    ctx->pc = 0x235840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30056));
    // 0x235844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235848: 0xc049590  jal         func_125640
    ctx->pc = 0x235848u;
    SET_GPR_U32(ctx, 31, 0x235850u);
    ctx->pc = 0x23584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235848u;
    // 0x23584c: 0x24060ac0  addiu       $a2, $zero, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x235848u, 0x235850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235850u;
label_235850:
    // 0x235850: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x235850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x235854: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x235854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x235858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23585c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x235860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235864: 0x3e00008  jr          $ra
    ctx->pc = 0x235864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235864u;
        // 0x235868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23586Cu;
}

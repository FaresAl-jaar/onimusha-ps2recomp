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

// Function: sub_00223978
// Address: 0x223978 - 0x2239bc
void sub_00223978_0x223978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223978_0x223978");
#endif

    switch (ctx->pc) {
        case 0x22398cu: goto label_22398c;
        default: break;
    }

    ctx->pc = 0x223978u;

    // 0x223978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22397c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22397cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223980: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x223980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x223984: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x223984u;
    SET_GPR_U32(ctx, 31, 0x22398Cu);
    ctx->pc = 0x223988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223984u;
    // 0x223988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x223984u, 0x22398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22398Cu;
label_22398c:
    // 0x22398c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22398Cu;
    {
        const bool branch_taken_0x22398c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22398Cu;
        // 0x223990: 0x2404006b  addiu       $a0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22398c) {
            ctx->pc = 0x2239ACu;
            goto label_2239ac;
        }
    }
    ctx->pc = 0x223994u;
    // 0x223994: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x223994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x223998: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223998u;
    {
        const bool branch_taken_0x223998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x22399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223998u;
        // 0x22399c: 0x2843006e  slti        $v1, $v0, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223998) {
            ctx->pc = 0x2239A8u;
            goto label_2239a8;
        }
    }
    ctx->pc = 0x2239A0u;
    // 0x2239a0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2239A0u;
    {
        const bool branch_taken_0x2239a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2239A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239A0u;
        // 0x2239a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239a0) {
            ctx->pc = 0x2239ACu;
            goto label_2239ac;
        }
    }
    ctx->pc = 0x2239A8u;
label_2239a8:
    // 0x2239a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2239a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2239ac:
    // 0x2239ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2239acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2239b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2239b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2239b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2239B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2239B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239B4u;
        // 0x2239b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2239B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2239BCu;
}

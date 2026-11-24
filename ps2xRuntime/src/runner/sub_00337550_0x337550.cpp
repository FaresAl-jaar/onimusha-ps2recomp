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

// Function: sub_00337550
// Address: 0x337550 - 0x3375b4
void sub_00337550_0x337550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337550_0x337550");
#endif

    switch (ctx->pc) {
        case 0x3375a4u: goto label_3375a4;
        default: break;
    }

    ctx->pc = 0x337550u;

    // 0x337550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x337554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x337558: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x337558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33755c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x33755cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337560: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x337560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x337564: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x337564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x337568: 0x31e7e  dsrl32      $v1, $v1, 25
    ctx->pc = 0x337568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 25));
    // 0x33756c: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x33756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x337570: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x337570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x337574: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x337574u;
    {
        const bool branch_taken_0x337574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337574) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x33757Cu;
    // 0x33757c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33757Cu;
    {
        const bool branch_taken_0x33757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33757Cu;
        // 0x337580: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33757c) {
            ctx->pc = 0x3375A8u;
            goto label_3375a8;
        }
    }
    ctx->pc = 0x337584u;
    // 0x337584: 0x0  nop
    ctx->pc = 0x337584u;
    // NOP
label_337588:
    // 0x337588: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x337588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33758c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x33758Cu;
    {
        const bool branch_taken_0x33758c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33758c) {
            ctx->pc = 0x33759Cu;
            goto label_33759c;
        }
    }
    ctx->pc = 0x337594u;
    // 0x337594: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x337594u;
    {
        const bool branch_taken_0x337594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337594u;
        // 0x337598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337594) {
            ctx->pc = 0x3375A4u;
            goto label_3375a4;
        }
    }
    ctx->pc = 0x33759Cu;
label_33759c:
    // 0x33759c: 0xc0cdc4c  jal         func_337130
    ctx->pc = 0x33759Cu;
    SET_GPR_U32(ctx, 31, 0x3375A4u);
    ctx->pc = 0x337130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337130u, 0x33759Cu, 0x3375A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375A4u;
label_3375a4:
    // 0x3375a4: 0x0  nop
    ctx->pc = 0x3375a4u;
    // NOP
label_3375a8:
    // 0x3375a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3375a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3375ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3375ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3375B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375ACu;
        // 0x3375b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3375ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3375B4u;
}

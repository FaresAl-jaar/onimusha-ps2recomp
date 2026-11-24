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

// Function: sub_0020F318
// Address: 0x20f318 - 0x20f388
void sub_0020F318_0x20f318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F318_0x20f318");
#endif

    switch (ctx->pc) {
        case 0x20f378u: goto label_20f378;
        default: break;
    }

    ctx->pc = 0x20f318u;

    // 0x20f318: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x20f318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20f31c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f31cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f320: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x20f320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20f324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f32c: 0x24831310  addiu       $v1, $a0, 0x1310
    ctx->pc = 0x20f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x20f330: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20f334: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x20f334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20f338: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f33c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x20f33cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f340: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f348: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x20f348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f34c: 0x10470006  beq         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F34Cu;
    {
        const bool branch_taken_0x20f34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x20F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F34Cu;
        // 0x20f350: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f34c) {
            ctx->pc = 0x20F368u;
            goto label_20f368;
        }
    }
    ctx->pc = 0x20F354u;
    // 0x20f354: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20f354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20f358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f35c: 0x34a50409  ori         $a1, $a1, 0x409
    ctx->pc = 0x20f35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
    // 0x20f360: 0x80848e0  j           func_212380
    ctx->pc = 0x20F360u;
    ctx->pc = 0x20F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F360u;
    // 0x20f364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20F368u;
label_20f368:
    // 0x20f368: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x20f368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x20f36c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20f36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f370: 0xc083ce2  jal         func_20F388
    ctx->pc = 0x20F370u;
    SET_GPR_U32(ctx, 31, 0x20F378u);
    ctx->pc = 0x20F374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F370u;
    // 0x20f374: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F388u, 0x20F370u, 0x20F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F378u;
label_20f378:
    // 0x20f378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20f378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f37c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f380: 0x3e00008  jr          $ra
    ctx->pc = 0x20F380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F380u;
        // 0x20f384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F388u;
}

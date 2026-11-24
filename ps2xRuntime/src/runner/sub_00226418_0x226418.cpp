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

// Function: sub_00226418
// Address: 0x226418 - 0x2264b0
void sub_00226418_0x226418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226418_0x226418");
#endif

    switch (ctx->pc) {
        case 0x226468u: goto label_226468;
        case 0x226480u: goto label_226480;
        case 0x226494u: goto label_226494;
        default: break;
    }

    ctx->pc = 0x226418u;

    // 0x226418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22641c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x22641cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226420: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x226420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x226424: 0x25110014  addiu       $s1, $t0, 0x14
    ctx->pc = 0x226424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x226428: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x226428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22642c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22642cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226430: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x226430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x226434: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x226434u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226438: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x226438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x22643c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22643cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x226440: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x226440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x226444: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x226444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x226448: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x226448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22644c: 0x24a593a0  addiu       $a1, $a1, -0x6C60
    ctx->pc = 0x22644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939552));
    // 0x226450: 0x24c693a8  addiu       $a2, $a2, -0x6C58
    ctx->pc = 0x226450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939560));
    // 0x226454: 0x8d100024  lw          $s0, 0x24($t0)
    ctx->pc = 0x226454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x226458: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x226458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22645c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22645cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x226460: 0xc0948e4  jal         func_252390
    ctx->pc = 0x226460u;
    SET_GPR_U32(ctx, 31, 0x226468u);
    ctx->pc = 0x226464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226460u;
    // 0x226464: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252390u, 0x226460u, 0x226468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226468u;
label_226468:
    // 0x226468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22646c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22646cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226470: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226470u;
    {
        const bool branch_taken_0x226470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226470u;
        // 0x226474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226470) {
            ctx->pc = 0x226488u;
            goto label_226488;
        }
    }
    ctx->pc = 0x226478u;
    // 0x226478: 0xc089a5a  jal         func_226968
    ctx->pc = 0x226478u;
    SET_GPR_U32(ctx, 31, 0x226480u);
    ctx->pc = 0x226968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226968u, 0x226478u, 0x226480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226480u;
label_226480:
    // 0x226480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x226480u;
    {
        const bool branch_taken_0x226480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226480u;
        // 0x226484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226480) {
            ctx->pc = 0x226498u;
            goto label_226498;
        }
    }
    ctx->pc = 0x226488u;
label_226488:
    // 0x226488: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x226488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22648c: 0xc089a5a  jal         func_226968
    ctx->pc = 0x22648Cu;
    SET_GPR_U32(ctx, 31, 0x226494u);
    ctx->pc = 0x226490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22648Cu;
    // 0x226490: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226968u, 0x22648Cu, 0x226494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226494u;
label_226494:
    // 0x226494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226498:
    // 0x226498: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x226498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22649c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22649cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2264a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2264a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2264a4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2264a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2264A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2264ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264A8u;
        // 0x2264ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2264A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2264B0u;
}

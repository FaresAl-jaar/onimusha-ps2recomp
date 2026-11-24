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

// Function: sub_002152F0
// Address: 0x2152f0 - 0x21534c
void sub_002152F0_0x2152f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002152F0_0x2152f0");
#endif

    switch (ctx->pc) {
        case 0x215304u: goto label_215304;
        case 0x215314u: goto label_215314;
        case 0x215324u: goto label_215324;
        default: break;
    }

    ctx->pc = 0x2152f0u;

    // 0x2152f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2152f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2152f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2152f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2152f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2152f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2152fc: 0xc0867e2  jal         func_219F88
    ctx->pc = 0x2152FCu;
    SET_GPR_U32(ctx, 31, 0x215304u);
    ctx->pc = 0x215300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152FCu;
    // 0x215300: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F88u, 0x2152FCu, 0x215304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215304u;
label_215304:
    // 0x215304: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x215304u;
    {
        const bool branch_taken_0x215304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215304u;
        // 0x215308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215304) {
            ctx->pc = 0x21532Cu;
            goto label_21532c;
        }
    }
    ctx->pc = 0x21530Cu;
    // 0x21530c: 0xc0854d4  jal         func_215350
    ctx->pc = 0x21530Cu;
    SET_GPR_U32(ctx, 31, 0x215314u);
    ctx->pc = 0x215350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215350u, 0x21530Cu, 0x215314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215314u;
label_215314:
    // 0x215314: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x215314u;
    {
        const bool branch_taken_0x215314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215314u;
        // 0x215318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215314) {
            ctx->pc = 0x215338u;
            goto label_215338;
        }
    }
    ctx->pc = 0x21531Cu;
    // 0x21531c: 0xc0854ee  jal         func_2153B8
    ctx->pc = 0x21531Cu;
    SET_GPR_U32(ctx, 31, 0x215324u);
    ctx->pc = 0x2153B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2153B8u, 0x21531Cu, 0x215324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215324u;
label_215324:
    // 0x215324: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x215324u;
    {
        const bool branch_taken_0x215324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215324) {
            ctx->pc = 0x215328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215324u;
            // 0x215328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21533Cu;
            goto label_21533c;
        }
    }
    ctx->pc = 0x21532Cu;
label_21532c:
    // 0x21532c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21532Cu;
    {
        const bool branch_taken_0x21532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21532Cu;
        // 0x215330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21532c) {
            ctx->pc = 0x21533Cu;
            goto label_21533c;
        }
    }
    ctx->pc = 0x215334u;
    // 0x215334: 0x0  nop
    ctx->pc = 0x215334u;
    // NOP
label_215338:
    // 0x215338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21533c:
    // 0x21533c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21533cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215340: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215344: 0x3e00008  jr          $ra
    ctx->pc = 0x215344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215344u;
        // 0x215348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21534Cu;
}

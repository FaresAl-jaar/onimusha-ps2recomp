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

// Function: sub_00137400
// Address: 0x137400 - 0x137488
void sub_00137400_0x137400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137400_0x137400");
#endif

    switch (ctx->pc) {
        case 0x137460u: goto label_137460;
        case 0x137474u: goto label_137474;
        default: break;
    }

    ctx->pc = 0x137400u;

    // 0x137400: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137404: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137408: 0x8c62aa00  lw          $v0, -0x5600($v1)
    ctx->pc = 0x137408u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40AA00u));
    // 0x13740c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13740cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137410: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137414: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137414u;
    {
        const bool branch_taken_0x137414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137414u;
        // 0x137418: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137414) {
            ctx->pc = 0x137424u;
            goto label_137424;
        }
    }
    ctx->pc = 0x13741Cu;
    // 0x13741c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13741Cu;
    {
        const bool branch_taken_0x13741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13741Cu;
        // 0x137420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13741c) {
            ctx->pc = 0x137478u;
            goto label_137478;
        }
    }
    ctx->pc = 0x137424u;
label_137424:
    // 0x137424: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x137424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x137428: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x137428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13742c: 0x24504340  addiu       $s0, $v0, 0x4340
    ctx->pc = 0x13742cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17216));
    // 0x137430: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x137430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x137434: 0xac464340  sw          $a2, 0x4340($v0)
    ctx->pc = 0x137434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B4340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4340u, _value); } while (0);
    // 0x137438: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x137438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x13743c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x13743cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x137440: 0x34a51302  ori         $a1, $a1, 0x1302
    ctx->pc = 0x137440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4866);
    // 0x137444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137448: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x137448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13744c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x13744cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137450: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x137450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137454: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x137454u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137458: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x137458u;
    SET_GPR_U32(ctx, 31, 0x137460u);
    ctx->pc = 0x13745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137458u;
    // 0x13745c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x137458u, 0x137460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137460u;
label_137460:
    // 0x137460: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137460u;
    {
        const bool branch_taken_0x137460 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x137460) {
            ctx->pc = 0x137464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137460u;
            // 0x137464: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137478u;
            goto label_137478;
        }
    }
    ctx->pc = 0x137468u;
    // 0x137468: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x13746c: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x13746Cu;
    SET_GPR_U32(ctx, 31, 0x137474u);
    ctx->pc = 0x137470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13746Cu;
    // 0x137470: 0x24844720  addiu       $a0, $a0, 0x4720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x13746Cu, 0x137474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137474u;
label_137474:
    // 0x137474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137478:
    // 0x137478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13747c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13747cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137480: 0x3e00008  jr          $ra
    ctx->pc = 0x137480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137480u;
        // 0x137484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137488u;
}

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

// Function: sub_0012C410
// Address: 0x12c410 - 0x12c510
void sub_0012C410_0x12c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C410_0x12c410");
#endif

    switch (ctx->pc) {
        case 0x12c430u: goto label_12c430;
        case 0x12c44cu: goto label_12c44c;
        case 0x12c454u: goto label_12c454;
        case 0x12c474u: goto label_12c474;
        case 0x12c478u: goto label_12c478;
        case 0x12c480u: goto label_12c480;
        case 0x12c494u: goto label_12c494;
        case 0x12c4a8u: goto label_12c4a8;
        case 0x12c4b0u: goto label_12c4b0;
        case 0x12c4bcu: goto label_12c4bc;
        case 0x12c4e4u: goto label_12c4e4;
        case 0x12c4fcu: goto label_12c4fc;
        case 0x12c508u: goto label_12c508;
        default: break;
    }

    ctx->pc = 0x12c410u;

    // 0x12c410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c418: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c424: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12c428: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12C428u;
    SET_GPR_U32(ctx, 31, 0x12C430u);
    ctx->pc = 0x12C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C428u;
    // 0x12c42c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12C428u, 0x12C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C430u;
label_12c430:
    // 0x12c430: 0x240503df  addiu       $a1, $zero, 0x3DF
    ctx->pc = 0x12c430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
    // 0x12c434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c438: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x12c438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x12c43c: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12C43Cu;
    {
        const bool branch_taken_0x12c43c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x12C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C43Cu;
        // 0x12c440: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c43c) {
            ctx->pc = 0x12C4C0u;
            goto label_12c4c0;
        }
    }
    ctx->pc = 0x12C444u;
    // 0x12c444: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x12C444u;
    SET_GPR_U32(ctx, 31, 0x12C44Cu);
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x12C444u, 0x12C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C44Cu;
label_12c44c:
    // 0x12c44c: 0xc04bc18  jal         func_12F060
    ctx->pc = 0x12C44Cu;
    SET_GPR_U32(ctx, 31, 0x12C454u);
    ctx->pc = 0x12C450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C44Cu;
    // 0x12c450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F060u, 0x12C44Cu, 0x12C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C454u;
label_12c454:
    // 0x12c454: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x12c454u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c458: 0x11787a  dsrl        $t7, $s1, 1
    ctx->pc = 0x12c458u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 1);
    // 0x12c45c: 0x322e0001  andi        $t6, $s1, 0x1
    ctx->pc = 0x12c45cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12c460: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x12c460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12c464: 0x6200023  bltz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x12C464u;
    {
        const bool branch_taken_0x12c464 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x12C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C464u;
        // 0x12c468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c464) {
            ctx->pc = 0x12C4F4u;
            goto label_12c4f4;
        }
    }
    ctx->pc = 0x12C46Cu;
    // 0x12c46c: 0xc04b0ac  jal         func_12C2B0
    ctx->pc = 0x12C46Cu;
    SET_GPR_U32(ctx, 31, 0x12C474u);
    ctx->pc = 0x12C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C2B0u, 0x12C46Cu, 0x12C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C474u;
label_12c474:
    // 0x12c474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c478:
    // 0x12c478: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x12C478u;
    SET_GPR_U32(ctx, 31, 0x12C480u);
    ctx->pc = 0x12C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C478u;
    // 0x12c47c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x12C478u, 0x12C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C480u;
label_12c480:
    // 0x12c480: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12c480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c484: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c48c: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12C48Cu;
    SET_GPR_U32(ctx, 31, 0x12C494u);
    ctx->pc = 0x12C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C48Cu;
    // 0x12c490: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12C48Cu, 0x12C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C494u;
label_12c494:
    // 0x12c494: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12c494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c498: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12C498u;
    {
        const bool branch_taken_0x12c498 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x12C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C498u;
        // 0x12c49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c498) {
            ctx->pc = 0x12C4DCu;
            goto label_12c4dc;
        }
    }
    ctx->pc = 0x12C4A0u;
    // 0x12c4a0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x12C4A0u;
    SET_GPR_U32(ctx, 31, 0x12C4A8u);
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x12C4A0u, 0x12C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4A8u;
label_12c4a8:
    // 0x12c4a8: 0xc04bc18  jal         func_12F060
    ctx->pc = 0x12C4A8u;
    SET_GPR_U32(ctx, 31, 0x12C4B0u);
    ctx->pc = 0x12C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4A8u;
    // 0x12c4ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F060u, 0x12C4A8u, 0x12C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4B0u;
label_12c4b0:
    // 0x12c4b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c4b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12c4b8: 0x222882f  dsubu       $s1, $s1, $v0
    ctx->pc = 0x12c4b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
label_12c4bc:
    // 0x12c4bc: 0x220782d  daddu       $t7, $s1, $zero
    ctx->pc = 0x12c4bcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12c4c0:
    // 0x12c4c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c4c4: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x12c4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c4c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c4cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c4ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c4d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12c4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4D4u;
        // 0x12c4d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C4DCu;
label_12c4dc:
    // 0x12c4dc: 0xc04bc18  jal         func_12F060
    ctx->pc = 0x12C4DCu;
    SET_GPR_U32(ctx, 31, 0x12C4E4u);
    ctx->pc = 0x12C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4DCu;
    // 0x12c4e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F060u, 0x12C4DCu, 0x12C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4E4u;
label_12c4e4:
    // 0x12c4e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12c4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c4e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12c4ec: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x12C4ECu;
    {
        const bool branch_taken_0x12c4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4ECu;
        // 0x12c4f0: 0x222882d  daddu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4ec) {
            ctx->pc = 0x12C4BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c4bc;
        }
    }
    ctx->pc = 0x12C4F4u;
label_12c4f4:
    // 0x12c4f4: 0xc04b0ac  jal         func_12C2B0
    ctx->pc = 0x12C4F4u;
    SET_GPR_U32(ctx, 31, 0x12C4FCu);
    ctx->pc = 0x12C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4F4u;
    // 0x12c4f8: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C2B0u, 0x12C4F4u, 0x12C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4FCu;
label_12c4fc:
    // 0x12c4fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c500: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x12C500u;
    SET_GPR_U32(ctx, 31, 0x12C508u);
    ctx->pc = 0x12C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C500u;
    // 0x12c504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x12C500u, 0x12C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C508u;
label_12c508:
    // 0x12c508: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x12C508u;
    {
        const bool branch_taken_0x12c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C508u;
        // 0x12c50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c508) {
            ctx->pc = 0x12C478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c478;
        }
    }
    ctx->pc = 0x12C510u;
}

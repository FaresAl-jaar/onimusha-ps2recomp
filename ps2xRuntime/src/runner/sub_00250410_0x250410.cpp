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

// Function: sub_00250410
// Address: 0x250410 - 0x2504ac
void sub_00250410_0x250410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250410_0x250410");
#endif

    switch (ctx->pc) {
        case 0x250410u: goto label_250410;
        case 0x250414u: goto label_250414;
        case 0x250418u: goto label_250418;
        case 0x25041cu: goto label_25041c;
        case 0x250420u: goto label_250420;
        case 0x250424u: goto label_250424;
        case 0x250428u: goto label_250428;
        case 0x25042cu: goto label_25042c;
        case 0x250430u: goto label_250430;
        case 0x250434u: goto label_250434;
        case 0x250438u: goto label_250438;
        case 0x25043cu: goto label_25043c;
        case 0x250440u: goto label_250440;
        case 0x250444u: goto label_250444;
        case 0x250448u: goto label_250448;
        case 0x25044cu: goto label_25044c;
        case 0x250450u: goto label_250450;
        case 0x250454u: goto label_250454;
        case 0x250458u: goto label_250458;
        case 0x25045cu: goto label_25045c;
        case 0x250460u: goto label_250460;
        case 0x250464u: goto label_250464;
        case 0x250468u: goto label_250468;
        case 0x25046cu: goto label_25046c;
        case 0x250470u: goto label_250470;
        case 0x250474u: goto label_250474;
        case 0x250478u: goto label_250478;
        case 0x25047cu: goto label_25047c;
        case 0x250480u: goto label_250480;
        case 0x250484u: goto label_250484;
        case 0x250488u: goto label_250488;
        case 0x25048cu: goto label_25048c;
        case 0x250490u: goto label_250490;
        case 0x250494u: goto label_250494;
        case 0x250498u: goto label_250498;
        case 0x25049cu: goto label_25049c;
        case 0x2504a0u: goto label_2504a0;
        case 0x2504a4u: goto label_2504a4;
        case 0x2504a8u: goto label_2504a8;
        default: break;
    }

    ctx->pc = 0x250410u;

label_250410:
    // 0x250410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_250414:
    // 0x250414: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_250418:
    if (ctx->pc == 0x250418u) {
        ctx->pc = 0x250418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250414u;
        // 0x250418: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25041Cu;
        goto label_25041c;
    }
    ctx->pc = 0x250414u;
    {
        const bool branch_taken_0x250414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x250418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250414u;
        // 0x250418: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250414) {
            ctx->pc = 0x250438u;
            goto label_250438;
        }
    }
    ctx->pc = 0x25041Cu;
label_25041c:
    // 0x25041c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x25041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250420:
    // 0x250420: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250424:
    // 0x250424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250428:
    // 0x250428: 0x2484ea98  addiu       $a0, $a0, -0x1568
    ctx->pc = 0x250428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961816));
label_25042c:
    // 0x25042c: 0x24a5e9c8  addiu       $a1, $a1, -0x1638
    ctx->pc = 0x25042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961608));
label_250430:
    // 0x250430: 0x8093f54  j           func_24FD50
label_250434:
    if (ctx->pc == 0x250434u) {
        ctx->pc = 0x250434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250430u;
        // 0x250434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250438u;
        goto label_250438;
    }
    ctx->pc = 0x250430u;
    ctx->pc = 0x250434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250430u;
    // 0x250434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x250438u;
label_250438:
    // 0x250438: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x250438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25043c:
    // 0x25043c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_250440:
    if (ctx->pc == 0x250440u) {
        ctx->pc = 0x250440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25043Cu;
        // 0x250440: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250444u;
        goto label_250444;
    }
    ctx->pc = 0x25043Cu;
    {
        const bool branch_taken_0x25043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25043c) {
            ctx->pc = 0x250440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25043Cu;
            // 0x250440: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250460u;
            goto label_250460;
        }
    }
    ctx->pc = 0x250444u;
label_250444:
    // 0x250444: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250448:
    // 0x250448: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_25044c:
    // 0x25044c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250450:
    // 0x250450: 0x2484eaa8  addiu       $a0, $a0, -0x1558
    ctx->pc = 0x250450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961832));
label_250454:
    // 0x250454: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x250454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
label_250458:
    // 0x250458: 0x8093f54  j           func_24FD50
label_25045c:
    if (ctx->pc == 0x25045Cu) {
        ctx->pc = 0x25045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250458u;
        // 0x25045c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250460u;
        goto label_250460;
    }
    ctx->pc = 0x250458u;
    ctx->pc = 0x25045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250458u;
    // 0x25045c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x250460u;
label_250460:
    // 0x250460: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_250464:
    if (ctx->pc == 0x250464u) {
        ctx->pc = 0x250464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250460u;
        // 0x250464: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250468u;
        goto label_250468;
    }
    ctx->pc = 0x250460u;
    {
        const bool branch_taken_0x250460 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x250464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250460u;
        // 0x250464: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250460) {
            ctx->pc = 0x2504A4u;
            goto label_2504a4;
        }
    }
    ctx->pc = 0x250468u;
label_250468:
    // 0x250468: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x250468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25046c:
    // 0x25046c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_250470:
    if (ctx->pc == 0x250470u) {
        ctx->pc = 0x250474u;
        goto label_250474;
    }
    ctx->pc = 0x25046Cu;
    {
        const bool branch_taken_0x25046c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25046c) {
            ctx->pc = 0x2504A4u;
            goto label_2504a4;
        }
    }
    ctx->pc = 0x250474u;
label_250474:
    // 0x250474: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_250478:
    if (ctx->pc == 0x250478u) {
        ctx->pc = 0x250478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250474u;
        // 0x250478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25047Cu;
        goto label_25047c;
    }
    ctx->pc = 0x250474u;
    {
        const bool branch_taken_0x250474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250474u;
        // 0x250478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250474) {
            ctx->pc = 0x2504A4u;
            goto label_2504a4;
        }
    }
    ctx->pc = 0x25047Cu;
label_25047c:
    // 0x25047c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_250480:
    if (ctx->pc == 0x250480u) {
        ctx->pc = 0x250484u;
        goto label_250484;
    }
    ctx->pc = 0x25047Cu;
    {
        const bool branch_taken_0x25047c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x25047c) {
            ctx->pc = 0x2504A4u;
            goto label_2504a4;
        }
    }
    ctx->pc = 0x250484u;
label_250484:
    // 0x250484: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x250484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_250488:
    // 0x250488: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x250488u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_25048c:
    // 0x25048c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_250490:
    if (ctx->pc == 0x250490u) {
        ctx->pc = 0x250490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25048Cu;
        // 0x250490: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250494u;
        goto label_250494;
    }
    ctx->pc = 0x25048Cu;
    {
        const bool branch_taken_0x25048c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25048Cu;
        // 0x250490: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25048c) {
            ctx->pc = 0x2504A4u;
            goto label_2504a4;
        }
    }
    ctx->pc = 0x250494u;
label_250494:
    // 0x250494: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x250494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_250498:
    // 0x250498: 0x40f809  jalr        $v0
label_25049c:
    if (ctx->pc == 0x25049Cu) {
        ctx->pc = 0x25049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250498u;
        // 0x25049c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504A0u;
        goto label_2504a0;
    }
    ctx->pc = 0x250498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2504A0u);
        ctx->pc = 0x25049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250498u;
        // 0x25049c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250498u, 0x2504A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2504A0u;
label_2504a0:
    // 0x2504a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2504a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2504a4:
    // 0x2504a4: 0x3e00008  jr          $ra
label_2504a8:
    if (ctx->pc == 0x2504A8u) {
        ctx->pc = 0x2504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504A4u;
        // 0x2504a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2504ACu;
        goto label_fallthrough_0x2504a4;
    }
    ctx->pc = 0x2504A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504A4u;
        // 0x2504a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2504A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2504a4:
    ctx->pc = 0x2504ACu;
}

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

// Function: sub_00216418
// Address: 0x216418 - 0x2164d4
void sub_00216418_0x216418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216418_0x216418");
#endif

    switch (ctx->pc) {
        case 0x216418u: goto label_216418;
        case 0x21641cu: goto label_21641c;
        case 0x216420u: goto label_216420;
        case 0x216424u: goto label_216424;
        case 0x216428u: goto label_216428;
        case 0x21642cu: goto label_21642c;
        case 0x216430u: goto label_216430;
        case 0x216434u: goto label_216434;
        case 0x216438u: goto label_216438;
        case 0x21643cu: goto label_21643c;
        case 0x216440u: goto label_216440;
        case 0x216444u: goto label_216444;
        case 0x216448u: goto label_216448;
        case 0x21644cu: goto label_21644c;
        case 0x216450u: goto label_216450;
        case 0x216454u: goto label_216454;
        case 0x216458u: goto label_216458;
        case 0x21645cu: goto label_21645c;
        case 0x216460u: goto label_216460;
        case 0x216464u: goto label_216464;
        case 0x216468u: goto label_216468;
        case 0x21646cu: goto label_21646c;
        case 0x216470u: goto label_216470;
        case 0x216474u: goto label_216474;
        case 0x216478u: goto label_216478;
        case 0x21647cu: goto label_21647c;
        case 0x216480u: goto label_216480;
        case 0x216484u: goto label_216484;
        case 0x216488u: goto label_216488;
        case 0x21648cu: goto label_21648c;
        case 0x216490u: goto label_216490;
        case 0x216494u: goto label_216494;
        case 0x216498u: goto label_216498;
        case 0x21649cu: goto label_21649c;
        case 0x2164a0u: goto label_2164a0;
        case 0x2164a4u: goto label_2164a4;
        case 0x2164a8u: goto label_2164a8;
        case 0x2164acu: goto label_2164ac;
        case 0x2164b0u: goto label_2164b0;
        case 0x2164b4u: goto label_2164b4;
        case 0x2164b8u: goto label_2164b8;
        case 0x2164bcu: goto label_2164bc;
        case 0x2164c0u: goto label_2164c0;
        case 0x2164c4u: goto label_2164c4;
        case 0x2164c8u: goto label_2164c8;
        case 0x2164ccu: goto label_2164cc;
        case 0x2164d0u: goto label_2164d0;
        default: break;
    }

    ctx->pc = 0x216418u;

label_216418:
    // 0x216418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x216418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_21641c:
    // 0x21641c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_216420:
    // 0x216420: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_216424:
    // 0x216424: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x216424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_216428:
    // 0x216428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21642c:
    // 0x21642c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_216430:
    // 0x216430: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x216430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_216434:
    // 0x216434: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x216434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_216438:
    // 0x216438: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x216438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21643c:
    // 0x21643c: 0x1000000a  b           . + 4 + (0xA << 2)
label_216440:
    if (ctx->pc == 0x216440u) {
        ctx->pc = 0x216440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21643Cu;
        // 0x216440: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216444u;
        goto label_216444;
    }
    ctx->pc = 0x21643Cu;
    {
        const bool branch_taken_0x21643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21643Cu;
        // 0x216440: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21643c) {
            ctx->pc = 0x216468u;
            goto label_216468;
        }
    }
    ctx->pc = 0x216444u;
label_216444:
    // 0x216444: 0x0  nop
    ctx->pc = 0x216444u;
    // NOP
label_216448:
    // 0x216448: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x216448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21644c:
    // 0x21644c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216450:
    // 0x216450: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x216450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_216454:
    // 0x216454: 0x40f809  jalr        $v0
label_216458:
    if (ctx->pc == 0x216458u) {
        ctx->pc = 0x216458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216454u;
        // 0x216458: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21645Cu;
        goto label_21645c;
    }
    ctx->pc = 0x216454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21645Cu);
        ctx->pc = 0x216458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216454u;
        // 0x216458: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216454u, 0x21645Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21645Cu;
label_21645c:
    // 0x21645c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21645cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216460:
    // 0x216460: 0xc085936  jal         func_2164D8
label_216464:
    if (ctx->pc == 0x216464u) {
        ctx->pc = 0x216464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216460u;
        // 0x216464: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216468u;
        goto label_216468;
    }
    ctx->pc = 0x216460u;
    SET_GPR_U32(ctx, 31, 0x216468u);
    ctx->pc = 0x216464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216460u;
    // 0x216464: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2164D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2164D8u, 0x216460u, 0x216468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216468u;
label_216468:
    // 0x216468: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x216468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21646c:
    // 0x21646c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216470:
    // 0x216470: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x216470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216474:
    // 0x216474: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x216474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_216478:
    // 0x216478: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x216478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_21647c:
    // 0x21647c: 0x60f809  jalr        $v1
label_216480:
    if (ctx->pc == 0x216480u) {
        ctx->pc = 0x216480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21647Cu;
        // 0x216480: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216484u;
        goto label_216484;
    }
    ctx->pc = 0x21647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216484u);
        ctx->pc = 0x216480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21647Cu;
        // 0x216480: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21647Cu, 0x216484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216484u;
label_216484:
    // 0x216484: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x216484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_216488:
    // 0x216488: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
label_21648c:
    if (ctx->pc == 0x21648Cu) {
        ctx->pc = 0x21648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216488u;
        // 0x21648c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216490u;
        goto label_216490;
    }
    ctx->pc = 0x216488u;
    {
        const bool branch_taken_0x216488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x216488) {
            ctx->pc = 0x21648Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216488u;
            // 0x21648c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2164A4u;
            goto label_2164a4;
        }
    }
    ctx->pc = 0x216490u;
label_216490:
    // 0x216490: 0xc07f656  jal         func_1FD958
label_216494:
    if (ctx->pc == 0x216494u) {
        ctx->pc = 0x216494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216490u;
        // 0x216494: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216498u;
        goto label_216498;
    }
    ctx->pc = 0x216490u;
    SET_GPR_U32(ctx, 31, 0x216498u);
    ctx->pc = 0x216494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216490u;
    // 0x216494: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x216490u, 0x216498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216498u;
label_216498:
    // 0x216498: 0x1052ffeb  beq         $v0, $s2, . + 4 + (-0x15 << 2)
label_21649c:
    if (ctx->pc == 0x21649Cu) {
        ctx->pc = 0x21649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216498u;
        // 0x21649c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164A0u;
        goto label_2164a0;
    }
    ctx->pc = 0x216498u;
    {
        const bool branch_taken_0x216498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x21649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216498u;
        // 0x21649c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216498) {
            ctx->pc = 0x216448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216448;
        }
    }
    ctx->pc = 0x2164A0u;
label_2164a0:
    // 0x2164a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2164a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2164a4:
    // 0x2164a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2164a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2164a8:
    // 0x2164a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2164a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2164ac:
    // 0x2164ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2164acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2164b0:
    // 0x2164b0: 0x40f809  jalr        $v0
label_2164b4:
    if (ctx->pc == 0x2164B4u) {
        ctx->pc = 0x2164B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164B0u;
        // 0x2164b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164B8u;
        goto label_2164b8;
    }
    ctx->pc = 0x2164B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2164B8u);
        ctx->pc = 0x2164B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164B0u;
        // 0x2164b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2164B0u, 0x2164B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2164B8u;
label_2164b8:
    // 0x2164b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2164b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2164bc:
    // 0x2164bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2164bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2164c0:
    // 0x2164c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2164c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2164c4:
    // 0x2164c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2164c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2164c8:
    // 0x2164c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2164c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2164cc:
    // 0x2164cc: 0x3e00008  jr          $ra
label_2164d0:
    if (ctx->pc == 0x2164D0u) {
        ctx->pc = 0x2164D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164CCu;
        // 0x2164d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164D4u;
        goto label_fallthrough_0x2164cc;
    }
    ctx->pc = 0x2164CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2164D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164CCu;
        // 0x2164d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2164CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2164cc:
    ctx->pc = 0x2164D4u;
}

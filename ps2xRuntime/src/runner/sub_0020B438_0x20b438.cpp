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

// Function: sub_0020B438
// Address: 0x20b438 - 0x20b4e4
void sub_0020B438_0x20b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B438_0x20b438");
#endif

    switch (ctx->pc) {
        case 0x20b438u: goto label_20b438;
        case 0x20b43cu: goto label_20b43c;
        case 0x20b440u: goto label_20b440;
        case 0x20b444u: goto label_20b444;
        case 0x20b448u: goto label_20b448;
        case 0x20b44cu: goto label_20b44c;
        case 0x20b450u: goto label_20b450;
        case 0x20b454u: goto label_20b454;
        case 0x20b458u: goto label_20b458;
        case 0x20b45cu: goto label_20b45c;
        case 0x20b460u: goto label_20b460;
        case 0x20b464u: goto label_20b464;
        case 0x20b468u: goto label_20b468;
        case 0x20b46cu: goto label_20b46c;
        case 0x20b470u: goto label_20b470;
        case 0x20b474u: goto label_20b474;
        case 0x20b478u: goto label_20b478;
        case 0x20b47cu: goto label_20b47c;
        case 0x20b480u: goto label_20b480;
        case 0x20b484u: goto label_20b484;
        case 0x20b488u: goto label_20b488;
        case 0x20b48cu: goto label_20b48c;
        case 0x20b490u: goto label_20b490;
        case 0x20b494u: goto label_20b494;
        case 0x20b498u: goto label_20b498;
        case 0x20b49cu: goto label_20b49c;
        case 0x20b4a0u: goto label_20b4a0;
        case 0x20b4a4u: goto label_20b4a4;
        case 0x20b4a8u: goto label_20b4a8;
        case 0x20b4acu: goto label_20b4ac;
        case 0x20b4b0u: goto label_20b4b0;
        case 0x20b4b4u: goto label_20b4b4;
        case 0x20b4b8u: goto label_20b4b8;
        case 0x20b4bcu: goto label_20b4bc;
        case 0x20b4c0u: goto label_20b4c0;
        case 0x20b4c4u: goto label_20b4c4;
        case 0x20b4c8u: goto label_20b4c8;
        case 0x20b4ccu: goto label_20b4cc;
        case 0x20b4d0u: goto label_20b4d0;
        case 0x20b4d4u: goto label_20b4d4;
        case 0x20b4d8u: goto label_20b4d8;
        case 0x20b4dcu: goto label_20b4dc;
        case 0x20b4e0u: goto label_20b4e0;
        default: break;
    }

    ctx->pc = 0x20b438u;

label_20b438:
    // 0x20b438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20b43c:
    // 0x20b43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20b440:
    // 0x20b440: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20b444:
    // 0x20b444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20b448:
    // 0x20b448: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_20b44c:
    // 0x20b44c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20b44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20b450:
    // 0x20b450: 0xc082d4c  jal         func_20B530
label_20b454:
    if (ctx->pc == 0x20B454u) {
        ctx->pc = 0x20B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B450u;
        // 0x20b454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B458u;
        goto label_20b458;
    }
    ctx->pc = 0x20B450u;
    SET_GPR_U32(ctx, 31, 0x20B458u);
    ctx->pc = 0x20B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B450u;
    // 0x20b454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20B450u, 0x20B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B458u;
label_20b458:
    // 0x20b458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b45c:
    // 0x20b45c: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
label_20b460:
    if (ctx->pc == 0x20B460u) {
        ctx->pc = 0x20B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B45Cu;
        // 0x20b460: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B464u;
        goto label_20b464;
    }
    ctx->pc = 0x20B45Cu;
    {
        const bool branch_taken_0x20b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20b45c) {
            ctx->pc = 0x20B460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B45Cu;
            // 0x20b460: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B4CCu;
            goto label_20b4cc;
        }
    }
    ctx->pc = 0x20B464u;
label_20b464:
    // 0x20b464: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x20b464u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20b468:
    // 0x20b468: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x20b468u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b46c:
    // 0x20b46c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_20b470:
    if (ctx->pc == 0x20B470u) {
        ctx->pc = 0x20B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B46Cu;
        // 0x20b470: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B474u;
        goto label_20b474;
    }
    ctx->pc = 0x20B46Cu;
    {
        const bool branch_taken_0x20b46c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B46Cu;
        // 0x20b470: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b46c) {
            ctx->pc = 0x20B4C8u;
            goto label_20b4c8;
        }
    }
    ctx->pc = 0x20B474u;
label_20b474:
    // 0x20b474: 0xc082e64  jal         func_20B990
label_20b478:
    if (ctx->pc == 0x20B478u) {
        ctx->pc = 0x20B47Cu;
        goto label_20b47c;
    }
    ctx->pc = 0x20B474u;
    SET_GPR_U32(ctx, 31, 0x20B47Cu);
    ctx->pc = 0x20B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B990u, 0x20B474u, 0x20B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B47Cu;
label_20b47c:
    // 0x20b47c: 0xc082be6  jal         func_20AF98
label_20b480:
    if (ctx->pc == 0x20B480u) {
        ctx->pc = 0x20B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B47Cu;
        // 0x20b480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B484u;
        goto label_20b484;
    }
    ctx->pc = 0x20B47Cu;
    SET_GPR_U32(ctx, 31, 0x20B484u);
    ctx->pc = 0x20B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B47Cu;
    // 0x20b480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AF98u, 0x20B47Cu, 0x20B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B484u;
label_20b484:
    // 0x20b484: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20b484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_20b488:
    // 0x20b488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20b488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b48c:
    // 0x20b48c: 0xc082bbe  jal         func_20AEF8
label_20b490:
    if (ctx->pc == 0x20B490u) {
        ctx->pc = 0x20B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B48Cu;
        // 0x20b490: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B494u;
        goto label_20b494;
    }
    ctx->pc = 0x20B48Cu;
    SET_GPR_U32(ctx, 31, 0x20B494u);
    ctx->pc = 0x20B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B48Cu;
    // 0x20b490: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AEF8u, 0x20B48Cu, 0x20B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B494u;
label_20b494:
    // 0x20b494: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20b494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20b498:
    // 0x20b498: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20b49c:
    // 0x20b49c: 0x40f809  jalr        $v0
label_20b4a0:
    if (ctx->pc == 0x20B4A0u) {
        ctx->pc = 0x20B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B49Cu;
        // 0x20b4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4A4u;
        goto label_20b4a4;
    }
    ctx->pc = 0x20B49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B4A4u);
        ctx->pc = 0x20B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B49Cu;
        // 0x20b4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B49Cu, 0x20B4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B4A4u;
label_20b4a4:
    // 0x20b4a4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x20b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_20b4a8:
    // 0x20b4a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b4ac:
    // 0x20b4ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20b4acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20b4b0:
    // 0x20b4b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b4b4:
    // 0x20b4b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b4b8:
    // 0x20b4b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b4b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b4bc:
    // 0x20b4bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20b4c0:
    // 0x20b4c0: 0x8082b72  j           func_20ADC8
label_20b4c4:
    if (ctx->pc == 0x20B4C4u) {
        ctx->pc = 0x20B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4C0u;
        // 0x20b4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4C8u;
        goto label_20b4c8;
    }
    ctx->pc = 0x20B4C0u;
    ctx->pc = 0x20B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B4C0u;
    // 0x20b4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ADC8u;
    sub_0020ADC8_0x20adc8(rdram, ctx, runtime); return;
    ctx->pc = 0x20B4C8u;
label_20b4c8:
    // 0x20b4c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b4cc:
    // 0x20b4cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b4d0:
    // 0x20b4d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b4d4:
    // 0x20b4d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20b4d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20b4d8:
    // 0x20b4d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20b4dc:
    // 0x20b4dc: 0x3e00008  jr          $ra
label_20b4e0:
    if (ctx->pc == 0x20B4E0u) {
        ctx->pc = 0x20B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4DCu;
        // 0x20b4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B4E4u;
        goto label_fallthrough_0x20b4dc;
    }
    ctx->pc = 0x20B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4DCu;
        // 0x20b4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b4dc:
    ctx->pc = 0x20B4E4u;
}

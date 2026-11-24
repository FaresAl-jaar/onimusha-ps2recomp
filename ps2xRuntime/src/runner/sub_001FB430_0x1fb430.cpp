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

// Function: sub_001FB430
// Address: 0x1fb430 - 0x1fb4d8
void sub_001FB430_0x1fb430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB430_0x1fb430");
#endif

    switch (ctx->pc) {
        case 0x1fb430u: goto label_1fb430;
        case 0x1fb434u: goto label_1fb434;
        case 0x1fb438u: goto label_1fb438;
        case 0x1fb43cu: goto label_1fb43c;
        case 0x1fb440u: goto label_1fb440;
        case 0x1fb444u: goto label_1fb444;
        case 0x1fb448u: goto label_1fb448;
        case 0x1fb44cu: goto label_1fb44c;
        case 0x1fb450u: goto label_1fb450;
        case 0x1fb454u: goto label_1fb454;
        case 0x1fb458u: goto label_1fb458;
        case 0x1fb45cu: goto label_1fb45c;
        case 0x1fb460u: goto label_1fb460;
        case 0x1fb464u: goto label_1fb464;
        case 0x1fb468u: goto label_1fb468;
        case 0x1fb46cu: goto label_1fb46c;
        case 0x1fb470u: goto label_1fb470;
        case 0x1fb474u: goto label_1fb474;
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb47cu: goto label_1fb47c;
        case 0x1fb480u: goto label_1fb480;
        case 0x1fb484u: goto label_1fb484;
        case 0x1fb488u: goto label_1fb488;
        case 0x1fb48cu: goto label_1fb48c;
        case 0x1fb490u: goto label_1fb490;
        case 0x1fb494u: goto label_1fb494;
        case 0x1fb498u: goto label_1fb498;
        case 0x1fb49cu: goto label_1fb49c;
        case 0x1fb4a0u: goto label_1fb4a0;
        case 0x1fb4a4u: goto label_1fb4a4;
        case 0x1fb4a8u: goto label_1fb4a8;
        case 0x1fb4acu: goto label_1fb4ac;
        case 0x1fb4b0u: goto label_1fb4b0;
        case 0x1fb4b4u: goto label_1fb4b4;
        case 0x1fb4b8u: goto label_1fb4b8;
        case 0x1fb4bcu: goto label_1fb4bc;
        case 0x1fb4c0u: goto label_1fb4c0;
        case 0x1fb4c4u: goto label_1fb4c4;
        case 0x1fb4c8u: goto label_1fb4c8;
        case 0x1fb4ccu: goto label_1fb4cc;
        case 0x1fb4d0u: goto label_1fb4d0;
        case 0x1fb4d4u: goto label_1fb4d4;
        default: break;
    }

    ctx->pc = 0x1fb430u;

label_1fb430:
    // 0x1fb430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fb434:
    // 0x1fb434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fb438:
    // 0x1fb438: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1fb438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fb43c:
    // 0x1fb43c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fb440:
    // 0x1fb440: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1fb440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fb444:
    // 0x1fb444: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fb448:
    // 0x1fb448: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fb448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fb44c:
    // 0x1fb44c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fb44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1fb450:
    // 0x1fb450: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fb450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb454:
    // 0x1fb454: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fb454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1fb458:
    // 0x1fb458: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fb458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fb45c:
    // 0x1fb45c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fb45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1fb460:
    // 0x1fb460: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fb460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1fb464:
    // 0x1fb464: 0xc07f5d0  jal         func_1FD740
label_1fb468:
    if (ctx->pc == 0x1FB468u) {
        ctx->pc = 0x1FB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB464u;
        // 0x1fb468: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB46Cu;
        goto label_1fb46c;
    }
    ctx->pc = 0x1FB464u;
    SET_GPR_U32(ctx, 31, 0x1FB46Cu);
    ctx->pc = 0x1FB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB464u;
    // 0x1fb468: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FB464u, 0x1FB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB46Cu;
label_1fb46c:
    // 0x1fb46c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fb46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb470:
    // 0x1fb470: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1fb470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
label_1fb474:
    // 0x1fb474: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fb474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb478:
    // 0x1fb478: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fb478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb47c:
    // 0x1fb47c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1fb47cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fb480:
    // 0x1fb480: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fb484:
    if (ctx->pc == 0x1FB484u) {
        ctx->pc = 0x1FB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB480u;
        // 0x1fb484: 0x34a50301  ori         $a1, $a1, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)769);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB488u;
        goto label_1fb488;
    }
    ctx->pc = 0x1FB480u;
    {
        const bool branch_taken_0x1fb480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB480u;
        // 0x1fb484: 0x34a50301  ori         $a1, $a1, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb480) {
            ctx->pc = 0x1FB4A8u;
            goto label_1fb4a8;
        }
    }
    ctx->pc = 0x1FB488u;
label_1fb488:
    // 0x1fb488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb48c:
    // 0x1fb48c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fb490:
    // 0x1fb490: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb494:
    // 0x1fb494: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fb494u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fb498:
    // 0x1fb498: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fb498u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb49c:
    // 0x1fb49c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fb49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1fb4a0:
    // 0x1fb4a0: 0x807f55c  j           func_1FD570
label_1fb4a4:
    if (ctx->pc == 0x1FB4A4u) {
        ctx->pc = 0x1FB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4A0u;
        // 0x1fb4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4A8u;
        goto label_1fb4a8;
    }
    ctx->pc = 0x1FB4A0u;
    ctx->pc = 0x1FB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB4A0u;
    // 0x1fb4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD570u;
    sub_001FD570_0x1fd570(rdram, ctx, runtime); return;
    ctx->pc = 0x1FB4A8u;
label_1fb4a8:
    // 0x1fb4a8: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x1fb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_1fb4ac:
    // 0x1fb4ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fb4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4b0:
    // 0x1fb4b0: 0x40f809  jalr        $v0
label_1fb4b4:
    if (ctx->pc == 0x1FB4B4u) {
        ctx->pc = 0x1FB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4B0u;
        // 0x1fb4b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4B8u;
        goto label_1fb4b8;
    }
    ctx->pc = 0x1FB4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB4B8u);
        ctx->pc = 0x1FB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4B0u;
        // 0x1fb4b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB4B0u, 0x1FB4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB4B8u;
label_1fb4b8:
    // 0x1fb4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb4bc:
    // 0x1fb4bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fb4c0:
    // 0x1fb4c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb4c4:
    // 0x1fb4c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fb4c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fb4c8:
    // 0x1fb4c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fb4c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb4cc:
    // 0x1fb4cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fb4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1fb4d0:
    // 0x1fb4d0: 0x3e00008  jr          $ra
label_1fb4d4:
    if (ctx->pc == 0x1FB4D4u) {
        ctx->pc = 0x1FB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4D0u;
        // 0x1fb4d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4D8u;
        goto label_fallthrough_0x1fb4d0;
    }
    ctx->pc = 0x1FB4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4D0u;
        // 0x1fb4d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fb4d0:
    ctx->pc = 0x1FB4D8u;
}
